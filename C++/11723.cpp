#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> is_in(21); // -1으로 초기화된 20개의 원소를 가지는 숫자 확인
    int command_num = 0;
    cin >> command_num;

    for(int j = 0; j < command_num; j++){
        int value;
        string command;
        cin >> command;
        if(command == "add"){
            cin >> value;
            if(is_in[value] == false){
                is_in[value] = true;
            }
        }
        else if(command == "remove"){
            cin >> value;
            if(is_in[value]){
                is_in[value] = false;
            }
        }
        else if(command == "check"){
            cin >> value;
            if(is_in[value]){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else if(command == "toggle"){
            cin >> value;
            if(is_in[value]){
                is_in[value] = false;
            }
            else{
                is_in[value] = true;
            }           
        }
        else if(command == "all"){
            vector<bool> temp(21,true);
            is_in = temp;
        }
        else{
            for(int i = 0; i < 21; i++){
            vector<bool> temp(21,false);
            is_in = temp;
            }            
        }
        // cout << command << value << endl;;
    }

}
