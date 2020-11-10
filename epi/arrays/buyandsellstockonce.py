''' 
Idea is to keep track of min price and max profit.
At each point calculate what the profit would be 
if you were to sell at that point and compare to 
the max profit.
'''
def buy_and_sell_stock(prices):
	min_so_far, max_profit = float('inf'), 0.0
	for price in prices:
		min_so_far = min(price, min_so_far)
		current_profit = price - min_so_far
		max_profit = max(max_profit, current_profit)
	return max_profit
