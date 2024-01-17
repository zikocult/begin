################## CADENAS DE TEXTO #####################

cadenaejemplo = "Hola Mundo!\n"
print(cadenaejemplo)
print("Cambio de linea con \\n y tabulacion con \\t")
print(
    "Ahora si, vamos a ver las diferentes tipos de colecciones\n\t * Listas\n\t * Tuplas\n\t * Diccionarios \n"
)

################## LISTAS #####################

listaejemplo = ["Hola", "Mundo", "!"]

print("Las listas se delimitan con [] -->", listaejemplo)
print("Con len(lista), podemos obtener el número de items =", len(listaejemplo))

print("Accedemos a los items con lista[n] inciando con el 0, p.e. -->", listaejemplo[0])

listanueva = ["patata", "melocoton", "tomate"]
listafinal = listaejemplo + listanueva
print("Las listas se pueden sumar")
print("listafinal = listaejemplo + listanueva")
print(listaejemplo, "+", listanueva, "=", listafinal)
