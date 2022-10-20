""" Multiplicar dos números sin usar el símbolo de multiplicación """

a = 4
b = 8
resultado = 0

for x in range(a):
    resultado += b

print(resultado)

""" Ingresar nombre y apellido e imprimirlo al reves """

nombre = 'Nicolas'
apellido = 'Feliz'

concatenacion = nombre + ' ' + apellido

print(concatenacion[::-1])

""" Escribir una función que encuentre el elemento menor de una lista """

lista = [1, 2, 5, 3, 55, -24, -13]

menor = 'init'

for x in lista:
    if menor == 'init':
        menor = x
    else:
        menor = x if x < menor else menor

print('menor', menor)

""" Escribir una función que devuelva el volumen de una esfera por su radio: 4/3 * pi * r ** 3 """

def calculaVolumen(r):
    return 4 / 3 * 3.14 * r ** 3

resultado = calculaVolumen(6)
print(resultado)

""" Escribir una función que indique si el usuario es mayor de edad """

def esMayor(usuario):
    return usuario.edad > 17

class Usuario:
    def __init__(self, edad):
        self.edad = edad

usuario = Usuario(15)
usuario2 = Usuario(21)

resultado1 = esMayor(usuario)
resultado2 = esMayor(usuario2)

print(resultado1, resultado2)

""" Escribir una función que indique si un número es par o impar"""
""" WARNING, no em funciona!!! """

def esPar(n):
    return n % 2 == 0

resultado = esPar(11)
# print(resultado)
# escribir una función que indique cuantas vocales tiene una palabra
palabra = 'ChAnchitoFeliz'
vocales = 0
for x in palabra:
    y = x.lower
    vocales += 1 if y == 'a' or y == 'e' or y == 'i' or y == 'o' or y == 'u' else 0

# print(vocales)

# escribir una aplicación que reciba una cantidad infinita de números hasta
# decir basta, luego que devuelva la suma de los números ingresados

""" Escribir una aplicación que reciba una cantidad infinita de números hasta decir basta, luego que devuelva la suma de los números ingresados"""

resultado = 0
numero = 0 # S'ha d'iniciar per a que es pugui validar en el primer while, m'ha donat error

while numero != "basta": # Això també podria ser un "while True:" doncs el faig sortir jo a dins de l'IF
    numero = input ("introduzca número, para parar y sumar, introduzca basta: " )
    if numero == "basta":
        break
    else:
        try:
            numero = int (numero)
            resultado = resultado + numero
        except:
            print ("error introducción")

print ('El resultado es igual a ', resultado)

# El professor ho fa usant una llista i sumant després amb un for, es una manera a mirar guai

# lista = []
# print('Ingrese números y para salir escriba "basta"')
# while True:
    # valor = input('Ingrese valor: ')
    # if valor == 'basta':
        # break
    # else:
        # try:
            # valor = int(valor)
            # lista.append(valor)
        # except:
            # print('Dato inválido')
            # exit()

# resultado = 0
# for x in lista:
    # resultado += x

# print(resultado)

""" Escribir una función que reciba nombre y apellido y los vaya agregando a un archivo"""

def agregaNombreAArchivo(nombre, apellido):
    c = open('nombrecompleto.txt', 'a')
    c.write(nombre + ' ' + apellido + '\n')
    c.close()

agregaNombreAArchivo('Chanchito', 'Feliz')
