#include<bits/stdc++.h>
using namespace std;

float findSum(float n)
{
    if(n==0) return 1;

    return 1/pow(2,n) + findSum(n-1);
}

int main()
{
    float n;
    cin >> n;
    cout << findSum(n);
}
