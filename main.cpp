#include <iostream>
#include<algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    cout << "+----Calculator----+"<< endl;
    cout << "+-Use format below-+"<< endl;
    cout << "+-------x+y--------+"<< endl;
    cout << "+----Operators:----+"<< endl;
    cout << "   +, -, /, *, ^    "<< endl;
    cout << "+----No spaces-----+"<< endl << endl;
    while(true){//loop forever till break
    std::string calc;//string that will store the input from the user

    cout << "Enter calculation: ";//prompts user
    getline(cin,calc);//gets user input and stores it into calc
    string num1, num2;//the two numbers that will be in the calculation, stored as strings tempoarily

    remove(calc.begin(), calc.end(), ' ');//removes spaces --might not work 100%?
    if(calc.find('exit') != std::string::npos){//if the user inputs exit, exit the program
        cout << "Goodbye";
        break;
    }else if(calc.find('1') == std::string::npos&&calc.find('2') == std::string::npos&&calc.find('3') == std::string::npos&&calc.find('4') == std::string::npos&&calc.find('5') == std::string::npos&&calc.find('6') == std::string::npos&&calc.find('7') == std::string::npos&&calc.find('8') == std::string::npos&&calc.find('9') == std::string::npos&&calc.find('0') == std::string::npos){//if no numbers are found
        cout << "Invalid"<<endl;
    }else if(calc.find('+') != std::string::npos){//if there is a +
        if(calc.find('+') == 0){//if the operator is position 0 it's invalid
            cout << "Invalid operator position";
        }
        else{//if not continue
            for(int i=0;i<calc.find('+');i++){//loops from position 1 to the operator and stores it as num1
                num1 += calc[i];
            }
            cout << num1 << endl;
            for(int i = calc.find('+')+1;i <= calc.size(); i++){//loops from operator to the end and stores it as num2
                num2 += calc[i];
            }
            cout << num2 << endl;
            stringstream cnum1(num1);//these are basically magic and have values num1, and num2 respectivly
            stringstream cnum2(num2);
            int x, y;//creates ints x and y

            cnum1 >> x;// inputs the value of cnum1(which is num1) into and int
            cnum2 >> y;//does the same for cnum2(num2)
            cout << x + y << endl;//outputs x + y(num1 + num2)
        }

    }else if(calc.find('-') != std::string::npos){//see above
        if(calc.find('-') == 0){
            cout << "Invalid operator position";
        }
        else{
            for(int i=0;i<calc.find('-');i++){
                num1 += calc[i];
            }
            cout << num1 << endl;
            for(int i = calc.find('-')+1;i <= calc.size(); i++){
                num2 += calc[i];
            }
            cout << num2 << endl;
            stringstream cnum1(num1);
            stringstream cnum2(num2);
            int x;
            int y;
            cnum1 >> x;
            cnum2 >> y;
            cout << x - y << endl;
        }

    }else if(calc.find('*') != std::string::npos){
        if(calc.find('*') == 0){
            cout << "Invalid operator position";
        }
        else{
            for(int i=0;i<calc.find('*');i++){
                num1 += calc[i];
            }
            cout << num1 << endl;
            for(int i = calc.find('*')+1;i <= calc.size(); i++){
                num2 += calc[i];
            }
            cout << num2 << endl;
            stringstream cnum1(num1);
            stringstream cnum2(num2);
            int x;
            int y;
            cnum1 >> x;
            cnum2 >> y;
            cout << x * y << endl;
        }

    }else if(calc.find('/') != std::string::npos){
        if(calc.find('/') == 0){
            cout << "Invalid operator position";
        }
        else{
            for(int i=0;i<calc.find('/');i++){
                num1 += calc[i];
            }
            cout << num1 << endl;
            for(int i = calc.find('/')+1;i <= calc.size(); i++){
                num2 += calc[i];
            }
            cout << num2 << endl;
            stringstream cnum1(num1);
            stringstream cnum2(num2);
            double x;
            double y;
            cnum1 >> x;
            cnum2 >> y;
            cout << x / y << endl;
        }

    }else if(calc.find('^') != std::string::npos){
        if(calc.find('^') == 0){
            cout << "Invalid operator position";
        }
        else{
            for(int i=0;i<calc.find('^');i++){
                num1 += calc[i];
            }
            cout << num1 << endl;
            for(int i = calc.find('^')+1;i <= calc.size(); i++){
                num2 += calc[i];
            }
            cout << num2 << endl;
            stringstream cnum1(num1);
            stringstream cnum2(num2);
            int x;
            int y;
            cnum1 >> x;
            cnum2 >> y;
            cout << pow(x, y) << endl;
        }

    }else{//if it does not contain operator
        cout << "Invalid";
    }
}
    return 0;
}
