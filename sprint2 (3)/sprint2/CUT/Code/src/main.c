#include<stdio.h>
#include<stdlib.h>

int DeadlockCreate();
void DeadlockPrevent();
int DeadlockAvoidance();



int main()
{
        int choice;
        printf("\n\n==============================================================================\n\n");
        printf("\t\t   SELECT ANY DEADLOCK SCENERIOS\n\n");
        printf("==============================================================================\n\n");
        printf("Enter your Choice\n\n");

        printf("1:DeadlockCreate\n\n2:DeadlockPrevent\n\n3:DeadlockAvoidance\n\n4:Quit\n\n");

        scanf("%d",&choice);

        switch(choice)
        {
                case 1: DeadlockCreate();
                        break;

                case 2: DeadlockPrevent();
                        break;

                case 3: DeadlockAvoidance();
                        break;


                case 4:exit(0);

                 default:printf("Invalid choice\n");
          }
}
