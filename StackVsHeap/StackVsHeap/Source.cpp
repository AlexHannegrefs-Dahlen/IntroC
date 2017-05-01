
int Func(int x)
{
	return x;
}

int main()
{
	int x = 5;
	int* pX = &x;
	Func(x);
}