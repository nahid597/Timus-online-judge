#include<bits/stdc++.h>

using namespace std;

int main()
{

    int sum = 0, n, p;

    cin >> n ;
     p = n;

    if(n < 0)
    {
        n = n * (-1);

        for(int i = n; i > 0; i--)
        {
           sum += i;
        }

    }

    else
    {
        for(int i = 1; i <= n; i++)
        {
           sum += i;
        }

    }

    if(p < 0)
        sum = sum * (-1) +1;

    cout << sum;

    return 0;
}
