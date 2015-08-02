#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Node;
class CameraNode;
class GeometryNode;
class LightNode;
class MaterialNode;

class NodeVisitor {
public:
    virtual void visit(Node &node) = 0;
    virtual void visit(CameraNode &node) = 0;
    virtual void visit(GeometryNode &node) = 0;
    virtual void visit(LightNode &node) = 0;
    virtual void visit(MaterialNode &node) = 0;
};

class Node {
    std::vector<std::shared_ptr<Node> > m_children;

public:
    void addNode(std::shared_ptr<Node> node) {
        m_children.push_back(node);
    }

    void traverse(NodeVisitor &visitor) {
        this->acceptVisitor(visitor);
        for(auto &child : m_children) {
            child->traverse(visitor);
        }
    }
protected:
    virtual void acceptVisitor(NodeVisitor &visitor) {
        visitor.visit(*this);
    }
};

class CameraNode : public Node {
public:
    void acceptVisitor(NodeVisitor &visitor) {
        visitor.visit(*this);
    }
};

class GeometryNode : public Node {
public:
    void acceptVisitor(NodeVisitor &visitor) {
        visitor.visit(*this);
    }
};

class LightNode : public Node  {
public:
    void acceptVisitor(NodeVisitor &visitor) {
        visitor.visit(*this);
    }
};

class MaterialNode : public Node  {
public:
    void acceptVisitor(NodeVisitor &visitor) {
        visitor.visit(*this);
    }
};



class NodePrintVisitor : public NodeVisitor {
public:
    virtual void visit(Node &node)
    {
        std::cout << "Visit node" << std::endl;
    }

    virtual void visit(CameraNode &node)
    {
        std::cout << "Visit camera node" << std::endl;
    }

    virtual void visit(GeometryNode &node)
    {
        std::cout << "Visit geometry node" << std::endl;
    }

    virtual void visit(LightNode &node)
    {
        std::cout << "Visit light node" << std::endl;
    }

    virtual void visit(MaterialNode &node)
    {
        std::cout << "Visit material node" << std::endl;
    }
};

int main()
{

    auto root = std::make_shared<Node>();
    auto camera = std::make_shared<CameraNode>();

    camera->addNode(std::make_shared<LightNode>());
    camera->addNode(std::make_shared<MaterialNode>());
    camera->addNode(std::make_shared<GeometryNode>());

    root->addNode(camera);

    NodePrintVisitor visitor;
    root->traverse(visitor);

    return 0;
}


