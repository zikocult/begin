# Funciones, son definicions que no s'executen si no les crides posteriorment, es defineixen i queden inerts fins a que es fa la crida


def miFuncion():
    print("Mi primera función")


miFuncion()  # Així cridem la funció anterior
miFuncion()
miFuncion()
miFuncion()  # Executarà 4 cops


def imprimeDato(argumentoUno):
    print("Mi argumento es,", argumentoUno)


imprimeDato("tonto el que lo lea")


def imprimeNombre(nombre, apellido):
    print("El nombre completo es", nombre, apellido)


imprimeNombre(
    "Chanchito", "Feliz"
)  # S'han de passar tans arguments com paràmetres, si  només en poso 1, em donarà un error


def imprimeVarios(*varios):
    print(
        "vamos a imprimir", varios[1]
    )  # Això imprimirà el segon element que l'hi passem, es pot posar com varios i els imprimirà tots


imprimeVarios(
    "Chanchito Feliz", "Felipe", "Roberto", "Nicolas"
)  # Estem creant una tupla i es compartarà i podrem fer crides com a qualsevol tupla


def nombreCompleto(apellido, nombre):
    print(nombre, apellido)


nombreCompleto(nombre="Guillem", apellido="Barulls")


def nombreCompleto2(**kwargs):  # Això serveix per a poder usar com si fos un diccionari
    print(kwargs["nombre"], kwargs["apellido"])


nombreCompleto2(nombre="Guillem", apellido="Barulls")


def miFuncion2(
    argumento="Barulls",
):  # Això serveix per a tenir un argument ja per defecte
    print(argumento)


miFuncion2("Batman")
miFuncion2()


def miFuncionLista(lista):
    for el in lista:
        print(el)


miFuncionLista(["Chanchito Feliz", "Felipe", "Roberto", "Nicolas"])


def concatenaNombres(lista):
    i = ""
    for mangontero in lista:
        i = i + mangontero + " "  # Així capturem el valor i posem un espai al final
    return i


nombres = concatenaNombres(
    ["Chanchito Feliz", "Felipe", "Roberto", "Nicolas"]
)  # Hem d'assignar el valor returnat a una variable, es a dir i passarà a ser nombres i es repetirà segons el loop definit
print(nombres)

# Recursividad, que bàsicament es fer crides de la funció dins de la mateixa per a que es formi un loop fins a que una condició sigui certa


def recursion(i):
    if i < 1:
        return i
    print(i)
    recursion(i - 1)


recursion(6)  # Retorna valor del 6 al 1 (en el 0 ja surt del loop doncs 0 < 1)
# Serveix per fer reintents en cas de error, p.e conexions a BBDD
# També serveix per quan volem treballar sobre una colecció de dades
# Per us elements en batch
