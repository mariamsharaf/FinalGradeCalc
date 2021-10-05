#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main ( )

{
]

    double t1, t2, t3, a1, a2, a3, a4, pct;

    string grade;

    
    cout << "Enter Scores Test 1:" ;
    cin >> t1;
    cout << "Enter Scores Test 2:" ;
    cin >> t2;
    cout << "Enter Scores Test 3:" ;
    cin >> t3;
    cout << "Enter Scores Assignment 1:" ;
    cin >> a1;
    cout << "Enter Scores Assignment 2:" ;
    cin >> a2;
    cout << "Enter Scores Assignment 3:" ;
    cin >> a3;
    cout << "Enter Scores Assignment 4:" ;
    cin >> a4;
   
    //compute the overall percentage scores

   
    pct = (  (  (t1 + t2 + t3  ) / 3.0 ) * .70 ) + ( ( ( a1 + a2 + a3 + a4  ) / 4.0 ) * .30 );

     

    //compute final grade on the basis of pct scores using if/else if statement

     

    if (pct >= 90) {

        grade = "A";

    }

    else if (pct >= 80) {

        grade = "B";

    }

    else if (pct >= 70) {

        grade = "C";

    }
    else if (pct >= 60)   {
        
        grade = "D";
    }
    else if (pct <= 60) {
        grade ="F";
    }
    cout<<setprecision(1)<<fixed<<endl;
    cout << "Test Scores: "<<t1<<","<<t2<<","<<t3<<endl;
    cout <<"Assignment Scores: "<<a1<<","<<a2<<","<<a3<<","<<a4<<endl;
    cout << "Overall Percentage: "<<pct<<"% "<< endl;
    cout<<"Final Grade: "<< grade<<endl;
    
    return 0;
}
