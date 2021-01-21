def Check(Number):
    Sum = 0
    Mult = 1
    StockNum = int(Number)

    while Number > 0:
        Sum += Number % 10
        Mult *= Number % 10

        Number /= 10

    if(StockNum % Sum == 0) and (StockNum % Mult == 0):
        return  True
    else:
        return  False

def main():
    Count = 0
    Max = 0

    for i in range(1111, 10000, 1):
        if Check(int(i)):
            Count += 1
            if i > Max:
                Max = i

    print("Count: ", Count)
    print("Max: ", Max)
#RUN
main()