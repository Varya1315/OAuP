#include "arrays.h"
void menu()
{
    int task = 0;
    while (task != 4)
    {
        printf("Please choose number of task 1-3(3 for bad sort):\n");
        check(&task, 1);
        system("cls");

        switch (task)
        {
        case 1:
            first();
            console();
            break;
        case 2:
            second();
            console();
            break;
       case 3:
            bad();
            console();
            break;

        }
      
    }
    
}
int main()
{
    menu();
    return 0;
}
