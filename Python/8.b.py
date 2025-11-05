import time
import datetime
print("current date and time:", datetime.datetime.now())
print("current year:",datetime.date.today().strftime("%Y"))
print("month of year:",datetime.date.today().strftime("%B"))
print("week number of year",datetime.date.today().strftime("%W"))
print("Day number of week:",datetime.date.today().strftime("%W"))
print("dat of year",datetime.date.today().strftime("%j"))
print("day of month",datetime.date.today().strftime("%d"))
print("day of week",datetime.date.today().strftime("%A"))
print("\n Using time module:")
current_time = time.localtime()
print("Today's date:",time.strftime("%Y=%m-%d",current_time))
