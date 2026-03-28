#pragma once
#include "Quest.h"
#include <vector>
#include "QuestHandle.h"

class QuestJournal{
public:
    void addQuest(const Quest& q);
    Quest& operator[](size_t index);
    const Quest& operator[](size_t index)const;
    QuestHandle operator()(const std::string name);
    int getSize();



private:
    std::vector<Quest> quests;
    int size;

};