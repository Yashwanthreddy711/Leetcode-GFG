class MyHashMap {
public:
    MyHashMap() {
       
    }
    map<int,int>mp; 
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        auto it=mp.find(key);
        if(it==mp.end())return -1;
        return mp[key];
    }
    
    void remove(int key) {
       mp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */