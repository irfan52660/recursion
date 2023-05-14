#include<iostream>
using namespace std;

int sumOf(int n)
{
    if(n==0) return n;

    return (n%10) + sumOf(n/10);
}

int main()
{
    int n;
    cin >> n;
    cout << sumOf(n);
}
