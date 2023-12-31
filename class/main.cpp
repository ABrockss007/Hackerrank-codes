#include <iostream>
#include <string>
using namespace std;


class Student
{
    private:
    int age1, standard1;
    string first_name1, last_name1;
    string to_str;
    public:
    //setter function for age
    void set_age(int age)
    {
        age1=age;
    }
    //setter function for standard;
    void set_standard(int standard)
    {
        standard1=standard;
    }
    //setter function for first name
    void set_first_name(string first_name)
    {
        first_name1=first_name;
    }
    void set_last_name(string last_name)
    {
        last_name1=last_name;
    }
    int get_age()
    {
        return  age1;
    }
    int get_standard()
    {
        return standard1;
    }
    string get_first_name()
    {
        return first_name1;
    }
    string get_last_name()
    {
        return last_name1;
    }
    
    string to_string()
    {
        to_str=std::to_string(age1)+","+(first_name1)+","+(last_name1)+","+std::to_string(standard1);
        return to_str;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
