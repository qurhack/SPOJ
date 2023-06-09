# https://pl.spoj.com/problems/KC015/

while True:
    try:
        statement = input()

        if not statement:  # break the loop if statement is empty
            break

        statement = statement.split(' ')

        firstNum = int(statement[0])
        comparator = statement[1]
        secondNum = int(statement[2])

        if '==' == comparator:
            print(int(firstNum == secondNum))
        elif '!=' == comparator:
            print(int(firstNum != secondNum))
        elif '>=' == comparator:
            print(int(firstNum >= secondNum))
        elif '<=' == comparator:
            print(int(firstNum <= secondNum))
    except EOFError: # will happen when SPOJ ends providing data
        break