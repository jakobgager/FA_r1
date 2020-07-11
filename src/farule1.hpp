#ifndef farule1
#define farule1

#include <string>
#include <array>

#ifdef __cplusplus
extern "C" {
#endif

//declaration of compute
std::array<float,2> compute(const std::array<float,2> &invec);
//declaration of identify
std::string identify();

#ifdef __cplusplus
}
#endif

#endif