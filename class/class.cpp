// single inheritance

// #include <iostream>
// using namespace std;
// class info{

// int rollno;
// string name;
// public:
// void display( int rollno ,string name)
// {
//     cout<<rollno<<name;
// }
// };
// int main() {


// info obj;
// obj.display(2 ,"amar");
 
// }

// multi-level inheritance

// #include <iostream>
// using namespace std;
// class a{

// public:int rollno=7;

// public:

// };

// class b:public a{

// public:void display()
// {
// cout<<rollno;
// }

// };
// class c:public b{
//     public:void display(){
//         cout<<rollno;
//     }
// };
// int main() {

// c obj;
// obj.display();

// }

// multiple level inheritance

//  hierarical inheritance

// #include <iostream>
// using namespace std;
// class a{
// public:
//   int roll=7;
//   void display(){
//     cout<<roll;
// }
// };

// class b:virtual public a{
// public:
// int roll1=10;
// void display(){
//     cout<<roll1;
// }
// };

// class c:public b,public a{
//     public:
// // void display(){
// // cout<<"hi";
// // }
// };

// int main(){
// c obj;
// obj.display();

// }
   
//    ---------------------------------------------------------------------------
#include <iostream>
using namespace std;

class a {
public:
    int roll = 7;
    void display() {
        cout << roll;
    }
};

class b: virtual public a {
public:
    int roll1 = 10;
    void display() {
        cout << roll1;
    }
};

class c: public b, public a {
public:
    void display() {
       
        a:display();  
       
        
    }
};

int main() {
    c obj;
    obj.display(); 
    
    return 0;
}
