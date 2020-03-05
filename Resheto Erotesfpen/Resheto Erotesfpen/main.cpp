//
//  main.cpp
//  Resheto Erotesfpen
//
//  Created by Аружан Туткенова on 3/5/20.
//  Copyright © 2020 Аружан Туткенова. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n = 100;
    int *a = new int [n+1];
    for (int i=0;i<=n;i++)
        a[i]=i;
    for (int i=2;i*i<=n;i++){
        if(a[i])
            for (int j=i*i;j<=n;i+=i)
                (a[j]=0);
    }
    for (int i=2;i<n;i++)
    {
        if(a[i])
        {
            cout<<a[i]<<' ';
            
        }
    }
    cout << endl<<endl;
    delete[] a;
    return 0;
}

