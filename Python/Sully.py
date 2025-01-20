import os

FORMAT = 'import os{lf}{lf}FORMAT = {quote}{format}{quote}{lf}{lf}def main():{lf}{ht}i = {i}{lf}{ht}if os.path.basename(__file__) != "Sully.py":{lf}{ht}{ht}i -= 1{lf}{ht}if i < 0:{lf}{ht}{ht}return{lf}{lf}{ht}try:{lf}{ht}{ht}with open("Sully_{curlyo}{curlyc}.py".format(i), "w+") as f:{lf}{ht}{ht}{ht}print(FORMAT.format(lf=chr(10), ht=chr(9), quote=chr(39), curlyo=chr(123), curlyc=chr(125), format=FORMAT, i=i), file=f){lf}{ht}except OSError as error:{lf}{ht}{ht}print(error){lf}{ht}finally:{lf}{ht}{ht}os.system("python3 ./Sully_{curlyo}{curlyc}.py".format(i)){lf}{lf}if __name__ == "__main__":{lf}{ht}main()'

def main():
	i = 5
	if os.path.basename(__file__) != "Sully.py":
		i -= 1
	if i < 0:
		return

	try:
		with open("Sully_{}.py".format(i), "w+") as f:
			print(FORMAT.format(lf=chr(10), ht=chr(9), quote=chr(39), curlyo=chr(123), curlyc=chr(125), format=FORMAT, i=i), file=f)
	except OSError as error:
		print(error)
	finally:
		os.system("python3 ./Sully_{}.py".format(i))

if __name__ == "__main__":
	main()
