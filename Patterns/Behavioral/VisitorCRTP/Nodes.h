#ifndef NODES_H
#define NODES_H

#include "Node.h"

class CameraNode : public BaseNode<CameraNode> {};
class LightNode : public BaseNode<LightNode> {};
class MaterialNode : public BaseNode<MaterialNode> {};
class Node : public BaseNode<Node> {};
class GeometryNode : public BaseNode<GeometryNode> {};

#endif // NODES_H

