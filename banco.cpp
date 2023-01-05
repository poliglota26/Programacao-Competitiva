#include <bits/stdc++.h>

using namespace std;

#define INF 99999999;

int caixa[10005];
int k;

int main()
{
    int C, N, T, D, tot = 0, minimo;
    cin >> C >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> T >> D;
        minimo = -1;
        for(int j = 0; j < C; j++)
        {
            if(caixa[j] < minimo || minimo < 0)
            {
                k = j;
                minimo = caixa[j];
            }
        }
        if(caixa[k] - T > 20)
            tot++;
        caixa[k] = max(caixa[k],T) + D;
    }
    cout << tot << endl;

    return 0;
}
