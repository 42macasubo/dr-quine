FORMAT = 'FORMAT = {quote}{format}{quote}{lf}{lf}CODE = """{lf}try:{lf}{ht}with open("Grace_kid.py", "w+") as f:{lf}{ht}{ht}print(FORMAT.format(lf=chr(10), ht=chr(9), quote=chr(39), format=FORMAT), file=f){lf}except OSError as error:{lf}{ht}print(error){lf}"""{lf}{lf}MAIN = exec{lf}{lf}"""{lf}{ht}this program writes its source code in a file{lf}"""{lf}{lf}MAIN(CODE)'

CODE = """
try:
	with open("Grace_kid.py", "w+") as f:
		print(FORMAT.format(lf=chr(10), ht=chr(9), quote=chr(39), format=FORMAT), file=f)
except OSError as error:
	print(error)
"""

MAIN = exec

"""
	this program writes its source code in a file
"""

MAIN(CODE)
