#ifndef NARRATIVEENGINE_H
#define NARRATIVEENGINE_H

// Define maximum lengths for various text fields
#define MAX_DESCRIPTION_LENGTH 200
#define MAX_SCENE_NAME_LENGTH 50
#define MAX_CHARACTER_NAME_LENGTH 50
#define MAX_TEXT_LENGTH 500
#define MAX_CHOICE_TEXT_LENGTH 200
#define MAX_SEGMENT_NAME_LENGTH 50

// Define the maximum number of choices
#define MAX_CHOICES 100

// Define scene and choice IDs for specific segments
#define QUEST_START_SEGMENT_ID 1
#define QUEST_INFO_SEGMENT_ID 2

// Include necessary header files
#include "StoryScript.h"
#include "Choice.h"
#include "Scene.h"
#include "PlayerProgress.h"
#include "NarrativeEvents.h"
#include "DynamicContentLoading.h"
#include "PlayerInteraction.h"

// Function prototypes for NarrativeEngine functions
void initializeNarrativeEngine();
void setNextSegment(const char* segmentName);
void startNarrative();
void updateNarrative();

#endif // NARRATIVEENGINE_H

