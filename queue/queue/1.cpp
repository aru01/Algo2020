#include <iostream>
using namespace std;
void Hanoi(int n, char a, char b, char c)
{
    if (n==1)
    {
        cout<<"move 1 disk from a"<<a<<"to c"<<c;
        return;
    }
    Hanoi(n-1,a,b,c);
}

int main(){}
