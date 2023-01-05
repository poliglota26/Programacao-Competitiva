#include <iostream>
#include <list>

using namespace std;

int main()
{
    int M, N;
    char res;
    list <char> times = {'A', 'B', 'C', 'D',
                         'E', 'F', 'G', 'H',
                         'I', 'J', 'K', 'L',
                         'M', 'N', 'O', 'P'
                        };
    auto ptr = times.begin();
    auto p = times.begin();
    for(int i = 0; i < 15; i++)
    {
        cin >> M >> N;
        if (M > N)
            ptr++;
        p = ptr;
        if (M<N)
            ptr++;
        ptr++;
        times.erase(p);
        if(i == 7 || i == 11 || i == 13 || i == 14)
            ptr = times.begin();
    }

    ptr = times.begin();
    //res = *ptr;
        cout << *ptr << endl;
    return 0;
}
