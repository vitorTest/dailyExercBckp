#!/usr/bin/env python3

#I know that there's already better functions to do it
#but I want to exercise my so fragile python skills.

#I read that comments with triple quotes are acctualy wrong...
#They're not ignored by the interpreter in the same way that '#',
#being acctualy deleted by the garbage collector, unless when they
#are describing a function.
#Triple quotes are treated as regular strings that can span multiple lines
#They are useful to write descriptions about a function.

#About passing variables between functions, when you want reference
#passage: Use return. Using global variables isn't thread-safe.

#to import from terminal: 
#import sys
#sys.path.insert(0, '/folder/to/the/file/')
#import file, or  import file as nickname
#use file.function()
#to see the methods and global variables: dir(moduleName)
#to see the method description: help(file.function)


numbers = [n for n in range(32, 127)]
chars = [chr(i) for i in range(32, 127)]
ascii_table = dict(zip(numbers, chars))

def decoder(code_raw):
	'''
		Pass a number that is acctualy the
		coded string in ascii, and it will
		(in the better of the cases), shows 
		you the message.
	'''

	coded = split_string(code_raw)
	decoded_msg = ''

	for code in coded:
		if code in ascii_table.keys():
			decoded_msg = decoded_msg + ascii_table[code]

	print(decoded_msg)

def split_string(coded):
	'''
		Gets the message (big int number), and split it
		in each code from ascii table.
	'''

	coded_msg = str(coded)
	code_number = ''
	list = []

	for c in coded_msg:

		if len(code_number) == 1 or code_number == '':
			code_number = code_number + c

		elif len(code_number) == 2:
			if int(code_number) < 32:
				code_number = code_number + c
			else:
				list.append(int(code_number))
				code_number = c
		else:
			list.append(int(code_number))
			code_number = c

	list.append(int(code_number))

	return list

if __name__ == '__main__':

	print("Write your ASCII, coded number:")
	code = input()

	decoder(code)
