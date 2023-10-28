#include<stdio.h>
#include<math.h>

int prime[1000001];

void sieve()
{
    for(int i = 0; i <= 1000000; ++i)
        prime[i] = 1;

    prime[0] = 0;
    prime[1] = 0;

    for(int i = 2; i <= sqrt(1000000); ++i)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int primeNumber[401];
void numberElement()
{
    sieve();
    int count = 0;
    for(int i = 0; i <= 400; ++i)
    {
        if(prime[i])
        {
            primeNumber[count] = i;
            ++count; 
        }
    }
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int i = 1;
    while(i <= testCase)
    {
        int n;
        scanf("%d", &n);
        int arr[n][n];
        int count = 0;
        numberElement();
        int startingColumm = 0;
        int startingRow = 0;
        int endingColumm = n - 1;
        int endingRow = n - 1;
        while(startingColumm <= endingColumm && startingRow <= endingRow)
        {
            for(int j = startingColumm; j <= endingColumm; ++j)
            {
                arr[startingRow][j] = primeNumber[count];
                ++count;
            }
            ++startingRow;
            for(int j = startingRow; j <= endingRow; ++j)
            {
                arr[j][endingColumm] = primeNumber[count];
                ++count;
            }
            --endingColumm;
            if(startingColumm <= endingColumm)
            {
                for(int j = endingColumm; j >= startingColumm; --j)
                {
                    arr[endingRow][j] = primeNumber[count];
                    ++count;
                }
                --endingRow;
            }
            if(startingRow <= endingRow)
            {
                for(int j = endingRow; j >= startingRow; --j)
                {
                    arr[j][startingColumm] = primeNumber[count];
                    ++count;
                }
                ++startingColumm;
            }
        }
        printf("Test %d:\n", i);
        for(int j = 0; j < n; ++j)
        {
            for(int k = 0; k < n; ++k)
                printf("%d ", arr[j][k]);
            printf("\n");
        }
        printf("\n");
        ++i;
    }
    return 0;
}