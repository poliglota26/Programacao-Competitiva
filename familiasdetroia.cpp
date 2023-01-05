#include <bits/stdc++.h>

using namespace std;

int m[50005][10736];
bool * b;
bool g;
int N;
int tot;

void bep (int n)
{
    if(!b[n])
    {
        g = true;
        b[n] = true;
        for(int i = 1; i<= N; i++)
        {
            if(m[n][i] == 1)
            {
                bep(i);
            }
        }
    }
}

int main()
{
    int M, u, v;
    cin >> N >> M;

    b = (bool *) malloc ((N+1)*sizeof(bool));
    //m = (m *) malloc ((N+1)*sizeof(m[50005]));

    memset (b, 0, sizeof(b));

    for(int i = 0; i < M; i++)
    {
        cin >> u >> v;
        m[u][v] = 1;
        m[v][u] = 1;
    }

    for(int k = 1; k <= N; k++)
    {
        g = false;
        bep(k);
        if(g)
            tot++;
    }

    cout << tot << endl;

    return 0;
}
