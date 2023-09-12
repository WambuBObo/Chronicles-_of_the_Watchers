#include "choice.h"

// Define a structure to represent a choice
typedef struct {
    int id;
    char description[MAX_DESCRIPTION_LENGTH];
    int destinationSegmentID;
} Choice;

// Array to store choices
Choice choices[MAX_CHOICES];

// Initialize choices
void initializeChoices() {
    // Initialize choices here based on JSON data or other sources
    // Example:
    choices[0].id = 1;
    strcpy(choices[0].description, "Go on the quest");
    choices[0].destinationSegmentID = QUEST_START_SEGMENT_ID;
    
    choices[1].id = 2;
    strcpy(choices[1].description, "Ask for more information");
    choices[1].destinationSegmentID = QUEST_INFO_SEGMENT_ID;
}

// Get a choice by its ID
Choice getChoiceById(int choiceId) {
    for (int i = 0; i < MAX_CHOICES; i++) {
        if (choices[i].id == choiceId) {
            return choices[i];
        }
    }
    // Return an empty choice if not found
    Choice emptyChoice = {0, "", 0};
    return emptyChoice;
}

