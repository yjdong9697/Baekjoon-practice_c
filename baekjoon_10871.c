#include <stdio.h>

int main(void)
{
    int n, x;
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++)
    {
        int cal;
        scanf("%d", &cal);
        if (cal < x)
        {
            printf("%d ", cal);
        }
    }
    return 0;
}