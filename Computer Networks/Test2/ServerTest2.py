import random
import pickle
from socket import *

serverSocket = socket(AF_INET, SOCK_DGRAM)
serverSocket.bind(('', 12000))
print "Waiting for a connection..."
while True:
    number, address = serverSocket.recvfrom(1024)
    print "Connected from ", address
    nr = int(number)
    list = []
    for i in range(1, nr + 1):
        if nr % i == 0:
            list.append(i)
    theDataArray = pickle.dumps(list)
    serverSocket.sendto(theDataArray, address)