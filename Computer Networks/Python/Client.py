import socket
import pickle

HOST = 'localhost'
PORT = 50007
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))

# arr = [1,2,3,4,5,6]
arr = []
while True:
    strNr = input('Give a number: ')
    if strNr == 0:
        break
    arr.append(strNr)
print 'We will send the array'
print arr

data_string = pickle.dumps(arr)
s.send(data_string)

# data = s.recv(4096)
# data_arr = pickle.loads(data)
sum = s.recv(4096)
sum = pickle.loads(sum)
s.close()
# print 'Received', repr(data_arr)
print 'Received', repr(sum)