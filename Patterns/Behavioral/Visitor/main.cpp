#include <iostream>
#include <memory>
#include <vector>

using namespace std;

#include "NodeVisitor.h"
#include "Nodes.h"

class NodePrintVisitor : public NodeVisitor {
public:
    void visit(CameraNode &)
    {
        std::cout << "Camera Node visited!" << std::endl;
    }

    void visit(LightNode &)
    {
        std::cout << "Light Node visited!" << std::endl;
    }

    void visit(MaterialNode &)
    {
        std::cout << "Material Node visited!" << std::endl;
    }

    void visit(Node &)
    {
        std::cout << "Node visited!" << std::endl;
    }

    void visit(GeometryNode &)
    {
        std::cout << "Geometry Node visited!" << std::endl;
    }
};

int main()
{
    std::vector<std::shared_ptr<Node> > nodes;

    nodes.push_back(std::make_shared<CameraNode>());
    nodes.push_back(std::make_shared<LightNode>());
    nodes.push_back(std::make_shared<MaterialNode>());
    nodes.push_back(std::make_shared<Node>());
    nodes.push_back(std::make_shared<GeometryNode>());
    nodes.push_back(std::make_shared<GeometryNode>());

    NodePrintVisitor visitor;

    for(auto node : nodes) {
        node->accept(visitor);
    }

    return 0;
}


