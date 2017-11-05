import socket
import pickle

HOST = 'localhost'
PORT = 50007
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))

# arr = [1,2,3,4,5,6]
# arr = []
theString = raw_input("The string is: ")
# while True:
#     strNr = input('Give a number: ')
#     if strNr == 0:
#         break
#     arr.append(strNr)
# print 'We will send the array: ', arr
arr = list(theString)

data_string = pickle.dumps(arr)
s.send(data_string)

data = s.recv(1000)
data = pickle.loads(data)
s.close()

print
print 'Received the char: ', repr(data[0]) 
print 'Recieved the number of occurencies: ', repr(data[1])
