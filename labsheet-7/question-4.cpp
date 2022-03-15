/*Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. 
Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.*/
#include<iostream>
#include<typeinfo>

using namespace std;

class Vehicle

{

    public:

        virtual void show()

        {


        }

};


class Bus: public Vehicle

{


};


class Car: public Vehicle{};


class Bike: public Vehicle{};


int main()

{

    Vehicle *pveh, veh;

    Bus *pbs, bs;

    Car *pcr, cr;

    Bike *pbk, bk;


    pveh = &bs;

    pbs = dynamic_cast<Bus *>(pveh);

    if(pbs)

        cout<<"The Cast to derived pointer pbs is Sucessful"<<endl;

    else

        cout<<"The Cast to derived pointer pbs is Failed"<<endl;


    /******************************************************************************

    Here the cast from base class Vehicle pointer pveh to derived class Bus pointer

    pbs works well bcoz pveh is poining to derived class Bus' Object.

    *******************************************************************************/
pveh = &cr;
    pcr = dynamic_cast<Car *>(pveh);
    if(pcr)
        cout<<"The Cast to derived pointer pcr is Sucessful"<<endl;
    else
        cout<<"The Cast to derived pointer pcr is Failed"<<endl;
    pveh = &bk;
    pbk = dynamic_cast<Bike *>(pveh);
    if(pbk)
        cout<<"The Cast to derived pointer pbk is Sucessful"<<endl;
    else
        cout<<"The Cast to derived pointer pbk is Failed"<<endl;
    pveh = &veh;
    pbs = dynamic_cast<Bus *>(pveh);
    if(pbs)
        cout<<"The Cast to derived pointer pbs is Sucessful"<<endl;
    else
        cout<<"The Cast to derived pointer pbs is Failed"<<endl;
    /******************************************************************************
    Here the cast from base class Vehicle pointer pveh to derived class Bus pointer
    pbs works well bcoz pveh is poining to base class Vechile's Object.
    *******************************************************************************/

    pveh = &veh;
    pcr = dynamic_cast<Car *>(pveh);
    if(pbs)
        cout<<"The Cast to derived pointer pcr is Sucessful"<<endl;
    else
        cout<<"The Cast to derived pointer pcr is Failed"<<endl;
    pveh = &veh;
    pbk = dynamic_cast<Bike *>(pveh);
    if(pbs)
        cout<<"The Cast to derived pointer pbk is Sucessful"<<endl;
    else
        cout<<"The Cast to derived pointer pbk is Failed"<<endl;
    cout<<"\nThe type id of veh is: "<<typeid(veh).name()<<endl;
    cout<<"The type id of bs is: "<<typeid(bs).name()<<endl;
    cout<<"The type id of cr is: "<<typeid(cr).name()<<endl;
    pveh = &bs;
    cout<<"\nIn pveh = &bs, the type id of pveh is: "<<typeid(*pveh).name()<<endl;
    /**********************************************************************************
    The address of bs is assigned to pveh at runtime. So until runtime, the comiler see
    pveh as a type Vechile. But at runtime the address of bs is assigned to pveh and
    pveh becomes type of bs.
    ***********************************************************************************/

    pveh = &cr;
    cout<<"In pveh = &cr, the type id of pveh is: "<<typeid(*pveh).name()<<endl;
    pveh = &bk;
    cout<<"In pveh = &bk, the type id of pveh is: "<<typeid(*pveh).name()<<endl;
    return 0;
}
