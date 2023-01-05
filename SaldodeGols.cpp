#include <bits/stdc++.h>

using namespace std;

int i;
int X, Y, dp[10005], L[10005];

int main()
{
    int N, I, J;
    int sol;
    int num;
    int saldo;

    cin >> N;

    while (N != 0)
    {
        i++; // Teste i+1
        cin >> X >> Y;
        dp[0] = X - Y;
        L[0] = 0;
        num = 0;
        sol = dp[0];

        for(int k = 1; k < N; k++)
        {
            cin >> X >> Y;
            saldo = X - Y;
            if((dp[k-1] + saldo) >= saldo)
            {
                dp[k] = dp[k-1] + saldo;
                L[k] = L[k-1] + 1;
            }
            else
            {
                dp[k] = saldo;
                L[k] = 0;
            }

        }

        for(int k = 1; k < N; k++)
        {
            if(sol == dp[k])
            {
                if(L[num] <= L[k])
                {
                    num = k;
                    sol = dp[k];
                }
            }
            else if(sol < dp[k])
            {
                num = k;
                sol = dp[k];
            }
        }


        J = num;
        I = num - L[num];
        cout << "Teste " << i << endl;
        if(sol > 0)
            cout << I+1 << " " << J+1 << endl << endl;
        else
            cout << "nenhum" << endl << endl;
        cin >> N;
    }
    return 0;
}
