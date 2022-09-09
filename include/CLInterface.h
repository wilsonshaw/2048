#pragma onece 
#define CLI_EXPORT __declspec(dllexport)
#include <stdbool.h>
#ifdef __cplusplus
extern "C"
{
#endif
    bool CLI_EXPORT CLIMain();
#ifdef __cplusplus
}
#endif