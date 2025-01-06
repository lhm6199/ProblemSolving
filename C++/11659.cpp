#include <iostream>
#include <queue>
using namespace std;

bool visited[100001]; // 방문 여부 체크

int bfs(int start, int end) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    int level = 0; // BFS 깊이 (시간 계산)

    while (!q.empty()) {
        int size = q.size(); // 현재 레벨의 노드 개수

        // 같은 레벨의 모든 노드를 탐색
        for (int i = 0; i < size; i++) {
            int current = q.front();
            q.pop();

            // 목표 노드 도달
            if (current == end) {
                return level;
            }

            // 다음 노드로 이동
            if (current - 1 >= 0 && !visited[current - 1]) {
                q.push(current - 1);
                visited[current - 1] = true;
            }
            if (current + 1 <= 100000 && !visited[current + 1]) {
                q.push(current + 1);
                visited[current + 1] = true;
            }
            if (2 * current <= 100000 && !visited[2 * current]) {
                q.push(2 * current);
                visited[2 * current] = true;
            }
        }

        level++; // 한 단계 끝날 때마다 증가
    }

    return -1; // 도달할 수 없는 경우
}

int main() {
    int first, second;
    cin >> first >> second;

    // BFS 결과 출력
    int result = bfs(first, second);
    cout << result << endl;

    return 0;
}