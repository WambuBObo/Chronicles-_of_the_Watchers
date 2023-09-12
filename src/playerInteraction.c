#include "PlayerInteraction.h" // Include the header file for PlayerInteraction
#include "NarrativeEngine.h"   // Include the header file for the main NarrativeEngine

// Function to capture player choices
void capturePlayerChoice(int choiceId) {
    // Implement logic to capture and handle the player's choice
    // You can use a switch statement or if-else conditions to determine the next segment
    switch (choiceId) {
        case 1:
            // Handle choice 1
            // Update progress, trigger events, and set the next segment
            setNextSegment("quest_start");
            break;

        case 2:
            // Handle choice 2
            // Update progress, trigger events, and set the next segment
            setNextSegment("quest_info");
            break;

        // Add more cases for other choices as needed

        default:
            // Handle unexpected or invalid choices
            break;
    }
}

// Function to highlight choices on hover (UI behavior)
void highlightChoiceOnHover(int choiceId) {
    // Implement logic to highlight the choice button when the player hovers over it
    // You can change the appearance of the choice button to indicate it's selectable
}

