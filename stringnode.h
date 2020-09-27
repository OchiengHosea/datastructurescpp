#ifndef STRINGNODE_H
#define STRINGNODE_H

#include <string>
class StringNode
{
public:
    StringNode();
private:
    std::string elem;
    StringNode* next;

    friend class StringLinkedList;
};

#endif // STRINGNODE_H
