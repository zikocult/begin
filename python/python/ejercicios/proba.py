""" Escribir una función que reciba nombre y apellido y los vaya agregando a un archivo"""

palabro = 'ChanchitoFeliz'
vocales = 0

for x in palabro:
    y = x.lower ()
    vocales += 1 if y == 'a' or y == 'e' or y == 'i' or y == 'o' or y == 'u' else 0

print (vocales)
