#ifndef INPUT_H
#define INPUT_H

#include <stdbool.h>

typedef enum
{
    YES,
    NO
} YesOrNo;

YesOrNo input_choice(char* message, YesOrNo default_choice);
int input_multiple_choice(char* message, char* options[], int options_length);

#endif // INPUT_H