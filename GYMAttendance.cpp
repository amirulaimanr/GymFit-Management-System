#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class attend
{
        float p=0,t=0,w;
        public:
                int enter();
                void calculate();
};
int attend::enter()//update the attendance
{
        int date,month,year;
        int i,n,k,a,c;
        int z[20];
        cout<<" ENTER ANY KEY TO GIVE THE DATE... "<<endl;
        cin>>i;
        while(i)
        {
        	cout<<"\n\nEnter DATE MONTH YEAR: "<<endl;
        	cin>>date>>month>>year;
        	cout<<endl;
                if(month== 1||month==3||month==5||month==7||month==8||month==10||month==12)
                {
                		if(date>31||date==0)
                		{
							c=0;
						}
						else
						{
							 c=1;
						}
                }
                if(month== 4||month==6||month==9||month==11)
                {
                	if(date>30 ||date==0)
                	{
                		 c=0;
                	}
                	else
                	{
                		 c=1;
                	}
                }
                if(month==2)
                {
                	if(date>29||date==0)
                	{
                		 c=0;
                	}
                	else
                	{
                		 c=1;
                	}
                }
                if(month>12)
                {
                	c=0;
                }
                if(month==0||year==0)
				{
					c=0;
				}
                switch(c)//gives if the given date is correct or not and update
                {
                	case 0:cout<<"Please enter::VALID DATE::"<<endl<<endl;
                			break;
               		 case 1:
                        n=1;
                		cout<<endl;
                		for(k=1;k<n+1;k++)
                		{
                    	    cout<<"->ENTER '1' IF PRESENT ELSE '0' TO UPDATE THE ATTENDANCE "<<k<<" :";
                    	    cin>>a;
                    	    if(a==1)
                    	    {
                    	            p++;
                        	        t++;
                        	        z[k]=1;
                        	        cout<<"   ......................................................................"<<endl<<endl;
                            	    cout<<"                         :::UPDATED AS PRESENT:::"<<endl<<endl;
                            	    cout<<"   ......................................................................"<<endl<<endl;
                        	}
                			else
                        	{
                        	        t++;
                        	        z[k]=0;
                        	        cout<<"   ......................................................................"<<endl<<endl;
                        	        cout<<"                          :::UPDATED AS ABSENT:::"<<endl<<endl;
                        	        cout<<"   ......................................................................"<<endl<<endl;
                        	}
                		}
                		cout<<endl;
                		cout<<"                    ::::::ATTENDANCE OF THE DAY IS UPDATED AS:::::"<<endl;
                		for(k=1;k<n+1;k++)
                		{
                			cout<<"__________";
                		}
                		cout<<endl<<endl;
                		cout<<"DD/MM/YY    ";
                		for(k=1;k<n+1;k++)
                		{
                		cout<<"p"<<k<<"    ";
                		}
                		cout<<endl<<endl;
                		cout<<date<<"/"<<month<<"/"<<year<<"   ";
                		for(k=1;k<n+1;k++)
                		{
                			if(z[k]==1)
                			{
                				cout<<"P"<<"     ";
                			}
                			else
                			{
                				cout<<"A"<<"     ";
                			}
                		}
                		cout<<endl<<endl;
                		for(k=1;k<n+1;k++)
                		{
                			cout<<"__________";
                		}
                		cout<<endl;
                		cout<<endl;
                		break;
						default://To exit
				exit(0);
            	}
                cout<<">>ENTER 1 TO TO UPDATE ANOTHER DAY ELSE 0  :";
                cin>>i;
                cout<<endl;
        }

}
void attend::calculate()//calculate the percentage
{
         int x,r;
         float s;
        x=(t*75)/100;
        s=(p*100)/t;
        if(s<75&&s>65)
        {
        		cout<<"   _________________________________________________________________________"<<endl<<endl;
                cout<<"                           YOUR ATTENDANCE IS LOW : "<<s<<"%"<<endl<<endl;
                r=x-p;
                cout<<"   ........................................................................."<<endl<<endl;
                cout<<"                        you must have attended"<<r<<"gym                    "<<endl<<endl;
                cout<<"   _________________________________________________________________________"<<endl<<endl;
        }
         if(s<65)
        {
                int y;
                y=(t*65)/100;
                int  k=y-p;
                cout<<"   __________________________________________________________________________"<<endl<<endl;
                cout<<"                     YOUR ATTENDANCE IS : "<<s<<"%"<<endl<<endl;
                cout<<"   .........................................................................."<<endl<<endl;
                cout<<"                   you must have attended"<<k<<"gym                          "<<endl;
                cout<<"   __________________________________________________________________________"<<endl<<endl;
        }
        if(s>75)
        {
        		cout<<"   __________________________________________________________________________"<<endl<<endl;
                cout<<"                      YOUR ATTENDANCE IS :"<<s<<"%"<<endl<<endl;
                cout<<"   .........................................................................."<<endl<<endl;

                cout<<"   __________________________________________________________________________"<<endl<<endl;
        }
}
