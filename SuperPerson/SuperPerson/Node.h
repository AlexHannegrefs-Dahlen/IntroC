#pragma once
namespace csc195
{
	namespace hannegrefsdahlen
	{
		class T;
		class Node
		{
		public:
			Node();
			Node(void*, Node * p, Node * n);
			void setValue(void*);
			void * getValue();
			void setPrevious(Node * p);
			Node * getPrevious();
			void setNext(Node * n);
			Node * getNext();
			~Node();
		private:
			void* value;
			Node * previous;
			Node * next;
		};
	}
}