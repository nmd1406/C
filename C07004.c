#include<stdio.h>

struct PhanSo
{
    int tuSo;
    int mauSo;
};

int gcd(int a, int b)
{
    if(a == 0 || b == 0) return a + b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

struct PhanSo rutGon(struct PhanSo a)
{
    struct PhanSo c;
    int ucln = gcd(a.tuSo, a.mauSo);
    c.tuSo = a.tuSo / ucln;
    c.mauSo = a.mauSo / ucln;
    return c;
}

int main()
{
    int testCase;
    scanf("%d", &testCase);
    int i = 1;
    while(i <= testCase)
    {
        struct PhanSo p1, p2, sum, p3;
        scanf("%d %d %d %d", &p1.tuSo, &p1.mauSo, &p2.tuSo, &p2.mauSo);
        p1 = rutGon(p1);
        p2 = rutGon(p2);
        int bcnn = lcm(p1.mauSo, p2.mauSo);
        p1.tuSo *= (bcnn / p1.mauSo);
        p2.tuSo *= (bcnn / p2.mauSo);
        p1.mauSo = bcnn;
        p2.mauSo = bcnn;
        sum.tuSo = p1.tuSo + p2.tuSo;
        sum.mauSo = p1.mauSo;
        sum = rutGon(sum);
        p3.tuSo = p1.tuSo;
        p3.mauSo = p2.tuSo;
        p3 = rutGon(p3);
        printf("Case #%d:\n", i);
        printf("%d/%d %d/%d\n", p1.tuSo, p1.mauSo, p2.tuSo, p2.mauSo);
        printf("%d/%d\n", sum.tuSo, sum.mauSo);
        printf("%d/%d\n", p3.tuSo, p3.mauSo);
        i++; 
    }
    return 0;
}