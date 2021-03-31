def levineSequence(max=2):
    currentValue=[2]
    collection = []
    for i in range(0, max):
        nextValue=[]
        for j, k in enumerate(currentValue):
            for l in range(0,int(k)):
                nextValue.append(str(j+1))
        sum=0
        for digit in nextValue:
            sum+=int(digit)
        collection.append(digit)
        # collection.append(nextValue)
        currentValue = nextValue[::-1]
    return collection

if __name__ == "__main__":
    print(levineSequence(10))
