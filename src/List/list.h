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
    Node* getNode(int index);

public:

    LinkedList() : head{nullptr} {}

    void addAtHead(int);
    void addAtTail(int);
    int get(int);

    void display();
};