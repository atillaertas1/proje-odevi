#include<stdio.h>
#include"create_account.c"



int main()
{
    int x;
    x = create_account();
       
    while(1)
    {
       if(x == 1)
       {
            break;
       }
       else
       {
            exit(EXIT_SUCCESS);
       }
    }
}
