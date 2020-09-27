#include "stringlinkedlist.h"

StringLinkedList::StringLinkedList():head(NULL)
{

}

StringLinkedList::~StringLinkedList()
{ while(!empty()) removeFront(); }

bool StringLinkedList::empty() const
{ return head == NULL; }

const std::string& StringLinkedList::front() const
{return head->elem;}

void StringLinkedList::addFront(const std::string &e) {
    StringNode* v = new StringNode;
    v->elem = e;
    v->next = head;
    head = v;
}

void StringLinkedList::removeFront(){
    StringNode* old = head;
    head = old->next;
    delete old;
}
