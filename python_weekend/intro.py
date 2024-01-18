print("\n############### INPUT/OUTPUT #################")

new_line = "New Line"
miembros = 6

print("\nPrintando con print() el clásico: Hello world!\n", new_line)
print("Incluiremos entre los diferentes separadores una caracter con sep=x")
print("\nLos monty python son", 6, "miembros", sep="*")
print("Incluiremos al final una caracter con end=x")
print("Los monty python son", miembros, "miembros", end="*")
print("sep = separador, end = final\n")

print(
    "La diferencia entre incluirlo en una variable con el escrito o no es donde aparece"
)
pa_dentro = input("Introduzca algo: ")
print("El resultado de lo introducido es:", pa_dentro)

print("Hola ¿como te llamas?")
nombre = input()
print("Tu nombre es:", nombre)
