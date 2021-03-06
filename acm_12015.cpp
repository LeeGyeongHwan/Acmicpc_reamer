/*
ACMICPC
문제 번호 : 12015
문제 제목 : 가장 긴 증가하는 부분 수열 2
풀이 날짜 : 2020-08-04
Solved By Reamer
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, tmp;
    vector<int> intVec = {0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        if (tmp > intVec.back())
        {
            intVec.push_back(tmp);
        }
        else
        {
            int idx = lower_bound(intVec.begin(), intVec.end(), tmp) - intVec.begin();
            intVec[idx] = tmp;
        }
    }
    cout << intVec.size() - 1 << endl;

    return 0;
}
