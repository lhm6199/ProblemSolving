#include <iostream>

using namespace std;

int main(void){
    char ** field;
    int size;
    cin >> size;

    field = (char **)malloc(sizeof(char *) * size);
    for(int i = 0; i < size; i++){
        field[i] = (char*)malloc(sizeof(char) * size);
    }

    for(int i = 0; i < size; i++){
        for(int j =0; j < size; j++){
            cin >> field[i][j];
        }
    }




}