#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V;

    cin >> V;
    int S[6] = {1, 5, 10, 25, 50, 100};

    int moedas = 0;
    for(int i =  5; i >= 0; i--)
    {
        while(V >= S[i])
        {
            moedas++;
            V -= S[i];
        }
    }

    cout << moedas << endl;
    return 0;
}
