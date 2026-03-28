

#include <iostream>
#include <string>

#include "EventBus.h"
#include "Enemy.h"
#include "Player.h"
#include "ScoreSystem.h"
#include "LootSystem.h"
#include "SoundSystem.h"

#include "QuestSystem.h"

int main() {
    EventBus bus;

    QuestSystem questSystem;

    bus.subscribe(&ScoreSystem::handleEvent);
    bus.subscribe(&LootSystem::handleEvent);
    bus.subscribe(&SoundSystem::handleEvent);
    bus.subscribe(&QuestSystem::handleEvent);

    QuestSystem::setInstance(&questSystem);

    questSystem.journal().addQuest(Quest("Pierwsza krew", 1));
    questSystem.journal().addQuest(Quest("Łupieżca", 2));

    Enemy enemy1(1, 50, bus);
    Enemy enemy2(2, 30, bus);
    Player player(1, 100, bus);

    enemy1.takeDamage(60);      // kill
    player.pickItem("Miecz");
    player.pickItem("Tarcza");

    bus.processEvents();

    std::cout << "=== QUESTS ===\n";
    std::cout << questSystem.journal()[0].getName()
              << " progress=" << questSystem.journal()[0].getProgress()
              << "/" << questSystem.journal()[0].getRequired()
              << " done=" << questSystem.journal()[0].isCompleted()
              << "\n";

    QuestHandle handle = questSystem.journal()("Łupieżca");
    std::cout << handle->getName()
              << " progress=" << handle->getProgress()
              << "/" << handle->getRequired()
              << " done=" << handle->isCompleted()
              << "\n";

    return 0;
}

