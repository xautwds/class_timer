#include "cTimer.h"
#include <iostream>

using namespace std ;

cTimer::cTimer(void)
{
	m_second = 0 ;
	m_minter = 0 ;
	m_hour = 0 ;
}

cTimer::cTimer(int hour , int min , int sec){
	m_hour = hour ;
	m_minter = min ;
	m_second = sec ;
}

cTimer::~cTimer(void)
{
}

cTimer & cTimer::operator++(){ 
	m_second = (m_second + 1) % 60 ;
	if(m_second == 0){
		m_minter = (m_minter + 1) % 60 ;
		if(m_minter == 0){
			m_hour = (m_hour + 1) % 24 ;
		}
	}
	return * this ;
}

void cTimer::Show(){
	cout << m_hour << " : " << m_minter << " : " << m_second << endl;
}