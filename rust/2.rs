use std::io::{self};

fn fibn(n:f64) -> f64 {
  (gl.powf(n) - z.powf(n))/5.0_f64.sqrt()
}

fn main() {
  let n:f64 = 40.0;
  const gl:f64 = (1.0 + 5.0_f64.sqrt())/2.0;

  const z:f64 = (1.0 - 5.0_f64.sqrt())/2.0;

  let mut ind:f64 = 3.0;
  let mut sum:f64 = 0.0;
  let mut cur:f64 = fibn(ind);

  while (cur < n) {
    sum += cur;
    ind += 3.0;
    cur = fibn(ind);
  }

  println!("{}", sum);
}
