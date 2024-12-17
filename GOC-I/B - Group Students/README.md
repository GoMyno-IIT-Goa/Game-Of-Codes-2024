# B - Group Students
Given the small constraints, we can iterate over every combination of two days and check if it is feasible to assign those days to the two groups respectively.

Lets say we have two days $A$ and $B$; now we want to check if these days can be assigned or not. Let $d1$ be the number of students who can attend the lecture atleast on day $A$, $d2$ be the number of students who can attend the lecture atleast on day $B$ and $d$ be the number of students who can neither attend on $A$, nor on $B$.

Now, it is clear that if $d > 0$, this combination is not feasible. Now, considering $d == 0$, this combination of days is possible only when $d1 \geq n/2$ and $d2 \geq n/2$.