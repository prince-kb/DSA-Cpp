//{[()]} should be valid
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <char> c;
    string s = "{[()]}";
    if (s[0] == '}' || s[0] == ')' || s[0] == ']' || s.length()==0)
    {
        cout << "false";
        return 0;
    }
    cout<<"START"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if(i==0){
            c.push(s[i]);
            continue;
        }
        if (c.top() == '{')
        {
            if (s[i] == '}')
            {
                c.pop();
            }
            else if (s[i] == ')' || s[i] == ']')
            {
                cout << "false";
                return 0;
            }
            else
                c.push(s[i]);
        }
        else if (c.top() == '(')
        {
            if (s[i] == ')')
            {
                c.pop();
            }
            else if (s[i] == '}' || s[i] == ']')
            {
                cout << "false";
                return 0;
            }
            else
                c.push(s[i]);
        }
        else if (c.top() == '[')
        {
            if (s[i] == ']')
            {
                c.pop();
            }
            else if (s[i] == ')' || s[i] == '}')
            {
                cout << "false";
                return 0;
            }
            else
                c.push(s[i]);
        }
        else
        {
            cout << "false";
            return 0;
        }
    }
    if(c.empty()){
        cout<<"true";
        return 1;
    }
    else 
    {
        cout << "false";
        return 0;
    }
    cout<<"END"<<endl;
}