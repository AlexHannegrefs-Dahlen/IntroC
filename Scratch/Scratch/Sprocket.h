#pragma once
class Sprocket
{
private:
	int numOfTeeth = 0;

public:
	Sprocket(int numOfTeeth);
	~Sprocket();
	void SetNumOfTeeth(int numOfTeeth);
	int GetNumOfTeeth();
};

