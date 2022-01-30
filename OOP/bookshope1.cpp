#include <iostream>
#include <conio.h> //include<conio.h> It is a header file used in c and cpp and it includes inbuilt functions like getch() and clrscr().It stand for console input ouput i.e. it takes input from keyboard and displays it on screen.
#include <stdio.h> //Use to Rename or Remove a File
#include <fstream> //for file handeling
using namespace std;
class bookshope
{
public:                   //""PRASHANT""
    void control_panel(); //yaha pe hamne decleration kar diya (ab isko define class ke bahar karunga aapki margi aap class ke andar bhi define kar sakte h or bahar bhi)
    // class ke function ko aapko class ke bahar define karna h to aap pahle 1.written data type(void) 2.then class ka name(bookshop) jiske fuction ko define karna ho, then we put resolution operator then jis fuction ko use karna ho uska name(control_panel() )
    void add_book();
    void show_books();
    void check_book();
    void update_book();
    void del_book();
};
void bookshope ::control_panel() //here :: is called scope resolution operator   //""PRASHANT"""
// The scope resolution operator ( :: ) is used for several reasons. For example: If the global variable name is same as local variable name, the scope resolution operator will be used to call the global variable.
// It is also used to define a function outside the class and used to access the static variables of class.
{
    system("cls");                       //system(“cls”) which is used to make the screen/terminal clear. ----There is another one also which is system(“pause”) which is used to execute pause command and make the screen/terminal wait for a key press.    //""PRASHANT""
    cout << "\n\n\t\t\t\tControl Panel"; // \n and \t use=\n is for vertical tab . It takes the cursor to next line.\t is for horizontal tab.
    cout << "\n\n 1. ADD BOOK";
    cout << "\n 2. DISPLAY BOOKS";
    cout << "\n 3. CHECK PARTICULAR BOOK";
    cout << "\n 4. UPDATE BOOK";
    cout << "\n 5. DELETE BOOK";
    cout << "\n 6. EXIT";
}
void bookshope ::add_book()
{
    system("cls");
    fstream file; //file handeling k liye 1 specific data type hoti h "fstream"
    string a_name, b_name, b_id;
    cout << "\n\n\t\t\t\tADD NEW BOOK";
    cout << "\n\n Book Name : ";
    cin >> a_name;
    cout << "\n\n Author Name : ";
    cin >> b_name;
    cout << "\n\n Book ID : ";
    cin >> b_id;
    int no_copy;
    cout << "\n\n No. of Copies : ";
    cin >> no_copy;
    file.open("D://book.txt", ios::out | ios::app); //first kis location pe jake ye file open hogi hard drive ka name batana h D drive (D) ,
    // second file ka name(book.txt) txt because note pad ki file txt format me open hoti h
    //  then (ios) then (::) then (out) means hame file kis ke liye open karna h read or write , out mode is used to write.
    // then(ios::app) app=append , append means agar aap append nhi likhte to jo new data type aata h wo previous data pe overwrite ho jata h means previous data sara gayab new data save
    // agar previous data ko bhi rakhna chahte ho to (ios::app) lagana padega
    file << " " << b_id << b_name << " " << a_name << " " << no_copy << "\n"; //file me data send karne ke liye
    file.close();                                                             //builtin fuction which close owr file
}

void bookshope ::show_books()
{
    system("cls");
    fstream file;
    int no_copy;
    string b_name, b_id, a_name;
    cout << "\n\n\\n\n\nShow All Books";
    file.open("D;//book.txt", ios::in);
    if (!file)
    { //agar file exist nhi karti to wo file error bata dega
        cout << "\n\n File opening Error....";
    }
    else
    {
        cout << "BOOK ID      BOOK Author     No. of Copies\n\n";
        file >> b_id >> b_name >> a_name >> no_copy; //file se data fetch karenge
        while (!file.eof())
        {
            cout << "    " << b_id << "\t" << b_name << "\t" << a_name << "\t" << no_copy << "\n\n"; //displaying the data
            file >> b_id >> b_name >> a_name >> no_copy;
        }
        file.close();
    }
}

