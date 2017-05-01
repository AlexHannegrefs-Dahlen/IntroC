#pragma once

template<class T>
class ArrayList
{
public:
	ArrayList();
	ArrayList(int);
	~ArrayList();
	void add(T&);
	void remove(int);
	void removeAll(T&);
	void clear();
	void traverse(void f(T&));
	int size() const;
private:
	void resize();
	void freeArray();
	int count;
	int arrayLen;
	T ** array;
};

#define DEFAULT_INIT_LEN 10
template <class T>
ArrayList<T>::ArrayList()
	: ArrayList(DEFAULT_INIT_LEN)
{
}

template<class T>
ArrayList<T>::ArrayList(int spaces)
{
	if (spaces < 1)
		throw std::exception("size cannot be less than 1");
	array = new T*[spaces] {0};
	count = 0;
	arrayLen = spaces;
}

template<class T>
void ArrayList<T>::add(T& v)
{
	if (count == arrayLen)
		resize();
	array[count] = &v;
	count++;
}

template<class T>
void ArrayList<T>::remove(int space)
{
	if (space < 0 || space > count - 1)
		throw std::exception("bad index value");
	for (int i = space; i < count - 1; i++)
		array[i] = array[i + 1];
	array[count--] = 0;
}

template<class T>
void ArrayList<T>::removeAll(T& value)
{
	for (int i = 0; i < count; i++)
		if ((*array[i]) == value)
		{
			remove(i);
			removeAll(&value);
		}
}

template<class T>
void ArrayList<T>::clear()
{
	count = 0;
}

template<class T>
void ArrayList<T>::traverse(void f(T&))
{
	for (int i = 0; i < count; i++)
	{
		f((*array[i]));
	}
}

template<class T>
int ArrayList<T>::size() const
{
	return count;
}

template<class T>
void ArrayList<T>::resize()
{
	T ** temp = new T *[arrayLen *= 2];
	for (int i = 0; i < count; i++)
		temp[i] = array[i];
	freeArray();
	array = temp;
}

template<class T>
void ArrayList<T>::freeArray()
{
	if (array != 0)
	{
		delete[] array;
		array = 0;
	}
}

template<class T>
ArrayList<T>::~ArrayList()
{
	freeArray();
}

