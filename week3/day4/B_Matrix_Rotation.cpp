#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a[2][2];
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &a[j][k]);
            }
        }
        int temp, f = 0;
        
            for (int k = 0; k < 4; k++)
            {
                if ((a[0][0] < a[0][1]) && (a[1][0] < a[1][1]) && (a[0][0] < a[1][0]) && (a[0][1] < a[1][1]))
                {
                    f = 1;
                    break;
                }
                temp=a[0][0];
                a[0][0]=a[1][0];
                a[1][0]=a[1][1];
                a[1][1]=a[0][1];
                a[0][1]=temp;

            }
       if(f==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}