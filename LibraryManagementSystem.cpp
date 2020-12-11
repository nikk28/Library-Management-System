#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>

int coder(char []);

  class book_store
  {
     public:

	 char code[10],b_name[20],w_name[20];
	 float price;

	 void get_data();
	 void show();
};
 void book_store::get_data()
	 {
	  fifth :
	  textcolor(5);
	  clrscr();
	  for(int i=0;i<80;i++) cout<<(char)127;
	  cout<<"\n\n\t\t\tEnter Book Details \n\t\t";
	  for(i=0;i<33;i++) cout<<(char)126;
	  cout<<"\nEnter book's code   =\t";
	  cin>>code;
	  if(coder(code))
	    { cout<<"\n\t\tEntered Book Code already exists \n \t Kindly Renter";
	      getch();  goto fifth;                                         }
	  cout<<"\nEnter book's name   :\t";
	  gets(b_name);
	  cout<<"\nEnter author's name :\t";
	  gets(w_name);
	  cout<<"\nEnter book's price  =\t";
	  cin>>price;
	  cout<<endl;
	 }
void book_store::show()
{
	 cout<<endl;
	 cout.width(20);
	 cout<<setiosflags(ios::left);
	 cout<<b_name;

	 cout.width(20);
	 cout<<setiosflags(ios::left);
	 cout<<w_name;

	 cout.width(10);
	 cout<<setiosflags(ios::right);
	 cout<<code;

	 cout.width(15);
	 cout<<setiosflags(ios::right);
	 cout<<price<<endl;

}



  class book_file:public book_store
  {
     public:
	void fil(book_store &w)
	{
	 ofstream file("All_Books.dat",ios::binary|ios::app);
	 ofstream c("code.txt",ios::app);
	 file.write((char *)&w, sizeof(w));
	 c<<code<<"\n";
	 file.close();
	 c.close();
	}
	void file();

  };
	void book_file::file()
	 {
	   char fil[20];
	   get_data();
	 }


  class T1:public book_file
  {
       public:

	  void book_data()
	   {
	   fstream file1("Humour.txt",ios::out|ios::app);
	   file1<<endl;
	   file1<<"Book Name   :"<<b_name<<endl;
	   file1<<"Author Name :"<<w_name<<endl;
	   file1<<"Book Code   :"<<code<<endl;
	   file1<<"Price       :"<<price<<endl;
	   file1.close();
	   }
  };


  class T2:public book_file
  {
       public:

	  void book_data()
	   {
	   fstream file1("Philosophy.txt",ios::out|ios::app);
	   file1<<endl;
	   file1<<"Book Name   :"<<b_name<<endl;
	   file1<<"Author Name :"<<w_name<<endl;
	   file1<<"Book Code   :"<<code<<endl;
	   file1<<"Price       :"<<price<<endl;
	   file1.close();
	   }
  };

  class T3:public book_file
  {
       public:

	  void book_data()
	   {
	   fstream file1("Science.txt",ios::out|ios::app);
	   file1<<endl;
	   file1<<"Book Name   :"<<b_name<<endl;
	   file1<<"Author Name :"<<w_name<<endl;
	   file1<<"Book Code   :"<<code<<endl;
	   file1<<"Price       :"<<price<<endl;
	   file1.close();
	   }
  };

  class T4:public book_file
  {
       public:

	  void book_data()
	   {
	   fstream file1("Mystery.txt",ios::out|ios::app);
	   file1<<endl;
	   file1<<"Book Name   :"<<b_name<<endl;
	   file1<<"Author Name :"<<w_name<<endl;
	   file1<<"Book Code   :"<<code<<endl;
	   file1<<"Price       :"<<price<<endl;
	   file1.close();
	   }
  };                                               //T4 class ends


  class add_books
  {
   public:
   add_books();
  };

   add_books::add_books()

   {

    T1 t1;
    T2 t2;
    T3 t3;
    T4 t4;
    char choice;
     while(1)
     {
      textcolor(5);
      second:
      clrscr();
      for(int i=0;i<80;i++) cout<<(char)127;
      cout<<"\n\t\t\t\tSELECT A GENRE\n\t\t\t";
      for(i=0;i<30;i++) cout<<(char)126;
      cout<<"\n\n1. Humour \n2. Philosophy \n3. Scientific \n4. Mystery \n5. Exit \n";
      cout<<"\n\nYour Choice =\t";
      cin>>choice;
      if(choice=='1')
       {
	t1.file();
	t1.book_data();
	t1.fil(t1);
       }
      else if(choice=='2')
       {
	t2.file();
	t2.book_data();
	t2.fil(t2);
       }
      else if(choice=='3')
       {
	t3.file();
	t3.book_data();
	t3.fil(t3);
       }
      else if(choice=='4')
       {
	t4.file();
	t4.book_data();
	t4.fil(t4);
       }
       else if(choice=='5')
       {
	break;
       }
       else
       { cout<<"\n Invalid input \n\t Try again";
	 getch();
	 goto second;
       }
     }                               //while ends

   }                                  //add_books fn ends




  class display
  {
   public:
   display();
  };


   display::display()
   {
     char code[10],ch, choice;
     while(1)
     {
      textcolor(7);
      textbackground(0);
      third :
      clrscr();
      for(int i=0;i<80;i++) cout<<(char)127;
      cout<<"\n\n\t\t\t     SELECT DESIRED GENRE\t\t\t\n\t\t\t";
      for(i=0;i<30;i++) cout<<(char)126;
      cout<<"\n\n1.All Books"<<endl;
      cout<<"2.Humour"<<endl;
      cout<<"3.Philosophy"<<endl;
      cout<<"4.Science"<<endl;
      cout<<"5.Mystery"<<endl;
      cout<<"6.Exit"<<endl;

  //...................................................................
     cout<<"\n\nYour Choice =\t" ;
     cin>>choice;

      if(choice=='1')
      {
       clrscr();
	 for(int i=0;i<80;i++) cout<<(char)127;
	 cout<<endl;
	 cout.width(20);
	 cout<<setiosflags(ios::left);
	 cout<<"  Book Name";

	 cout.width(20);
	 cout<<setiosflags(ios::left);
	 cout<<"Author Name";

	 cout.width(10);
	 cout<<setiosflags(ios::right);
	 cout<<"   Book Code";

	 cout.width(15);
	 cout<<setiosflags(ios::right);
	 cout<<"      Book Price"<<endl<<endl;

       fstream file("All_Books.dat",ios::binary|ios::in);
       file.seekg(0);
       book_store a;
       if(file)
     {  while(file.read((char *)&a, sizeof(a)))
	 a.show();
       }else cout<<"\nLIST EMPTY....";
       file.close();
       getch();
      }

      else if(choice=='2')
      {
       clrscr();
	for(int i=0;i<80;i++) cout<<(char)127;
	fstream file("Humour.txt",ios::in);
       file.seekg(0);
       cout<<"\n";
       if(file)
  {     while(file)
    {
     file.get(ch);
     delay(90);
     cout<<ch;
    }} else cout<<"\nLIST EMPTY....";
    file.close();
    getch();
      }

      else if(choice=='3')
      {
       clrscr();
	for(int i=0;i<80;i++) cout<<(char)127;
	fstream file("Philosophy.txt",ios::in);
       file.seekg(0);
       cout<<"\n";

       if(file)
  {     while(file)
    {
     file.get(ch);
     delay(90);
     cout<<ch;
    } }else cout<<"\nLIST EMPTY....";
    file.close();
    getch();
      }

      else if(choice=='4')
      {
       clrscr();
	for(int i=0;i<80;i++) cout<<(char)127;
	fstream file("Science.txt",ios::in);
       file.seekg(0);
       cout<<"\n";

       if(file)
    {   while(file)
    {
     file.get(ch);
     delay(90);
     cout<<ch;
    }}else cout<<"\nLIST EMPTY....";
    file.close();
    getch();
      }

      else if(choice=='5')
      {
       clrscr();
       for(int i=0;i<80;i++) cout<<(char)127;
       fstream file("Mystery.txt",ios::in);
       file.seekg(0);
       cout<<"\n";

       if(file)
     {  while(file)
    {
     file.get(ch);
     delay(90);
     cout<<ch;
    } }else cout<<"\nLIST EMPTY....";
    file.close();
    getch();
      }

      else if(choice=='6')
      break;
      else
       { cout<<"\nInvalid input \n\t Try again ";
	 getch();
	 goto third;
       }
     }                                   // while (choice) ends
   }                                    // display class ends


  class search
  {
   public:
   search();
  };

   search::search()
   {
    char choice;
    char fil[20];
    char code[10];
    while(1)
    {
    fourth :
    clrscr();
    char ch='n';
    for(int i=0;i<40;i++) cout<<(char)168<<" ";
    cout<<"\n\n\t\t"<<(char)168<<"\tWHAT ARE YOU LOOKING FOR    ?\n\t\t";
    for(i=0;i<40;i++) cout<<(char)126;
    cout<<"\n\n1. Search";
    cout<<"\n2. Exit";
    cout<<"\n\n Your Choice =\t";
    cin>>choice;
      if(choice=='1')
      { clrscr();
	for(int i=0;i<40;i++) cout<<(char)168<<" ";
	cout<<"\n\n Enter Code  =\t";
       cin>>code;
       cout<<endl;
       book_store s;
       ifstream file("ALL_BOOK.dat",ios::binary);
       if(file)
       { while(file.read((char *)&s, sizeof(s)))
       {
	if(!strcmp(s.code,code))
	{ ch='y';
	  cout<<endl;
	 cout.width(20);
	 cout<<setiosflags(ios::left);
	 cout<<"  Book Name";

	 cout.width(20);
	 cout<<setiosflags(ios::left);
	 cout<<"Author Name";

	 cout.width(10);
	 cout<<setiosflags(ios::right);
	 cout<<"   Book Code";

	 cout.width(15);
	 cout<<setiosflags(ios::right);
	 cout<<"      Book Price"<<endl<<endl;

	 s.show();   }
       }
      file.close();
       }
       if(ch!='y')  { cout<<"\n Book not found"; }   getch();   }
      else if(choice=='2')
      break;
      else
      {
       cout<<"\n\nInvalid input \n\t Try again ";
       getch();
       goto fourth;
      }
    }


   }

  class start
  {
   public:
    start();
  };

   start::start()
   {
     char choice;
     first :
     while(1)
     {
      textcolor(5);
      clrscr();
      for(int i=0;i<80;i++) cout<<(char)127;
      cout<<"\n\n\t\t\t\tMain Menu\n\t\t\t";
      for(i=0;i<25;i++) cout<<(char)126;
      cout<<"\n\n1.Enter Book Details\n";
      cout<<"2.Display Book Details\n";
      cout<<"3.Search Book\n";
      cout<<"4.Move Out\n";
      cout<<"\nYour Choice =\t";
      cin>>choice;
      if(choice=='1')
       {add_books a;   }
      else if(choice=='2')
      { display d;}
      else if(choice=='3')
       {search s;    }
      else if(choice=='4')
       break;
      else
       { cout<<"\n Invalid input \n\t\t Try again......";
	 getch();
	 goto first;
       }
    }                         //while ends
   }                          // start fn ends


    void main()
    {
    void wel();
    void bye();
    textcolor(3);
    textbackground(0);
    clrscr();
    for(int i=0;i<80;i++) cout<<(char)145;
    wel();
    cout<<"\n\t\t      ";
    cout<<"\n\n\n\tA PROJECT BY:-";
    cout<<"\n\n\n\n\t\t1. CH.V.SAI NIKHIL \n\t\t ~~~~~~~";
    cout<<"\n\n\t\t2. SHYAM AGARWAL";
    cout<<"\n\t\t ~~~~~~~\n\n\t\t3. T. Jahnavi";
    cout<<"\n\t\t ~~~~~~~\t\t\t\t\n\n\n\t\t";
    delay(100);
    for(i=0;i<5;i++) cout<<(char)175;
    cout<<"\tPRESS ENTER TO CONTINUE   ";
    for(i=0;i<5;i++) cout<<(char)175;
    getch();

    start end;
   textcolor(3);
   clrscr();
    for(i=0;i<80;i++) cout<<(char)145;
    bye();
    delay(100);
    cout<<"\n\n\t\t\t";
   char z[]="THANK YOU FOR VISITING READARIA !!!", v[]="HOPE YOU ENJOYED YOUR VISIT ";
   for(i=0;z[i]!='\0';i++){ cout<<z[i]; delay(90); }
   cout<<"\n\t\t\t    "   ;
   for(i=0;v[i]!='\0';i++){ cout<<v[i]; delay(90); }
   cout<<"\n\t\t"   ;
   for(i=0;i<50;i++) {delay(70); cout<<(char)247; }
   delay(100);
   cout<<"\n\n\n\t\t\t    "<<(char)218<<(char)196<<(char)191<<"\t\t\t"<<(char)218<<(char)196<<(char)191<<"\n";
   delay(100);
   cout<<"\t\t\t    "<<(char)179<<" "<<(char)179<<"\t\t\t"<<(char)179<<" "<<(char)179<<"\n";
   for(i=20;i>=0;i-=4)
    { cout<<"\t\t"; delay(90);
    for(int k=20-i;k>=0;k-- )cout<<" ";
    cout<<(char)1<<(char)2;
    for(int j=2*i;j>0;j--) cout<<" ";
    cout<<(char)1<<(char)2<<"\n"; }
    cout<<"\n\n\n\n\n\t\t";
    for(i=0;i<5;i++)  cout<<(char)174;
   cout<<"     PRESS ENTER TO EXIT    ";
   for(i=0;i<5;i++)  cout<<(char)175;
   getch();
    }

void wel()
{
 cout<<"  "<<(char)218;
 for(int i=0;i<4;i++) cout<<(char)196;
 cout<<(char)191;
 cout<<"\n  "<<(char)179<<" "<<(char)225<<(char)237<<" "<<(char)179;
 cout<<"\t"<<"\tWELCOME TO READARIA BOOK SHOP\t    ";
 cout<<"\n  "<<(char)179;
 for(i=0;i<4;i++) cout<<(char)177;
 cout<<(char)179<<"\t      ";
 for(i=0;i<33;i++) cout<<(char)236;
}

void bye()
{
 cout<<"  "<<(char)218;
 for(int i=0;i<4;i++) cout<<(char)196;
 cout<<(char)191;
 cout<<"\n  "<<(char)179<<" "<<(char)225<<(char)237<<" "<<(char)179;
 cout<<"\n  "<<(char)179;
 for(i=0;i<4;i++) cout<<(char)177;
 cout<<(char)179<<"\t      ";
}

int coder(char q[])
{
 ifstream c("code.txt");
 char a[15]; int z=0;
 if(c)
 while(!c.eof())
 { c.getline(a,11,'\n');
  if(!strcmp(a,q))
   { z=1; break;}
 else
   z=0;
 }
 return z;
}
