#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int T;
    string s;
    bool res;

    stack <char> q;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        while(q.size() != 0)
            q.pop();
        res = true;
        cin >> s;
        for(int j = 0; j < s.size(); j++)
        {
            if (s[j] == ')' && q.size() != 0)
            {
                if (q.top() == '(')
                    q.pop();
                else
                    res = false;
            }
            else if (s[j] == '}' && q.size() != 0)
            {
                if (q.top() == '{')
                    q.pop();
                else
                    res = false;
            }
            else if (s[j] == ']' && q.size() != 0)
            {
                if (q.top() == '[')
                    q.pop();
                else
                    res = false;
            }
            else
                q.push(s[j]);
        }

        if(q.size() != 0)
            res = false;

        if (res)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
