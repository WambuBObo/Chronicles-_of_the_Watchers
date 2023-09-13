#ifndef LOCALIZATIONSUPPORT_H
#define LOCALIZATIONSUPPORT_H

// Function to dynamically load localization files based on language
void loadLocalizationFile(const char* language);

// Function to swap text and assets based on the selected language
void swapTextAndAssetsForLanguage(const char* language);

// Function to set the player's selected language
void setPlayerLanguage(const char* language);

// Function to retrieve the player's selected language
const char* getPlayerLanguage();

#endif // LOCALIZATIONSUPPORT_H

