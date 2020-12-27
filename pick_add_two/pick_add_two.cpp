//
// Created by Nakyeong Kim on 2020/12/27.
// solved problem posted on https://programmers.co.kr/learn/courses/30/lessons/68644
// When given a vector of integers, add each two of them making another vector consisting of sums of two elements.
// Erase duplicates and make them view in order.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> numbers1 = {2, 1, 3, 4, 1};
vector<int> numbers2 = {5, 0, 2, 7};


vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i=0; i<numbers.size(); i++) {
        for (int j=i+1; j<numbers.size(); j++){
            answer.push_back(numbers[i]+numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer;
}

int main() {
    vector<int> solution1 = solution(numbers1);
    vector<int> solution2 = solution(numbers2);

    cout << "output of numbers1" << endl;

    for (int i = 0; i < solution1.size(); i++) {
        cout << solution1[i] << endl;
    }

    cout << "output of numbers2" << endl;

    for (int i = 0; i < solution2.size(); i++) {
        cout << solution2[i] << endl;
    }

    return 0;
};
