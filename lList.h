class Node
{

	public:
		void * value;
		Node * next;
};

class List
{
	public:
		List();
		~List();
		bool Insert(Node*);
		bool Remove(Node*);
};
