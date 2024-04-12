print ("\n#################### IF ########################")
print("\nEl control mas básico es el IF, se declara de la siguiente forma:\n")
print("\t if x < 0:")
print("\t\t Acción1")
print("\t elif x == 0:")
print("\t\t Acción2")
print("\t elif x > 0:")
print("\t\t Acción3")
print("\t else:")
print("\t\t Acción4")

print ("\n#################### FOR ########################")
print("\nEl for es un bucle y se define sobre un item")
print("Se define tal que:")
print("\t for x in y:")
print("\t\t Acción1")

print("\nVamos a movernos por una lista y contaremos cada elemento:")
words = ['cat', 'window', 'defense']
for w in words:
    print(w, len(w))

print("\nEjemplo mas complejo")
users = {'Hnas':'active', 'Eleanore':'inactive', 'Paula':'active'}
for user, status in users.copy().items():
    if status == 'inactive':
        del users[user]

active_users = {}
for user, status in users.items():
    if status == 'active':
        active_users[user] = status
