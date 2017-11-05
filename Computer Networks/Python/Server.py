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
    data = conn.recv(4096)
    if not data: break

    arr = pickle.loads(data)
    print arr
    sum = 0
    for i in arr:
        sum = sum + i
    # conn.send(data)
    sumToSend = pickle.dumps(sum)
    conn.send(sumToSend)

conn.close()