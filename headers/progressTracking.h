#ifndef PROGRESSTRACKING_H
#define PROGRESSTRACKING_H

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_SCENE_LENGTH 50
#define MAX_CHOICES 100

// Define a structure to represent player progress
typedef struct {
    char playerName[MAX_NAME_LENGTH];
    char currentScene[MAX_SCENE_LENGTH];
    int choicesMade[MAX_CHOICES];
    // Add more progress tracking data as needed
} PlayerProgress;

// Function prototypes for ProgressTracking functions
void initializePlayerProgress(PlayerProgress* progress, const char* playerName, const char* startingScene);
void recordChoice(PlayerProgress* progress, int choiceId);
PlayerProgress* getPlayerProgress();
void savePlayerProgress(const PlayerProgress* progress);

// Add more function prototypes for progress tracking as needed

#endif // PROGRESSTRACKING_H

