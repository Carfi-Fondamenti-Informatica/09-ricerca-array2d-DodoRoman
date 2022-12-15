
#include "lib.h"

bool funzione(char array2d[10][20], char array1d[20],int &counter){
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            if(array2d[i][j]!=array1d[j]){
                j=20;
            }else{
                if(j==19){
                    counter=i;
                    return true;
                }
            }
        }
    }
    return false;
}
