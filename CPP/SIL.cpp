// https://pl.spoj.com/problems/SIL/

#include <iostream>
#include <cmath>

typedef struct 
{
    int iX;
    int iY;
} sPoint;

class Rectangle
{
    private:
        // Left bottom corner (X,Y)
        sPoint LBC; 
        // Right top corner (X,Y)
        sPoint RTC;

    public:
        Rectangle(sPoint& a_LBC, sPoint& a_RTC)
        {
            this->LBC = a_LBC;
            this->RTC = a_RTC;
        }
        long RectangleField()
        {
            int iXline = abs(this->LBC.iX - this->RTC.iX);
            int iYline = abs(this->LBC.iY - this->RTC.iY);

            return iXline * iYline;
        }
        sPoint GetLBC()
        {
            return this->LBC;
        }
        sPoint GetRTC()
        {
            return this->RTC;
        }
};

bool IsRecOverlap(Rectangle& a_RecA, Rectangle& a_RecB)
{
    sPoint RecA_LBC = a_RecA.GetLBC();
    sPoint RecA_RTC = a_RecA.GetRTC();
    sPoint RecB_LBC = a_RecB.GetLBC();
    sPoint RecB_RTC = a_RecB.GetRTC();

    if((RecA_LBC.iX > RecB_RTC.iX) || (RecA_LBC.iY > RecB_RTC.iY)
    || (RecB_LBC.iX > RecA_RTC.iX) || (RecB_LBC.iY > RecA_RTC.iY))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    sPoint LBC;
    sPoint RTC;
    
    std::cin >> LBC.iX >> LBC.iY >> RTC.iX >> RTC.iY;
    Rectangle RecA(LBC, RTC);

    std::cin >> LBC.iX >> LBC.iY >> RTC.iX >> RTC.iY;
    Rectangle RecB(LBC, RTC);

    if(true == IsRecOverlap(RecA, RecB))
    {
        sPoint RecA_LBC = RecA.GetLBC();
        sPoint RecB_LBC = RecB.GetLBC();
        sPoint CommonLBC;
        if(RecA_LBC.iX > RecB_LBC.iX)
        {
            CommonLBC.iX = RecA_LBC.iX;
        }
        else
        {
            CommonLBC.iX = RecB.GetLBC().iX;
        }

        if(RecA_LBC.iY > RecB_LBC.iY)
        {
            CommonLBC.iY = RecA_LBC.iY;
        }
        else
        {
            CommonLBC.iY = RecB_LBC.iY;
        }

        sPoint RecA_RTC = RecA.GetRTC();
        sPoint RecB_RTC = RecB.GetRTC();
        sPoint CommonRTC;
        if(RecA_RTC.iX < RecB_RTC.iX)
        {
            CommonRTC.iX = RecA_RTC.iX;
        }
        else
        {
            CommonRTC.iX = RecB_RTC.iX;
        }
        if(RecA_RTC.iY < RecB_RTC.iY)
        {
            CommonRTC.iY = RecA_RTC.iY;
        }
        else
        {
            CommonRTC.iY = RecB_RTC.iY;
        }

        Rectangle RecCommon(CommonLBC, CommonRTC);
        std::cout << (RecA.RectangleField() + RecB.RectangleField() - RecCommon.RectangleField()) << std::endl;
    }
    else
    {
        std::cout << (RecA.RectangleField() + RecB.RectangleField()) << std::endl;
    }
}