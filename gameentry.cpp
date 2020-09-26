#include "gameentry.h"
#include <iostream>

GameEntry::GameEntry(const std::string& n, int s): name(n), score(s){}

std::string GameEntry::getName() const {return name;}
int GameEntry::getScore() const {return score;}
