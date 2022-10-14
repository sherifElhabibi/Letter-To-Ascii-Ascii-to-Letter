#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int choice;


        printf("1)Letter to ASCII \n");
        printf("2)ASCII to Letter \n");
        printf("3)Exit");
        printf("\n");
        printf("Select from these Options: ");
        scanf("%d", &choice);
        while(choice > 3 || choice<1)
        {
        printf("Invalid Choice \n \n");
        printf("Select from these Options: ");
        scanf("%d", &choice);
        }

while(choice !=3)
{
switch(choice)
{
case 1 :

    printf("\nEnter Letter or Symbol: ");
    scanf("%s", &ch);
    printf("ASCII value of this letter is: %d \n", ch);
    printf("\n");
    break;

case 2:
    printf("Enter Value of ASCII: ");
    scanf("%d", &ch);
    while(ch < 64)
    {
    printf("No such Value \n");
    printf("Please Re-enter Value of ASCII: ");
    scanf("%d", &ch);
    }
    printf("Letter from ASCII is: %c \n", ch);
    break;
default:
    break;
}
}
return 0;
}
