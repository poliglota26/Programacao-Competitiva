#include <bits/stdc++.h>

using namespace std;
int * dp;

int fib (int n)
{
    if (dp[n] != 0)
        return dp[n];
    if (n == 0 || n == 1)
        return 1;
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];

}

int main()
{
    int N;
    cin >> N;
    dp = (int *) malloc ((N+1) * sizeof(int));
    for(int i = 0; i <= N; i++)
        dp[i] = 0;
    cout << fib(N) << endl;
    return 0;
}
