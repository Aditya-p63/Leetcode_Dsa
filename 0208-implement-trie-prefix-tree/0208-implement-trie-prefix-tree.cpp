class Node{
    public:
    char data;
    bool t;
    unordered_map<char,Node*>child;
    Node(char data){
        this->data = data;
        this->t = false;
    }

    void mt(){
        this->t = true;
    }

    bool ist(){
        return this->t==true;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
         root = new Node('\0');
    }
    
    void insert(string word) {
        Node* curr = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(curr->child.count(ch)){
                curr = curr->child[ch];
            }
            else {
                Node* c = new Node(ch);
                curr->child[ch] = c;
                curr = c;
            }
        }
        curr->mt();

    }
    
    bool search(string word) {
        Node* curr = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(curr->child.count(ch)){
                curr = curr->child[ch];
            }
            else return  false;
        }
        return curr->ist();
    }
    
    bool startsWith(string word) {
        Node* curr = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(curr->child.count(ch)){
                curr = curr->child[ch];
            }
            else return  false;
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */