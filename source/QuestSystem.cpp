#include "QuestSystem.h"

QuestSystem* QuestSystem::instance = nullptr;

QuestJournal& QuestSystem:: journal(){
    return jou;
}

void QuestSystem:: setInstance(const QuestSystem* qs){
    instance=new QuestSystem;
}


void QuestSystem:: handleEvent(IEvent* e){
    int a=5;
}

QuestSystem::~QuestSystem(){
    delete instance;
}

