for i in range(0, 100000):
    x = i
    a = 1

    while x > 0:
        a *= x % 7
        x = x // 7
    if a == 48:
        print(a, " ", i)
        break
