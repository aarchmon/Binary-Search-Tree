#ifndef BINARYSEARCHTREE_TREENODE_CC_
#define BINARYSEARCHTREE_TREENODE_CC_

// Include files.
#include <iostream>

#include "TreeNode.h"

/**
 * @brief General constructor.
 */
TreeNode::TreeNode()
	:
	leftNode(NULL),
	rightNode(NULL),
	data(0) {
}

/**
 * @brief Parameterized constructor.
 *
 * @param dataValue Value of current node (unsigned int).
 */
TreeNode::TreeNode(unsigned int dataValue) {
	this->data = dataValue;

	// Set leftTree and rightTree to NULL.
	leftNode = rightNode = NULL;
}

/**
 * @brief Parameterized constructor.
 *
 * @param dataValue Value of currentNode (unsigned int).
 * @param leftNode Left Node of root.
 * @param rightNode Right Node of root.
 */
TreeNode::TreeNode(unsigned int dataValue, TreeNode* leftNode, TreeNode* rightNode) {
	this->data = dataValue;
	this->leftNode = leftNode;
	this->rightNode = rightNode;
}

/**
 * @brief Insert value into TreeNode.
 *
 * @param root Root TreeNode of Binary Search Tree.
 * @param value Value to be inserted (unsigned int).
 * @return Input parameter TreeNode.
 */
TreeNode* TreeNode::insert(TreeNode* root, unsigned int value) {

	// Return a new TreeNode(data) if root is empty.
	// Otherwise, place a value greater than root->data into the
	// right subtree and a value less than root->data into the
	// left subtree.
	if(!root) {
		return new TreeNode(value);
	} else if(value > root->data) {
		root->rightNode = insert(root->rightNode, value);
	} else {
		root->leftNode = insert(root->leftNode, value);
	}

	// Return root.
	return root;
}

#endif // BINARYSEARCHTREE_TREENODE_CC_
