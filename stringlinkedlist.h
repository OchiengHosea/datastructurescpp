#ifndef STRINGLINKEDLIST_H
#define STRINGLINKEDLIST_H

#include "stringnode.h"
class StringLinkedList {
public:
    StringLinkedList();
    ~StringLinkedList();
    bool empty() const;
    const std::string& front() const;
    void addFront(const std::string& e);
    void removeFront();
private:
    StringNode* head;
};

#endif // STRINGLINKEDLIST_H
