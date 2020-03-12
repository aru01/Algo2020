//
//  2.cpp
//  hanoi
//
//  Created by Аружан Туткенова on 3/12/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    if (n==1)
    {
        cout<<"move"<<a<<"to"<<b<<endl;
    }
    hanoi(n-1, a, c, b);
    cout<<a<<c<<endl;
    hanoi(n-1, c,b,a);
}
int main(){
    int n=4;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
