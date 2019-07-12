res 1 x = x
res n x = if n `mod` x == 0 then res (n `div` x) x else res n (x + 1)

main = do
 print $ res 600851475143 2
