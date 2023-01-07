#include <iostream>
using namespace std;

float volume(float length ,float width ,float height , string unit);

main()
{
    float length , width , height;

    string unit;

    cout<<"The legth of pyramid in meters: ";
    cin>> length;

    cout<<"The width of pyramid in meters: ";
    cin>> width;

    cout<<"The height of pyramid in meters: ";
    cin>> height;

    cout<<"Enter unit in which you need answer(cm , km , mm): ";
    cin>> unit;

    float result= volume( length , width , height , unit);

    cout<<"The volume of pyramid is : "<<result<<unit<<"^3"<<endl;
}

float volume(float length ,float width ,float height, string unit)
{   float result;
    float pyramidV= (length * width * height) / 3;
    
    if(unit == "cm")
    {
        result = pyramidV *1000000;   
        return result;
    }

    if(unit == "km")
    {
        result = pyramidV /1000000000;   
        return result;
    }

    if(unit == "mm")
    {
        result = pyramidV * 1000000000;   
        return result;
    }

    if(unit == "m")
    {
        result = pyramidV;
        return result;   
        
    }


}