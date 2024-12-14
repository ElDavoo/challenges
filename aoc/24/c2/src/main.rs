// Seems easy?
// We need to understand the direction with the first pair of numbers
// And then check the differences
use std::fs;

// So doing part 1 in an efficient way backfired xD
// We now have to rewrite to use the naive approach of mapping
// to a function
fn main_part2() {
    let input = fs::read_to_string("input").unwrap();
    let mut count = 0;
    input
        .lines()
        .map(|line| {
            line.split_whitespace()
                .map(|nstr: &str| nstr.parse::<u32>().unwrap() as i32)
                .collect::<Vec<i32>>()
        })
        .for_each(|elem| -> () {
            for a in 0..elem.len(){
                let mut elem2 = elem.clone();
                elem2.remove(a);
                if try_filter(elem2) {count+=1; return}
            }
        });
    println!("{}",count);

}

// Returns the position of the element to delete
// (the first that does not match)
fn try_filter(line: Vec<i32>) -> bool {
    let mut descending: Option<bool> = None;
    let mut last: Option<i32> = None;
    for a in 0..line.len() {
        if !last.is_none() {
            // Determine direction if not already determined
            if descending.is_none() {
                let bah = last.unwrap().wrapping_sub(line[a]);
                descending = Option::from(bah > 0);
            }
            let k: i32 = if descending.unwrap() { 1 } else { -1 };
            let distance = k * (last.unwrap() - line[a]);
            match distance {
                1..=3 => {} //do nothing
                _ => return false,
            }
        }

        last = Option::from(line[a] );
    }
    true
}

fn main_part1() {
    let input = fs::read_to_string("input").unwrap();
    println!(
        "{}",
        input
            .lines()
            .filter(|line: &&str| -> bool {
                let mut descending: Option<bool> = None;
                let mut last: Option<i32> = None;
                let mut jolly = true;
                for str in line.split_whitespace() {
                    let a: i32 = str.parse::<u32>().unwrap() as i32;
                    
                    if !last.is_none() {
                        // Determine direction if not already determined
                        if descending.is_none() {
                            let bah = last.unwrap().wrapping_sub(a);
                            descending = Option::from(bah > 0);
                        }
                        let k: i32 = if descending.unwrap() { 1 } else { -1 };
                        let distance = k * (last.unwrap() - a);
                        match distance {
                            1..=3 => {}
                            _ => return false,
                            // Fun fact: you might be tempted to solve part 2 in this way:
                            //_ => if jolly {jolly = false} else {return false}
                            // you will get the correct solution minus one!
                        }
                    }

                    last = Option::from(a);
                }
                true
            })
            .count()
    );
}

fn main() {
    main_part1();
    main_part2();
}
