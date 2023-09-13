#ifndef STORYSCRIPT_H
#define STORYSCRIPT_H

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 200
#define MAX_CHARACTER_LENGTH 50
#define MAX_TEXT_LENGTH 500
#define MAX_CHOICES 10

// Define a structure to represent a scene
typedef struct {
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
} Scene;

// Define a structure to represent dialogue
typedef struct {
    char character[MAX_CHARACTER_LENGTH];
    char text[MAX_TEXT_LENGTH];
} Dialogue;

// Define a structure to represent a choice
typedef struct {
    int id;
    char text[MAX_TEXT_LENGTH];
    char targetScene[MAX_NAME_LENGTH];
} Choice;

// Define an array of scenes, dialogues, and choices
extern Scene scenes[];
extern Dialogue dialogues[];
extern Choice choices[];

// Function prototypes for StoryScript functions
Scene* getSceneByName(const char* name);
Dialogue* getDialogueByCharacter(const char* character);
Choice* getChoiceById(int id);

// Add more function prototypes for handling StoryScript as needed

#endif // STORYSCRIPT_H

