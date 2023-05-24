#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void check_bin();
    void ones();
    void display();
};

void binary::read()
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}

void binary::check_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display()
{
    cout << "displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.check_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}