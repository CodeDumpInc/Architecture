#ifndef NODEVISITOR_H
#define NODEVISITOR_H

class Node;
class CameraNode;
class GeometryNode;
class LightNode;
class MaterialNode;

class NodeVisitor {
public:
    virtual ~NodeVisitor() {}
    virtual void visit(Node &node) = 0;
    virtual void visit(CameraNode &node) = 0;
    virtual void visit(GeometryNode &node) = 0;
    virtual void visit(LightNode &node) = 0;
    virtual void visit(MaterialNode &node) = 0;
};

#endif // NODEVISITOR_H
