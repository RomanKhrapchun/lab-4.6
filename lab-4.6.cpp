#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double S, Pp, Pd;
    int n, i;

    S = 0;
    n = 1;

    while (n <= 10)
    {
        Pp = 1;
        i = 1;
        while (i <= n)
        {
            Pp *= (1. * i * i);
            i++;    
        }

        Pd = 1;
        i = n;
        while (i <= 10)
        {
            Pd *= (1. * i * i);
            i++;
        }
        S += (Pp + Pd) / n;
        n++;
    }
    cout << "1) S = ";
    cout << S << endl;

    S = 0;
    n = 1;
    do
    {
        Pp = 1;
        i = 1;
        do
        {
            Pp *= (1. * i * i);
            i++;
        } while (i <= n);

        Pd = 1;
        i = n;
        do
        {
            Pd *= (1. * i * i);
            i++;
        } while (i <= 10);
        S += (Pp + Pd) / n;
        n++;
    } while (n <= 10);
    cout << "2) S = ";
    cout << S << endl;

    S = 0;
    for (n = 1; n <= 10; n++)
    {
        Pp = 1;
        for (i = 1; i <= n; i++)
        {
            Pp *= (1. * i * i);
        }

        Pd = 1;
        for (i = n; i <= 10; i++)
        {
            Pd *= (1. * i * i);
        }
        S += (Pp + Pd) / n;
    }
    cout << "3) S = ";
    cout << S << endl;

    S = 0;
    for (n = 10; n >= 1; n--)
    {
        Pp = 1;
        for (i = n; i >= 1; i--)
        {
            Pp *= (1. * i * i);
        }

        Pd = 1;
        for (i = 10; i >= n; i--)
        {
            Pd *= (1. * i * i);
        }
        S += (Pp + Pd) / n;
    }
    cout << "3) S = ";
    cout << S << endl;

    return 0;
}