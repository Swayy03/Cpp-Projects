#include <stdio.h>
#include <stdlib.h>

int get_int(char q[]);

int main()
{
    int number = get_int("How old are you? :");
    printf("You are %d years old", number);
    return 0;
}

int get_int(char q[]){
    int n;
    printf(q);
    printf("\n");

    while ((getchar()) != '\n');
    scanf("%d",&n);

    if( n>0){
        return n;
    }
    else{
        get_int(q);

    }

}
