//1.Write a function to calculate the area of a circle. (TSRS)
float area_circle(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}


//2.Write a function to calculate simple interest. (TSRS)
float simple_interest(int p,int r,int t)
{
    float si;
    si=p*r*t/100;
    return si;
}


//3.Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
int even_odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
            return 1;
        else
            return 0;
    }
}


//4.Write a function to print first N natural numbers (TSRN)
void natural_no(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}


//5.Write a function to print first N odd natural numbers. (TSRN)
void odd_no(int n)
{
    int i;
    for(i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}


//6.Write a function to calculate the factorial of a number. (TSRS)
int factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    return f;
}


//7.Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
int cobination(int n,int r)
{
    int c=0;
    c=factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}


//8.Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
int permutation(int n,int r)
{
    int p=0;
    p=factorial(n)/(factorial(n-r));
    return p;
}


//9.Write a function to check whether a given number contains a given digit or not.(TSRS)
int digit(int n,int d)
{
    int r;
    for( n ;n!=0;n++)
    {
        r=n%10;
        if(r==d)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}


//10.Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
void prime_factor(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
    }
}


