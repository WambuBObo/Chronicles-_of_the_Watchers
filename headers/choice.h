#ifndef CHOICE_H
#define CHOICE_H

#include <stdio.h>
#include <string.h>

#define MAX_CHOICES 10
#define MAX_DESCRIPTION_LENGTH 256
#define QUEST_START_SEGMENT_ID 1001
#define QUEST_INFO_SEGMENT_ID 1002

// Define a structure to represent a choice
typedef struct {
    int id;
    char description[MAX_DESCRIPTION_LENGTH];
    int destinationSegmentID;
} Choice;

// Array to store choices
extern Choice choices[MAX_CHOICES];

// Initialize choices
void initializeChoices();

// Get a choice by its ID
Choice getChoiceById(int choiceId);

// Other choice-related functions can be added here

#endif // CHOICE_H

