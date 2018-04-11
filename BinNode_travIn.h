#pragma once

#include "BinNode_travIn_I1.h"
#include "BinNode_travIn_I2.h"
#include "BinNode_travIn_I3.h"
#include "BinNode_travIn_I4.h"
#include "BinNode_travIn_R.h"

template <typename T>
template <typename VST>
void BinNode<T>::travIn(VST& visit)
{
    switch ( rand() % 5)
    {
        case 1: travIn_I1(this, visit); break;
        case 2: travIn_I2(this, visit); break;
        case 3: travIn_I3(this, visit); break;
        case 4: travIn_I4(this, visit); break;
        default: travIn_R(this, visit); break;
    }

}