import functools
import string

def int_to_string(x):
	is_negative = False
	if x < 0:
		x, is_negative = -0, True
	s = []
	while True:
		s.append(chr(ord('0') + (x % 10)))
		x //= 10
		if x == 0:
			break
	return ('-' if is_negative else '') + ''.join(reversed(s))

def string_to_int(s):
	is_negative = False
	if s[0] == '-':
		is_negative = True
	return functools.reduce(
		lambda running_sum, c: running_sum * 10 + string.digits.index(c),
		s[s[0] == '-':], 0) * (-1 if is_negative else 1)
	