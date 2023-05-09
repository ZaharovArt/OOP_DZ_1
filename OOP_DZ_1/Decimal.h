#pragma once

class Decimal
{private:
	int num;
	int denum;
public:
	void setNum(int num);
	void setDeNum(int denum);
	void show();
	void add(int x);
	void sub(int x);
	void mult(int x);
	void div(int x);
};

