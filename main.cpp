#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char array2d[10][20];
    char array1d[20];
    int c=0;
    for (int i=0; i<10; i++){
        for (int j=0; j<20; j++){
            array1d[j] = ' ';
            array2d[i][j] = ' ';
        }
    }
    for (int i=0; i<10; i++){
        cin >> array2d[i];
    }
    cin >> array1d;
    if (funzione(array2d, array1d, c)==1){
        cout << c << endl;
    }
    else{
        cout << "non presente" << endl;
    }
    return 0;
}
