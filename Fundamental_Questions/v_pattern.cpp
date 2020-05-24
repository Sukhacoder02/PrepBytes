#include <iostream>
using namespace std;
int main()
{
    char no_of_lines;
    cin >> no_of_lines;
    int spaces = 8;
    for (int i = 1; i <= 5; i++)
    {
        // left part
        for (int L = 1; L <= i; L++)
        {
            cout << L;
        }

        // spacing
        for (int S = 1; S <= spaces; S++)
        {
            cout << " ";
        }

        // Right part
        for (int R = i; R >= 1; R--)
        {
            cout << R;
        }
        spaces = spaces - 2;
        cout << endl;
    }
    return 0;
}