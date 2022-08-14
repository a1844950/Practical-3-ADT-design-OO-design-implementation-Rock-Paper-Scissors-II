#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>

class Computer {
   public:
       Computer();
       Computer(std::string);
       std::string getName();
       virtual std::string performMove();
       virtual void setCtr(int); // Used only in crescendo fisftfull and paperdoll
       virtual void addAnswer(std::string); // used only in AdvancedComputer
       ~Computer();
      
   private:
       std::string name;
      
};

#endif
