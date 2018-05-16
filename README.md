
### Techniques

- use ternary conditional expressions instead if-else statements
- use list-expression instead of statement blocks
- transforming a program of many functions into a single function with a while loop and a switch
statement, iterating through each program counter.
- transforming iteration into recursion

### Quotes
```
  A well known folk theorem in computer science is that any program can be transformed into a
  semantically equivalent program of one procedure containing one switch statement inside a while
  loop. The transformation involves rewriting the program so that each case of the switch is an
  elementary operation of the original program followed by an assignment to a program counter
  variable that communicates to the switch statement the next operation to execute. The while loop
  terminates when the program counter reaches the last operation in the program.
```
