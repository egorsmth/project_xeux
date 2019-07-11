fibn n = (gl ^ n - z ^ n) / sqrt 5
    where
        gl = (1 + sqrt 5) / 2
        z = (1 - sqrt 5) / 2

res = sum $ takeWhile (\x -> x < 4000000) $ map (\x -> fibn x) [3,6..]

main = do
    
    print $ res
