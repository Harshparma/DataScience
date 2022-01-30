// C++ program to illustrate bookshop
// management system using File Handling
#include <iostream>
#include <fstream>  //for file handeling
#include <stdio.h> //Use to Rename or Remove a File
#include <stdlib.h>
using namespace std;

// Bookshop Class
class bookshope {
public:
	void control_panel();//yaha pe hamne decleration kar diya (ab isko define class ke bahar karunga aapki margi aap class ke andar bhi define kar sakte h or bahar bhi)..class ke function ko aapko class ke bahar define karna h to aap pahle 1.written data type(void) 2.then class ka name(bookshop) jiske fuction ko define karna ho, then we put resolution operator then jis fuction ko use karna ho uska name(control_panel() )
	void add_book();
	void show_book();
	void check_book();
	void update_book();
	void del_book();
};

// Function to display the menus
void bookshope::control_panel() //here :: is called scope resolution operator ...// The scope resolution operator ( :: ) is used for several reasons. For example: If the global variable name is same as local variable name, the scope resolution operator will be used to call the global variable.// It is also used to define a function outside the class and used to access the static variables of class.
{
	system("cls");   //system(“cls”) which is used to make the screen/terminal clear. ----There is another one also which is system(“pause”) which is used to execute pause command and make the screen/terminal wait for a key press.   
	cout << "\n\n\t\t\t\tCONTROL PANEL";
	cout << "\n\n1. ADD BOOK";
	cout << "\n2. DISPLAY BOOKS";
	cout << "\n3. CHECK PARTICULAR BOOK";
	cout << "\n4. UPDATE BOOK";
	cout << "\n5. DELETE BOOK";
	cout << "\n6. EXIT";
}

// Function to add book
void bookshope::add_book()
{
	system("cls");    //system(“cls”) which is used to make the screen/terminal clear. ----There is another one also which is system(“pause”) which is used to execute pause command and make the screen/terminal wait for a key press.   
	fstream file;
	int no_copy;
	string b_name, a_name, b_id;
	cout << "\n\n\t\t\t\tADD BOOKS";
	cout << "\n\nBook ID : ";
	cin >> b_id;
	cout << "\nBook Name : ";
	cin >> b_name;
	cout << "\nAuthor Name : ";
	cin >> a_name;
	cout << "\nNo. of Books : ";
	cin >> no_copy;

	// Open file in append or
	// output mode
	file.open("D:// book.txt",     //first kis location pe jake ye file open hogi hard drive ka name batana h D drive (D) , // second file ka name(book.txt) txt because note pad ki file txt format me open hoti h//  then (ios) then (::) then (out) means hame file kis ke liye open karna h read or write , out mode is used to write.// then(ios::app) app=append , append means agar aap append nhi likhte to jo new data type aata h wo previous data pe overwrite ho jata h means previous data sara gayab new data save// agar previous data ko bhi rakhna chahte ho to (ios::app) lagana padega
			ios::out | ios::app);
	file << " " << b_id << " "        //file me data send karne ke liye
		<< b_name << " " << a_name
		<< " " << no_copy << "\n";
	file.close();  //builtin fuction which close owr file
}

// Function to display book
void bookshope::show_book()
{
	system("cls");
	fstream file;
	int no_copy;
	string b_name, b_id, a_name;
	cout << "\n\n\t\t\t\t\tShow All BOOKS";

	// Open the file in input mode 
	file.open("D:// book.txt", ios::in);
	if (!file)  //agar file exist nhi karti to wo file error bata dega
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nBook ID\t\tBook"
			<< "\t\tAuthor\t\tNo. of "
				"Books\n\n";
		file >> b_id >> b_name;     //file se data fetch karenge
		file >> a_name >> no_copy;

		// Till end of file is reached
		while (!file.eof()) {

			cout << " " << b_id         //displaying the data
				<< "\t\t" << b_name
				<< "\t\t" << a_name
				<< "\t\t" << no_copy
				<< "\n\n";
			file >> b_id >> b_name;
			file >> a_name >> no_copy;
		}

		system("pause");    // There is another one also which is system(“pause”) which is used to execute pause command and make the screen/terminal wait for a key press.

		// Close the file
		file.close();
	}
}

// Function to check the book
void bookshope::check_book()
{
	system("cls");
	fstream file;
	int no_copy, count = 0;     //ye book ko find karne ke liye agar book mil jati h to count++ niche kara h
	string b_id, b_name, a_name, b_idd;    //this book is to compare with other books id

	cout << "\n\n\t\t\t\tCheck "
		<< "Particular Book";

	// Open the file in input mode
	file.open("D:// book.txt", ios::in);
	if (!file)        //kya mere file is location me exist karti bhi h k nhi
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_idd;
		file >> b_id >> b_name;    //file se data fetch karao
		file >> a_name >> no_copy;

		while (!file.eof()) {       //file me kitna data h muje nhi pata isliye end of file nhi ho jai jab tak loop chalega

			if (b_idd == b_id) {

				system("cls");
				cout << "\n\n\t\t\t\t"
					<< "Check Particular Book";
				cout << "\n\nBook ID : "
					<< b_id;
				cout << "\nName : "
					<< b_name;
				cout << "\nAuthor : "<< a_name;
					
				cout << "\nNo. of Books : "
					<< no_copy;
				cout << endl
					<< endl;
				count++;  //ye book ko find karne ke liye agar book mil jati h to count++ niche kara h
				break;    //book agar mil jaye to break kar do means wo while loop se bahar aa jayega
			}
			file >> b_id >> b_name;
			file >> a_name >> no_copy;
		}
		system("pause");
		file.close();
		if (count == 0)   //count ki value increment nhi hui to vo abhi 0 h means wo if condition me nhi gaya to ham keh denge book not found
			cout << "\n\nBook ID Not"
				<< " Found...";
	}
}

