#include <iostream>
#include <cstring>

using namespace std;

int string2num(char * s_num){
    int len = strlen(s_num);
    int total = 0;
    int ten = 1;
    for(int i = len - 1 ; i >= 0 ;i--){
        total += (s_num[i] - '0') * ten;
        ten *= 10;
    }
    return total;
}


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);   
    char a[100001][6];
    int nums[100001] = {0,};
    int N,M;
    
    cin >> N >> M;
    for(int i = 0 ; i < N;i++){
        cin >> a[i]; 
        nums[i] = string2num(a[i]);
    }

    for(int i = 1; i < N; i++){
        nums[i] += nums[i-1]; 
    }


    for(int i = 0; i < M; i++){
        int C, D;
        cin >> C >> D;
        if(C == 1){
            cout << nums[D - 1]<< "\n"; 
        }
        else{
            cout << nums[D - 1] - nums[C - 2] << "\n"; 
        }
    }

    

}
//해당 문제의 관건은, 어떻게 한줄로 정수들을 받을것인가 -> c++ 헤더 파일 이용하면 편했겠지만, 일단 C로 했음. + 이중 for문을 안쓰고 구간합 알고리즘을 이용해서 풀어라