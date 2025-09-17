color_list1 = input("enter the first set of colors: ").split(',')
color_list2 = input("enter the second set of colors: : ").split(',')
color = [color for color in color_list1 if color not in color_list2]
print("colors are", color)
