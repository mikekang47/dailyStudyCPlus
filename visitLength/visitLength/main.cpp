#include <string>
#include <map>

using namespace std;

int solution(string dirs) {
    int answer = 0;
    map<pair<pair<int, int>, pair<int, int>>, bool> visitedEdge;

    int curX = 5;
    int curY = 5;
    for (auto i : dirs) {
        int startX = curX;
        int startY = curY;

        if (i == 'U') {
            if (curX < 1)
                continue;
            curX--;
        }
        if (i == 'D') {
            if (curX > 9)
                continue;
            curX++;
        }
        if (i == 'L') {
            if (curY < 1)
                continue;
            curY--;
        }
        if (i == 'R') {
            if (curY  > 9)
                continue;
            curY++;
        }

        if (visitedEdge[make_pair(make_pair(startX, startY), make_pair(curX, curY))] == true)
            continue;

        visitedEdge[make_pair(make_pair(startX, startY), make_pair(curX, curY))] = true;
        visitedEdge[make_pair(make_pair(curX, curY), make_pair(startX, startY))] = true;
        answer++;
    }
    
    return answer;
}
