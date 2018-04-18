#include <iostream>
using namespace std;

void rearangeNum (int &,int &, int &);

int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA


        rearangeNum(red,green,blue);


        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA
}

void rearangeNum (int &first, int &second, int &third)
{
        int num1 = first;
        int num2 = second;
        int num3 = third;

        if (num1<num2 && num1<num3)
        {
                third = num1;
        }
        else if ((num1<num2 && num1>num3) || (num1>num2 && num1<num3))
        {
                second = num1;
        }

        if (num2<num1 && num2<num3)
        {
                third = num2;
        }
        else if (num2>num1 && num2>num3)
        {
                first = num2;
        }

        if ((num3<num1 && num3>num2) || (num3>num1 && num3<num2))
        {
                second = num3;
        }
        else if (num3>num1 && num3>num2)
        {
                first = num3;
        }
}
