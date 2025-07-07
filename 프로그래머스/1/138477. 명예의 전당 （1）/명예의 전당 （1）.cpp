#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
    vector<int> array;
    for (int i= 0; i < score.size(); i++)
    {
        array.push_back(score[i]);
        sort(array.begin(), array.end(),greater<>());
        if (k > array.size())
            answer.push_back(array.back());
        
        else
            answer.push_back(array[k-1]);           
    }
    return answer;
}