void bookshope::check_book()
{
    system("cls");              
    fstream file;
    int no_copy,count=0;    //ye book ko find karne ke liye agar book mil jati h to count++ niche kara h
    string b_id,b_name,a_name,b_idd;
    cout<<"\n\n\tCheck Specific Book";
    file.open("D://book.txt",ios::in);
    if(!file){
        cout<<"\n\nfile opening error\n"
    }
    else{
        cout<<"\nBook ID : ";
        cin>>b_idd;  //this book is to compare with other books id
        file>>b_id>>b_name>>a_name>>no_copy;
        while (!file.eof())
        {
            if(b_idd == b_id)
            {
                system("cls");
                cout<<"\n\n\t\tCheck specific Book";
                cout<<"\n\n Book ID : "<<b_id;
                cout<<"\n\n\t\tName : "<<b_name;
                cout<<"\n\n\t\tNo. of copies : "<<no_copy;
                count++;       //ye book ko find karne ke liye agar book mil jati h to count++ niche kara h
                break;         //book agar mil jaye to break kar do means wo while loop se bahar aa jayega

            }
            file>>b_id>>b_name>>a_name>>no_copy;
        }
        file.close();
        if(cout == 0)
        cout<<"\n\n Book Id NOT found : ";
        

    }

}

void bookshope ::update_book()
{
    system("cls");
    fstream file,file1;
    int no_copy,no_co,count=0;        //count = 0 check that muje file me se data mila  ki nhi agar se if me chala jata h menas data mil chuka h
    string b_name,b_na,a_name,a_na,b_idd,b_id;
    cout<<"\n\n\t\tUpdate Book Record\n";
    file.open("D.//book.txt",ios::in);
    if(!file)         //Kya wo file d drive me availabe nhi h 
    cout<<"\n\nFile opening error....";
    file1.open("D://book1txt",ios::app|ios::in)
    else{
        cout<<"\n\n Book ID : ";      //sabse pahle user se book id lenge kyoki hamko book ke record ko update karna h then jo book id lenge usko baki book id se compare karenge
        cin>>b_id;
        file>>b_idd>>b_name>>a_name>>no_copy;
        while (!file.eof())
        {
            if (b_id == b_idd){
                system("cls");
                cout<<"\n\n\\t\tUpdate Book Record";
                cout<<"\n\nNew Book NAME : ";
                cin>>b_na;
                cout<<"\n\n\t\tAuthor Name : ";
                cin>>a_na;
                cout<<"\n\n No. of copeis : ";
                cin>>no_co;
                file1<<" "<<b_id<<" "<<b_na<<" "<<a_na<<" "no_co"\n";
                cout++;
            }
            else{

            }
            file>>b_idd>>b_name>>a_name>>no_copy;
        }
        
    }
    file.close();
    file1.close();
    remove("D://book.txt");
    rename("D://book1.txt","D://bool.txt");

}

