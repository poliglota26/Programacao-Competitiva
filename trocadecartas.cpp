#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A,B, n = 0, m = 0;
    set <int> s;
    set <int> t;

    cin >> A >> B;

    for(int i = 0; i < A; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }

    for(int i = 0; i < B; i++)
    {
        int num;
        cin >> num;
        t.insert(num);
    }
    auto pnt = s.begin();

    for(int i = 0; i < s.size(); i++)
    {
        if(t.find(*pnt) == t.end())
            m++;
        pnt++;
    }

    auto p = t.begin();
    for(int i = 0; i < t.size(); i++)
    {
        if(s.find(*p) == s.end())
            n++;
        p++;
    }
    cout << min(m,n) << endl;

    return 0;
}
