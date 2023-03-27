#ifndef DCII_MANIP
#define DCII_MANIP

#ifndef size_t
#define size_t unsigned long
#endif

#ifndef uchar
#define uchar unsigned char
#endif

#ifndef bool
#define bool uchar
#endif

#ifndef true
#define true (bool)1
#endif

#ifndef false
#define false (bool)0
#endif

bool compare_csstr(uchar* left, uchar* right, size_t leftLength, size_t rightLength);
bool compare_ntcsstr(uchar* left, uchar* right);
#endif
