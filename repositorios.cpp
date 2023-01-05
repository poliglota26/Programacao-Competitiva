#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C, N, Pc, Vc, Pn, Vn;
    bool imprime;
    map <int, int> m;
    map <int, int> p;
    cin >> C >> N;
    for (int i = 0; i < C; i++)
    {
        cin >> Pc >> Vc;
        m.insert({Pc,Vc});
    }

    for (int i = 0; i < N; i++)
    {
        imprime = false;
        cin >> Pn >> Vn;
        if(m.find(Pn) == m.end())
            imprime = true;
        else if(m[Pn] < Vn)
            imprime = true;

        if(imprime)
        {
            if(p.find(Pn) == p.end());
            else if(p[Pn] < Vn)
                p.erase(Pn);
            else continue;
            p.insert({Pn,Vn});
        }
    }
    auto pnt = p.begin();
    while(p.size() != 0)
    {
        pnt = p.begin();
        cout << pnt -> first << " " << pnt -> second << endl;
        p.erase(pnt);
    }


    return 0;
}
