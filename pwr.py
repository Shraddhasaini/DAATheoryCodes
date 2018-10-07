def pwr(x, y):

    if (y == 0):
        return 1
    elif (int(y % 2) == 0):
        return (pwr(x, int(y / 2)) * pwr(x, int(y / 2)))
    else:
        return (x * pwr(x, int(y / 2)) * pwr(x, int(y / 2)))
#driver's code
x = 2;y = 8
print(pwr(x, y))
