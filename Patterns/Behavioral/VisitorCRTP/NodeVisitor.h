#ifndef NODEVISITOR_H
#define NODEVISITOR_H

#include "Nodes.h"

class NodeVisitor
{
public:
    virtual void visit(CameraNode &) = 0;
    virtual void visit(GeometryNode &) = 0;
    virtual void visit(LightNode &) = 0;
    virtual void visit(MaterialNode &) = 0;
    virtual void visit(Node &) = 0;
};

#endif // NODEVISITOR_H
