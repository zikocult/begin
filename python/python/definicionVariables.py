# Qui no ha començat mai amb un Hola mundo, funciona sense problemes com sempre
print("Hola mundo")

# Comencem a jugar amb els IF, simple as hell
# Fem-ho amb variables que definiré jo a ma, just després explorarem un xic més el mon de les variables
A = 5
B = 3
if (
    A > B
):  # Els comentaris es poden posar on et sembli correcte, tot a la dreta de # serà ignorat
    print("5 es mayor que 3 evidentemente")

# Opcions elif o else afegides com a probes just a sota, elif es per a tornar a fer una nova condició i else en qualsevol cas, les deixo comentades doncs es solapen entre elles

if A < B:
    print("Esto no se va a imprimir")
else:
    print("Toma jeroma")
# elif A > B:
#    print ('Proba correcte')

# Ara si comencem amb les diferents definicions de variables i les seves maneres de fer-ho
# Exemple bàsic de definició d'un numeral (integer en aquest cas) i un String (entre '', es poden usar "" indiferentment)
x = 8
y = "Chanchito feliz"
z = "Chancho entre comillas"
print(
    x, ",", y, ",", z
)  # He posat les , per a veure una mica com intercalar diferents maneres d'escriure
print(x, y, z)  # Mode bàsic

# Les definicios van cap aball, no puc posar la següent variable a lineas superiors
email = "chanchito@feliz.com"  # Els noms de les variables poden ser complexes i completament arbitraris
print(email)

mi_var = "chanchito"
mivar23 = "Chancho con número 23"  # No es poden usar numerals a les primeres posicions de la variable, ni espais, ni guions
print(mi_var, mivar23)

# Definició múltiples variables en una sola linea
a, b, c = (
    "Lala",
    "Lele",
    "Lili",
)  # Aquí també mostro com les variables son Keysensitive, recordem que tenim les variable A i B definides mes amunt pel primer exemple dels IF
print(a, b, c)

# Conquetenar diferents variables, mostrarà sense espais, l'espai l'he col·locat a la definició de la variable 'inicio'
inicio = "Hola "
final = "mundo"
print(inicio + final)
print(
    inicio, final
)  # D'aquesta manera, posa espais de forma automàtica, no adjuntant les paraules, l'espai de la variable, ens posarà el segon espai

# Definició de numerals
entero = 20  # Integer
conDecimales = 20.3  # Float
complejo = 20j  # Es defineixen agregant una j al final de la definició
print(entero, conDecimales, complejo)
print(
    entero + conDecimales
)  # Els operadors en aquest cas faran la suma es poden fer la resta de operacions *, -, /, +

# Creació, definició i manipulació de dades en llistes

lista = [1, 2, 3]
lista2 = lista.copy()  # copia la llista anterior
print(lista)
lista.append(4)  # Afegeix un element nou
print(lista)
lista.clear()  # Borra TOT el contingut de la llista
print(lista, lista2)

# Diferents opcions a fer amb llista
lista = lista2.copy()
lista2.append(4)
lista2.append(4)
lista2.append(4)
print(
    lista, lista2, lista2.count(4)
)  # Buscarà i contarà els valors = 4 dins de la llista, tornant un 3 com a resultat
print(
    len(lista), len(lista2)
)  # Contarà la quantitat d'elements de la llista, es una opció de print
# Len també es pot usar per assignar valors a variables
largolista = len(lista)
largolista2 = len(lista2)
print(largolista, largolista2)

# Accedir als elements de la llista
lista.clear
lista = ["Hola", "Mundo", "Chanchito Feliz"]
print(
    lista[0], lista[1]
)  # Accedim al primer element de la llista (el primer element es indexat sempre com a 0) i al segon formant el Hola Mundo

# Eliminar elements d'una llista
lista.pop()  # Elimina l'últim element de la llista
print(lista)
lista.append("Chanchito feliz 2")
print(lista)
lista.remove("Mundo")
print(lista)

# Ordenar i donar la volta a la llista
lista.append(4)
lista.reverse()  # Donar la volta a la llista
print(lista)
lista.remove(4)
lista.append("Mundo")
lista.sort()  # No es podrà usar si no fem que tots els elements siguin del mismo tipo, per això he eliminat 4 just a la linea de dalt
print(lista)
print(lista[1], lista[2])

# Les tuplas son llistes no modificables
tupla = (
    "Hola",
    "Mundo",
    "somos",
    "tupla",
)  # La diferència en la definició es l'ús de () en ves del [] usat per definir llistes
print(
    tupla, tupla.count("Hola"), tupla.index("Hola"), tupla[1]
)  # No tenim masses mes opcions que les incloses a dins del print

# Per a modificar, hi ha que convertir la tupla en llista, afegiré un nou valor a la llista
listadetupla = list(tupla)
listadetupla.append("Chanchito")
print(listadetupla)

# Treballar amb rangs (Ranges)
rango = range(6)  # Longitud del rang
print(rango)

# Diccionaris, molt similars a les llistes, però no usa index
diccionario = {  # La definició s'ha de fer si o si amb "", no hi ha opció a ''
    "nombre": "Chanchito",  # No olvidar la coma si vols afegir mes elements al diccionari
    "raza": "persa",
    "edad": 5,
}
print(diccionario)
print(diccionario["nombre"])  # El index ja l'hem definit nosaltres i seria la primera
print(diccionario.get("raza"))
diccionario[
    "nombre"
] = "Fluffy"  # Modifiquem la propietat del diccionari nombre per un nou valor
print(diccionario["nombre"])
print(diccionario)
print(len(diccionario))  # Contarà la quantitat de propietats del diccionari
diccionario["ronronea"] = "Yes"  # Afegim una nova propietat
print(diccionario, len(diccionario))
# Son 3 mètodes difernts, així que en deixo comentats dos
# diccionario.pop('ronronea')       # Elimino la propietat de Ronronea
# diccionario.popitem()             # Elimina la última opció que s'ha posat
del diccionario["ronronea"]  # Una altre manera de elminar elements
print(diccionario, len(diccionario))
# Dos mètodes diferents per a copiar un diccionari
copiagatito = diccionario.copy()
copiagatito2 = dict(diccionario)
copiagatito.pop("raza")
del copiagatito2["nombre"]
diccionario.clear()  # elimina totalment tots els elements de diccionario
print(copiagatito, copiagatito2, diccionario)

# Diccionarios anidados, dos maneres de definir, creant variables diccionari i incluir-les o definir-les directament al diccionari general, mostro les dos maneres.
fluffy = {"nombre": "Fluffy", "edad": 4}

gatitos = {
    "Fluffy": fluffy,  # Definició per variable
    "Mamba": {"nombre": "Black Mamba", "edad": 12},  # Definició directe
}
print(gatitos)

# Ara usarem el constructor de diccionaris dict
perritos = dict(nombre="Chanchito feliz", edad=6)
print(perritos)

# Booleanos, sólo puede contener true or false
verdadero = True
falso = False
print(verdadero, falso)
