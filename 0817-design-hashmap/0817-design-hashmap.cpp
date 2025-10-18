class MyHashMap {
public:
    unordered_map<int, int> mp;

    MyHashMap() {

    }
    
    void put(int key, int value) {
        mp[key] = value;
    }
    
    int get(int key) {
        // if key exists then we had returned its value
        if (mp.find(key) != mp.end()) {
            return mp[key];
        }
        return -1; // return -1 if key not found
    }
    
    void remove(int key) {
        // erase key if present
        if (mp.find(key) != mp.end()) {
            mp.erase(key);
        }
    }
};


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */