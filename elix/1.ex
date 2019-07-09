defmodule First do
  {n, _} = Integer.parse IO.gets("")
  n = n - 1
  m = div n, 3
  m2 = div n, 5
  sum = Enum.sum(Enum.map(1..m, fn x -> x * 3 end)) + Enum.sum(Enum.map(Enum.filter(1..m2, fn x -> (rem x, 3) !== 0 end), fn x -> x * 5 end))
  IO.puts(sum)
end
