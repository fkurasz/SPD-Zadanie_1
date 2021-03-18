#pragma once


class Dane
{
public:
	Dane(int r, int p, int q, int i)
	{
		R = r;
		P = p;
		Q = q;
		index = i;
	}
	Dane() : Dane(0, 0, 0, 0) {}
	~Dane() = default;
	int getR() { return R; }
	int getP() { return P; }
	int getQ() { return Q; }
	int getIndex() { return index; }
	void setP(int newP) { P = newP; }
	void setALL(int newR, int newP, int newQ, int newIndex) { R = newR; P = newP;  Q = newQ;  index = newIndex; }
private:
	int R;
	int P;
	int Q;
	int index;
};

class BB
{
public:
	void set(Dane wierzch, int lower_LB) { wierzcholek = wierzch; lb = lower_LB; }
	int getLB() { return lb; }
	BB() = default;
	~BB() = default;

private:
	Dane wierzcholek;
	int lb;
};

