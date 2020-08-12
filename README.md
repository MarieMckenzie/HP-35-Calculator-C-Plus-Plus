# HP-35-Calculator-C-Plus-Plus
Draw a basic HP-35 calculator on the screen. At a minimum, your depiction of the calculator
must contain a display area to show what is entered by the user, the result of calculations, and
buttons or keys representing all the digits in base 10 (“0”-”9”), the basic operations ( “+”, “-”, “*”,
“/” ) operators, the expression evaluation key (“=”), the memory key (“m”), the clear memory key
(“c”), the backspace key (“b”), the file storage key (“f”), and the exit key (“x”).



When your RPN calculator program starts, it should display the calculator model on the screen
and allow the user to enter any expression in reverse polish notation,
e.g. the user might enter “45 10 + 2 * 20 – 3 /”. This expression must be stored in
an appropriate data structure that facilitates evaluation of RPN expressions. The user should be
able to enter any positive, negative, whole or decimal number as an operand, e.g. “5”
represents the number positive 5, “55” represents positive fifty five, “55.5” represents positive
fifty-five point five, and “-55.5” represents negative fifty-five point five. The user should also be
able to enter the operators “+”, “-”, “*”, “/” representing addition, subtraction, multiplication,
division and exponentiation respectively. All operands should be separate from all
other operands and operators by at least one space when displayed on the screen, so that for
example, the expression one plus two (“1 2 +”) can distinguished from eleven plus 2 (“11 2 +”).
When the user enters the expression evaluation key (“=”), the expression should be evaluated
and the result displayed on the screen. At the same time, the expression should be cleared from
storage and instead the result stored in memory. For
example, if the user presses “=” after entering the expression above, the answer
“30” should be shown in the display area of your calculator.
If the user enters the memory key (“m”), your calculator should display the last
value or operator stored in memory. If the user enters the clear memory key (“c”), all
expressions and results should be cleared from memory. If the user enters the backspace key
(“b”), then the last operator or operand entered should be deleted from memory. If the user
enters the file storage key (“f”), then the program should store the current contents of memory
(e.g. the expression entered) to the end of a
text file. If the user enters the exit key (“x”), then the program should end execution
and close.
Write the code for the application using the Java or C++ programming language
and make use of the techniques, data structures, and programming constructs you have learned
in this course (Data Structures - CMP2006). Specifically, your code should demonstrate use of
appropriate and efficient data structures, modularity, repetition, and files. Twenty percent of the
marks will be awarded to your group if you figure out and implement a system which allows the
user to enter expressions in infix form and then convert and evaluate that expression in postfix
(RPN) form.
