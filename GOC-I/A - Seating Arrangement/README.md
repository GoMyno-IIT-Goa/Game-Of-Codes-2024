
# Seating Arrangement Solution

To maximize the number of students seated such that no two students are adjacent horizontally or vertically, we use the following logic:

### Case Analysis
1. **If `n` (rows) is even and `m` (columns) is odd:**
   ```cpp
   max_students = (n / 2) * ceil(m / 2.0) + (n / 2) * (m / 2);
   ```

2. **If `n` is even and `m` is even:**
   ```cpp
   max_students = (n / 2) * (m / 2) + (n / 2) * (m / 2);
   ```

3. **If `n` is odd and `m` is even:**
   ```cpp
   max_students = ceil(n / 2.0) * (m / 2) + (n / 2) * (m / 2);
   ```

4. **If `n` is odd and `m` is odd:**
   ```cpp
   max_students = ceil(n / 2.0) * ceil(m / 2.0) + (n / 2) * (m / 2);
   ```

### General Formula
Combining all these cases, the formula can be simplified to:
```cpp
max_students = ceil((n * m) / 2.0);
```

### Implementation
To determine if the given number of students (`x`) can be accommodated:
1. Calculate `max_students` using the above formula.
2. Compare `max_students` with `x`.
3. Print `Yes` if `x <= max_students`, otherwise print `No`.

--- 
