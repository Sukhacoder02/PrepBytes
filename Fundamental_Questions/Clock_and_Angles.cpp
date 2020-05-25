#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int hour, minute;
    int result[test_cases];
    for (int i = 0; i < test_cases; i++)
    {
        cin >> hour >> minute;
        int h = (hour * 30) + (minute * 0.5);
        int m = minute * 6;
        int angle = abs(h - m);
        if (angle > 180)
        {
            angle = 360 - angle;
        }
        result[i] = angle;
    }
    for (int i = 0; i < test_cases; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}