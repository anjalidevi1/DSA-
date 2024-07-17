#include<iostream>
using namespace std;
int main(){
    //Braced initialization
    //Variable may conatain random garabage value.WARNING
    int elephant_count;
    int lion_count{}; //Initialization to zero
    int dog_count{10}; //Initialiazation to ten
    int cat_count{15}; //Initialiazation to fifteen
    //Can use expression as intialization
    int domesticated_animals {dog_count + cat_count};

    //int new_number{doesnt_exist}
    //int narrowing_conversion {2.9}; //Cpmile error
    cout<<"Eleplhant count:"<<elephant_count<<endl;
    cout<<"Lion count:"<<lion_count<<endl;
    cout<<"Dog count:"<<dog_count<<endl;
    cout<<"Cat count:"<<cat_count<<endl;
    cout<<"Domesticated animals:"<<domesticated_animals<<endl;
    return 0;

}
