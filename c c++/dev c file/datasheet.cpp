#include <iostream>

using namespace std;
class A{
   int roll, reg;
   char name[100];
   public:
       void inputA();
       void outputA();
 };
 class B: public virtual A
 {
     private:
   int p,c, m, b, com, t;
   float avg, per;
   public:
      void inputB();
      int calculateB();
      void outputB();
 };
 class sports:public virtual A
 {
   public:
       int i;
       void inputsports();
       int outputsports();
 };
 class D:public B, public sports
 {
   int s;
   float gracetotal;
   public:
       void result();

 };
 void A::inputA()
 {
     cout<<"\n enter student name:";
     cin>>name;
     cout<<"\n enter student roll and reg:";
     cin>>roll>>reg;
 }
 void A::outputA()
 {
     cout<<"\n Name="<<name<<"\n student roll="<<roll<<"\n student reg:"<<reg;
 }
 void B::inputB()
 {
     cout<<"\n enter student marks:";
     cin>>p>>c>>m>>b>>com;
 }
 int B::calculateB()
 {
    t= p+c+m+b+com;
    avg=t/5;
    per=avg*100;
    return (per);
 }
 void B ::outputB()
 {
     cout<<"\n student marks:physics:"<<p<<"\n chemistry:"<<c<<"math:"<<m<<"\n biology:"<<b<<"\n computer:"<<com;
 }
 void sports::inputsports()
 {
     cout<<"\n enter if student play any sports  then press 1 else press 0";
     cin>>i;
 }
 int sports::outputsports()
 {
     if(i==1)
     {
         return (1);
     }
     else
     {
       return(0);
     }
 }
 void D::result()
{
    s=calculateB();
    i=outputsports();
    if(s>=80)
    {
        if(i==1)
        {
            gracetotal=s+0.2;
            cout<<"total="<<gracetotal;
        }
        else{
            cout<<"total="<<s;
        }
    }
     else if(s>=70)
     {
         if(i==1)
         {
            gracetotal=s+0.05;
            cout<<"total="<<gracetotal;
         }
         else
         {
            cout<<"total="<<s;
      
         }
     }
         else if(s>=60)
        {
            if(i==1)
            { 
           gracetotal=s+0.03;
            cout<<"total="<<gracetotal;
            }
            else
            {
              cout<<"total="<<s;
            }
        }
        else
        {
           cout<<"total="<<s;
        }
    }


int main()
{
    D obj;
    obj.inputA();
    obj.inputB();
    obj.inputsports();
    obj.outputA();
    obj.outputB();
    obj.result();
    return 0;
}
