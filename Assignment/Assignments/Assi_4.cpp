// // Write a C++ program that creates an output file, writes 
// // information  to  it,  closes  the  file, open it again as an  input  file 
// // and read the information from the file.
// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str;
//     fstream ifs1("Sample.txt");    
//     cout<<"\n 1.Enter the String:- ";
//     getline(cin,str);
//     ifs1>>str;
//     ifs1.close();
    
//     fstream ifs2("Sample.txt");
//     cout<<"\n 2.Enter the String:- ";
//     getline(cin,str);
//     ifs2>>str;
//     ifs2.close();
//     ofstream ofs("Sample.txt");
//     ofs<<str;
//     cout<<str<<endl;
//     ofs.close();
//     return 0;
// }



// Q: write a single file handling program in c++ to reading and writing data on a file.

#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int rno,fee;
	char name[50];

	cout<<"Enter the Roll Number:";
	cin>>rno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fee:";
	cin>>fee;

	ofstream fout("d:/student.doc");

	fout<<rno<<"\t"<<name<<"\t"<<fee; //write data to the file student

	fout.close();

	ifstream fin("d:/student.doc");

	fin>>rno>>name>>fee; //read data from the file student

	fin.close();

	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

	return 0;
}
