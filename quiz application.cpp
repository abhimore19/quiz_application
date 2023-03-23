#include <iostream>
#include <string>
using namespace std;

int guess;
int total;

class question
{

private:
     string question_text;
     string answer_1;
     string answer_2;
     string answer_3;
     string answer_4;

     int correct_answer;
     int question_score;

public:
     void setvalues(string,string,string,string,string,int,int);
     void askquestion();

};
int main()
{

    cout<<"*************************************************"<<endl;
    cout<<"*                                               *"<<endl;
    cout<<"*             WELCOME TO GD QUIZ                *"<<endl;
    cout<<"*-----------------------------------------------*"<<endl;
    cout<<"*                    BY                         *"<<endl;
    cout<<"*                                               *"<<endl;
    cout<<"*              VBMreddy Publication                *"<<endl;
    cout<<"*                                               *"<<endl;
    cout<<"*************************************************"<<endl;
    cout<<endl;

    cout<<"press enter to start the quiz-----"<<endl;
    cin.get();

    string name;
    int age;
    cout<<"what's your name"<<endl;
    cin>>name;
    cout<<endl;
    cout<<"how old are you?"<<endl;
    cin>>age;
    cout<<endl;
    string respond;
    cout<<"are you ready to take the quiz" <<name<< "? yes/no."<<endl;
    cin>>respond;

    if(respond=="yes")
    {
        cout<<endl;
        cout<<"ok,good luck!!"<<endl;
        cout<< endl;

    }
     else
     {
         cout<<"ok,goodbye!!"<<endl;
         return 0;

     }

     question q1;
     question q2;
     question q3;
     question q4;
     question q5;

     q1.setvalues("who is the prime minister of india?",
                  "narendra modi",
                  "ypgo adithaynath",
                  "raj thakare",
                  "aiknath shinde",
                  1,10);

    q2.setvalues("founder of google.com?",
                  " Larry Page and Sergey Brin",
                  "alayn mask",
                  "steve jobs",
                  "mike markkula",
                  1,10);
   q3.setvalues("who is the prisident of india?",
                  "Droupadi Murmu",
                  "yogi aditaynath",
                  "arivind kajriwal",
                  "aiknath shinde",
                  1,10);
   q4.setvalues("national animal of india?",
                  "picock",
                  "mouse",
                  "rat",
                  "tiger",
                  4,10);

   q5.setvalues("national language of india?",
                  "marthi",
                  "kannada",
                  "hindi",
                  "english",
                  3,10);


          q1.askquestion();
          q2.askquestion();
          q3.askquestion();
          q4.askquestion();
          q5.askquestion();

     cout<<"your total score is"<<total<<"out of 50"<<endl;
     cout<<endl;

     if(total>=15)
     {
         cout<<"congratulations!!!! you passed !!!"<<endl;
         cout<<endl;

     }
     else
     {
         cout<<"sorry,you falied"<<endl;
         cout<<endl;
     }
     return 0;

}
 void question::setvalues(string q,string a1,string a2,string a3,string a4,int ca,int pa)
{



    question_text=q;
    answer_1=a1;
    answer_2=a2;
    answer_3=a3;
    answer_4=a4;
    correct_answer=ca;
    question_score=pa;
}


void question::askquestion()
{
    cout<<endl;
    cout<<question_text<<endl;
    cout<<"1."<<answer_1<<endl;
    cout<<"2."<<answer_2<<endl;
    cout<<"3."<<answer_3<<endl;
    cout<<"4."<<answer_4<<endl;
    cout<<endl;


cout<<"what is your answer?"<<endl;
cin>>guess;



 if(guess == correct_answer)
 {
     cout<<endl;
    cout<<"grate!you are correct"<<endl;
    total=total+question_score;
    cout<<"score:"<<question_score<<"out of"<<question_score<<"!"<<endl;
    cout<<endl;

 }


    else
    {
        cout<<endl;
    cout<<"oh no,wrong."<<endl;
    cout<<"score:0"<<"out of"<<question_score<<"!"<<endl;
    cout<<"the correct answer is"<<correct_answer<<"."<<endl;
    cout<<endl;
    }
    return ;
}







