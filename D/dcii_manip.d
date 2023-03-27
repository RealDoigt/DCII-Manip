module dcii_manip;

auto compareCaseSensitive(ref ubyte[] left, ref ubyte[] right)
{
    if (left.length != right.length) return false;
    
    for (size_t i; i < left.length; ++i)
        if (left[i] != right [i]) return false;
        
    return true;
}
