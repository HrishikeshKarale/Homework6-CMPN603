#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time( void )
{
   seconds = 0;
}

Time::Time( int _seconds )
{
   seconds = _seconds;
}

Time::Time( string t )
{
   setTime( t );
}

void operator>>(Time t)
{
	int start=0;
	std::string _seconds;
	_seconds=t.str();
	for(int i=0; i<6, i++)
    {
      if(input_time.charAt[i]==':')
      {
        if(i<=2)
        {
          mul= 3600;
        }
        else if(i<=4)
        {
          mul=60;
        }
        else
        {
         mul=1;
        }
        seconds +=Integer.parseInt(input_time.substr(start,2))*mul;
        start = i+1;
      }
    }
}



std::string Time::str() const
{
   /* Use ostringstream to convert from int to string. This will be covered in
    * detail in week 8
    */
   ostringstream oss;
   oss<<*this;
   //oss << seconds / 3600 << ":" << setfill('0') << setw(2) << ( seconds % 3600 ) / 60 << setfill('0') << setw(2) << (seconds%60);
   return oss.str();

}

