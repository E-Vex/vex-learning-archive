# USNF05 - JavaScript Programming - Series 3

My solutions for Series 3 of the USNF05 JavaScript Programming course (ISSAE).

This series is about the next step after Series 1:
- `while` and `for` loops used for real computation (not just counting)
- building strings step by step (binary conversion, divisor lists, patterns)
- nested loops (one loop inside another) for grids and patterns
- `Math.random()` to generate a random number
- using `document.write()` with `<pre>` to display multi-line output
  (patterns, tables, lists) that the browser would otherwise collapse

Each exercise is a small standalone HTML page. Just open it in a browser
and it will run (it uses `prompt` / `alert`, and `document.write` for the
ones that print a grid or a pattern).

The original exercise sheet is kept in this folder for reference:
`USNF05 - Series 3.pdf`.

## Exercises

| # | Folder | Topic |
|---|--------|-------|
| 1 | exercise1_decimal_to_binary | decimal -> binary by repeated division by 2 |
| 2 | exercise2_perfect_number | sum of divisors except itself, compare to the number |
| 3 | exercise3_patterns | nested loops to draw Figure 1 (triangle) and Figure 2 (diagonal) |
| 4 | exercise4_times_tables | nested loops to print the 9x9 multiplication table |
| 5 | exercise5_guess_the_number | `Math.random()` + while loop, "it's less" / "it's more" |
| 6 | exercise6_divisors_and_prime | divisors of every number from 4 to 15, mark primes |

## Notes on the solutions

- **Exercise 1**: The trick is to prepend each remainder to the LEFT of the
  string, because the binary digits are read from the last remainder up to
  the first one.
- **Exercise 2**: We only need to test divisors from 1 to `n/2` because no
  divisor of `n` (except `n` itself) can be bigger than `n/2`. This is a
  small optimization but it makes the idea clear.
- **Exercise 3**: We need a `<pre>` block, otherwise the browser collapses
  the spaces and the patterns do not look right. Figure 2 is the same outer
  loop as Figure 1, but instead of printing `1 2 3 ... i`, we print `(i-1)`
  spaces and then the number `i` only.
- **Exercise 4**: Again a `<pre>` block. We pad each product with
  `String(x).padStart(3, " ")` so that 1-digit and 2-digit numbers keep the
  columns aligned.
- **Exercise 5**: The user can abandon by pressing Cancel on the prompt or
  by typing `q`. Non-numeric input does not count as an attempt, we just ask
  again. The number of attempts only counts valid numeric tries.
- **Exercise 6**: A number is prime if and only if it has exactly 2
  divisors: 1 and itself. So instead of a separate primality test, we just
  count the divisors we already found and check if `count == 2`.
