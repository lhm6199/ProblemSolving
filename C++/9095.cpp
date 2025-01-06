#include <iostream>
using namespace std;

int factorial(int num){
    if(num <= 1) return 1;
    return num * factorial(num - 1);
}

int main(){
    int comm;
    int num;

    cin >> comm;
    for(int i = 0; i < comm; i++){
        cin >> num;
        int one = num / 1;
        int two = num / 2; 
        int three = num / 3;
        int total = 0;

        for(int th = 0; th <= three; th++){
            for(int tw = 0; tw <= two; tw++){
                int temp = one - (2 * tw + 3 * th);
                if(temp < 0) break;
                total += factorial(temp + tw + th) / (factorial(th) * factorial(tw) * factorial(temp));
            }
        }
        cout<< total << endl;
    }

}

///
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int n, t;
// int dp[15];
// int main()
// {
//     cin >> t;
//     dp[1]=1;
//     dp[2]=2;
//     dp[3] = 4;
//     for (int i = 4; i < 11; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//     }

//     while (t--)
//     {
//         cin >> n;
//         cout << dp[n]<<'\n';
//     }
// }