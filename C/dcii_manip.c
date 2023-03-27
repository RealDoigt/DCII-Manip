#include "dcii_manip.h"

bool compare_csstr(uchar* left, uchar* right, size_t leftLength, size_t rightLength)
{
    if (leftLength != rightLength) return false;
    
    for (size_t i; i < leftLength; ++i)
        if (left[i] != right[i]) return false;
    
    return true;
}

bool compare_ntcsstr(uchar* left, uchar* right)
{
    for (size_t i; left[i] != 0 && right[i] != 0; ++i)
        if (left[i] != right[i]) return false;
        
    return true;
}
