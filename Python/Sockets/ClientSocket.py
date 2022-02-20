from socket import *

clientSocket = socket()

clientSocket.connect(('localhost',9999))

name = input("Enter your username: ")
clientSocket.send(bytes(name,'utf-8'))

print(clientSocket.recv(1024).decode())