#include <bits/stdc++.h>

using namespace std;

int sp[10][100005];
int tot[10];

int main()
{
    int N, M, ini, fim;
    cin >> N >> M;

    for(int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        sp[x][i]++;
        for(int j = 0; j < 10; j++)
            sp[j][i] += sp[j][i-1];
    }
    ini = 0;
    for (int i = 1; i <= M; i++)
    {
        cin >> fim;
        for(int j = 0; j <10; j++)
        {
            if(fim > ini)
                tot[j] += sp[j][fim] - sp[j][ini];
            else
                tot[j] += sp[j][ini] - sp[j][fim];
        }

        ini = fim;
    }

    for(int i = 0; i < 10; i++)
        cout << tot[i] << " ";

    cout << endl;
    return 0;
}
