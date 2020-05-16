a = input("Enter Any Number:- ")
if a == '2' or a == '5':
    print('It is Prime')
elif a[-1] in ('1', '3', '7') and (( int(a) * int(a) ) - 1 ) % 24 == 0: 
    print("It Might be Prime")
else:
    print("It is not a prime")