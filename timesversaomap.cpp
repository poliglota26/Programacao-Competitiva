#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C, N, Pc, Vc, Pn, Vn;
    bool imprime;
    map <int, int> mp;
    cin >> C >> N;
    for (int i = 0; i < C; i++)
    {
        cin >> Pc >> Vc;
        mp.insert({Pc,Vc});
    }

    for (int i = 0; i < N; i++)
    {
        imprime = false;
        cin >> Pn >> Vn;
        if(mp.find(Pn) == mp.end())
            imprime = true;
        else if(mp[Pn] < Vn)
            imprime = true;

        if(imprime)
            cout << Pn << " " << Vn << endl;
    }

    return 0;
}
