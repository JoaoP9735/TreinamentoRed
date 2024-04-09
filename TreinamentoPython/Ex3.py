from math import *
def projPontoCircunferencia(x,y,c1,c2,r):
    xProj = (r*x)/(sqrt((x-c1)*(x-c1)+(y-c2)*(y-c2)))+c1
    yProj = (r*y)/(sqrt((x-c1)*(x-c1)+(y-c2)*(y-c2)))+c2
    return (xProj,yProj)

x = float(input("coordenada x:"))
y = float(input("coordenada y:"))
r = float(input("raio:"))
c1 = float(input("coordenada x do centro:"))
c2 = float(input("coordenada y do centro:"))
print(projPontoCircunferencia(x,y,c1,c2,r))