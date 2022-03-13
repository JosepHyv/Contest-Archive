#help(str.strip)
import datetime as tiempo
local = tiempo.datetime.now()

print( local)
print( local.date() , " " , local.time(), type(local.date()) )
mi_cadena = "probando que es lo que hago"
mi_cadena

print(type(mi_cadena), " " , len(mi_cadena))

mi_cadena = mi_cadena.replace('a', '?')
print(mi_cadena)

cadena = mi_cadena

cadena+= "->".join(["asi es ", "creo que concatena"])
nueva = cadena.upper().strip()
print(nueva)
