#include <iostream>
#include <string>
#include <vector>
#include <queue>

// 2022-06-27 ~ 2022-07-02
// Week06
// �� �ʰ�
// https://programmers.co.kr/learn/courses/30/lessons/42626

using namespace std;


int solution(vector<int> scoville, int K) 
{
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    int size = scoville.size();
    for (int i = 0; i < size; ++i)
        pq.push(scoville[i]);

    if (pq.top() > K) 
        return answer;

    while (pq.size() != 1 && pq.top() < K) {
        int f = pq.top();
        pq.pop();
        int s = pq.top();
        pq.pop();
        int cal = f + s * 2;
        pq.push(cal);
        ++answer;
    }
    if (pq.size() == 1 && pq.top() < K)
        answer = -1;
    return answer;
}