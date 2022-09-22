"""
Ordene la siguiente formula aplicando parentesis siguiendo el orden de
prioridad de los signos y muestre el valor de la respuesta
a * b - c / 1 + a^2 // 2 
"""


##pedimos los valores 
a = int(input("Digite un numero para a: \n"))
b = int(input("Digite un numero para b: \n"))
c = int(input("Digite un numero para b: \n"))

ECUA = ((a*b-c)/2)+(a*a)//2

print("Ecuacion = ",ECUA)