#include <iostream>
#include <string>

using namespace std;

struct employee
{
    int enumb;
    string ename;
    string job;
    float salary;
    float bouns ;
    float total_salary;
};

void get_data (employee arr[], int size);
void set_bonus (employee &e, float percent);
void print (employee out[], int size);

int main()
{

    employee employies_array[5];

    get_data (employies_array, 5);

    set_bonus (employies_array[1], 0.10f);

    print (employies_array, 5);


    return 0;
}

void get_data (employee arr[], int size)
{
    for (int i = 0; i < size; i ++)
    {
        cout << " Enter data fot employee " << i + 1 << "( employee number, employee name, job ) : \n";
        cin >> arr[i].enumb >> arr[i].ename >> arr[i].job ;

        if (arr[i].job == "manager")
            arr[i].salary = 5000;

        else if (arr[i].job == "engineer")
            arr[i].salary = 3000;

        else if (arr[i].job == "clerck")
            arr[i].salary = 2000;

        else
            arr[i].salary = 1000;

    }

}

void set_bonus (employee &e, float percent)
{
    e.bouns = e.salary * percent;

}

void print (employee out[], int size)
{
    for (int i = 0; i < size; i ++)
    {
        cout << " employee number : " << out[i].enumb << "\n";
        cout << " employee name : " << out[i].ename << "\n";
        cout << " employee jop : " << out[i].job << "\n";
        cout << " employee salary : " << out[i].salary << "\n";
        cout << " employee bouns : " << out[i].bouns << "\n";
        cout << " employee total salary : " << out[i].salary + out[i].bouns << "\n";

        cout << "*************************************\n";

    }

}
