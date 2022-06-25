# Eggs Drop Puzzle
This puzzle involves n eggs and a building with k floors. Now we wish to know which stories in the building are safe to drop eggs from and which will cause the eggs to break on landing.
The following are  assumptions:
- An egg that survives a fall can be used again
- A broken egg cannot be used again
- The effect of a fall is the same for all eggs
- If an egg breaks when dropped, then it would break from a higher floor.
- If an egg survives a fall then it would survive a shorter fall.
- It is not rules out that the first-floor break  eggs, nor it is ruled our that even kth floor can cause egg not to break...

Now, we need to find the minimum possible tries that we need to make in order to determine our threshold floor, considering any of the floor(or none) can be threshold floor...
