#include "StoryScript.h" // Include the header file for StoryScript

// Define a structure to represent a scene
typedef struct {
    char name[50]; // Name of the scene
    char description[200]; // Description of the scene
} Scene;

// Define a structure to represent dialogue
typedef struct {
    char character[50]; // Character speaking
    char text[500]; // Dialogue text
} Dialogue;

// Define a structure to represent a choice
typedef struct {
    int id; // Unique identifier for the choice
    char text[200]; // Choice text
    char targetScene[50]; // Name of the scene this choice leads to
} Choice;

// Define an array of scenes, dialogues, and choices
Scene scenes[] = {
    {"intro", "Welcome to the adventure!"},
    // Add more scenes here as needed
};

Dialogue dialogues[] = {
    {"John", "Welcome to the adventure!"},
    // Add more dialogues here as needed
};

Choice choices[] = {
    {1, "Go on the quest", "quest_start"},
    {2, "Ask for more information", "quest_info"},
    // Add more choices here as needed
};

// Function to retrieve a scene by name
Scene* getSceneByName(const char* name) {
    for (int i = 0; i < sizeof(scenes) / sizeof(scenes[0]); i++) {
        if (strcmp(scenes[i].name, name) == 0) {
            return &scenes[i];
        }
    }
    return NULL; // Scene not found
}

// Function to retrieve a dialogue by character
Dialogue* getDialogueByCharacter(const char* character) {
    for (int i = 0; i < sizeof(dialogues) / sizeof(dialogues[0]); i++) {
        if (strcmp(dialogues[i].character, character) == 0) {
            return &dialogues[i];
        }
    }
    return NULL; // Dialogue not found
}

// Function to retrieve a choice by ID
Choice* getChoiceById(int id) {
    for (int i = 0; i < sizeof(choices) / sizeof(choices[0]); i++) {
        if (choices[i].id == id) {
            return &choices[i];
        }
    }
    return NULL; // Choice not found
}

