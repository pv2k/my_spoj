while 1:
	try:
		n=int(raw_input())
		if n==1:
			res=1
		elif n==0:
			res=0
		else:
			res = n+(n-2)
		print res
	except EOFError:
		break