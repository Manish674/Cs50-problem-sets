from cs50 import get_float
import math
'''
25
10 
5
1
''' 

dollar = get_float("Change owed: ")


while True:
    if dollar < 0:
        dollar = get_float("Change owed: ")
    
    else:
        break

#converting dollar into cents
cents = round(dollar * 100)
coin = 0

while cents >= 25:
    cents = cents - 25
    coin += 1

while cents >= 10:
    cents = cents - 10
    coin += 1

while cents >= 5:
    cents = cents - 5
    coin += 1

while cents >= 1:
    cents = cents - 1
    coin += 1

if cents == 0:
    print(coin)