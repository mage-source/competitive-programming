# Gas Station

## Intuition
We can follow a greedy approach to this algorithm in regards to where we start.
If we can reach a location from a previous location, there is no reason to start 
the car at the current location. The reason is that reaching the current location
implies that we have at least $0$ units of gas remaining. Thus, we will always be
able to travel **at least** the distance compared to if we just started at the 
current location. Additionally, even if there is $0$ units of gas remaining, we
would be further along the circuit if we consider a previous location as the start.

The only scenario in which we cannot go any further is if the cost of the trip 
is greater than the amount of gas we have available. Thus, as long as we have a 
non-negative amount of gas, we should keep greedily going along the current path.

## High-Level Algorithm
For every position $i$, we compute `gas[i] - cost[i]` to check whether we have 
enough gas left. If this value becomes negative, we know our current start location
is impossible, so we simply move our candidate start location to the next position
$i + 1$. Otherwise, we continue processing the circuit. We maintain a `cur_location`
and a `start_candidate` pointer. When the distance between these two pointers becomes
the length of the circuit, we know we have a solution. We also utilize the `%` 
operator to express the cyclic nature of the circuit.

## Analysis
We make at most two passes over the gas stations so our time complexity is $O(N)$.

We use a constant number of variables to keep track of everything so our space
complexity is $O(1)$.
