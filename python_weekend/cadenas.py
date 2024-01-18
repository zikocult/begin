print("\n############## CADENAS DE TEXTO #################\n")

cadenaejemplo = "Hola Mundo!"
print(cadenaejemplo)
print("Cambio de linea con \\n y tabulacion con \\t")
# print("\n")
print(
    "\nVamos a ver las diferentes tipos de colecciones\n\t * Listas\n\t * Tuplas\n\t * Diccionarios \n"
)

print("################## LISTAS #####################\n")

listaejemplo = ["Hola", "Mundo", "!"]

print("* Las listas se delimitan con [] -->", listaejemplo)
print("* Con len(lista), podemos obtener el número de items =", len(listaejemplo))

print("* Accedemos a los items con lista[n] inciando con el 0, p.e. -->", listaejemplo[0])

listanueva = ["patata", "melocoton", "tomate"]
listafinal = listaejemplo + listanueva
print("* Las listas se pueden sumar")
print("\t- listafinal = listaejemplo + listanueva")
print("\t-", listaejemplo, "+", listanueva, "=", listafinal)
