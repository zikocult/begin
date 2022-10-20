# diferentes permisos
# r = read (no fa falta posar-lo)
# a = append = escriu sense sobrescirure
# w = write = sobrescriu tot
# x = si el fixer no existeix, el crearà

# c = open('chanchito.txt', 'x')

# # # Les tres instruccions següents serveixen en mode lectura

# # # print(c.read()) # Retorna tot el contingut
# # # print(c.readline()) # Retorna la primera linea si anem afegint aquesta ordre, anirà llegint mes lineas
# # # for x in c:
# # #     print(x)

# # # Següent amb opció a
# # # c.write('\nNueva linea de texto') # Añadimos al final una linea de texto, el \n es per agregar una nova linea cada cop

# # c.write('\nNueva linea de texto') # Al estar usant la W macharà tot i nomes quedarà aquest linea

# c.close #asegurem que tanquem el fitxer

# usarem per manipular fitxers a dins del sistema, necessitem importar la funció os

import os

if os.path.exists("chanchito.txt"):
    os.remove("chanchito.txt")
else:
    print("El archivo, no existe")

os.rmdir("micarpeta")  # això eliminarà carpetes, s'ha de posar el path
