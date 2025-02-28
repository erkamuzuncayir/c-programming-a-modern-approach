//
// Created by erkam on 2/27/25.
//

#include <ctype.h>
#include <stdio.h>
#define MESSAGE_LENGTH 100

int main(void)
{
    char message[MESSAGE_LENGTH] = {'\0'};
    char c;
    int  count = 0;

    printf("Enter message: ");

    while ((c = getchar()) != '\n')
        message[count++] = toupper(c);

    for (int i = 0; i < count; i++)
    {
        switch (message[i])
        {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", message[i]);
                break;
        }
    }

    printf("!!!!!!!!!!");
}
