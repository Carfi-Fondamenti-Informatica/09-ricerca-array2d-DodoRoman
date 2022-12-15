#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char array1d[20];
    char array2d[10][20];
    int counter=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            array1d[j] = ' ';
            array2d[i][j] = ' ';
        }
    }
    for(int j=0; j<10; j++){
        cin>>array2d[j];
    }
    cin>>array1d;
    if(funzione(array2d, array1d, counter)==1){
        cout << counter << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
