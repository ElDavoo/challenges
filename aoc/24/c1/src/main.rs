// This challenge is very similar to Jemore's first challenge.
// Read n1 and put in list l1; Read n2 and put in list l2;
// Sort l1 l2; For each, calculate abs of distance and sum.
use std::fs;

fn main() {
    let mut n1: Vec<u32> = Vec::new();
    let mut n2: Vec<u32> = Vec::new();
    let mut sum:u32 = 0;

    let contents = fs::read_to_string("input").unwrap();
    let lines = contents.lines();
    for line in lines {
        let mut splitted = line.split_whitespace();
        n1.push(splitted.next().unwrap().parse().unwrap());
        n2.push(splitted.next().unwrap().parse().unwrap());

    }
    n1.sort();
    n2.sort();
    if n1.len() != n2.len() {
        panic!("not equal");
    }
    for i in 0..n1.len() {
        sum += n1[i].abs_diff(n2[i]);
    }
    println!("{}", sum);
}
