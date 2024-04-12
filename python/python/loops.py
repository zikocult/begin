i = 0

print("Primer while, aqui usarem el break, amb el que sortirà després del 3")
while i < 5:
    print(i)
    if i == 3:
        break  # surt del bucle abans si es compleix
    i += 1  # això vindria a ser i també es pot posar d'aquesta manera 'i = i + 1'

i = 0

print("Nou While ara amb el continue, no tindria que imprimir el 3 tal com està posat")
while i < 5:
    i += 1
    if i == 3:
        continue  # això es saltarà la propera linea o totes les que hi hagi a sota, amb el que no podrem tenir el i + 1 a sota o formarà un bucle infinit
    print(i)


# Comencem amb el for que serveix per iterà sobre llistes, tuplas, diccionaris, etc.

usuarios = ["Chanchito Feliz", "Felipe", "Roberto", "Nicolas"]

# En la propia sentencia del for, estem creant una variable, que no es necessari definir fora o setejar-la
for usuario in usuarios:  # Accedeix a cada un dels elements de la llista
    print(usuario)

usuario = "Chanchito"

for c in usuario:  # Accedeix a cada una de les parts de la variable
    print(c)

for usuario in usuarios:  # Funcionament de break i continue igual que en el while
    if usuario == "Roberto":
        break  # Pararà a Roberto i ja no l'imprimirà
    print(usuario)

for usuario in usuarios:
    if usuario == "Roberto":
        continue  # Això farà que es salti el escriure a Roberto, però seguirà
    print(usuario)

# Podem usar rangs per a fer una interacció x cops

for x in range(6):
    print(x)

for x in range(2, 6):  # Per a limitar el rang
    print(x)

for x in range(
    3, 30, 5
):  # El tercer valor farà que el increment sigui de 5 en 5 o el que volguem
    print(x)
else:
    print("Hemos terminado")

# Iterem dos llistes
usuarios = ["Chanchito Feliz", "Felipe", "Roberto", "Nicolas"]
edades = [24, 25, 26, 27]

for usuario in usuarios:
    for edad in edades:
        print(usuario, edad)
