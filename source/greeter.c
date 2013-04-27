/**********************************************************************/
/** @file   greeter.h
 ** @brief  Greeter Implementation - a very cheerful greeting module
 ** @author itayg
 *************************************************************************/

/*************************************************************************/
/************************** INCLUDE SECTIION *****************************/
/*************************************************************************/

#include "../include/greeter.h"

/*************************************************************************/
/**************************** CODE SECTIION *******************************/
/*************************************************************************/

greeter_retval init_greeter(const char * greet_string,
                            greeter_t * result_greeter)
{
    return GREETER_SUCCESS;
}

void destroy_greeter(const greeter_t * greeter)
{
    return;
}

greeter_retval greet(greeter_t * greeter)
{
    return GREETER_SUCCESS;
}
