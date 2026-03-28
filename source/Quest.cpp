#include "Quest.h"

std::string Quest:: getName(){
    return name;
}

int Quest:: getRequired(){
    return maxProgress;
}

int Quest:: getProgress(){
    return progress;
}

bool Quest:: isCompleted(){
    return state;
}

void Quest:: setProgress(int val){
    if(progress+val>=maxProgress){
        state=true;
        progress=maxProgress;
    }else{
        progress=progress+val;
    }
}


