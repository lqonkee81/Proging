def Check(num):
    strNum = oct(num)
    strNum = strNum[2::]

    if (strNum[len(strNum) - 2] + strNum[len(strNum) - 1]) == 17:
        return True
    elif (strNum[len(strNum) - 2] + strNum[len(strNum)- 1]) == 15:
        return True
    else:
        return  False

def main():
    Count = 0
    Max = 0

    for i in range(2371, 9472):
        if (i % 5 != 0) or (i % 3 != 0):
            if Check(i):
                Max = i
                Count += 1

    print("Count: ", Count)
    print("Max: ", Max)

#RUN
main()