fn main() {
  let mut n:i64 = 600851475143;
  let mut b:i64 = 2;

  while (n > 1) {
    if (n % b == 0) {
      n = n / b;
    } else {
      b = b + 1;
    }
  }

  println!("{}", b);
}
