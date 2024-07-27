#include <iostream>

using namespace std;

int vessel(int a, int b, int c)
{
    int moves=0;
    if(a>b)
    {
        if(c>a)
        {
            moves=1;
        }
        else
        {
            while(true)
            {
                b+=c;
                a-=c;
                moves++;
                if(a<=b)
                {
                    break;
                }
            }
        }
    }
    else if(a<b)
    {
        if(c>b)
        {
            moves=1;
        }
        else
        {
            while(true)
            {
                a+=c;
                b-=c;
                moves++;
                if(b<=a)
                {
                    break;
                }
            }
        }
    }
    return moves;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int z = vessel(a, b, c);
        cout << z << endl;
    }

    return 0;
}
