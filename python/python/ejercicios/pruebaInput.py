dato = input ("Ingrese datos: ")

lista = ["hola", "mundo", "chanchito", "feliz", "dragones"]

if lista.count(dato) > 0: # Buscarà si hi ha un valor a la llista que sigui igual al dato introduit
    print("El dato existe", dato)
else:
    print("El dato no existe :(", dato)