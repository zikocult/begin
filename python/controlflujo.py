# Control de flujos

# Tipos de evaluación de variables
# a == b que una variable sea igual que la otra
if 2 == 2:
    print("2 es igual que 2")
# a < b que una variable sea menor que la otra
if 2 < 5:
    print("2 es menor que 5")
# a > b que una variable sea mayor que la otra
if 5 > 2:
    print("5 es mayor que 5")
# a != b que una variable sea distinta
if 2 != 2:
    print("Este no debería aparecer, pues dos no es distinto a 2")
if 5 != 2:
    print("5 es diferente que 2")
# a <= b
if 2 <= 2:
    print("2 es menor o igual que 2")
if 2 <= 5:
    print("2 es menor o igual que 5")
# a >= b
if 5 <= 2:
    print("5 es mayor o igual que 2")


# Agregar el else i el elseif
if 2 > 5:
    print("lala")
elif 2 == 5:
    print("ahora si")
elif 2 < 5:
    print("ahora si pero en la segunda")
else:
    print("no ha salido ni una")

# Sintaxis en una sola linea
if 2 < 5:
    print("if de una sola linea")
print("cuando devuelve true") if 5 < 2 else print(
    "cuando devuelve false"
)  # Operador ternari

# Us del and i el or
if 2 < 5 and 3 > 2:
    print("les dos tornen true")
else:
    print("aquest no s'imprimeix")

if 2 < 5 and 3 < 2:
    print("les dos tornen true")
else:
    print(
        "aquest si s'imprimeix"
    )  # Amb l'operador and, les dues condicions han de ser true

if 2 < 5 or 3 < 2:
    print("Alguna de les condicions es true")
else:
    print(
        "aquest no s'imprimeix"
    )  # Amb l'operador or, si una de les condicions es true complirà l'if, per a passar a else, tindria que tenir dos false
