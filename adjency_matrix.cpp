#include <iostream>
#include <limits.h>
#include <math.h>
#include <cmath>
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
        vector <vector <int> > mat;
        while(i<n){
            mat.push_back(vector <int> ());
            i++;
        }
        i=0;
        while(i<n){
                j=0;
            while(j<n){
                int buf;
                cin >> buf;
                mat[i].push_back(buf);
                j++;
            }
            i++;
        }

    i=0;
    j=0;
    while(i<n){
            j=0;
            while(j<n){
                cout << mat[i][j]<<" ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
// adjcent matrix formed
    return 0;
}

