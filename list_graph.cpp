
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
        int no_edge;
        cin>> no_edge;
        i=0;
        while(i<no_edge){
            int buf1,buf2;
            cin >> buf1>>buf2;
            mat[buf1-1].push_back(buf2-1);
            mat[buf2-1].push_back(buf1-1);
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
// adjcent matrix formed
    return 0;
}


