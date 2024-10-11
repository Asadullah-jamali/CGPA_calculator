// CGPA CALCULATOR;
#include <iostream>
using namespace std;
int main() {
	cout << "CGPA AND GPA CALCULATOR \nnumber of semester 1 for GPA" << endl << endl;
	int a,b[20],c=0,d=1,e[100],f;
	float aa[100],bb,cc[100],dd[100],ee[100],ff=0,gg,hh=0,ii,jj=0,kk=0,ll=0;
	char aaa,bbb;
	cout << "Enter the number of semesters: "; // for total semesters;
	cin >> a; // a is total semester
	cout << endl<<"Enter \"y\" / \"Y\" if the number of subject is same in every semester OR Enter \"n\" / \"N\" if not: "<< endl;
	cin >> aaa;
	// for same no of subject so user enter it only one time;
	if(aaa == 'y' or aaa=='Y') {
		cout << "Enter the number of subject in semester: ";
		cin >> b[0];
		for(int i=1; i<a; i++) {
			b[i]=b[0]; // for store the same no of subject
		}
		for(int i=0; i <a; i++) {
			c+=b[i]; //c is the total subjects 
		}
	}
	// for not same no of subject so user enter it manualy;
	if(aaa == 'n' or aaa=='N') {
		for (int i=0; i<a; i++) {
			cout << "Enter the number of subject in semester " << d << " : " ;
			cin >> b[i]; // entering the number of subject in different semester
			d++;
		}
		for(int i=0; i <a; i++) {
			c+=b[i]; // c is the total subjects
		}

	}
	// for cradit hours in each subject;
	cout << "Enter \"y\" / \"Y\" if cradit hours of each subject is same OR Enter \"n\"/ \"N\" if not :" << endl;
	cin >> bbb;

	if(bbb == 'y' or bbb=='Y') {
		cout << "Enter the cradit hour of subject: ";
		cin >> e[0];
		for(int i=1; i<c; i++) {
			e[i]=e[0]; // e is same cradit hours stored in array for each subject
		}

		d=1;
		int xx=0;
		for (int i=0; i<a; i++) {
			cout << endl<<"Enter the marks of subject in semester " << d << endl<<endl; ;
			for(int x=1; x<=b[i]; x++) { // b[i] is the stored no of subject in ith place
				cout << "Enter the marks obtain in subject "<< x<<": ";
				cin>> aa[xx]; // marks obtained in each subject
				cout << endl;
				xx++;
			}

			d++;
		}

		for(int i=0; i <c; i++) {
			f+=e[i]; // f is total cradit hours
			bb+=aa[i]; // bb is total marks
		}
	}
	// for not same no of subject cradit hours so user enter it manualy;
	if(bbb == 'n' or bbb=='N') {
		d=1;
		int xx=0;
		for (int i=0; i<a; i++) {
			cout << endl<<"Enter the cradit hours AND marks of subject in semester " << d << endl<<endl; ;
			for(int x=1; x<=b[i]; x++) {
				cout << "Enter the cradit hours of subject " << x << ": ";
				cin >> e[xx]; //e is cradit hours
				cout << "Enter the marks obtain in subject "<< x<<": ";
				cin>> aa[xx]; //aa is marks obtain in each subject
				cout << endl;
				xx++;
			}

			d++;
		}
		for(int i=0; i <c; i++) {
			f+=e[i]; // f is total cradit hours
			bb+=aa[i]; // bb is total marks
		}
	}
	cout <<endl<< endl<< f <<endl<< endl; // for total cradit hours
	cout << bb << endl<< endl; // total marks

	// for grade point we use punjab university grading point;
	// marks >= 85 marks A grade 4 grade point
	// marks  < 85  and marks >=80  A-  grade 3.7 grade point
	// marks  < 80  and marks >=75  B+  grade 3.3 grade point
	// marks  < 75  and marks >=70  B  grade 3.0 grade point
	// marks  < 70  and marks >=65  B-  grade 2.7 grade point
	// marks  < 65  and marks >=60  C+  grade 2.3 grade point
	// marks  < 60  and marks >=55  C   grade 2.0 grade point
	// marks  < 55  and marks >50   C-  grade 1 grade point
	// marks  < 50  F grade  0 grade point

	// result is:
	d=1;
	int xx=0,zz=0,ww=0, yy=0,pp=0;

	for (int i=0; i<a; i++) { // a is the number of semester
		cout << endl<<"The cradit hours AND marks of subject in semester " << d << endl<<endl; ;
		for(int x=1; x<=b[i]; x++) { // b[i] is the number of subject in ith place
			cout << "\t subject "<< x<<"\t" ;
			xx++;
		}
		cout << endl;
		cout << "Marks" ; // for showing marks
		for(int x=1; x<=b[i]; x++) { // b[i] is the number of subject in ith place
			cout << "\t   "<< aa[yy]<<"\t        " ; // aa is mark of yyth place
			yy++;
		}
		cout << endl<<"CH Hours   " ; // for showing cradit hours
		for(int x=1; x<=b[i]; x++) { // b[i] is the number of subject in ith place
			cout << e[zz]<<"\t\t\t   " ; // e is the cradit hour in zzth place
			ii += e[zz]; // ii is the sum of all subject cradit hours 
			jj+= e[zz]; // jj is the sum of only one semester cradit hours
			zz++;
		}
		
		
		//adjust according to your scores point.
		
		
		cout << endl<<"GP         " ; // for grade point 
		for(int x=1; x<=b[i]; x++) {
			if(aa[pp] >= 85) { // a is no of semester and aa is the grade point for pth place
				cout << 4 << "\t\t\t   " ;
				ee[pp]=4;
			} else {
				if(aa[pp] < 85 &&  aa[pp] >=80) {
					cout << 3.7 << "\t\t\t   " ;
					ee[pp]=3.7;
				} else {
					if(aa[pp] < 80 &&  aa[pp] >=75) {
						cout << 3.3 << "\t\t\t   " ;
						ee[pp]=3.3;
					} else {
						if(aa[pp] < 75 &&  aa[pp] >=70) {
							cout << 3.0 << "\t\t\t   " ;
							ee[pp]=3.0;
						} else {
							if(aa[pp] < 70 &&  aa[pp] >=65) {
								cout << 2.7 << "\t\t\t   " ;
								ee[pp]=2.7;
							} else {
								if(aa[pp] < 65 &&  aa[pp] >=60) {
									cout << 2.3 << "\t\t\t   " ;
									ee[pp]=2.3;
								} else {
									if(aa[pp] < 60 &&  aa[pp] >=55) {
										cout << 2 << "\t\t\t   " ;
										ee[pp]=2;
									} else {
										if(aa[pp] < 55 &&  aa[pp] >=50) {
											cout << 1 << "\t\t\t   " ;
											ee[pp]=1;
										} else {
											if(aa[pp] <50) {
												cout << 0 << "\t\t\t   " ;
												ee[pp]=0;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			pp++;
		}

		cout << endl<<"GP * CH    "; // for grade point * cradit hours
		for(int x=1; x<=b[i]; x++) {
			cout << e[ww]*ee[ww]<<"\t\t\t   " ; // multiply the  ee gp and e ch in wwth place
			ff = e[ww]*ee[ww]; // ff  is the sum of gp*ch
			gg+=ff; // gg is the sum of all subject gp*ch
			kk += ff; // kk is the sum of only one semester gp*ch
			ww++;
		}
		cout << endl<< endl << "The  GPA is: " << kk/jj <<endl;
		cout << endl << "The CGPA is: " << gg/ii <<endl;
		jj=0;
		kk=0;
		d++;
	}
	cout <<  endl  <<"The result is: " << endl << endl;
	cout << "The number of semesters: " << a << endl;
	cout << "Total subjects: " << c<< endl;
	cout << "Total cradit hours: " << f << endl;
	cout << "Total marks: " << bb << endl;
	cout << "The CGPA is: " << gg/ii << endl;
	return 0;
}