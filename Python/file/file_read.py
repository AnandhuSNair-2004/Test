file = open("file2.txt","w")
file.write("hello world!\n welcome tp python programming \nThank you")
file.close()
list = []
file = open("file2.txt","r")
list = [line.strip() for line in file]
file.close()
print(list)
