#include <bits/stdc++.h>

using namespace std;

int v[50005];
int dp[50005];

int main()
{
    int N;
    int resp;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> v[i];

    dp[0] = v[0];
    resp = dp[0];

    for(int i = 1; i<N; i++)
        dp[i] = max(v[i], dp[i-1] + v[i]);

    for(int i = 1; i <N; i++)
        resp = max(resp, dp[i]);

    cout << resp << endl;

    return 0;
}
