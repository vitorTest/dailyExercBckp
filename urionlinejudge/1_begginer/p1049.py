#!/usr/bin/env python

dict_set = {
    'vertebrado': {
        'ave': {'carnivoro': 'aguia', 'onivoro': 'pomba'}, 
        'mamifero':{'onivoro': 'homem', 'herbivoro': 'vaca'}
    }, 
    'invertebrado':{
        'inseto': {'hematofago': 'pulga', 'herbivoro': 'lagarta'},
        'anelideo': {'hematofago': 'sanguessuga', 'onivoro': 'minhoca'}
    }
}

classe1 = input()
classe2 = input()
classe3 = input()

print(dict_set[classe1][classe2][classe3])