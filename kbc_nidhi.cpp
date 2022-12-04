#include <iostream>
#include<limits>
using namespace std;
class popquiz
{
public:
    int y=0,v,life=3,z,choice,dis,dat,c=0,g=0;
    void get()
    {
        cout<<"Do you want to play a popquiz on c++?   "<<endl;
        cout<<"if yes enter 1 else  enter any number = ";
        cin>>v;
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid Input Enter Again ";
            cin>>v;
        }
        cout<<"ENTER YOUR NAME = ";
            string name;
            cin>>name;
            if(v==1)
            {
                char x;
                cout<<"\n"<<"1.  Who developed c? ="<<endl;
                cout<<"A.James Gosling   ";
                cout<<"     B.Guiido Van Rossum   ";
                cout<<"    C.Dennis Richhie ";
                cout<<"    D. Bjarne Stroustrup     ";

                if(life==3)
                {
                    cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3)  if yes enter 1 else enter any number = ";
                    cin>>z;
                    while(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<"Invalid Input Enter Again ";
                        cin>>z;
                    }
                   
                    if(z==1)
                    {
                        cout<<"which lifeline you want to use??"<<endl;
                        cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                        cout<<"your choice=";
                        cin>>choice;
                        if(choice==1)
                        {
                            cout<<"\n"<<"1.  Who developed c? ="<<endl;
                            cout<<"A.James Gosling   ";
                            cout<<"     B.Guiido Van Rossum   ";
                            cout<<"    C.Dennis Richhie ";
                            cout<<"    D. Bjarne Stroustrup     ";
                            cout<<"\n"<<"enter your choice=";
                            cin>>x;
                            dis=1;
                        }
                        if(choice==2)
                        {
                            cout<<"\n"<<"1.  Who developed c? ="<<endl;
                            cout<<"    C.Dennis Richhie ";
                            cout<<"    D. Bjarne Stroustrup     ";
                            cout<<"\n"<<"enter your choice=";
                            cin>>x;
                            dis=2;
                        }
                        if(choice==3)
                        {
                            cout<<"\n"<<"1.  Who developed c? ="<<endl;
                            cout<<"A.James Gosling   ";
                            cout<<"     B.Guiido Van Rossum   ";
                            cout<<"    C.Dennis Richhie ";
                            cout<<"    D. Bjarne Stroustrup     ";
                            cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                            cin>>x;
                            dis=3;
                        }
                    life=life-1;
                    }

                    else
                    {
                        cout<<"enter your choice=";
                        cin>>x;
                    }

                }
                if((x=='c')or(x=='C'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                cout<<"A.James Gosling   ";
                cout<<"     B.Guiido Van Rossum   ";
                cout<<"    C.Dennis Richhie ";
                cout<<"    D. Bjarne Stroustrup     ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }

                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                                cout<<"A.James Gosling   ";
                                cout<<"     B.Guiido Van Rossum   ";
                                cout<<"    C.Dennis Richhie ";
                                cout<<"    D. Bjarne Stroustrup     ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                                cout<<"    C.Dennis Richhie ";
                                cout<<"    D. Bjarne Stroustrup     ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                                cout<<"A.James Gosling   ";
                                cout<<"     B.Guiido Van Rossum   ";
                                cout<<"    C.Dennis Richhie ";
                                cout<<"    D. Bjarne Stroustrup     ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                                cout<<"A.James Gosling   ";
                                cout<<"     B.Guiido Van Rossum   ";
                                cout<<"    C.Dennis Richhie ";
                                cout<<"    D. Bjarne Stroustrup     ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                                cout<<"    C.Dennis Richhie ";
                                cout<<"    D. Bjarne Stroustrup     ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"2.  Who developed c++? ="<<endl;
                                cout<<"A.James Gosling   ";
                                cout<<"     B.Guiido Van Rossum   ";
                                cout<<"    C.Dennis Richhie ";
                                cout<<"    D. Bjarne Stroustrup     ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                       }
                       else
                       {
                            cout<<"enter your choice=";
                            cin>>x;
                       }

                    }
                }
                if((x=='d')or(x=='D'))
                {

                    y=y+1;
                }
                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                cout<<"A.System.outpintln('Hello World');  ";
                cout<<"     B.cout<<'Hello World');  ";
                cout<<"    C.print('Hello World');  ";
                cout<<"    D.console.writeline('Hello World')    ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"A.System.outpintln('Hello World');  ";
                                cout<<"     B.cout<<'Hello World');  ";
                                cout<<"    C.print('Hello World');  ";
                                cout<<"    D.console.writeline('Hello World')    ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"     B.cout<<'Hello World');  ";
                                cout<<"    C.print('Hello World');  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"A.System.outpintln('Hello World');  ";
                                cout<<"     B.cout<<'Hello World');  ";
                                cout<<"    C.print('Hello World');  ";
                                cout<<"    D.console.writeline('Hello World')    ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"A.System.outpintln('Hello World');  ";
                                cout<<"     B.cout<<'Hello World');  ";
                                cout<<"    C.print('Hello World');  ";
                                cout<<"    D.console.writeline('Hello World')    ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"     B.cout<<'Hello World');  ";
                                cout<<"    C.print('Hello World');  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                           if(choice==3)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"A.System.outpintln('Hello World');  ";
                                cout<<"     B.cout<<'Hello World');  ";
                                cout<<"    C.print('Hello World');  ";
                                cout<<"    D.console.writeline('Hello World')    ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                           if((dis==2)and(dat==1))
                           {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"A.System.outpintln'Hello World';  ";
                                cout<<"     B.cout<<'Hello World';  ";
                                cout<<"    C.print'Hello World';  ";
                                cout<<"    D.console.writeline'Hello World;'";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"     B.cout<<'Hello World';  ";
                                cout<<"    C.print'Hello World';  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"3.  What is a correct syntax to output 'Hello World' in C++? ="<<endl;
                                cout<<"A.System.outpintln'Hello World';  ";
                                cout<<"     B.cout<<'Hello World';  ";
                                cout<<"    C.print'Hello World';  ";
                                cout<<"    D.console.writeline'Hello World'    ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            } 
                            life=life-1;
                        }                  
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                }
                if((x=='b')or(x=='B'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                cout<<"A. \\\tthis is a comment  ";
                cout<<"     B./*this is a comment ";
                cout<<"    C.#this is a comment ";
                cout<<"    D.//this is a comment   ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"A. \\\tthis is a comment  ";
                                cout<<"     B./*this is a comment ";
                                cout<<"    C.#this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"     B./*this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"A. \\\tthis is a comment  ";
                                cout<<"     B./*this is a comment ";
                                cout<<"    C.#this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                           }
                           life=life-1;
                       }
                       else
                       {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            } 
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"A. \\\tthis is a comment  ";
                                cout<<"     B./*this is a comment ";
                                cout<<"    C.#this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"     B./*this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"A. \\\tthis is a comment  ";
                                cout<<"     B./*this is a comment ";
                                cout<<"    C.#this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break; 
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"A. \\\tthis is a comment  ";
                                cout<<"     B./*this is a comment ";
                                cout<<"    C.#this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"     B.break;   ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            { 
                                cout<<"\n"<<"4.  How do you insert COMMENTS in C++ code?"<<endl;
                                cout<<"A. \\\tthis is a comment  ";
                                cout<<"     B./*this is a comment ";
                                cout<<"    C.#this is a comment ";
                                cout<<"    D.//this is a comment   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==0)
                    {
                        cout<<"\n"<<"enter your choice=";
                        cin>>x;
                    }
                }
                if((x=='d')or(x=='D'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                cout<<"A.mystring";
                cout<<"     B.String ";
                cout<<"    C.string    ";
                cout<<"    D.txt   ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"A.mystring";
                                cout<<"     B.String ";
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"A.mystring";
                                cout<<"     B.String ";
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"A.mystring";
                                cout<<"     B.String ";
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"A.mystring";
                                cout<<"     B.String ";
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                           }
                           life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                         break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"A.mystring";
                                cout<<"     B.String ";
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"5.  Which data type is used to create a variable that should store text?"<<endl;
                                cout<<"A.mystring";
                                cout<<"     B.String ";
                                cout<<"    C.string    ";
                                cout<<"    D.txt   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==0)
                    {
                        cout<<"\n"<<"enter your choice=";
                        cin>>x;
                    }
                }
                if((x=='c')or(x=='C'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                cout<<"A.int y=5";
                cout<<"     B.num y=5 ";
                cout<<"    C.y=5  ";
                cout<<"    D.double y=5   ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"    C.y=5  ";
                                cout<<"    D.double y=5   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"    C.y=5  ";
                                cout<<"    D.double y=5   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"    C.y=5  ";
                                cout<<"    D.double y=5   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"    C.y=5  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"    C.y=5  ";
                                cout<<"    D.double y=5   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"    C.y=5  ";
                                cout<<"    D.double y=5   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5"     ;
                                cout<<"    C.y=5  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                           if(choice==3)
                           {
                                cout<<"\n"<<"6.  How do you create a variable with the numeric value 5?"<<endl;
                                cout<<"A.int y=5";
                                cout<<"     B.num y=5 ";
                                cout<<"    C.y=5  ";
                                cout<<"    D.double y=5   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==0)
                    {
                        cout<<"\n"<<"enter your choice=";
                        cin>>x;
                    }
                }
                if((x=='a')or(x=='A'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                cout<<"A.int y=2.8";
                cout<<"     B.num y=2.8 ";
                cout<<"    C.y=2.8  ";
                cout<<"    D.double y=2.8   ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"A.int y=2.8";
                                cout<<"     B.num y=2.8 ";
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"A.int y=2.8";
                                cout<<"     B.num y=2.8 ";
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"A.int y=2.8";
                                cout<<"     B.num y=2.8 ";
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"A.int y=2.8";
                                cout<<"     B.num y=2.8 ";
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"\n"<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            { 
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            { 
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"A.int y=2.8";
                                cout<<"     B.num y=2.8 ";
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8  " ;
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"7. How do you create a variable with the floating number 2.8?"<<endl;
                                cout<<"A.int y=2.8";
                                cout<<"     B.num y=2.8 ";
                                cout<<"    C.y=2.8  ";
                                cout<<"    D.double y=2.8   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==0)
                    {
                        cout<<"enter your choice=";
                        cin>>x;
                    }
                }
                if((x=='d')or(x=='D'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                cout<<"A.getsize(); ";
                cout<<"     B.getlength();   ";
                cout<<"    C.length();  ";
                cout<<"    D.len();   ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"     B.getlength();   ";
                                cout<<"    C.length();  ";
                                cout<<"    D.len();   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"    C.length();  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"     B.getlength();   ";
                                cout<<"    C.length();  ";
                                cout<<"    D.len();   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"     B.getlength();   ";
                                cout<<"    C.length();  ";
                                cout<<"    D.len();   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                             if(choice==2)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"    C.length();  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"     B.getlength();   ";
                                cout<<"    C.length();  ";
                                cout<<"    D.len();   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"\n"<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"     B.getlength();   ";
                                cout<<"    C.length();  ";
                                cout<<"    D.len();   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"    C.length();  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"8. Which method can be used to find the length of a string?"<<endl;
                                cout<<"A.getsize(); ";
                                cout<<"     B.getlength();   ";
                                cout<<"    C.length();  ";
                                cout<<"    D.len();   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                        if(life==0)
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                    }
                }
                if((x=='c')or(x=='C'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                cout<<"A.iostream ";
                cout<<"     B.iomanip   ";
                cout<<"    C.inputstr;  ";
                cout<<"    D.inputstrem;   ";
                for(int j=1;j<2;j++)
                {
                    if(life==3)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip   ";
                                cout<<"    C.inputstr;  ";
                                cout<<"    D.inputstrem;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip   ";
                                cout<<"    C.inputstr;  ";
                                cout<<"    D.inputstrem;   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip   ";
                                cout<<"    C.inputstr;  ";
                                cout<<"    D.inputstrem;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip   ";
                                cout<<"    C.inputstr;  ";
                                cout<<"    D.inputstrem;   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully)if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip   ";
                                cout<<"    C.inputstr;  ";
                                cout<<"    D.inputstrem;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip  ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"9. Which header file lets us work with input and output objects?"<<endl;
                                cout<<"A.iostream ";
                                cout<<"     B.iomanip   ";
                                cout<<"    C.inputstr;  ";
                                cout<<"    D.inputstrem;   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==0)
                    {
                        cout<<"enter your choice=";
                        cin>>x;
                    }
                }
                if((x=='a')or(x=='A'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                cout<<"A.stop; ";
                cout<<"     B.break;   ";
                cout<<"    C.continue;  ";
                cout<<"    D.exit ;   ";
                for(int j=1;j<2;j++)
                {
                   if(life==3)
                   {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully uh only got 3) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use??"<<endl;
                            cout<<"1.ask a frnd    2.disappear two wrong answers    3.you can google it"<<endl;
                            cout<<"your choice=";
                            cin>>choice;
                            if(choice==1)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"A.stop; ";
                                cout<<"     B.break;   ";
                                cout<<"    C.continue;  ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"     B.break;   ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dis=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"A.stop; ";
                                cout<<"     B.break;   ";
                                cout<<"    C.continue;  ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dis=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==2)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (use carefully only left with 2) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"which lifeline you want to use"<<endl;
                            if(dis==1)
                            {
                                cout<<"   2.disappear two wrong answers    3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==2)
                            {
                                cout<<"   1.ask a frnd      3.you can google it"<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            }
                            if(dis==3)
                            {
                                cout<<"   1.ask a frnd       2.disappear two wrong answers "<<endl;
                                cout<<"your choice=";
                                cin>>choice;
                            } 
                            if(choice==1)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"A.stop; ";
                                cout<<"     B.break;   ";
                                cout<<"    C.continue;  ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=1;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"     B.break;   ";
                                cout<<"    D.exit ;   ";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"A.stop; ";
                                cout<<"     B.break;   ";
                                cout<<"    C.continue;  ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                                dat=3;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==1)
                    {
                        cout<<"\n"<<"do uh want to use your lifeline (its your last lifeline use carefully) if yes enter 1 else enter any number=";
                        cin>>z;
                        while(cin.fail())
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(),'\n');
                            cout<<"Invalid Input Enter Again ";
                            cin>>z;
                        }
                        if(z==1)
                        {
                            cout<<"you are only left with this lifeline"<<endl;
                            if((dis==1)and(dat==2))
                            {
                                cout<<"google:";
                                choice=3;
                            }
                            if((dis==1)and(dat==3))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==2)and(dat==1))
                            {
                                cout<<"google";
                                choice=3;
                            }
                            if((dis==2)and(dat==3))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if((dis==3)and(dat==1))
                            {
                                cout<<"disappear two wrong answers";
                                choice=2;
                            }
                            if((dis==3)and(dat==2))
                            {
                                cout<<"ask a friend";
                                choice=1;
                            }
                            if(choice==1)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"A.stop; ";
                                cout<<"     B.break;   ";
                                cout<<"    C.continue;  ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                            }
                            if(choice==2)
                            {
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"     B.break;   ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice=";
                                cin>>x;
                                dat=2;
                            }
                            if(choice==3)
                            {  
                                cout<<"\n"<<"10.  Which statement is used to stop a loop?"<<endl;
                                cout<<"A.stop; ";
                                cout<<"     B.break;   ";
                                cout<<"    C.continue;  ";
                                cout<<"    D.exit ;   ";
                                cout<<"\n"<<"enter your choice(ofcourse after googling)=";
                                cin>>x;
                            }
                            life=life-1;
                        }
                        else
                        {
                            cout<<"enter your choice=";
                            cin>>x;
                        }
                        break;
                    }
                    if(life==0)
                    {
                        cout<<"enter your choice=";
                        cin>>x;
                    }  
                }
                if((x=='b')or(x=='B'))
                {
                    y=y+1;
                }
                cout<<"\n"<<"Hey!! "<<name<<" well done.You completed your quiz successfuly."<<endl;
                if(y>=8)
                {
                    cout<<"You did a fantastic job."<<endl;
                    cout<<"Your score is="<<y<<".";
                }
                if((y>=5)and(y<8))
                {
                    cout<<"You were nice."<<endl;
                    cout<<"Your score is="<<y<<".";
                }
                if(y<5)
                {
                    cout<<"You can do better."<<endl;
                    cout<<"Your score is="<<y<<".";
                }
                cout<<endl;
            }
            else
            {
                cout<<"\n"<<"Hey!! "<<name;
                cout<<",you can play any other time :).";
            }
            cout<<endl;
    }
};
int main()
{
    popquiz obj;
    obj.get();
}

