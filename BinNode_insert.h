#pragma once

template <typename T> BinNodePosi(T) BinNode<T>::inserAsLC(T const& e)
{
    return lc = new BinNode(e, this);
}

template <typename T> BinNodePosi(T) BinNode<T>::inserAsRC(T const& e)
{
    return rc = new BinNode(e, this);
}