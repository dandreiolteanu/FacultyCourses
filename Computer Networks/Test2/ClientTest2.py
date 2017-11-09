import time
import pickle
from socket import *

for pings in range(10):
    clientSocket = socket(AF_INET, SOCK_DGRAM)
    clientSocket.settimeout(1)
    number = raw_input("Give number: ")
    addr = ("127.0.0.1", 12000)

    start = time.time()
    clientSocket.sendto(number, addr)
    try:
        data, server = clientSocket.recvfrom(1024)
        data = pickle.loads(data)
        if data == []:
        	print("No divisors")
        else:
        	print("The divisors are")
        	print (data)
        	print
    except timeout:
        print 'REQUEST TIMED OUT'