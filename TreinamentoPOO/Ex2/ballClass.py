class Ball:
    def __init__(self):
        self.xPos = 0
        self.yPos = 0
    def getXPos(self):
        return self.xPos
    def getYPos(self):
        return self.yPos
    def setXPos(self, x):
        self.xPos = x
    def setYPos(self, y):
        self.yPos = y
    def setPose(self,x, y):
        self.setXPos(x)
        self.setYPos(y)