// Function to update the book
void bookshope::update_book()
{
	system("cls");
	fstream file, file1;    //sabse pahle user se book id lenge kyoki hamko book ke record ko update karna h then jo book id lenge usko baki book id se compare karenge
	int no_copy, no_co, count = 0;  //count = 0 check that muje file me se data mila  ki nhi agar se if me chala jata h menas data mil chuka h
	string b_name, b_na, a_name;
	string a_na, b_idd, b_id;

	cout << "\n\n\t\t\t\tUpdate Book Record";
	file1.open("D:// book1.txt",
			ios::app | ios::out);
	file.open("D:// book.txt", ios::in);

	if (!file)   //Kya wo file d drive me availabe nhi h 
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";  //sabse pahle user se book id lenge kyoki hamko book ke record ko update karna h then jo book id lenge usko baki book id se compare karenge
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;

		// Till end of file is reached
		while (!file.eof()) {
			if (b_id == b_idd) {
				system("cls");
				cout << "\t\t\t\t"
					<< "Update Book Record";
				cout << "\n\nNew Book Name : ";
				cin >> b_na;
				cout << "\nAuthor Name : ";
				cin >> a_na;
				cout << "\nNo. of Books : ";
				cin >> no_co;
				file1 << " " << b_id << " "
					<< b_na << " "
					<< a_na << " " << no_co
					<< "\n\n";
				count++;
			}
			else
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
		}
		if (count == 0)
			cout << "\n\nBook ID"
				<< " Not Found...";
	}
	cout << endl;
	system("pause");

	// Close the files
	file.close();
	file1.close();
	remove("D:// book.txt");
	rename("D:// book1.txt",
		"D:// book.txt");
}

// Function to delete book
void bookshope::del_book()
{
	system("cls");
	fstream file, file1;   //ye to wo file ho gai jo already exits karti h jisme mera data h then previous data delete kar ke //hame 1 or file ki jarurat h kyoki file me ham data direct delete ya operate nhi karte uske liye ham 1 nai file create karte h // or previous file ka sara data utha ke new file me transfer karte h uske liye 1 or file ki need h isliye we made "file1" file1 me data transfer karna h
	int no_copy, count = 0;
	string b_id, b_idd, b_name, a_name;
	cout << "\n\n\t\t\t\tDelete a Book";

	// Append file in output mode
	file1.open("D:// book1.txt",     //file1 kya khale hogi ab isme hame data transfer karna h to ise hame out mode ke liye open karna padega uske liye hame append bhi use karna padega means ispe se data right karna h
			ios::app | ios::out);
	file.open("D:// book.txt",       //data read karna h isme se
			ios::in);

	if (!file)
		cout << "\n\nFile Opening Error...";
	else {

		cout << "\n\nBook ID : ";       //book id kya h jo hame delete karni h
		cin >> b_id;
		file >> b_idd >> b_name;         //file jo hamne read mode k liye open kiya tha usme se data leke aainge one by one or har data ke andar hamari jo book id (cin>>b_id;) h uske sath compare karnge
		file >> a_name >> no_copy;
		while (!file.eof()) {            //file ke andar kitna data h hame nhi pata so we use while loop jo apn ne file open kari h read mode ke liye agar wo nhi end hui to is loop ko run karte raho

			if (b_id == b_idd) {          //jo user ne id di h kya wo equal h file wali id k

				system("cls");
				cout << "\n\n\t\t\t\t"
					<< "Delete a Book";
				cout << "\n\nBook is Deleted "
						"Successfully...\n\n";
				count++;
			}
			else            //jo data match nhi karta use hame delete nhi karna h use hame sequre karna h to uske liye is file se wo wala data utha ke new file me transfer karna h to nhi file ka name h "file1"
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy      //data ka sequence read or write karne ka same hona chiye jo apne first time use kiya tha nhi to error de dega
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
		}
		if (count == 0)
			cout << "\n\nBook ID "
				<< "Not Found...";
	}
	system("pause");

	// Close the file
	file.close();
	file1.close();
	remove("D:// book.txt");
	rename("D:// book1.txt",
		"D:// book.txt");
}

// Function for book shop record
void bookShopRecord()
{
	int choice;
	char x;   //"char" becauser we are asking for yes or no (y,n) in that line 'Do you want to add another book(y,n)' here y and n are character that's why we take char
	bookshope b;

	while (1) {      //The while(1) or while(any non-zero value) is used for infinite loop. There is no condition for while. As 1 or any non-zero value is present, then the condition is always true. So what are present inside the loop that will be executed forever. To come out from this infinite loop, we have to use conditional statement and break statement.

		b.control_panel();
		cout << "\n\nEnter your choice : ";
		cin >> choice;
		switch (choice) {

		case 1:
			do {

				b.add_book();
				cout << "\n\nWant to add"
					<< " another book? "
						"(y/n) : ";
				cin >> x;
			} while (x == 'y');
			break;

		case 2:
			b.show_book();
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
			exit(0);
			break;

		default:
			cout << "\n\nINVALID CHOICE\n";
		}
	}
}

// Driver Code
int main()
{
	// Function Call
	bookShopRecord();

	return 0;
}
