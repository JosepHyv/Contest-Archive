import string 

letras = string.ascii_letters
numeros = string.digits
signos = ['_', '-']

#print(letras)
def fun(s):
    if s.find('.') == -1:
        return False
    if s.find('@') == -1:
        return False
    arroba = s.find('@')
    punto = s.find('.')
    usuario = s[0:arroba]
    web = s[arroba+1:punto]
    extension = s[punto+1::]
    if len(extension) > 3 :
        return False
   # print( usuario, web, extension)
    if len(usuario) == 0 or len(web) == 0 or len(extension) == 0:
        return False
    for c in usuario:
        if (not c in numeros) and (not c in letras) and (not c in signos):
            return False
    for c in web:
        if not c in letras and not c in numeros:
            return False
    return True
    
    

def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
a = 5
print(*filtered_emails)