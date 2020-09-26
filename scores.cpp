#include "scores.h"
#include "gameentry.h"
#include <stdexcept>
#include <iostream>
Scores::Scores(int maxEnt)
{
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
    std::cout << "Scores initialized and has " +std::to_string(this->numEntries) + " Entries"<< std::endl;
}

Scores::~Scores() {
    delete[] entries;
}

void Scores::add(const GameEntry &e) { // add Game entry
    int newScore = e.getScore(); // get the score to be added
    if(numEntries == maxEntries) { // check if array is full
        if(newScore <= entries[maxEntries - 1].getScore()) // check if high
            return; // not high enough
    } else numEntries++; // increment number of entries

    int i = numEntries - 2; // starting from second last
    while(i >= 0 && newScore > entries[i].getScore()) {
        entries[i+1]=entries[i]; // right shift entries
        i--;
    }
    entries[i+1] = e; // put e in the empty spot
    std::cout << "Entry of score " + std::to_string(e.getScore()) + " added, current entries is: " + std::to_string(numEntries) << std::endl;
}

GameEntry Scores::remove(int i) {
    // remove ad return the game entry e at index i in the entries array
    // should hrow an out of bounds exception where required otherwise
    // all objects previously stored in indices higher than i are left shifted
    if ((i < 0) || (i >= numEntries))
        throw std::out_of_range("Invalid index");
    GameEntry e = entries[i];
    for (int j = i+1; j < numEntries; j++)
        entries[j-1] = entries[j];
    numEntries--;
    std::cout << "Entry of score" + std::to_string(e.getScore()) + " removed, current entries is: " + std::to_string(numEntries) << std::endl;
    return e;
}

void Scores::insertionSort(char *A, int n){
    for (int i = 1; i <= n; i++) {
        char cur = A[i];
        int j = i - 1;
        while (j >= 0 && (A[j] > cur)) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = cur;
    }
}

