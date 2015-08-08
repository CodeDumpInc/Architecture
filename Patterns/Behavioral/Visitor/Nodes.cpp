#include "Nodes.h"
#include "NodeVisitor.h"

void Node::accept(NodeVisitor &visitor) {
    visitor.visit(*this);
}

void CameraNode::accept(NodeVisitor &visitor) {
    visitor.visit(*this);
}

void GeometryNode::accept(NodeVisitor &visitor) {
    visitor.visit(*this);
}

void LightNode::accept(NodeVisitor &visitor) {
    visitor.visit(*this);
}

void MaterialNode::accept(NodeVisitor &visitor) {
    visitor.visit(*this);
}
