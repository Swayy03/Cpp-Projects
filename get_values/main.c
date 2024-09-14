#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define try bool __HadError=false;
#define catch(x) ExitJmp:if(__HadError)
#define throw(x) {__HadError=true;goto ExitJmp;}

int get_int(char q[]);

int main()
{
    int number = get_int("How old are you??");
    printf("The number entered is %d", number);

    return 0;
}

int get_int(char q[]){
    int n;
    try
        printf(q);
        scanf("%d", &n);
        printf("\n");
        if (n > 0){
          return n;
        }
        else
        {
          throw(n);
        }
    catch(...)
        printf(q);
        printf("\n");


    return n;

}
