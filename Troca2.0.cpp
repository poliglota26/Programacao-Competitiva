#include <bits/stdc++.h>

using namespace std;

int cima[100005], baixo[100005];
int res[100005];
int sp[100005];

int main()
{
    int N, T, I, J;

    cin >> N >> T;

    for(int i = 1; i <= N; i++)
        cin >> cima[i];
    for(int i = 1; i <= N; i++)
        cin >> baixo[i];

    for(int i = 1; i <= T; i++)
    {
        cin >> I >> J;
        res[I]++;
        res[J+1]--;
    }

    sp[1] = res[1];

    for(int i = 2; i<=N; i++)
        sp[i] = sp[i-1] + res[i];

    for(int j = 1; j<=N; j++)
    {
        if(sp[j]%2 == 0)
            cout << cima[j] << " ";
        else
            cout << baixo[j] << " ";
    }

    return 0;
}