void bookshope::del_book()
{
    system("cls");
    fstream file,file1;  //ye to wo file ho gai jo already exits karti h jisme mera data h then previous data delete kar ke
    //hame 1 or file ki jarurat h kyoki file me ham data direct delete ya operate nhi karte uske liye ham 1 nai file create karte h 
    // or previous file ka sara data utha ke new file me transfer karte h uske liye 1 or file ki need h isliye we made "file1" file1 me data transfer karna h
    int no_copy,count=0;
    string b_id,b_idd,b_name,a_name;
    cout<<"\n\n\t\tDelete Book Record";
    file1.open("D://book1.txt",ios::app|ios::out);         //file1 kya khale hogi ab isme hame data transfer karna h to ise hame out mode ke liye open karna padega uske liye hame append bhi use karna padega means ispe se data right karna h
    file.open("D://book.txt",ios::in);                   //data read karna h isme se
    if(!file){
        cout<<"\n\n file opening error...";

    }else{
        cout<<"\n\n Book ID : ";   //book id kya h jo hame delete karni h
        cin>>b_id;
        file>>b_idd>>b_name>>a_name>>no_copy;      //file jo hamne read mode k liye open kiya tha usme se data leke aainge one by one or har data ke andar hamari jo book id (cin>>b_id;) h uske sath compare karnge
        while(!file.eof()){     //file ke andar kitna data h hame nhi pata so we use while loop jo apn ne file open kari h read mode ke liye agar wo nhi end hui to is loop ko run karte raho
            
            if(b_id == b_idd){      //jo user ne id di h kya wo equal h file wali id k 

                system("cls");        //jo piche wali screen h use clear kar do yaha jaruri nhi h bas thoda accha lage iske liye
                cout<<"\n\n\t\tDelete Book Record";
                cout<<"\n\nOne book is deleted successfully....";
                count++;


            }
            else{        //jo data match nhi karta use hame delete nhi karna h use hame sequre karna h to uske liye is file se wo wala data utha ke new file me transfer karna h to nhi file ka name h "file1"
            file<<" "<<b_idd<<" "b_name<<" "<<a_name<<" "no_copy<<"\n";               //data ka sequence read or write karne ka same hona chiye jo apne first time use kiya tha nhi to error de dega
            file>>b_idd>>b_name>>a_name>>no_copy;    

            }

             

        }
        if(count == 0)
        cout<<"\n\nBook ID not found..";

    }
    //ab hame jo dono file open kari h usko close karna h or  jo previous file h ("file")  jisme se data utha ke new file me transfer karwaya h is file ko remove karna h or ye jo new file h jiske name book 1 rakha h iske name ko rename karke book name karna h
    file.close();
    file1.close();
    remove("D://book.txt");
    rename("D://book1.txt","D://book.txt");


    

}

int main()
{

    char x;      //"char" becauser we are asking for yes or no (y,n) in that line 'Do you want to add another book(y,n)' here y and n are character that's why we take char
    bookshope b; //bookshop class ka name h or "b" object ka name h
p:               //yaha pe "p" lebel ko declare kiya h jo hamne last me banaya the "goto p" usse kaya hoga hamare p lebel pe wapis aa jaiga hamarea compiler.     //""PRASHANT""
    b.control_panel();
    int choice;
    cout << "\n\n Your Choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        // 1 se jada book ka record enter karna chate h to uske liye ye do while chalti rahegi
        do
        {
            b.add_book();
            cout << "Do you want to add another book(y,n) : ";
            cin >> x;
        } while (x == 'y'); //matlab upar wali loop jab tak chalegi jab tak x==y ho means x ke pass y ho to wo loop chalegi warna nhi chalegi
        break;
    case 2:
        b.show_books();
        break;
    case 3:
        b.check_book();
        break;
    case 4:
        b.update_book();
        break;
    case 5:
        b.del_book();
        break;
    case 6:
        exit(0); //"exit" is built in fuction which close owr software.            //""PRASHANT""
    default:
        cout << "\n\n Invalid Value... Please Try Again";
    }
    getch(); //command ko stay karne k liye                                            //""PRASHANT""
    goto p;  //wapis jane k liye(upar jane k liye)                                                    //""PRASHANT""
    // getch() nhi lagai ge to  aapko pata h
    // ye goto p pe jata h to wo sara clear kar deta h
    // lekin ham chahte h ki ye sab jab clear kare jab tak me koi key na press kare
    //Important Points regarding getch() method:

    //1.getch() method pauses the Output Console until a key is pressed.
    //2.It does not use any buffer to store the input character.
    //3.The entered character is immediately returned without waiting for the enter key.
    //4.The entered character does not show up on the console.
    //5.The getch() method can be used to accept hidden inputs like password, ATM pin numbers, etc.
}
