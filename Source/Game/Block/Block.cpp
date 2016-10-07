#include "block.h"

#include <iostream>

namespace Block
{
    Block_Base :: Block_Base( bool isOpaque )
    :   m_isOpaque ( isOpaque )
    {
    }

    Vector2 Block_Base :: getTextureTop () const
    {
        return { 0, 0 };
    }

    Vector2 Block_Base :: getTextureSide () const
    {
        return { 0, 0 };
    }

    Vector2 Block_Base :: getTextureBottom () const
    {
        return { 0, 0 };
    }

    bool Block_Base :: isOpaque () const
    {
        return m_isOpaque;
    }

} //Namespace Block