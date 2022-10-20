# Adjunto aquí el que hi ha moulos.py, d'aquesta manera no haig d'anar entrant i sortint per a revisar
# mascotas = ['Chanchito feliz', 'Felipe', 'Fluffy', 'Dragón']

# def saludo(nombre):
#     print('hola', nombre)

import modulos  # Fem la crida de modulos.py

print(modulos.mascotas)  # reviso el que hi ha a la llista de mascotas
modulos.saludo("Guillem")  # crido la funció saludo definida dins del mòdul

import modulos as xs  # Podem renombrar el nom del fitxer per a no fer la crida amb el nom del fitxer

print(xs.mascotas)
xs.saludo("Guillem")

from modulos import saludo  # Amb això només importem la par de saludo

saludo("Guillem")

from modulos import (
    saludo,
    mascotas,
)  # Podem importar, 1 o varies variables o funcions del mòdul separant amb comes

print(mascotas)
saludo("GBC")
