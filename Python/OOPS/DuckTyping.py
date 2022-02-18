class TextEditor:

    def exec(self):
        print("TextEditor")
        print("Compiling","Running")

class VSCode:

    def exec(self):
        print("VSCode")
        print("Error Check","Spell Check","Compiling","Running")
    
class Laptop():

    def codeExec(self,ide): # Passing argument of type object of the class either VSCode or TextEditor
        ide.exec()

ide1 = TextEditor()
ide2 = VSCode()

lap1 = Laptop()

# lap1.codeExec(ide1)

lap1.codeExec(ide2)