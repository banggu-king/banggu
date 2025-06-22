#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    vector<int> t;
    int answer = 0;

    while(n>0)
    {
        t.push_back(n%3);
        n = n/3;
    }
   for (int d : t)
   {
       answer = answer *3 +d;
   }
        
    return answer;
}