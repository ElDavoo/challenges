// Seems easy?
// We need to understand the direction with the first pair of numbers
// And then check the differences
use std::fs;

fn main() {
    let input = fs::read_to_string("input").unwrap();
    println!("{}", input.lines().filter(|line:&&str| -> bool {
        let mut descending:Option<bool> = None;
        let mut last:Option<i32> = None;
        for str in line.split_whitespace(){
            let a:i32 = str.parse::<u32>().unwrap() as i32;
            if !last.is_none() {
                // Determine direction if not already determined
                if descending.is_none() {
                    let bah = last.unwrap().wrapping_sub(a);
                    descending = Option::from( bah> 0);
                }
                let k:i32 = if descending.unwrap() {1} else {-1};
                let distance = k*(last.unwrap() - a);
                match distance {
                    1..=3 => {}
                    _ => return false
                }
            }
            
            last = Option::from(a);
        }
        true
    }).count());

}

