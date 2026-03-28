#include "QuestHandle.h"

QuestHandle:: QuestHandle(Quest *q){
    quest=q;
}

Quest* QuestHandle:: operator->(){
    return quest;
}

QuestHandle::~QuestHandle(){
    delete[] quest;
}