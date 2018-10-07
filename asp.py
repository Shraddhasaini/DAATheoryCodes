def asp(s, f):
    n = len(f)
    print("ye activities h:")
    i = 0
    print i,
    for j in xrange(n):
        if s[j] >= f [i]:
            print j,
            i = j
s = [1, 3, 0, 5, 5, 8]
f = [2, 4, 6, 7, 9, 9]
asp(s, f)
