#include <stdio.h>


main()
{
    int a, n, i, temp=1,oldtemp=0,j, temple=1;
    scanf ("%d", &n);
    for (i=1;i<=n;i++)
    {
        a=temp;
        if (i%2==0)
        {
            while (a>oldtemp)
            {
                printf("%d ",a);
                --a;
            }
        }
        else
        {
            for (j=temple;j<temple+i;++j)
            {
                printf ("%d ",j);
            }
        }
        oldtemp = temp; //oldtemp = temp thi oldtemp = 1 
        temple=temp+1;
        temp = temp + i + 1; //temp = temp +i +1 thi temp = 3
        printf("\n");
    }
}