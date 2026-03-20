#pragma once
#include <vector>
#include <queue>
#include "IEvent.h"

class EventBus{
public:
    void subscribe(void(*callback)(IEvent*));
    void emit(IEvent* event);
    void processEvents();
    
private:
    std::queue<IEvent*> events;
    std::vector<void(*)(IEvents)> subscribers;

};