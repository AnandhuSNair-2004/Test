area1 = lambda x: x * x
area2 = lambda x, y: x * y
area3=  lambda x, y: 0.5 * x * y
a = int(input("Enter the length of the square:"))
print("Area of the square is", area1(a))
l = int (input("Enter the length of the Rectangle:"))
w = int(input("Enter the width of the rectangle:"))
print("Area of the rectangle is", area2(l, w))
h = int(input("Enter the height of the triangle:"))
b = int(input("Enter the base of the triangle:"))
print("Area of the triangle is",area3(h, b))