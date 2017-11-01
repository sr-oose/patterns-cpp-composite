#ifndef NODES_H_
#define NODES_H_

#include <memory>
#include <vector>
#include <iostream>

class TreeNode;
using TreeNodePtr = std::shared_ptr<TreeNode>;

class TreeNode {
public:
	virtual void visit() = 0;

	virtual void addChild(TreeNodePtr child){
		children.push_back(child);
	}

	virtual ~TreeNode() = default;

protected:
	std::vector<TreeNodePtr> children;
};

class CompositeNode : public TreeNode {
	virtual void visit() override {
		std::cout << "Composite node visited." << std::endl;
		for (auto node : children)
			node->visit();
	}
};


class Leaf : public TreeNode {
	virtual void visit() override {
		std::cout << "Leaf visited." << std::endl;
	}
};

#endif
