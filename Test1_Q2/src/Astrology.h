#include <iostream>
#include <string>

using namespace std ;

class Astorology
{
private :
    string star;
    string dob;
    string dailyPrediction;

public:
    void setStar(string myStar)
    {
        star = myStar;
    }
    void setDob (string myDob)
    {
        dob = myDob;
    } 
    void setDailyPrediction(string myDailyPrediction)
    {
        dailyPrediction = myDailyPrediction;
    } 
    string getStar()
    {
        return star;
    }
    string getDob()
    {
        return dob;
    }
    string getDailyPrediction()
    {
        return dailyPrediction;
    }
    
    void showReadings();


};