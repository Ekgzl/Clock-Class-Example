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
                this->hr = hr;
                this->min = min;
                this->sec = sec;
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

            clockType(int hr,int min,int sec) : hr(hr),min(min),sec(sec) {}
            clockType() : hr(0),min(0),sec(0) {}

        };

int main()
{
    clockType myClock(12, 30, 58);
    myClock.printTime();
    myClock.incrementSeconds();
    myClock.incrementSeconds();
    myClock.printTime();
}
