#pragma once
class cTimer
{
public:
	cTimer(void);     //默认构造
	~cTimer(void);

	cTimer(int hour , int min , int sec);    //带参数构造

	cTimer & operator ++() ;

	void Show() ;
private:
	int m_second ;
	int m_minter ;
	int m_hour ;
};

