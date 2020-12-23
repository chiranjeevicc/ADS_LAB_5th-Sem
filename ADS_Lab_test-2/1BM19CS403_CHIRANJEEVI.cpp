#include <bits/stdc++.h>
using namespace std;
string stringWithSecondHighestFrequency(vector<string> &A)
{
    unordered_map<string, int> hash_table;
 for (int i = 0; i < A.size(); i++)
    {
        hash_table[A[i]]++;
    }

    int max_freq = 0;
    int second_highest_freq = 0;
    for (auto ele : hash_table)
    {
        max_freq = max(max_freq, ele.second);
        if (second_highest_freq < ele.second && ele.second < max_freq)
        {
            second_highest_freq = ele.second;
        }
    }
    for (auto ele : hash_table)
    {
        if (ele.second == second_highest_freq)
        {
            return ele.first;
        }
    }
}
int main()
{
    vector<string> A = {"aaa", "bbb", "ccc", "bbb","aaa", "aaa"};
    cout << "String with second highest frequency is: " << stringWithSecondHighestFrequency(A) << endl;
    return 0;
}