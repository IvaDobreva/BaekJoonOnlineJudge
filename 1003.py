

def fib(n):
	global zc, oc
	if n == 0:
		zc += 1 
		return 0
	elif n == 1:
		oc += 1
		return 1
	else:
		return fib(n-1)+fib(n-2)

l = int(input())
for i in range(0, l):
	zc = oc = 0
	n = int(input())
	fib(n)
	print(zc, oc)