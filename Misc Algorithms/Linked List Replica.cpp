/*	
	Problem:
	struct Node
	{
	 Node *next;
	 Node *random;
	};
	The above struct represents a node in a linked list.
	You are given the head of one such linked list.
	You are tasked with creating a replica of this linked list.
	Assumptions are next points to the next node in a linked list,
	random points to a random node in the linked list.
	Expected time complexity O(N).
*/

Node* clonelist(Node *head) {
	
	Node* curr = head, *temp;
	while (curr) {
		temp = curr->next;
		curr->next = new Node();
		curr->next->next = temp;
		curr = temp;
	}

	curr = head;
	while (curr) {
		curr->next->random = curr->random->next;
		if (curr->next)
			curr = curr->next->next;
		else
			curr = curr->next;
	}

	Node* original = head, *copy = head->next;
	temp = copy;
	while (original && copy) {
		if (original->next)
			original->next = original->next->next;
		if (copy->next)
			copy->next = copy->next->next;
		original = original->next;
		copy = copy->next;
	}

	return temp;
}
