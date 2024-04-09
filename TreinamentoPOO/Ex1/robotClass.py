
class Robot:
    def __init__(self):
        self.xPos = 0
        self.yPos = 0
        self.theta = 0
        self.L = 7.5
        self.R = 3.5
    def getXPos(self):
        return self.xPos
    def getYPos(self):
        return self.yPos
    def getTheta(self):
        return self.theta
    def getL(self):
        return self.L
    def getR(self):
        return self.R
    def setXPos(self, x):
        self.xPos = x
    def setYPos(self, y):
        self.yPos = y
    def setTheta(self, theta):
        self.theta = theta
    def setL(self, L):
        self.L = L
    def setR(self, R):
        self.R = R
    def setPose(self,x, y, theta):
        self.setXPos(x)
        self.setYPos(y)
        self.setTheta(theta)



