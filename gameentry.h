#ifndef GAMEENTRY_H
#define GAMEENTRY_H
#include <iostream>

class GameEntry
{
public:
    GameEntry(const std::string& n="", int s=0);
    std::string getName() const;
    int getScore() const;

private:
    std::string name;
    int score;
};

#endif // GAMEENTRY_H
