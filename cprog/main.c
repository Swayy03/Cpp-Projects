#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char *ptr;


    printf("Enter the number of books you want to add to the library: ");
    scanf("%d", &size);
    printf("\n");

    ptr = (char *)malloc(size * sizeof(char));

    printf("Now enter the titles of the books to add:::: \n");

    for(int i=0;i<size;i++){
        scanf("%c", ptr+i);
    }
    for(int i=0;i<size;i++){
        printf("The book is %c \n",*(ptr+i));
    }
}
