#include "SaveLoadMechanism.h" // Include the header file for SaveLoadMechanism
#include <stdio.h>
#include <stdlib.h>

// Function to save player progress to a JSON file
void saveProgress(const char *filename, const char *progressData) {
    FILE *file = fopen(filename, "w"); // Open the file for writing

    if (file != NULL) {
        // Write the progressData to the file
        fprintf(file, "%s", progressData);

        // Close the file
        fclose(file);
    } else {
        // Handle error: unable to open file for writing
        // You can log an error message or take appropriate action
    }
}

// Function to load player progress from a JSON file
char *loadProgress(const char *filename) {
    FILE *file = fopen(filename, "r"); // Open the file for reading

    if (file != NULL) {
        // Calculate the file size
        fseek(file, 0, SEEK_END);
        long fileSize = ftell(file);
        fseek(file, 0, SEEK_SET);

        // Allocate memory to store the file content
        char *progressData = (char *)malloc(fileSize + 1);

        if (progressData != NULL) {
            // Read the file content into progressData
            fread(progressData, 1, fileSize, file);
            progressData[fileSize] = '\0'; // Null-terminate the string

            // Close the file
            fclose(file);

            return progressData; // Return the loaded progress data
        } else {
            // Handle error: unable to allocate memory
            // You can log an error message or take appropriate action
        }
    } else {
        // Handle error: unable to open file for reading (possibly no progress saved yet)
        // You can log an error message or take appropriate action
    }

    return NULL; // Return NULL if loading progress fails
}

