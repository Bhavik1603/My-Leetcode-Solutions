// https://leetcode.com/problems/design-hashset

class MyHashSet {
    vector<int> sett;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        vector<int>:: iterator it;
        it = std::find (sett.begin(), sett.end(), key);
        if(it!=sett.end()) return;
        sett.push_back(key);
    }
    
    void remove(int key) 
    {
        vector<int>:: iterator it;
        it = std::find (sett.begin(), sett.end(), key);
        if(it!=sett.end())
        {
            sett.erase(it);
        }
    }
    
    bool contains(int key) {
        vector<int>:: iterator it;
        it = std::find (sett.begin(), sett.end(), key);
        if(it!=sett.end()) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */