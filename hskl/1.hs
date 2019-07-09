import System.IO

result :: Integer -> Integer
result n = get3 m3 + get5 m5
    where
        m3 = toInteger ((n-1) `div` 3)
        m5 = toInteger ((n-1) `div` 5)
        get3 n = sum $ map (*3) [1..n]
	get5 n = sum $ map (*5) $ filter (\x -> x `mod` 3 /= 0) [1..n]

main = do
    
    n <- readLn
    print $ result n
