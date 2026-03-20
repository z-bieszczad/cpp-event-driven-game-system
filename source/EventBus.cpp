#include "EventBus.h"


void EventBus::subscribe(void(*callback)(IEvent*)){
    subscribers.push_back(callback);
}


void EventBus:: emit(IEvent* event){
    events.push(event);
}

void EventBus:: processEvents(){
    while(!events.empty()){
        IEvent* e=events.front();
        events.pop();

        for(auto sub: subscribers){
            sub(e);
        }

        delete e;

    }
}



