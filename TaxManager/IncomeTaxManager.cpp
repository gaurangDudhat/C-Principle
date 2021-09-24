#include <iostream.h>

using namespace std;
Struct personalData
{
        Int income;
        Int Expenses;
        Int investment;
        String gender;
};

Struct Data
{
        String Pan;
        personalData data;

}

Class Database
{
        Data  record[10];

        personalData getPersonalInfo(string pan)
        {

        }
}

Class  Income taxManager
{
        // Not satisfied Open close principle
        Int subnitTax(pan, 2020)
        {
                Switch (year)

                Case 2020:
                        taxCal2020  *tax = new taxCal2020();
                        getTaxValue();
                Case 2021:
                        taxCal2021 *tax = new txaCal2021();
                        getTaxValue();

        }
}

Class TaxClc
{
          virtual int getTaxvalue(pan) = 0;
}

Class taxCal2020 : public  Taxclc
{

        Int getTaxValue(pan)
        {

        }

}

Class taxCal2021 : public  TaxClc
{
        Int getTaxValue(pan)
        {

        }
}

