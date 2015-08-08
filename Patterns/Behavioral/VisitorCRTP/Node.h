#ifndef NODE_H
#define NODE_H

#include <memory>
#include <vector>

class NodeVisitor;

class VisitableNode {
    std::vector<std::shared_ptr<VisitableNode> > m_children;
public:
    virtual void accept(NodeVisitor &) = 0;

    std::vector<std::shared_ptr<VisitableNode> > &children() {
        return m_children;
    }
};

template <class Derived>
class BaseNode : public VisitableNode {
public:
    void accept(NodeVisitor &visitor) {
        visitor.visit(static_cast<Derived&>(*this));
    }
};

#endif // NODE_H

