#pragma once
class cTimer
{
public:
	cTimer(void);     //Ĭ�Ϲ���
	~cTimer(void);

	cTimer(int hour , int min , int sec);    //����������

	cTimer & operator ++() ;

	void Show() ;
private:
	int m_second ;
	int m_minter ;
	int m_hour ;
};

