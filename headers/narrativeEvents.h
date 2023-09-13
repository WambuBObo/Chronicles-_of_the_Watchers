#ifndef NARRATIVEEVENTS_H
#define NARRATIVEEVENTS_H

#include "PlayerProgress.h" // Include the necessary header file

#define MAX_EVENT_NAME_LENGTH 50

// Define a structure to represent narrative events
typedef struct {
    int eventId; // Unique identifier for the event
    char eventName[MAX_EVENT_NAME_LENGTH]; // Name/description of the event
    // Add more event data as needed
} NarrativeEvent;

// Function prototypes for NarrativeEvents functions
void triggerNarrativeEvent(PlayerProgress* progress, int choiceId);
void handleCharacterInteraction(PlayerProgress* progress, const char* characterName);
void handlePlotTwist(PlayerProgress* progress);
void handleQuestTrigger(PlayerProgress* progress, const char* questName);

#endif // NARRATIVEEVENTS_H

