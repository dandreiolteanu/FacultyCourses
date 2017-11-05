import socket
import pickle

HOST = 'localhost'
PORT = 50007
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST, PORT))
print 'Waiting for a client...'
s.listen(1)
conn, addr = s.accept()
print 'Connected by', addr
while 1:
    data = conn.recv(1000)
    if not data: break

    arr = pickle.loads(data)
    print arr
    sum = 0
    counterOdd = 0
    for i in arr:
        sum = sum + i
        if i % 2 != 0:
            counterOdd = counterOdd + 1
    # conn.send(data)
    theDataArray = [sum, counterOdd]
    theDataArray = pickle.dumps(theDataArray)

    # sumToSend = pickle.dumps(sum)
    # conn.send(sumToSend)
    conn.send(theDataArray)

conn.close()