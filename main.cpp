#include <iostream>
using namespace std;

class clockType
        {
        private:
            int hr;
            int min;
            int sec;

        public:
            void setTime(int hr,int min,int sec)
            {
                if(0<= hr && hr<24)
                    this->hr = hr;
                else
                    hr=0;
                if(0<=min && min<60)
                    this->min = min;
                else
                    min = 0;

                if(0<=sec && sec<60)
                    this->sec = sec;
                else
                    sec=0;
            }

            void getTime(int& hr, int& min, int& sec)const
            {
                hr = this->hr;
                min = this->min;
                sec = this->sec;
            }

            void printTime()const
            {
                cout << hr << "." << min << "." << sec <<endl;
            }

            int incrementSeconds()
            {
                if(sec==59)
                {
                    incrementMinutes();
                    sec = 0;
                }
                else
                    sec++;

                return sec;
            }

            int incrementMinutes()
            {
                if(min==59)
                {
                    min = 0;
                    incrementHours();
                }
                else
                    min++;

                return min;
            }

            int incrementHours()
            {
                if(hr==23)
                    hr = 0;
                else
                    hr++;

                return hr;
            }

            bool isEqual(const clockType tmpClock)
            {
                return(tmpClock.hr == hr && tmpClock.min == min && tmpClock.sec == sec);
            }

            clockType& operator=(clockType tmpClock)
                    {
                        this->hr = tmpClock.hr;
                        this->sec = tmpClock.sec;
                        this->min = tmpClock.min;
                        return *this;
                    }

            clockType(int hr,int min,int sec) : hr(hr),min(min),sec(sec) {}
            clockType() : hr(0),min(0),sec(0) {}

        };

int main()
{

}
