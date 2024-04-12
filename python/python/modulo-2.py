# he importat i instalat un mòdul desde la URL https://pypi.org/project/camelcase/ 
# per a fer la instal·lació, s'usa la comanda pip, però surt explicat a la pàgina
# simplement seguim el que posa a la web per importar i usar

from camelcase import CamelCase

c = CamelCase()
camelcased = "esta oracion se va a camelcasear"
print(c.hump(camelcased))

