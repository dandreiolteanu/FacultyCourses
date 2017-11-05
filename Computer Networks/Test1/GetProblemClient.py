import socket
import pickle

HOST = '172.30.113.3'
PORT = 54321

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))
while True:
    print(s.recv(1024))

    inpt=raw_input("Message for server: ")
    s.send(inpt)
    s.send('\n')
    print("your message has been sent!!")
