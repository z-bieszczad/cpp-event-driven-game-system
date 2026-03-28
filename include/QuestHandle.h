#pragma once
#include "Quest.h"

class QuestHandle{
public:
    //QuestHandle(std::string name);
    QuestHandle(Quest *q);
    Quest* operator->();
    ~QuestHandle();

private:
    Quest *quest;

};