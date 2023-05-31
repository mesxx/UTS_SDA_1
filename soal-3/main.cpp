#include <iostream>
#include <stack>

using namespace std;

bool isSameStack(stack<string> stack1, stack<string> stack2)
{
    bool isSame = true;

    if (stack1.size() != stack2.size())
    {
        isSame = false;
        return isSame;
    }
    else
    {
        while (stack1.empty() == false)
        {
            if (stack1.top() == stack2.top())
            {
                stack1.pop();
                stack2.pop();
            }
            else
            {
                isSame = false;
                break;
            }
        }
    }

    return isSame;
}

int main()
{
    stack<string> stack1;
    stack<string> stack2;

    stack1.push("Ichsan");
    stack1.push("Fauzan");

    stack2.push("Ichsan");
    stack2.push("Fauzan");

    if (isSameStack(stack1, stack2))
    {
        cout << "Same";
    }
    else
    {
        cout << "Not Same";
    }

    return 0;
}