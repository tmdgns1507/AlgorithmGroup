#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 2022-06-11 ~ 2022-06-18
// Week04
// ������ �簢��
// https://programmers.co.kr/learn/courses/30/lessons/62048

long long GCD(int a, int b)
{
    long tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

long long solution(int w, int h)
{
    long long answer = 0;
    long long tmp;

    tmp = ((long long)w + (long long)h) - GCD(w, h);

    answer = (long long)w * (long long)h - tmp;
    return answer;
}