#include "lib/LinkedList.cpp"

int main() {
    Node *head = initList(1);
    addNode(head, 2);
    addNode(head, 3);
    head = addNodeToBeginning(head, 0);

    std::cout << "printList" << std::endl;
    printList(head);
    std::cout << std::endl;

    std::cout << "printListRecursive" << std::endl;
    printListRecursive(head);
    std::cout << std::endl;

    std::cout << "printListReverse" << std::endl;
    printListReverse(head);
    std::cout << std::endl;
    return 0;
}
