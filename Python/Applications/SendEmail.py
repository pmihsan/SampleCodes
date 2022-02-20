import smtplib

server = smtplib.SMTP('smtp.gmail.com',587)

server.starttls()

server.login("MyMail@gmail.com",'MyPassword')

server.sendmail("MyMail@gmail.com","ToMail@gmail.com","Sending Mail through python is the easiest")

print("Mail Sent")