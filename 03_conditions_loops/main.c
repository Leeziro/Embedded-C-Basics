#include <stdio.h>

int main(void)
{
    int count = 0;

    while(count >= 0)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("count is: %d\n", i);
            count++;
        }
        count = -1;
    }   
}