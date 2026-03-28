#pragma once
#include <string>

class Quest{
public:
    Quest(std::string name, int maxprg):name(name),maxProgress(maxprg){}

    std::string getName();
    int getRequired();
    int getProgress();
    bool isCompleted();
    void setProgress(int val);


private:
    std::string name;
    int maxProgress;
    int progress=0;
    bool state=false;
};