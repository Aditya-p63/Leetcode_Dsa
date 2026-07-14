class Solution {
public:
    vector<Node*>nodereg;
    void dfs(Node* actual , Node* clone){
        for(auto neighbors : actual->neighbors ){
            if(!nodereg[neighbors->val]){
                Node* newnode = new Node(neighbors->val);
                nodereg[newnode->val]=newnode;
                clone->neighbors.push_back(newnode);
                dfs(neighbors,newnode);
            }
            else {
                clone->neighbors.push_back(nodereg[neighbors->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        Node* clone = new Node(node->val);
        nodereg.resize(110,NULL);
        nodereg[clone->val] = clone;
        dfs(node,clone);
        return clone;
    }
};