class MyHashSet {
public:
    struct listNode {
        int key;
        listNode* next;
        listNode(int k) : key(k), next(nullptr) {}
    };

    vector<listNode*> set;
    int CAP = 10000;
    int size = 0;

    MyHashSet() {
        set.resize(10000);
    }
    
    void add(int key) {
        // find index 
        int index = key % CAP;
        // iterate to check existence
        listNode* curr_pointer = set[index];
    
        if (curr_pointer == nullptr) {
            set[index] = new listNode(key);
            return;
        }
        while(curr_pointer->next != nullptr) {
            if (curr_pointer->key == key) {
                return;
            }
            curr_pointer = curr_pointer->next;
        }
        if (curr_pointer->key==key) return;
        curr_pointer->next = new listNode(key);
    }
    
    
    void remove(int key) {
        int index = key % CAP;

        listNode* curr_ptr = set[index];
        listNode* prev_ptr = curr_ptr;

        if(curr_ptr==nullptr) return;

        if (curr_ptr->key==key) { // if key is at first node;
            set[index] = curr_ptr->next;
            return;
        }
        curr_ptr= curr_ptr->next; //start at second node

        while(curr_ptr!=nullptr) {
            

            if (curr_ptr->key==key) {
                prev_ptr->next= curr_ptr->next;
                delete curr_ptr;
                return;
            }
            prev_ptr=curr_ptr;
            curr_ptr= curr_ptr->next;
        }        


    }
    
    bool contains(int key) {
        int index = key%CAP;
        listNode* curr_ptr = set[index];
        while (curr_ptr!=nullptr) {
            if (curr_ptr->key==key) return true;
            curr_ptr = curr_ptr->next;
        }
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