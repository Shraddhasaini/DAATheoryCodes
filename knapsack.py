def fks(pi, wi, C):
    index = list(range(len(pi)))
    ratio = [p/w for p, w in zip(pi, wi)]
    index.sort(key=lambda i: ratio [i], reverse=True)

    max_value = 0
    fractions =[0]*len(pi)
    for i in index:
        if wi[i] <= C:
            fractions[i] = 1
            max_value += pi[i]
            C -= wi[i]
        else:
            fractions[i] = C/wi[i]
            max_value += pi[i]*C/wi[i]
            break
    return max_value, fractions

n = int(input('Enter number of items: '))
pi = input('Enter the values of the {} item(s) in order: '
              .format(n)).split()
pi = [int(p) for p in pi]
wi = input('Enter the positive weights of the {} item(s) in order: '
               .format(n)).split()
wi = [int(w) for w in wi]
C = int(input('Enter maximum weight: '))

max_value, fractions = fks(pi, wi, C)
print('The maximum value of items that can be carried:', max_value)
print('The fractions in which the items should be taken:', fractions)
