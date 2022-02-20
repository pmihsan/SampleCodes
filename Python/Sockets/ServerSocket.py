from socket import *

serverSocket = socket()
print("Server Socket Created")

serverSocket.bind(('localhost',9999))

serverSocket.listen(3)
print("Waiting for Connections")

while True:
    client, address = serverSocket.accept()
    name = client.recv(1024).decode()

    print("Connected with",address,name)

    client.send(bytes("Welcome to Sockets in Python Programming","utf-8"))

    client.close()