#ifndef BINARYSEARCHTREE_TREE_CC_
#define BINARYSEARCHTREE_TREE_CC_

// Include files.
#include <queue>

#include "Tree.h"

/**
 * @brief Determine if a certain value is present in the Binary Tree.
 *
 * @param root Root of Binary Tree.
 * @param value Positive value to be search for.
 * @return True if found, false otherwise.
 */
bool NodeOperations::dataInTree(TreeNode root, unsigned int value) {
	if(!root) {
		std::queue<TreeNode> q;
		q.push(root);
		while(!q.empty()) {
			TreeNode temp = q.front(); q.pop();
			if(temp.data == value) {
				return true;
			}
			if(!temp.left) {
				q.push(temp.left);
			}
			if(!temp.right) {
				q.push(temp.right);
			}
		}
	}
	return false;
}

#endif BINARYSEARCHTREE_TREE_CC_ // BINARYSEARCHTREE_TREE_CC_
