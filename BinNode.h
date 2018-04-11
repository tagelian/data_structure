#pragma once
#define BinNodePosi(T) BinNode<T>*
#define stature(p) ((p) ? (p).height : -1) 
typedef enum {RB_RED, RB_BLACK} RBColor;

template <typename T> struct BinNode
{
    T data;
    BinNodePosi(T) parent;
    BinNodePosi(T) lc;
    BinNodePosi(T) rc;
    int height;
    int npl;
    RBColor color;

    //constructor function
    BinNode():
        parent(nullptr), lc(nullptr), rc(nullptr), height(0), npl(0), color(RB_RED) {}
    BinNode(T e, BinNodePosi(T) p = nullptr, BinNodePosi(T) lc = nullptr, BinNodePosi(T) rc = nullptr, int h = 0, int l = 1, RBColor c = RB_RED):
        data(e), parent(p), lc(lc), rc(rc), height(h), npl(l), color(c) {}
    
    //interfaces functions declarations
    int size();
    BinNodePosi(T) insertAsLc(T const&);
    BinNodePosi(T) insertAsRc(T const&);
    BinNodePosi(T) succ();
    template <typename VST> void travLevel(VST&);
    template <typename VST> void travPre(VST&);
    template <typename VST> void travIn(VST&);
    template <typename VST> void travPost(VST&);

    //comparison operators
    bool operator< (BinNode const& bn) {return data < bn.data;}
    bool operator== (BinNode const& bn) {return data == bn.data;}
    
};
