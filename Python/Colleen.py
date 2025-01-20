"""
	this is a fixed-point program: its output is identical to its source code
"""

def say(s: str) -> None:
	print(s.format(lf=chr(10), ht=chr(9), quote=chr(39), format=s))

def main():
	s = '"""{lf}{ht}this is a fixed-point program: its output is identical to its source code{lf}"""{lf}{lf}def say(s: str) -> None:{lf}{ht}print(s.format(lf=chr(10), ht=chr(9), quote=chr(39), format=s)){lf}{lf}def main():{lf}{ht}s = {quote}{format}{quote}{lf}{ht}"""{lf}{ht}{ht}above is a string containing the source code{lf}{ht}"""{lf}{lf}{ht}say(s){lf}{lf}if __name__ == "__main__":{lf}{ht}main()'
	"""
		above is a string containing the source code
	"""

	say(s)

if __name__ == "__main__":
	main()
