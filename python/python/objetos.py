# La definició de classes, fa que alguna necessitat, tingui totes les propietats que considerem
# Amb aquest primer exemple, pre inicialitzem la classe sencera donant valors a les instàncies, valors que anomenem propietats

class Mangotero: # Per convenció les clases es posen amb la primer lletra majúscula
    nombre = "Felipe" # Les classes tenen instàncies (nombre) i propietats (Felipe)
    apellido = "Feliz"

# Assignem la classe a una variable, creant un OBJECTE
mangotero = Mangotero() # Les variables amb la primera lletra minúscula, recordar que es Key Sensitive. 
mangotero2 = Mangotero()

# print(usuario) --> això no imprimeix res, de fet don un error: <__main__.Usuario object at 0x0000021B1EA66E90>. S'ha de cridar a les propietats
print(mangotero.nombre, mangotero.apellido, mangotero2.nombre, mangotero2.apellido) # Les propietats es criden mitjan variable.propietat

#---------------------------------------------------------------------------------------------------------------------------#

# En aquest segon exemple, estem deixant que el valor de les propietats sigui donat per la introducció de arguments
class Usuario:
    def __init__(self, nombre, apellido): # Self no es un parametre en si
        self.nombre = nombre
        self.apellido = apellido
    
    def saludo(self):
        print("Hola!, mi nombre es", self.nombre, self. apellido) # Amb aquesta linea estalvio la última linea del print que he deixat comentada

# Herencia
class Admin(Usuario):
    def superSaludo(self):
        print("Hola!, me llamo,", self.nombre, "y soy administrador")


usuario = Usuario("Felipe", "Feliz")
usuario2 = Usuario("Chanchito", "Triste")
usuario.saludo()
usuario2.saludo() #així cridem la definició del print
admin = Admin("Super", "Contento")
admin.saludo()
admin.superSaludo()

# print(usuario.nombre, usuario.apellido, usuario2.nombre, usuario2.apellido) 
# del usuario.nombre # amb aquesta ordre, netegem la propietat de nombre, si ara intentessim fer alguna cosa ens donaria un error

#---------------------------------------------------------------------------------------------------------------------------#

# Exemple mes complex de herències

class Animal:
    def __init__(self, nombre, onomatopeya):
        self.nombre = nombre
        self.onomatopeya = onomatopeya
    def saludo (self):
        print("Hola, soy un", self.tipo, "y mi sonido es el", self.onomatopeya)

class Gato(Animal):
    tipo = "gato"
    def __init__(self, nombre, onomatopeya):
        Animal.__init__(self, nombre, onomatopeya)
        print("Hola, soy un gato con instancia extendida")

class Perro(Animal):
    tipo = "perro"
    def __init__(self, nombre, onomatopeya):
        super().__init__(nombre, onomatopeya)
        print("Instanciando un perro")

class Canario(Animal):
    tipo="canario"

gato = Gato("Fluffy", "maullido")
gato.saludo()

perro = Perro("Firulais", "ladrido")
perro.saludo()

canario = Canario("Piolin", "Silvido")
canario.saludo()

#---------------------------------------------------------------------------------------------------------------------------#

