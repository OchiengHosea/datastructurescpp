#ifndef SCORES_H
#define SCORES_H

#include "gameentry.h"
class Scores
{
public:
    Scores(int maxEnt = 10);
    ~Scores();
    void add(const GameEntry& e);
    void insertionSort(char* A, int n);
    GameEntry remove(int i);

private:
    int maxEntries;
    int numEntries;
    GameEntry* entries;
};

#endif // SCORES_H
