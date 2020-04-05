#ifndef RUNNER_CPP
#define RUNNER_CPP

// Include files.
#include <iostream>

#include <graphviz/gvc.h>

#include "TreeNode.h"

/**
 * @brief Main method to execute program from. No command line parameters required.
 */
int main(void) {

	// Binary Search Tree root.
	TreeNode tree, *root = NULL;

	// Welcome message. Prompt user to insert an unsigned integer value to be used as a root and
	// inform user to enter -1 to end data entry.
	unsigned int input;
	std::cout << "Welcome to Binary Search Tree. Please enter an unsigned integer value to be ";
	std::cout << "the root value: ";
	std::cin >> input;
	root = tree.insert(root, input);

	// Prompt user to enter additional data into the Binary Search Tree.
	// Enter any negative integer to end data entry.
	while(input != -1) {
		std::cout << "Enter additional data (enter any negative integer to stop data entry): ";
		std::cin >> input;
		tree.insert(root, input);
	}

	return 0;
}

#endif // RUNNER_CPP
