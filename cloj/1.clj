(def n (- (Integer. (read-line)) 1))
(def m (Integer. (quot n 3)))
(def m2 (Integer. (quot n 5)))
(def sum (reduce + (concat (map (fn [x] (* x 3)) (range 1 m)) (map (fn [x] (* x 5)) (filter (fn [x] (not= 0 (rem x 3))) (range 1 m2))))))
(println sum)
