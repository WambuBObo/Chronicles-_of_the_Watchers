#ifndef SAVELOADMECHANISM_H
#define SAVELOADMECHANISM_H

// Function to save player progress to a JSON file
void saveProgress(const char *filename, const char *progressData);

// Function to load player progress from a JSON file
char *loadProgress(const char *filename);

#endif // SAVELOADMECHANISM_H

