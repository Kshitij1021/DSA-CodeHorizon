//To start the code, we should follow the following steps for C++ programming:
#include<iostream>       //Header File (Input Output stream) : Give instructions to run the code
using namespace std;      //Now we don't have to write std:: everywhere.

int main()
{
    // std::cout<<"Print this text";        //General way to print a line but without "#include iostream" it doesn't know what does this line means.
                                            // "std::" is used frequently, hence we use "using namespace std;"" to shorten our work.
                                            

    cout<<"Print this text \n";             //Print "Print this text"
                                            //"\n" is used as enter while running the code

    cout<<"2+3"<<endl;                      //Print "2+3"
                                            //"<<endl" is also used as enter while running the code

    cout<<2+3<<endl;                        //Print "5"
                                            //cout stands for console output or character output

                                            //"<<" is known as insertion operator
    cout<<"Print this text \n"<<"2+3";      //More result in less time.
};
