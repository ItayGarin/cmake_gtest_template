/**********************************************************************/
/** @file   greeter.h
 ** @brief  Greeter Implementation - a very cheerful greeting module
 ** @author itayg
 *************************************************************************/

/*************************************************************************/
/************************** INCLUDE SECTIION *****************************/
/*************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "../include/greeter.h"

/*************************************************************************/
/**************************** CODE SECTIION *******************************/
/*************************************************************************/

greeter_retval init_greeter(const char * greet_string,
                            greeter_t ** result_greeter)
{
    greeter_t * returned_greeter = NULL;

    returned_greeter = malloc(sizeof(greeter_t));
    if (NULL == returned_greeter)
    {
        printf("ERROR! Failed to allocate memory for the greeter\n");
        return GREETER_FAILURE;
    }

    returned_greeter->greet_string = greet_string;
    *result_greeter = returned_greeter;

    return GREETER_SUCCESS;
}

void destroy_greeter(greeter_t * greeter)
{
    free((greeter_t *) greeter);
}

greeter_retval greet(greeter_t * greeter)
{
    printf("%s", greeter->greet_string);
    return GREETER_SUCCESS;
}
