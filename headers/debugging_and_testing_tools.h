#ifndef DEBUGGINGANDTESTINGTOOLS_H
#define DEBUGGINGANDTESTINGTOOLS_H

// Function to initialize the developer console
void initDeveloperConsole();

// Function to log script execution
void logScriptExecution(const char* script);

// Function to log choice selection
void logChoiceSelection(int choiceID);

// Function to log variable values
void logVariableValue(const char* variableName, const char* value);

// Function to provide traceability for debugging
void traceScriptExecution(const char* script);

#endif // DEBUGGINGANDTESTINGTOOLS_H

