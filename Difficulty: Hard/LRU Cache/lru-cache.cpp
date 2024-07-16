//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way



class LRUCache {
public:
    list<int> dll;
    map<int, pair<list<int>::iterator, int>> mp;
    int n;
    LRUCache(int capacity) { n = capacity; }

    void solve(int key) {
        dll.erase(mp[key].first);
        dll.push_front(key);
        mp[key].first = dll.begin();
    }

    int GET(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        solve(key);
        return mp[key].second;
    }

    void SET(int key, int value) {

        if (mp.find(key) != mp.end()) {
            mp[key].second = value;
            solve(key);

        } else {
            dll.push_front(key);
            mp[key] = {dll.begin(), value};
            n--;
        }
        if (n < 0) {
            mp.erase(dll.back());
            dll.pop_back();
            n++;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->SET(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->GET(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends