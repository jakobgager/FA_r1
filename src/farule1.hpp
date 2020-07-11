#ifndef farule1
#define farule1

#include <string>
#include <array>

using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

//declaration of compute
array<float,2> compute(const array<float,2> &invec);
//declaration of identify
string identify();

#ifdef __cplusplus
}
#endif

#endif