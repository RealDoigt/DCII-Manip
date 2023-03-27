module dcii_manip;

auto compare(ref ubyte[] left, ref ubyte[] right)
{
    if (left.length != right.length) return false;
    
    for (size_t i; i < left.length; ++i)
        if (left[i] != right [i]) return false;
        
    return true;
}

auto compareCase(ubyte* left, ubyte* right, size_t leftLength, size_t rightLength)
{
    if (leftLength != rightLength) return false;
    
    for (size_t i; i < leftLength; ++i)
        if (left[i] != right[i]) return false;
    
    return true;
}

auto compare(ubyte* left, ubyte* right)
{
    for (size_t i; left[i] != 0 && right[i] != 0; ++i)
        if (left[i] != right[i]) return false;
        
    return true;
}