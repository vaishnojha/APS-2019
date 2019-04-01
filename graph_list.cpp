
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
                mat[i].push_back(0);
                j++;
            }
            i++;
        }
        int no_edge;
        cin>> no_edge;
        i=0;
        while(i<no_edge){
            int buf1,buf2;
            cin >> buf1>>buf2;
            mat[buf1-1][buf2-1]=1;
            mat[buf2-1][buf1-1]=1;
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

