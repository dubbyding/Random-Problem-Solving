# Random Problem Solving
Solving various random problems in Python

## For Prime Number checker
It also finds 206 primes in range 1-1000 while there are 164 so it removes numbers to be calculated by almost 80% \
For large values such as 15485863 which is Prime it takes 1.9198858737945557 sec to complete \
but to check if it is not a Prime ie. 15485865 it takes only 0.0019958019256591797 sec.

## For Suduko solver
Enter the values of suduko row-wise where empty are kept 0 then run it.

## Shuffle String
Takes in input as `string = "JAR"` and index of that string as `index = [2, 1, 0]` and shuffles the string with respect to index in ascending order to "RAJ"

## Minimum Time To Visit all Points
Takes input as `l = [[1,2], [3,3]]` and finds the shortest time to reach all.
* Here, Each traverse is considered as 1 and in each traverse one can go horizontally, diagonally or vertically as per required.

## Find Words That Can Be Formed by Characters
Takes list of words and a string. Check if the combination of letters in that string without repeating can make words from the list.

## Check Num Dice Rolls That Can Get Target
Input number of dice, number of face and which number you want to get(target) in the result and it shows total number of dice combination that can give target number.

## Levine Series
It's a series got by adding n number i times as a string where n is given by position of digit given and i number in n digit.\
\
2=> has "2" number in 1st digit hence next number is 1 for 2 times\
11=> has "1" number in 1st digit and "1" number in 2nd digit so next number is "12"\
12=> has "2" number in 1st digit and "1" number in 2nd digit so next number is "112"\
and so on\
\
sum of each term is collected and then displayed.\
\
*WARNING: THIS GETS LARGE VERY FAST SO PUTTING MAXIMUM NUMBER OVER 10 CAN MAKE COMPUTER HANG*\
