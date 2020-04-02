#ifndef BINARYSEARCHTREE_TREE_H_
#define BINARYSEARCHTREE_TREE_H_

/**
 * @brief TreeNode data structure. This struct will be used to represent
 * a node in a standard Binary Tree.
 */
struct TreeNode {

	/**
	 * @brief Data of this node. Will only be positive integers now for the
	 * sake of simplicity.
	 */
	unsigned int data;

	/**
	 * @brief Left node.
	 */
	TreeNode left;

	/**
	 * @brief Right node.
	 */
	TreeNode right;
};

/**
 * @brief Collection of methods for TreeNode instances.
 */
class NodeOperations {

	/**
	 * @brief Determine if a certain value is present in the Binary Tree.
	 *
	 * @param root Root of Binary Tree.
	 * @param value Positive value to be search for.
	 * @return True if found, false otherwise.
	 */
	bool dataInTree(TreeNode root, unsigned int value);

};

#endif BINARYSEARCHTREE_TREE_H_
