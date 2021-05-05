#include<stdio.h>
#include<math.h>
int inbinary(int b, int m, int c);
int indecimal(int d, int m, int c);
void decision(int bd);
void main()
{
    int bd;
    printf("Enter a Binary or a Decimal number : ");
    scanf("%d", &bd);
    decision(bd);
}
void decision(int bd)
{
    int m, c, b, d;
    c = 0;
    b = bd;
    d = bd;
    while(bd > 0)
    {
        m = bd % 10;
        if((m != 1) && (m != 0))
        {
            c++;
            break;
        }
        bd /= 10;
    }
    if(c > 0)
    {
        printf("Your input is a Decimal\n");
        indecimal(d,m,c);
    }
    else
    {
        printf("Your input is a binary\n");
        inbinary(b,m,c);
    }       
}
int inbinary(int b, int m, int c)
{
    int p = 0, n = 2, dup;
    m = 0;
    c = 0;
    dup = b;
    while(b > 0)
    {
        m = b % 10;
        c = c + m * pow(n,p);
        p++;
        b /= 10;
    }
    printf("The Conversion of (%d)B in Binary is (%d)D in Decimal\n", dup, c);
    return 0;
}
int indecimal(int d, int m, int c)
{
    int o, dup;
    m = 1; 
    c = 0;
    dup = d;
    while(d != 0)
    {
        o = d % 2;
        d /= 2;
        c = c + o * m;
        m *= 10;
    }
    printf("The Conversion of (%d)D is (%d)B in Binary\n", dup, c);
    return 0;
}
