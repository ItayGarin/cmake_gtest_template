/**********************************************************************/
/** @file   greeter.h
 ** @brief  Greeter API -a very cheerful greeting module
 ** @author itayg
 *************************************************************************/

#ifndef _GREETER_H_
#define _GREETER_H_

#ifdef __cplusplus
extern "C" {
#endif

/*************************************************************************/
/**************************** API SECTIION *******************************/
/*************************************************************************/

typedef enum
{
    GREETER_SUCCESS,
    GREETER_MALLOC_FAILED,
    GREETER_FAILURE,
} greeter_retval;

typedef struct
{
    const char * greet_string;
} greeter_t;

/** init_greeter greeter "class" constructor
 **
 ** @param greet_string - the string that the greeter will use to greet his surrondings
 ** @param result_greeter - the ready to use greeter (allocating internally)
 ** @return returns the error code
 **/
greeter_retval init_greeter(const char * greet_string,
                            greeter_t ** result_greeter);

/** destroy_greeter - greeter "class" destructor
 **
 ** @param result_greeter - the greeter that needs to be destroyed (free internally)
 **/
void destroy_greeter(greeter_t * greeter);

/** greet greets upon request
 **
 ** @param greeter - greeter that will be used for greeting
 ** @return returns the error code
 **/
greeter_retval greet(greeter_t * greeter);

#ifdef __cplusplus
}
#endif

#endif /* _GREETER_H_ */
