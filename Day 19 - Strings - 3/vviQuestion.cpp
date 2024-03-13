// Question : Given two strings s and p, return an array of all the strat indices of p's anagrams in s.You may return the answer in any order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;
    vector<int>count_s(26,0), count_p(26,0);

    int n = s.size();
    int m = p.size();

    if(m>n){
        cout<<"No answer found." << endl;
    }
    else{
        vector<int> answer;
        for(int i=0; i<m; i++){
            count_p[p[i] - 'a']++;
        }
        
        int i = 0;
        for (; i<m; i++){
            count_s[s[i]- 'a']++;
        }
        
        bool found = true;

        for (int j = 0; j < 26; j++){
            if(count_s[j] != count_p[j]){
                found = false;
                break;
            }
        }

        if(found){
            answer.push_back(0);
        }
        while(i<n){
            count_s[s[i - m] - 'a']--;
            count_s[s[i] - 'a']++;

            bool found = true;

            for (int j = 0; j < 26; j++){
                if(count_s[j] != count_p[j]){
                    found = false;
                    break;
                }
            }
            if(found){
                answer.push_back(i - m + 1);
            }
            i++;
        }
        cout << "The indices from where p's anagrams begin are: " <<endl;
        for( auto x:answer){
            cout << x << " ";
        }
    }
        return 0;
}