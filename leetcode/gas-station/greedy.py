class Solution:
    def canCompleteCircuit(self, gas, cost):
        n = len(gas)
        cur_gas = 0
        cur_location = 0
        start_candidate = None
        
        while cur_location < n * 2:
            if start_candidate is None:
                start_candidate = cur_location
            cur_gas += gas[cur_location % n]
            cur_gas -= cost[cur_location % n]
            if cur_gas < 0:
                start_candidate = None
                cur_gas = 0
            # we have confirmed we can move the next location
            cur_location += 1
            if start_candidate is not None and cur_location - start_candidate == n:
                return start_candidate

        return -1
