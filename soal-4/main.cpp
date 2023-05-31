#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> data;

    // Queue kosong kapasitas 5
    if (data.size() <= 5)
    {
        // Operation
        data.push(3);
        data.push(7);
        data.pop();
        data.push(2);
        data.push(4);
        data.push(1);
        data.pop();
        data.push(6);
        data.pop();
        data.push(5);
        // End Operation

        // Display
        while (!data.empty())
        {
            cout << data.front() << endl;
            data.pop();
        }
        // End Display
    }

    return 0;
}