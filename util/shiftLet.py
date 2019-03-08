#!/usr/bin/env python3

phrase = "mesfh1}Hr4r_l_a{_4f__cEc_4dks13c+"
prev_id = 0
deciphered = ""
call = 0
s_position = 7
#You have to take of the chars that already were add
#in the new array (decoded phrase)
#pos_keeper = []

def shift(prev_id):

	global call
	global s_position


	if call == 3:
		s_position = s_position - 1
		call = 0
	else:
		call = call + 1

	if prev_id + s_position < 33:
		prev_id = prev_id + s_position
	else:
		prev_id = (prev_id + 7) - len(phrase)
		print(" : " + str(prev_id))


	return prev_id

for idx, val in enumerate(phrase):

	deciphered = deciphered + phrase[prev_id]
	prev_id = shift(prev_id)

print(deciphered)

#I didn't achieve that one... I guess it's something like that:
#mHacker{Ess4__r3h__f4c1l_f4c1l_d+}
