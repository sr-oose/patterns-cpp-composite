#include "nodes.h"

using namespace std;

int main(){
	TreeNodePtr root = make_shared<CompositeNode>();
	TreeNodePtr composite1 = make_shared<CompositeNode>();
	TreeNodePtr composite2 = make_shared<CompositeNode>();
	TreeNodePtr leaf = make_shared<Leaf>();
	root->addChild(composite1);
	root->addChild(composite2);
	root->addChild(leaf);
	composite1->addChild(leaf);
	composite1->addChild(leaf);
	root->visit();

	return 0;
}

