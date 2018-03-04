#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, s;
    long long sum = 1;
    string k;

    scanf("%d",&n);
    cin >> k;

    s = k.size();

    for(int i = n ; i > 1; i = i - s)
    {
        sum = sum * i;
    }

    cout << sum;

    return 0;
}
