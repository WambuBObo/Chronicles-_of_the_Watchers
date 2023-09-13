// scalabilityExtensibility.c

#include <stdio.h>

// Define a structure for a story chapter
typedef struct {
    int chapterNumber;
    char title[100];
    char content[1000];
} StoryChapter;

// Define a function to load and display a new chapter
void loadChapter(StoryChapter chapter) {
    printf("Chapter %d: %s\n", chapter.chapterNumber, chapter.title);
    printf("--------------------------------------------------\n");
    printf("%s\n", chapter.content);
    printf("--------------------------------------------------\n");
}

int main() {
    // Simulate loading a new chapter from a file or database
    StoryChapter newChapter;

    newChapter.chapterNumber = 6;
    strcpy(newChapter.title, "The Mysterious Cave");
    strcpy(newChapter.content, "You find yourself standing at the entrance of a dark and mysterious cave...");

    // Load and display the new chapter
    loadChapter(newChapter);

    // You can continue to add new chapters and story arcs using this approach without modifying the core engine code.

    return 0;
}

