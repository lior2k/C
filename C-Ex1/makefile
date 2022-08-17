FLAGS = -Wall -g
LOOPS = advancedClassificationLoop.o
REC = advancedClassificationRecursion.o
BASIC = basicClassification.o

all: loops recursives recursived loopd mains maindrec maindloop

mains: main.o recursives
	gcc $(FLAGS) -o mains main.o libclassrec.a

maindloop: main.o loopd
	gcc $(FLAGS) -o maindloop main.o ./libclassloops.so

maindrec: main.o recursived
	gcc $(FLAGS) -o maindrec main.o ./libclassrec.so

loops: $(BASIC) $(LOOPS) HelpFunctions.o
	ar -rcs libclassloops.a $(BASIC) $(LOOPS) HelpFunctions.o

loopd: $(BASIC) $(LOOPS) HelpFunctions.o
	gcc $(FLAGS) -shared -o libclassloops.so $(BASIC) $(LOOPS) HelpFunctions.o

recursives: $(BASIC) $(REC) HelpFunctions.o
	ar -rcs libclassrec.a $(BASIC) $(REC) HelpFunctions.o

recursived: $(BASIC) $(REC) HelpFunctions.o
	gcc $(FLAGS) -shared -o libclassrec.so $(BASIC) $(REC) HelpFunctions.o
	
basicClassification.o: basicClassification.c NumClass.h
	gcc $(FLAGS) -c basicClassification.c

advancedClassificationLoops.o: advancedClassificationLoop.c NumClass.h
	gcc $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc $(FLAGS) -c advancedClassificationRecursion.c

HelpFunctions.o: HelpFunctions.c NumClass.h
	gcc $(FLAGS) -c HelpFunctions.c

main.o: main.c NumClass.h
	gcc $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
