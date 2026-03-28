#include "QuestJournal.h"

void QuestJournal:: addQuest(const Quest& q){
    quests.push_back(q);
    size+=1;
}

Quest& QuestJournal:: operator[](size_t index){
    return quests[index];
}

const Quest& QuestJournal:: operator[](size_t index)const{
    return quests[index];
}

QuestHandle QuestJournal::operator()(const std::string name){
    for(auto q: quests){
        if(q.getName()==name){
            return QuestHandle(&q);
        }
    }
}

