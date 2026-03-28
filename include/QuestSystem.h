#pragma once
#include "QuestJournal.h"
#include "IEvent.h"
#include "EventBus.h"

class QuestSystem{
public:
    QuestJournal& journal();
    static void setInstance(const QuestSystem* qs);
    static void handleEvent(IEvent* e);
    ~QuestSystem();


private:
    QuestJournal jou;
    static QuestSystem* instance;
};