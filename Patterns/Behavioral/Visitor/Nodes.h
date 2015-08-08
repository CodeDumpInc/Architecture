#ifndef NODES_H
#define NODES_H

class NodeVisitor;

class Node {
public:
    virtual void accept(NodeVisitor &visitor);
};

class CameraNode : public Node {
public:
    void accept(NodeVisitor &visitor);
};

class GeometryNode : public Node {
public:
    void accept(NodeVisitor &visitor);
};

class LightNode : public Node  {
public:
    void accept(NodeVisitor &visitor);
};

class MaterialNode : public Node  {
public:
    void accept(NodeVisitor &visitor);
};


#endif // NODES_H
