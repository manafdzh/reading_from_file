#include <fstream>
#include <iostream>
using namespace std;
float proisv(float A[],int k){

    float res = 1;
    for (int i = 0;i<k;i++ ) {
        res = res*A[i];

    }
    return res;
} ;
float sum(float A[],int k){

    float res = 0;
    for (int i = 0;i<k;i++ ) {
        res = res+A[i];

    }
    return res;
} ;
int main() {
    int i,n = 0;
    float M[n];
    string path = "f.txt";
    fstream f;
    f.open(path);
    while (!f.eof()) {
        f >> M[n];
        n++;
    }
    cout << "Array is "<<endl;
    for (i=0;i<n;i++) {
        cout << M[i] << endl;
    }

    cout <<"Proisv is "<< proisv(M,n)<<endl;
    cout <<"Sum is "<< sum(M,n)<<endl;

    f.close();

    return 0;  }
