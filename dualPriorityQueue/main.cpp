#include <iostream>
#include <map>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int k;
        cin >> k;
        map<long long, int> mp;
        long long  temp;
        char s;

        for(int j = 0; j < k; j++) {
            cin >> s >> temp;

            if(s == 'I') {
                auto it = mp.find(temp);
                if(it != mp.end())
                    it->second++;
                else
                    mp.insert(make_pair(temp, 0));


            } else if(s == 'D') {
                if(mp.empty())
                    continue;
                if(temp == 1) {
                   auto it = prev(mp.end());
                   if(it->second > 0)
                       it->second--;
                   else
                       mp.erase(it);

                } else {
                    auto it = mp.begin();
                    if(it->second > 0)
                        it->second--;
                    else
                        mp.erase(it);
                }
            }
        }
        if(mp.empty())
            cout << "EMPTY" << "\n";
        else
            cout << mp.rbegin()->first << " " << mp.begin() ->first << "\n";
    }
    return 0;
}
