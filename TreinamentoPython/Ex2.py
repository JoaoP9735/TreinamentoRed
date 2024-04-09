import numpy
def rotacionarVetores(vetor,angulo):
    rotaciona = numpy.matrix([[numpy.cos(angulo),-(numpy.sin(angulo))], [numpy.sin(angulo),numpy.cos(angulo)]])
    aux = numpy.matmul(rotaciona,vetor)
    rotacionada = numpy.matrix([[round(aux.item(0),2)],[round(aux.item(1),2)]])
    return rotacionada


x = float(input())
y = float(input())
angulo = round(float(input())*numpy.pi/180,2)
vetor = numpy.matrix([[x],[y]])
print(rotacionarVetores(vetor,angulo))