#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int random(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

// Subject class
class Subject
{
private:
public:
    string grade;
    int score;
    string name;

    Subject(string name)
    {
        this->name = name;
    };
    Subject()
    {

        this->grade = "";
        this->score = 0;
    }
    string evaluateGrade()
    {
        if (score > 70)
            grade = "A";
        else if (score > 60)
            grade = "B";
        else if (score > 50)
            grade = "C";
        else if (score > 40)
            grade = "D";
        else
            grade = "F";

        return grade;
    }
};

// Student class

class Student
{

public:
    string name;
    int matNum;
    static int numberOfStudents;
    Student()
    {
        name = "";
        matNum = 0;
    };
    Student(string aName, int aMatNum)
    {
        name = aName;
        matNum = aMatNum;
    }
    vector<Subject> subjects = {Subject("English"), Subject("Math"), Subject("Physic"), Subject("Biology"), Subject("Economic"), Subject("Art")};

    int getTotalStudent()
    {
        return numberOfStudents;
    }
};

int Student::numberOfStudents = 3;
main()
{

    vector<string> names = {
        "Aaran",
        "Abdisalam",
        "Abdul",
        "Abdul-Aziz",
        "Abdulbasir",
        "Abdulkadir",
        "Abdulkarem",
        "Abdulkhader",
        "Abdullah",
        "Abdul-Majeed",
        "Abdulmalik",
        "Abdul-Rehman",
        "Abdur",
        "Abdurraheem",
        "Abdur-Rahman",
        "Abdur-Rehmaan",
        "Abel",
        "Abhinav",
        "Abhisumant",
        "Abid",
        "Abir",
        "Abraham",
        "Abu",
        "Abubakar",
        "Ace",
        "Adain",
        "Adam",
        "Adam-James",
        "Addison",
        "Addisson",
        "Adegbola",
        "Adegbolahan",
        "Aden",
        "Adenn",
        "Adie",
        "Adil",
        "Aditya",
        "Adnan",
        "Adrian",
        "Adrien",
        "Aedan",
        "Aedin",
        "Aedyn",
        "Aeron",
        "Afonso",
        "Ahmad",
        "Ahmed",
        "Ahmed-Aziz",
        "Ahoua",
        "Ahtasham",
        "Aiadan",
        "Aidan",
        "Aiden",
        "Aiden-Jack",
        "Aiden-Vee",

        "Braeden",
        "Braiden",
        "Brynmor",
        "Bryson",
        "Buddy",
        "Bully",
        "Burak",
        "Burhan",
        "Butali",
        "Butchi",
        "Byron",
        "Cabhan",
        "Cadan",
        "Cade",
        "Caden",

        "Colum",
        "Colvin",
        "Comghan",
        "Conal",
        "Conall",
        "Conan",
        "Conar",
        "Conghaile",
        "Conlan",
        "Conley",
        "Conli",
        "Conlin",
        "Conlly",
        "Conlon",
        "Conlyn",
        "Connal",
        "Connall",
        "Connan",
        "Connar",
        "Connel",
        "Connell",
        "Conner",
        "Connolly",
        "Connor",
        "Connor-David",
        "Conor",
        "Conrad",
        "Cooper",
        "Copeland",
        "Coray",
        "Corben",

        "Danyal",
        "Danyil",
        "Danys",
        "Daood",
        "Dara",
        "Dennis",
        "Denny",
        "Dennys",
        "Denon",
        "Denton",
        "Denver",
        "Denzel",
        "Deon",
        "Derek",
        "Derick",
        "Derin",
        "Dermot",
        "Derren",
        "Derrie",

        "Dregan",
        "Drew",
        "Dugald",
        "Duncan",
        "Duriel",
        "Dustin",
        "Dylan",
        "Dylan-Jack",
        "Dylan-James",
        "Dylan-John",
        "Dylan-Patrick",
        "Dylin",
        "Dyllan",
        "Dyllan-James",

        "Eoghan",
        "Eoin",
        "Eonan",
        "Erdehan",
        "Eren",
        "Erencem",
        "Eric",
        "Ericlee",
        "Erik",
        "Eriz",
        "Ernie-Jacks",
        "Eroni",
        "Eryk",
        "Eshan",
        "Essa",
        "Esteban",
        "Ethan",
        "Etienne",
        "Etinosa",
        "Euan",
        "Eugene",
        "Evan",

        "Finn",
        "Finnan",
        "Finnean",
        "Finnen",
        "Finnlay",
        "Finnley",
        "Fintan",
        "Fionn",
        "Firaaz",

        "Fruin",
        "Fyfe",
        "Fyn",
        "Fynlay",
        "Fynn",
        "Gabriel",
        "Gallagher",
        "Gareth",
        "Garren",
        "Garrett",
        "Garry",
        "Gary",
        "Gavin",
        "Gavin-Lee",

        "Harjyot",
        "Harlee",
        "Harleigh",
        "Harley",
        "Harman",
        "Harnek",
        "Harold",
        "Haroon",
        "Harper",
        "Harri",
        "Harrington",
        "Harris",
        "Harrison",
        "Harry",
        "Harvey",

        "Ikechukwu",
        "Ikemsinachukwu",
        "Ilyaas",
        "Ilyas",
        "Iman",
        "Immanuel",
        "Inan",
        "Indy",
        "Ines",
        "Innes",
        "Ioannis",
        "Ireayomide",
        "Ireoluwa",
        "Irvin",
        "Irvine",
        "Isa",
        "Isaa",
        "Isaac",

        "Jak",
        "Jake",
        "Jakey",
        "Jakob",
        "Jaksyn",
        "Jakub",
        "Jamaal",
        "Jamal",
        "Jameel",
        "Jameil",
        "James",
        "James-Paul",
        "Jamey",
        "Jamie",
        "Jan",
        "Jaosha",
        "Jardine",
        "Jared",
        "Jarell",
        "Jarl",
        "Jarno",
        "Jarred",
        "Jarvi",
        "Jasey-Jay",

        "Jia",
        "Jian",
        "Jiao",
        "Jimmy",
        "Jincheng",
        "JJ",
        "Joaquin",
        "Joash",
        "Jock",
        "Jody",
        "Joe",
        "Joeddy",
        "Joel",
        "Joey",
        "Joey-Jack",
        "Johann",
        "Johannes",
        "Johansson",
        "John",
        "Johnathan",
        "Johndean",
        "Johnjay",
        "John-Michael",
        "Johnnie",
        "Johnny"
        "Kamron",
        "Kane",
        "Karam",
        "Karamvir",
        "Karandeep",
        "Kareem",
        "Karim",
        "Karimas",
        "Karl",
        "Karol",
        "Karson",
        "Karsyn",
        "Karthikeya",
        "Kasey",
        "Kash",
        "Kashif",
        "Kasim",
        "Kasper",
        "Kasra",
        "Kavin",
        "Kayam",
        "Kaydan",
        "Kayden",
        "Kaydin",
        "Kaydn",
        "Kaydyn",
        "Kaydyne",
        "Kayleb",
        "Kaylem",
        "Kaylum",
        "Kayne",
        "Kaywan",
        "Kealan",
        "Kealon",
        "Kean",
        "Keane",
        "Kearney",
        "Keatin",
        "Keaton",
        "Keavan",
        "Keayn",
        "Kedrick",
        "Keegan",

        "Killian",

        "Kylar",
        "Kyle",
        "Kyle-Derek",
        "Kylian",
        "Kym",
        "Kynan",
        "Kyral",
        "Kyran",
        "Kyren",
        "Kyrillos",
        "Kyro",
        "Kyron",
        "Kyrran",
        "Lachlainn",
        "Lachlan",
        "Lachlann",
        "Lael",
        "Lagan",
        "Laird",

        "Lorenzo",
        "Lorne",
        "Loudon",
        "Loui",
        "Louie",
        "Louis",
        "Loukas",

        "Manus",
        "Marc",
        "Marc-Anthony",
        "Marcel",
        "Marcello",

        "Mitchel",
        "Mitchell",
        "Moad",
        "Moayd",
        "Mobeen",
        "Modoulamin",
        "Modu",
        "Mohamad",
        "Mohamed",
        "Mohammad",
        "Mohammad-Bilal",
        "Mohammed",
        "Mohanad",
        "Mohd",
        "Momin",
        "Momooreoluwa",
        "Montague",

        "Nathanael",
        "Nathanial",
        "Nathaniel",
        "Nathan-Rae",
        "Nawfal",
        "Nayan",
        "Neco",
        "Neil",
        "Nelson",
        "Neo",
        "Neshawn",
        "Nevan",
        "Nevin",
        "Ngonidzashe",
        "Nial",
        "Niall",
        "Nicholas",
        "Nick",
        "Nickhill",
        "Nicki",
        "Nickson",
        "Nicky",

        "Ollie",
        "Olurotimi",
        "Oluwadamilare",
        "Oluwadamiloju",
        "Oluwafemi",
        "Oluwafikunayomi",
        "Oluwalayomi",
        "Oluwatobiloba",
        "Oluwatoni",
        "Omar",

        "Rafferty",
        "Rafi",
        "Raheem",
        "Rahil",
        "Rahim",
        "Rahman",
        "Raith",
        "Raithin",
        "Raja",
        "Rajab-Ali",
        "Rajan",
        "Ralfs",
        "Ralph",
        "Ramanas",
        "Ramit",
        "Ramone",
        "Ramsay",
        "Ramsey",
        "Rana",
        "Ranolph",
        "Raphael",
        "Rasmus",
        "Rasul",
        "Raul",
        "Raunaq",
        "Ravin",
        "Ray",
        "Rayaan",
        "Rayan",
        "Rayane",
        "Rayden",

        "Ricco",
        "Rice",
        "Richard",
        "Richey",
        "Richie",
        "Ricky",
        "Rico",
        "Ridley",
        "Ridwan",
        "Rihab",
        "Rihan",
        "Rihards",
        "Rihonn",
        "Rikki",
        "Riley",

        "Ruaridh",
        "Ruben",
        "Rubhan",
        "Rubin",
        "Rubyn",
        "Rudi",
        "Rudy",
        "Rufus",
        "Rui",
        "Ruo",
        "Rupert",
        "Ruslan",
        "Russel",
        "Russell",

        "Scot",
        "Scott",
        "Scott-Alexander",
        "Seaan",

        "Sidney",
        "Siergiej",
        "Silas",
        "Simon",
        "Sinai",
        "Skye",

        "Suraj",
        "Surien",
        "Sweyn",
        "Syed",
        "Sylvain",
        "Symon",
        "Szymon",
        "Tadd",
        "Taddy",
        "Tadhg",
        "Taegan",
        "Taegen",
        "Tai",
        "Tait",
        "Taiwo",
        "Talha",
        "Taliesin",
        "Talon",
        "Talorcan",
        "Tamar",

        "Tian",

        "Travis",
        "Tre",
        "Trent",
        "Trey",
        "Tristain",
        "Tristan",

        "Valo",
        "Vasyl",
        "Vedantsinh",
        "Veeran",
        "Victor",
        "Victory",
        "Vinay",
        "Vince",
        "Vincent",
        "Vincenzo",
        "Vinh",

        "Zacharias",
        "Zacharie",
        "Zacharius",
        "Zachariya",

    };
    vector<Student> students(6);

    for (int i = 0; i < Student::numberOfStudents; i++)
    {
        Student student;
        student.name = names.at(random(10, 500)) + " " + names.at(random(10, 500));
        student.matNum = random(9999, 99999);
        students[i] = student;
    }

    for (int studentIndex = 0; studentIndex < Student::numberOfStudents; studentIndex++)
    {
        Student student = students[studentIndex];
        cout << "Student: " << student.name << endl;
        for (int subjectIndex = 0; subjectIndex < 6; subjectIndex++)
        {
            Subject subject = student.subjects[subjectIndex];
            cout << "Enter score for " << student.name << " " << subject.name << " exam: " << endl;
            int score;
            cin >> score;
            student.subjects[subjectIndex].score = score;
            student.subjects[subjectIndex].evaluateGrade();
        }
        students[studentIndex] = student;
        std::cout << std::left << std::setw(12) << "Mat-Number"
                  << std::left << std::setw(20) << "Name"
                  << std::left << std::setw(12) << "Subject"
                  << std::left << std::setw(12) << "Score"
                  << std::left << std::setw(12) << "Grade"
                  << '\n';
        for (int subjectIndex = 0; subjectIndex < 6; subjectIndex++)
        {
            Subject subject = student.subjects[subjectIndex];
            std::cout << std::left << std::setw(12) << student.matNum
                      << std::left << std::setw(20) << student.name
                      << std::left << std::setw(12) << subject.name
                      << std::left << std::setw(12) << subject.score
                      << std::left << std::setw(12) << subject.grade
                      << '\n';
        }
        cout << "Press 1 for next and 0 to terminate..." << endl;
        int proccess;
        cin >> proccess;
        if (proccess == 0)
        {
            exit(0);
        }
    }

    cout << "Press any key and enter to exit" << endl;
    string code;
    cin >> code;
    return 0;
}
