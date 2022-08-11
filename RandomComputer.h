#ifndef RandomComputer_H
#define RandomComputer_H
#include <string>
#include "Player.h"
#include <vector>

class RandomComputer : public Player {
public:
RandomComputer();
std::string performMove();
void addAnswer(std::string ans);
~RandomComputer();

private:
int handInt;
std::vector<std::string> userAnswers;

};
#endif
