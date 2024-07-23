#include <iostream>
#include <string>
using namespace std;

class KalingaUni 
{
    int kalseeFee;
    int branch, course;
    string name, email, city;
    int phno;
    int roll, sub[3], t, p;
    string selectedBranch, selectedCourse;
    string branchNames[9] = {"", "Commerce & Management", "Technology", "Arts & Humanities", "Law",
	                            "Information & Technology", "Science", "Pharmacy", "Education"};
    string courseNames[9][5] = {{"", "MBA", "BBA", "M.Com", "B.Com"},
                                {"", "M.Tech", "B.Tech", "B.Desi", "D.Engi"},
                                {"", "MA", "BA", "MSW", "BSW"},
                                {"", "LL.M", "LL.B", "BBA LL.B", "BSW"},
                                {"", "MCA", "PGDCA", "B.SC(CS)", "BCA"},
                                {"", "M.SC", "B.SC(NOM)", "B.FD", "B.ID"},
                                {"", "M.Pha", "B.Pha", "D.Pha", "Dip.Pha"},
                                {"", "M.Edu", "B.Edu", "B.P.Edu", ""}};

public:
    void welcomeToKalinga();
    void processTransaction();
    int kalseeR();

    void academics();

    void enterBranchCourse();
    int enterBranchR();
    int enterCourseR();
    void setBranchAndCourseNames();

    void studentDetails();
    void getResults();
    void calculateTotalPercentage();

    void displayResults();
    void fail();
    void third();
    void second();
    void first();
};

void KalingaUni::welcomeToKalinga() 
{
    cout << "\n\t\t\t\t\t\t\t\tWelcome to Kalinga University\n";
}
void KalingaUni::processTransaction() 
{
    cout << "Enter kalsee fee (1000): ";
    cin >> kalseeFee;
    if (kalseeFee == 1000) 
	{
        cout << "Your transaction is successful\n";
    } 
    
	else 
	{
        cout << "Your transaction is not successful\n";
    }
}
int KalingaUni::kalseeR() 
{
    return kalseeFee;
}

void KalingaUni::academics() 
{
    cout << "  _________________________________________________________________________________________________________________________________________________\n";
    cout << " |                                                                    FACULTY                                                                     |\n";
    cout << " |------------------------------------------------------------------------------------------------------------------------------------------------|\n";
    cout << " |               1                  ||                2                  ||               3                  ||                4                  |\n";
    cout << " | Faculty of Commerce & Management ||       Faculty of Technology       ||   Faculty of Arts & Humanities   ||         Faculty of Law            |\n";
    cout << " |            course                ||               course              ||             course               ||            course                 |\n";
    cout << " |   1      2        3         4    ||    1        2        3        4   ||    1       2      3        4     ||    1      2       3          4    |\n";
    cout << " |  MBA |  BBA  |  M.Com  |  B.Com  || M.Tech | B.Tech | B.Desi | D.Engi ||   MA   |  BA  |  MSW  |   BSW    ||  LL.M | LL.B | BA LL.B | BBA LL.B |\n";
    cout << " |----------------------------------||-----------------------------------||----------------------------------||-----------------------------------|\n";
    cout << " |----------------------------------||-----------------------------------||----------------------------------||-----------------------------------|\n";
    cout << " |               5                  ||                6                  ||               7                  ||                8                  |\n";
    cout << " |    Faculty of Info Technology    ||        Faculty of Science         ||      Faculty of Pharmacy         ||       Faculty of Education        |\n";
    cout << " |              course              ||              course               ||              course              ||              course               |\n";
    cout << " |    1       2        3        4   ||   1        2        3       4     ||    1       2       3        4    ||      1          2           3     |\n";
    cout << " |   MCA  | PGDCA | B.SC(CS) | BCA  || M.SC | B.SC(NOM) | B.FD |  B.ID   ||  M.Pha | B.Pha | D.Pha | Dip.Pha ||    M.Edu  |   B.Edu  |   B.P.Edu  |\n";
    cout << " |________________________________________________________________________________________________________________________________________________|\n";
}

void KalingaUni::enterBranchCourse() 
{
    cout << "\nEnter Branch: ";
    cin >> branch;
    cout << "Enter Course: ";
    cin >> course;
}

int KalingaUni::enterBranchR() 
{
    return branch;
}
int KalingaUni::enterCourseR() 
{
    return course;
}

void KalingaUni::setBranchAndCourseNames() 
{
    if (branch >= 1 && branch <= 9) 
	{
        selectedBranch = branchNames[branch];
    } 
	else 
	{
        selectedBranch = "Invalid Branch";
    }

    if (branch >= 1 && branch <= 9 && course >= 1 && course <= 4) 
	{
        selectedCourse = courseNames[branch - 1][course];
    } 
	else 
	{
        selectedCourse = "Invalid Course";
    }
}

void KalingaUni::studentDetails() 
{
    cout << "Full Name              : ";
    cin >> name;
    cout << "+91 Enter Mobile Number: ";
    cin >> phno;
    cout << "Email Address          : ";
    cin >> email;
    cout << "City You Live In       : ";
    cin >> city;
}
void KalingaUni::getResults() 
{
    cout << "your selected branch is: " << selectedBranch << "\n";
    cout << "your selected course is: " << selectedCourse << "\n";
    cout << "Enter roll no          : ";
    cin >> roll;
    cout << "Enter 3 subject marks\n";
    for (int i = 0; i < 3; i++) 
	{
        cout << "Subject " << i + 1 << " marks        : ";
        cin >> sub[i];
    }
}
void KalingaUni::calculateTotalPercentage() {

    t = 0;
    for (int i = 0; i < 3; i++) 
	{
        t += sub[i];
    }
    p = t * 100.0 / 300.0;
}

void KalingaUni::displayResults() 
{
    cout << "ROLL NO: " << roll << " FULL NAME: " <<name << " BRANCH: " <<selectedBranch
         << " COURSE: " <<selectedCourse << " P NO: " <<phno << " EMAIL: "<<email
         << " CITY: " <<city << " PER: " <<p << "%" << " TOTAL MARKS: " <<t << " \n";
}

void KalingaUni::fail() 
{
    cout << "\nFail student list:\n";
    if (p <= 32) 
	{
        displayResults();
    }
}
void KalingaUni::third() 
{
    cout << "\n3rd student list:\n";
    if (p >= 33 && p < 45) 
	{
        displayResults();
    }
}
void KalingaUni::second() 
{
    cout << "\n2nd student list:\n";
    if (p >= 45 && p < 60) 
	{
        displayResults();
    }
}
void KalingaUni::first() 
{
    cout << "\n1st student list:\n";
    if (p >= 60) 
	{
        displayResults();
    }
}

int main() 
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    
    KalingaUni students[numStudents];
    
    for (int i = 0; i < numStudents; i++) 
	{
        students[i].welcomeToKalinga();
        students[i].academics();
        cout << "\nApplication Form No: " << 1045 + i << "\n";
        students[i].processTransaction();

        if (students[i].kalseeR() == 1000) 
		{
            students[i].enterBranchCourse();
            if (students[i].enterBranchR() <= 9 && students[i].enterCourseR() <= 4) 
			{
                students[i].setBranchAndCourseNames();
                students[i].studentDetails();
                students[i].getResults();
                students[i].calculateTotalPercentage();
            } 
			
			else 
			{
                cout << "Error: Invalid value entered\n";
            }
        }
    }

    for (int i = 0; i < numStudents; i++) 
	{
        students[i].fail();
        students[i].third();
        students[i].second();
        students[i].first();
    }

    return 0;
}


