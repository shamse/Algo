struct Node
{
    int val;
    Node* next;

    Node() : val(0), next(nullptr){}
    Node(int x) : val(x), next(nullptr){}
    Node(int x, Node* next) : val(x), next(next){}
    ~Node();
};

class LinkedList
{
private:
    Node* head {nullptr};

    Node* getNode(int index) {
        
        if (index < 0)
            return nullptr;
        
        Node* node{head};
        int i = 0;

        while (i != index && node->next) {
            node = node->next;
            i++;
        }

        if (i != index)
            return nullptr;
        
        return node;
    }

public:

    LinkedList() : head{nullptr} {}

    void addAtHead(int val) {
        Node* node{new Node(val)};
        node->next = head;
        head = node;
    }

    void addAtTail(int val) {
        Node* node{head};
        while(node->next)
            node = node->next;
        node->next = new Node(val);
    }

    int get(int index) {
        Node* node{getNode(index)};
        return node->val;
    }
};