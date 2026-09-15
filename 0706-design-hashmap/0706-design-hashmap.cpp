class MyHashMap {
private:
    vector<int> hash1;
    // vector<int> hash2;
    // int  count;
public:
    MyHashMap() {
        hash1.resize(1000001,-1);
        // hash2.resize(1000001,-1);
    }

    
    void put(int key, int value) {
        hash1[key] = value;
        // hash2[count] = value;
        // count++;
    }
    
    int get(int key) {
        // int ind = 0;
        // for(int i = 0;i < count; i++){
        //     if(hash1[i] == key){
        //         ind = i;
        //         break;
        //     }
        // }
        return hash1[key];
    }
    
    void remove(int key) {
        // int ind = 0;
        // for(int i = 0;i < count; i++){
        //     if(hash1[i] == key){
        //         ind = i;
        //         hash1[i] = -1;
        //         break;
        //     }
        // }

        hash1[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */