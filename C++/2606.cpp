#include <iostream>
#include <vector>

using namespace std;

bool visited[101];
vector<int> graph[101];
int virus_com = 0;

void dfs(int num){
    visited[num] = true;
    virus_com++;
    for(int i = 0 ; i < graph[num].size(); i++){
        int temp = graph[num][i];
        if(!visited[temp]) dfs(temp);
    }
}

int main(){
    int com_nums;
    int net_nums;
    cin >> com_nums >> net_nums;
    for(int j = 0; j < net_nums; j++){
        int nod1, nod2;
        cin >> nod1 >> nod2;
        graph[nod1].push_back(nod2);
        graph[nod2].push_back(nod1);
    }
    dfs(1);
    cout << virus_com - 1 << endl;    
}