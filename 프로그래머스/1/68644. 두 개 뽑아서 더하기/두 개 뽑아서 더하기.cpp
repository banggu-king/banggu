#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    unordered_set<int> sums;
    int n = numbers.size();
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sums.insert(numbers[i] + numbers[j]);
        }
    }

    vector<int> answer(sums.begin(), sums.end());
    sort(answer.begin(), answer.end());
    return answer;
}