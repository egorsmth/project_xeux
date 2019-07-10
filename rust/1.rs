use std::io::{self, Read};

fn sum3(x: i64) -> i64 {
  return (1..=x).map(|x| x * 3).sum();
}

fn sum5(x: i64) -> i64 {
  return (1..=x).filter(|x| x % 3 != 0).map(|x| x * 5).sum();
}

fn main() {
  let mut buffer = String::new();
  io::stdin().read_line(&mut buffer).unwrap();
  let trimmed = buffer.trim();
  let n = trimmed.parse::<i64>().unwrap();

  
  println!("{}", sum3((n-1)/3) + sum5((n-1)/5));
}
