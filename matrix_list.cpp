
#include <iostream>
#include <limits.h>
#include <math.h>
#include <cmath>
#include<list>
#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    long t=0;
    cin >> t;
    while(t--){
        int n,i=0,j=0;
        cin >>n ;
        vector <list <int> > mat;
        while(i<n){
            mat.push_back(list <int> ());
            i++;
        }
        i=0;

        while(i<n){
                j=0;
            while(j<n){
                int buf;
                cin >> buf;
                if(buf)
                mat[i].push_back(j);
                j++;
            }
            i++;
        }

    i=0;
    j=0;
        while(i<n){
            list <int> :: iterator k=mat[i].begin();
            while(k!=mat[i].end()){
                cout << *k+1 <<" ";
                k++;
            }
            cout << endl;
            i++;
        }
    }
}
