def gcd(a,b):
	if b==0:
		return a
	return gcd(b,a%b)
t=int(raw_input())
for i in range(t):
	a = map(int,raw_input().strip().split(" "))
	print gcd(a[0],a[1])


