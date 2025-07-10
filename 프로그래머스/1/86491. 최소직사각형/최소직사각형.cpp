#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int answer = 0;
    int w_max = 0;
    int h_max = 0;
    for (auto i : sizes)
    {
        int w = max(i[0],i[1]);
        int h = min(i[0],i[1]);
        w_max = max(w_max, w);
        h_max = max(h_max, h);
    }
    answer = w_max * h_max;
    return answer;
}