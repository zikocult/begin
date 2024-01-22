print("\n############## CADENAS DE TEXTO #################\n")

cadena = "Ejemplo!"
print("Imprimiendo el contenido de la variable en su totalidad -->", cadena, "\n")

print("También podemos acceder a las diferentes partes de la cadena")
print("Como si fuera un array var[x] o un puntero i* avanzando posiciones")
# Dos formes de fer el FOR
# for i in range(0, len(cadena)):
#     print(cadena[i], end=" ")
# El end es per a que no faci un salt de linea
for i in cadena:
    print(i, end=" ")

print("\n\nPara su acceso de atrás adelante, usamos indices negativos")
print("La última posición se marca como -1 y la primera es -len(var)")
for i in range(-1, (-len(cadena)) - 1, -1):
    print(cadena[i], end=" ")

print("\n\nPython ofrece la posibilidad de acceso a los carácteres sin bucles")
print("Cadena[0:2] --> ", cadena[0:2])
print("Cadena[2:5] --> ", cadena[2:5])
print("Cadena[5:8] --> ", cadena[5:8])
print("Cadena[:5] --> ", cadena[:5])
print("Cadena[5:] --> ", cadena[5:])
print("Cadena[:-2] --> ", cadena[:5])
print("Cadena[-2:] --> ", cadena[5:])
print("Cadena[0:5] + cadena[5:8] --> ", cadena[0:5] + cadena[5:8])
print("Cadena[:5] + cadena[5:] --> ", cadena[:5] + cadena[5:])
print("Cadena[5:] + cadena[:5] --> ", cadena[5:] + cadena[:5])
print("Si nos pasamos no pasa nada cadena[5:300] --> ", cadena[5:300])

print("\nNo podemos modificar una parte, para eso debemos volver a crear la variable")
print("Podríamos hacerlo con cadena = A + cadena[1:3] + cadena [4:7]")
cadena = "A" + cadena[1:3] + cadena[4:7]
print(
    "Dando como resultado que eliminamos la posicion 8, 4 y cambiamos la 0 --> ", cadena
)

print("\nCambio de linea con \\n y tabulacion con \\t")
print("\nVamos a ver las diferentes tipos de colecciones\n")
print("\t * Listas\n\t * Tuplas\n\t * Diccionarios \n")

print("################## LISTAS #####################\n")

lista = ["Hola", "Mundo", "!"]
cuadrados = [1, 4, 9, 16, 25, 36]

print("* Las listas se delimitan con [] -->", lista)
print("* Con len(lista), podemos obtener el número de items =", len(lista))

print("* Accedemos a los items con lista[x] inciando con el 0")
for i in range(0, len(lista)):
    print("Posición", i, " ", lista[i])

listanueva = ["patata", "melocoton", "tomate"]
listafinal = lista + listanueva
print("\n* Las listas se pueden sumar")
print("\t- listafinal = lista + listanueva")
print("\t-", lista, "+", listanueva, "=", listafinal)

print("\nVamos a practicar el acceso mediante esta lista: ")
print("\t* ", cuadrados)
print("\t* [-3:]", cuadrados[-3:0])
print("\t* cuadrados + [49, 64, 81, 100] = ", cuadrados + [49, 64, 81, 100])
cuadrados[3] = 100
print("\t* Sustitución cuadrados[3] = 100", cuadrados)
cuadrados[3] = 16
cuadrados.append(16)
print("\t* Añadimos un valor al final cuadrados.append(16)", cuadrados)
cuadrados.remove(16)
print("\t* Podemos eliminar el primer valor con cuadrados.remove(16)", cuadrados)
cuadrados.pop(2)
print("\t* Con pop eliminamos una posición cuadrados.pop(2)", cuadrados)
del cuadrados[2]
print("\t* La funcion del elimina la posicion del cuadrados[2]", cuadrados)

letras = ["a", "b", "c"]
numeros = [1, 2, 3]
nido = [letras, numeros]
print("\n Podemos anidar listas")
print("\t* letras = ", letras)
print("\t* numeros = ", numeros)
print("\t* anidado = ", nido)
print("\t* Accedemos a los elementos de nido como si fuera una matriz")
print("\t\t- nido[0][1] = ", nido[0][1])
print("\t\t- nido[1][1] = ", nido[1][1])
print("\t\t- nido[0] = ", nido[0])

print("\n############## TUPLAS #################\n")
print("Las tuplas son listas, pero se definen entre () y NO son modificables")
tupla = (1, 2, 3, 4, 5)
print("Sólo podemos acceder al contenido como hemos hecho anteriormente")
print("\t* Tupla ejemplo --> ", tupla)
print("\t* tupla[3:] --> ", tupla[3:])
print("\t* tupla[2:4] --> ", tupla[1:4])
print("\t* opción len --> ", len(tupla))

print("\n############## DICCIONARIOS #################\n")
print("Los diccionarios son colecciones de clave y valor asociado")
print("Se definen mediante {}")
meses = {
    "Enero": "January",
    "Febrero": "Frebruary",
    "Marzo": "March",
    "Abril": "April",
    "Mayo": "May",
    "Junio": "June",
}
print("Si accedemos a meses[Enero] (entre comillas el valor), mostrará su par", meses["Enero"])
print("Si accedemos a meses[Marzo], mostrará su par", meses["Marzo"])

