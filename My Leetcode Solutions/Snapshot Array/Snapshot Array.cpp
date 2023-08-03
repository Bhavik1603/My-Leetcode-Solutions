// https://leetcode.com/problems/snapshot-array

class SnapshotArray {
    vector<int> res;
    int snapCount = 0;
    vector<vector<int>> ss;
public:
    SnapshotArray(int length) {
        vector<int> temp(length, 0);
        res = temp;
    }
    
    void set(int index, int val) {
        res[index]  = val;
    }
    
    int snap() {
        vector<int> gg = res;
        ss.push_back(gg);
        snapCount++;
        return snapCount - 1;
    }
    
    int get(int index, int snap_id) {
        return ss[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */