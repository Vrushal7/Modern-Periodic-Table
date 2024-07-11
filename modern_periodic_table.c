#include <stdio.h>
int element_info(num)
{
  return 0;
}
int main()
{
    int choice;
    while (1) {
        printf("Enter the atomic number of an element: ");
        if (scanf("%d", &choice) != 1) 
        {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        if (choice<=118 && choice>=0) {
            element_info(choice);
            break; 
        } else {
            printf("Elements in Modern periodic table are upto 118.\nEnter a valid atomic number!\n");
        }
    }

        return 0;


}