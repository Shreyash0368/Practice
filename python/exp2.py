print('Enter the operation (symbol indicated) you want to perform\n 1. add(+)\n 2. subtract(-)\n 3. multiply(*)\n 4. division(/)\n 5. exponent(**)\n 6. floor divide(//')
operator = input('Here: ')
a = float(input('enter a: '))
b = float(input('enter b: '))
# answer = 0


def operation(operator, a , b) :
    ans = 0
    match operator:
        case '+': ans = (a+b)
        case '-': ans = (a-b)
        case '*': ans = (a*b)
        case '/': ans = (a/b)
        case '**': ans = (a**b)
        case '//': ans = (a//b)
        case other: ans = ('noob')
    return ans
    
answer = operation(operator, a, b)
print('answer of operation is: ', answer)

