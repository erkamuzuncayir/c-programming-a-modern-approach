rpn_calculator: rpn_calculator.o stack.o
	gcc -o rpn_calculator rpn_calculator.o stack.o

rpn_calculator.o: rpn_calculator.c stack.h
	gcc -c rpn_calculator.c

stack.o: stack.c stack.h
	gcc -c stack.c