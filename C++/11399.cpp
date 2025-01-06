#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int p_num = 0;
    int total = 0;
    cin >> p_num;
    vector<int> times(1001);
    for(int i = 0; i < p_num; i++){
        int temp;
        cin >> temp;
        times[temp]++;
    }

    for(int i = 0; i < 1001;i++){
        if(times[i] != 0){
            for(int j = 0; j < times[i]; j++){
                total += i * p_num--;
            }
        }
    }
    cout << total << "\n";
}

// counting sort의 방법론 이용