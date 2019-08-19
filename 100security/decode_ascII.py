#!/usr/bin/env python3

import tkinter as tk

def show_decoded(decoded_string):

    print("Decoded: %s" % (decoded_string))
    master.destroy()

def decode():
	raw_coded_string = code.get().replace(" ", "")
	iterator = 0
	number_encoded = ''

	for number in raw_coded_string:

		if iterator < 2:
			number_encoded = number_encoded + number
			iterator = iterator + 1

		else:
			number_encoded = number_encoded + ' ' + number
			iterator = 1

	decoded_list = number_encoded.split()
	letter_by_letter = [chr(int(x)) for x in decoded_list]
	decoded_string = ''.join([chr(int(x)) for x in decoded_list])

	print(decoded_list)
	print(letter_by_letter) #because I want it! 
	print(decoded_string)
	#show_decoded(decoded_string)


master = tk.Tk()
master.title("Decoder Furacao 2000")

tk.Label(master, 
         text="ASCII encoded: ").grid(row=0)

code = tk.Entry(master, width=40)

code.grid(row=0, column=1)

tk.Button(master, 
          text='Decode', command=decode).grid(row=3, 
                                                       column=1, 
                                                       sticky=tk.W, 
                                                       pady=4)
tk.mainloop()

