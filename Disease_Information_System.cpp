// FILE HANDLING MINI PROJECT.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // PASSWORD
    string password;

    cout << "Enter Password: ";
    cin >> password;

    if (password != "binary")
    {
        cout << "Wrong Password!" << endl;
        return 0;
    }


    // CHOICE
    int choice;
    

    do
    {
        cout << "===== DISEASE INFORMATION =====" << endl;
        cout << "1. High BP" << endl;           // iska mtlb ye hai ki 1 press kiya toh HighBp ki info  milegi 2 pr Malaria ki ...
        cout << "2. Malaria" << endl;
        cout << "3. Dengue" << endl;
        cout << "4. Cold" << endl;
        cout << "5. Exit" << endl;

        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        // HIGH BP
        if (choice == 1)
        {
            ifstream f("D:\\Disease\\Highbp.txt");

            if (f.fail())
            {
                cout << "File does not exist!" << endl;
                return 1;
            }

            string s;

            while (f.eof() == false)
            {
                getline(f, s);
                cout << s << endl;
            }
        }


        // MALARIA
        else if (choice == 2)
        {
            ifstream f("D:\\Disease\\Malaria.txt");

            if (f.fail())
            {
                cout << "File does not exist!" << endl;
                return 1;
            }

            string s;

            while (f.eof() == false)
            {
                getline(f, s);
                cout << s << endl;
            }
        }


        // DENGUE
        else if (choice == 3)
        {
            ifstream f("D:\\Disease\\Dengue.txt");

            if (f.fail())
            {
                cout << "File does not exist!" << endl;
                return 1;
            }

            string s;

            while (f.eof() == false)
            {
                getline(f, s);
                cout << s << endl;
            }
        }


        // COLD
        else if (choice == 4)
        {
            ifstream f("D:\\Disease\\Cold.txt");

            if (f.fail())
            {
                cout << "File does not exist!" << endl;
                return 1;
            }

            string s;

            while (f.eof() == false)
            {
                getline(f, s);
                cout << s << endl;
            }
        }


        // EXIT
        else if (choice == 5)
        {
            cout << "Program exited." << endl;
            break;                        // jaise hi 5 press krenge program band ho jayega aur aage chalega hi nhi isiliye break use kiye. 
        }


        // INVALID CHOICE
        else
        {
            cout << "Invalid choice!" << endl;
        }


        // CONTINUE OR EXIT
        if (choice != 5)    // Ye tabhi kaam krega jab apan choice me 5 ko chod kr konsa bhi num press krenge i.e. 6 ya us se upr (Agar 5 press kiye toh program direct exit hoga aur likh kr aayega ki "program exited" krke) 
        {
            char option;    // ye option krke ek nya var bnaya jisme C ya E store honge (char ye 'A' i.e. single letter ke liye use hote hai)

            cout << "Press C to continue or E to exit: ";
            cin >> option;

            if (option == 'E' || option == 'e')              //   (||) iska mtlb OR hai.
            {
                cout << "Program exited." << endl;
                break;
            }
        }

   } while (true);         // true ke wajah se loop hamesha chalta hi rhega aur band tabhi hi hoga jab user khud choice 5 press krega toh wo apne aap exit Hoga. 

   

    return 0;
}


// NOTE:- Ye sara code Do while ke andr hi aayega bs password wala chod ke.



//DO WHILE HI Q USE KIYE ?
// Menu ko at least ek baar dikhane aur C press karne par menu ko repeat karne ke liye.






































// START
//   ↓
// PASSWORD
//   ↓
// Correct?
//  ↙️     ↘️
// NO      YES
// ↓        ↓
// END     MENU
//           ↓
//        CHOICE
//           ↓
//    ┌──────┼──────┐
//    ↓      ↓      ↓
//   1/2    3/4      5
//    ↓      ↓       ↓
// Disease File      END
//    ↓
// ifstream
//    ↓
// File exists?
//  ↙️       ↘️
// NO        YES
// ↓          ↓
// ERROR     getline()
//            ↓
//         cout << s
//            ↓
//        File complete?
//            ↓
//        C / E
//       ↙️     ↘️
//      C       E
//      ↓       ↓
//    MENU     END





// 🔥 Code ke concepts ka flow

// Password
//    ↓
// if
//    ↓
// do-while
//    ↓
// if-else
//    ↓
// ifstream
//    ↓
// f.fail()
//    ↓
// string
//    ↓
// getline()
//    ↓
// while + eof()
//    ↓
// cout
//    ↓
// if
//    ↓
// break
//    ↓
// Program End
