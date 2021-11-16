# Reverse-Polish-Notation
Reverse Polish Notation (RPN), also known as polish postfix notation or simply postfix notation, is a mathematical notation in which operators follow their operands.

For example, the infix expression P1: 5 + ((1 + 2) * 4) – 3 can be written like this in Reverse Polish Notation: P2: 5 1 2 + 4 * + 3 –

In terms of the operation, the expression P1 and P2 can be evaluated as

| P1                                                                     | P2                                                               |
|------------------------------------------------------------------------|------------------------------------------------------------------|
| 5 + ((1 + 2) * 4) - 3<br>5 + (3 * 4) - 3<br>5 + 12 - 3<br>17 - 3<br>14 | 5 1 2 + 4 * + 3 -<br>5 3 4 * + 3 -<br>5 12 + 3 -<br>17 3 -<br>14 |

The reverse polish notation has many advantages, such as there is no bracket in the expression and no priority is needed for the operators, most importantly, the evaluation process is quite simple. The reverse polish notation could be evaluated by using a stack.

## Input
The input contains multiple test cases. Each test case contains a reverse polish notation string S in one line which consists of digits 0-9, operators + - * and space.

It is guaranteed that the number in string S is one-digit number, that means this expression 5 1 + 72 * will not appear in the input as 72 has two digits.

(The length of S is in the range from 1 to 1000)

## Output
For each test case, print a single line containing the value of the reverse polish notation.

| Sample Input                           | Sample Output |
|----------------------------------------|---------------|
| 5 1 2 + 4 * + 3 -<br>9 8 7 9 3 - * + + | 14<br>59      |
