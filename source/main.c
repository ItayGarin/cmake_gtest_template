/**********************************************************************/
/** @file   main.h
 ** @brief  Main File - contains the high level calling logic
 ** @author itayg
 *************************************************************************/

/*************************************************************************/
/************************** INCLUDE SECTIION *****************************/
/*************************************************************************/

#include <stdio.h>
#include "../include/greeter.h"

/*************************************************************************/
/**************************** CODE SECTIION *******************************/
/*************************************************************************/

int main(int argc, const char * const argv)
{
    greeter_retval return_value = GREETER_SUCCESS;
    greeter_t * greeter = NULL;

    /* init a greeter */
    return_value = init_greeter("Hello World !\n", &greeter);
    if (GREETER_SUCCESS != return_value)
    {
        printf("ERROR: Failed to init the greeter\r\n");
        goto cleanup;
    }

    /* invoke greet */
    return_value = greet(greeter);
    if (GREETER_SUCCESS != return_value)
    {
        printf("ERROR: Failed to greet\r\n");
        goto cleanup;
    }

cleanup:
    destroy_greeter(greeter);
}
