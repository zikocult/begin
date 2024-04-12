""" Multiplicar dos números sin usar el símbolo de multiplicación """

primero = input ("Inserte primer número ")
segundo = input ("Inserte segundo número ")

primero = int (primero)
segundo = int (segundo)

i = 0
multiplicación = 0

# jo ho he resolt amb el while, però estalvies una variable amb el for com ho ha fet el professor
# while i < segundo:
#     multiplicación = multiplicación + primero
#     i = i + 1

for x in range (primero):
    multiplicación += segundo

print (multiplicación)

""" Ingresar nombre y apellido e imprimirlo al reves """

nombre = input ("Inserte el nombre ")
apellido = input ("Inserte el apellido ")

concatena = nombre + ' ' + apellido
print (concatena[::-1])

""" Escribir una función que encuentre el elemento menor de una lista """

lista = [1, 2, 5, 3, 55, -24, -13]
menor = "init"

for x in lista:
     if menor == "init":
         menor = x
     else:
         if menor > x:
             menor = x
         else:
             menor = menor

print ("menor", menor)

""" Escribir una función que devuelva el volumen de una esfera por su radio: 4/3 * pi * r ** 3 """

def cuentavolumen(r):
    return 4/3 * 3.14 * r ** 3

volumen = input ("Inserte el radio ")
volumen = int (volumen)
resultado = cuentavolumen (volumen)
print (resultado)

""" Escribir una función que indique si el usuario es mayor de edad """

def mayoredad (edad):
    if edad < 17:
        print ("Eres menor de edad")
    else: 
        print ("Eres mayor de edad")

años = input ('Introduzca su edad: ')
años = int(años)
resultado = mayoredad (años)

""" Escribir una función que indique si un número es par o impar"""
""" WARNING, no em funciona!!! """

def par (numeral):
    if numeral % 2 == 0:
        print('par')
    else:
        print('impar')

test = input ('Introduzca el número a testear: ')
test = int (test)
resultado = par (test)

# escribir una función que indique cuantas vocales tiene una palabra

palabro = input ('Vamos a contar vocales, dime algo ')
vocales = 0

for x in palabro:
    y = x.lower()
    vocales += 1 if y == 'a' or y == 'e' or y == 'i' or y == 'o' or y == 'u' else 0

print (vocales)

""" Escribir una aplicación que reciba una cantidad infinita de números hasta decir basta, luego que devuelva la suma de los números ingresados"""

resultado = 0
numero = 0 # S'ha d'iniciar per a que es pugui validar en el primer while, m'ha donat error

while numero != "basta": # Això també podria ser un "while True:" doncs el faig sortir jo a dins de l'IF
    numero = input ("introduzca número. Para detener el proceso y sumar todos los números, introduzca basta: " )
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

def escribir (nombre, apellido):
    fichero = open('nombrecompleto.txt', 'a')
    fichero.write (nombre + ' ' +apellido + '\n')
    fichero.close ()

a = input ('Introduzca su nombre: ')
b = input ('Introduzca su apellido: ')
escribir (a , b)
