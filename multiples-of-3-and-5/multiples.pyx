def multiples(x):
	cdef int n = 0
	for i in range(1,x):
		a = (i%3 == 0)
		b = (i%5 == 0)
		if a or b:
			n+=i
	return n