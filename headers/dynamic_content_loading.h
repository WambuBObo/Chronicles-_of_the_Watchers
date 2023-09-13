#ifndef DYNAMICCONTENTLOADING_H
#define DYNAMICCONTENTLOADING_H

#include "Image.h" // Include headers for required data structures (e.g., Image, Audio)
#include "Audio.h"
#include "TextContent.h"

// Function prototypes for DynamicContentLoading functions
char* loadTextContent(const char* segmentId);
Image* loadImageAssets(const char* segmentId);
Audio* loadAudioAssets(const char* segmentId);

// Add more function prototypes for loading dynamic content as needed

#endif // DYNAMICCONTENTLOADING_H

