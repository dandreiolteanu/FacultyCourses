import socket
import pickle

def most_common(l):
    max = 0
    maxitem = None
    for x in set(l):
        count =  l.count(x)
        if count > max:
            max = count
            maxitem = x
    return maxitem
def most_common1 (lst):
    return max(((item, lst.count(item)) for item in set(lst)), key=lambda a: a[1])[0]

HOST = 'localhost'
PORT = 50007
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((HOST, PORT))
print ('Waiting for a client...')
s.listen(1)
conn, addr = s.accept()
print ('Connected by', addr)
while 1:

    data = conn.recv(1000)
    if not data: break

    arr = pickle.loads(data)
    print (arr)
    print(most_common(arr))

    chara = most_common(arr)

    counter = 0
    for i in arr:
        if i == chara:
        	counter = counter + 1

    data = []
    data.append(chara)
    data.append(counter)
    theDataArray = pickle.dumps(data)


    conn.send(theDataArray)

conn.close()