#ifndef ERRORHANDLING_H
#define ERRORHANDLING_H

#include <stdbool.h>

// Function to validate script syntax
bool validateScriptSyntax(const char *script);

// Function to validate player choices
bool validatePlayerChoice(int choiceID, const char *script);

// Function to handle script errors
void handleScriptError(const char *errorMessage);

#endif // ERRORHANDLING_H

