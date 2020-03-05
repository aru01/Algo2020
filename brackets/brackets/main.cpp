
#include <iostream>
using namespace std;

void completeSuquence(string s)
{
    int n;
    n == s.length();
    int open = 0, close = 0;
    for (int i = 0; i < n; i++)
            {
                    
                    if (s[i] == '(')
                            open++;
                    else
                            
                            close++;
              
                    if (close > open)
                        {
                                cout << "Impossible" << endl;
                                return;
                            }
                }
      
       
        cout << s;
        for (int i = 0; i < open - close; i++)
                cout << ')';
        cout << endl;
}
  

int main()
{
        string s = "(()(()(";
        completeSuquence(s);
        return 0;
}
