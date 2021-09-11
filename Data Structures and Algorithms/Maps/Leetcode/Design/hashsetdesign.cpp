class MyHashSet {
public:
    /** Initialize your data structure here. */
    const int sz = 1e6 + 1;
    vector<bool> vec;
    MyHashSet() {
        vec = vector<bool>(sz , 0);    
    }
    
    void add(int key) {
        vec[key] = 1;
    }
    
    void remove(int key) {
        vec[key] = 0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return vec[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
