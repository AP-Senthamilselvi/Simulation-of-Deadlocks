a.out : main.o DeadlockCreate.o DeadlockPrevent.o DeadlockAvoidance.o
	gcc main.o DeadlockCreate.o DeadlockPrevent.o DeadlockAvoidance.o -o a.out

DeadlockCreate.o : DeadlockCreate.c
	gcc -c DeadlockCreate.c

DeadlockPrevent.o : DeadlockPrevent.c
	gcc -c DeadlockPrevent.c

DeadlockAvoidance.o :DeadlockAvoidance.c
	gcc -c DeadlockAvoidance.c

main.o:main.c
	gcc -c main.c

clean :
	rm *.o
