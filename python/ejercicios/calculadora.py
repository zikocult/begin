primero = input ("Ingrese el primer número: ") 

try: #Validació de que s'ha introduit un numeral integer
    primerNumero = int(primero) #Podriem fer primero = int(primero), però creo nova variable per mostrar al final com es concatena la string
except:
    primero = "Chanchito Feliz"

if primero == "Chanchito Feliz":
    print("Primero debe ser número")
    exit()

segundo = input ("Ingrese el segundo número: ")

try: #Validació de que s'ha introduit un numeral integer
    segundoNumero = int(segundo)
except:
    segundo = "Chanchito Feliz"

if segundo == "Chanchito Feliz":
    print("Segundo debe ser número")
    exit()

simbolo = input ("Ingrese el símbolo: ")
if simbolo == "+":   
    print("Suma:", primerNumero + segundoNumero) 
elif simbolo == "-":
    print("Resta:", primerNumero - segundoNumero) 
elif simbolo == "*":
    print("Multiplicación:", primerNumero * segundoNumero) 
elif simbolo == "/":
    print("División:", primerNumero / segundoNumero) 
else: 
    print("Error en el simbolo")


##La introducció de dades es fa com a String, amb el que ho hem de convertir en numeral, integer en aquest cas
# primerNumero = int(primero)
# segundoNumero = int (segundo)
# print(primero + segundo) #Amb la cadena no convertida, ens concatenerà el resultat
