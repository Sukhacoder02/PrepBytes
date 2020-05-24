#include <iostream>
using namespace std;
int main()
{
    int no_of_boxes = 0;
    cin >> no_of_boxes;
    int count = 0;
    for (int i = 0; i < no_of_boxes; i++)
    {
        int no_of_toys, capacity;
        cin >> no_of_toys >> capacity;
        if (capacity - no_of_toys >= 2)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}