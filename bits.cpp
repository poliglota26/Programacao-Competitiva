#include <bits/stdc++.h>

using namespace std;

long long int dp[1010][1010];
int N,K;

// n = Faltam n bits
// m = ja tem m bits 1 consecutivos

long long int resp (int n, int m)
{
    if (dp[n][m] != 0)
        return dp[n][m];

    if(n == 0)
        return 1;

    if (m < (K-1))
        dp[n][m] = (resp(n-1, 0) + resp(n-1, m+1))% (1000000000+7);
    else
        dp[n][m] = resp(n-1, 0)% (1000000000+7);

    return dp[n][m];
}

int main()
{
    long long int cont;
    cin >> N >> K;
    cont = resp(N, 0) ;
    cout << cont << endl;
    return 0;
}
