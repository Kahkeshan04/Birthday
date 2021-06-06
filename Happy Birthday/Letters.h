#include <iostream> 
using namespace std;

void Num1(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"        __        ";
            break;

            case 'B':
            case 'b':
                cout<<"  ________   ";
            break;

            case 'C':
            case 'c':
                cout<<"   ________  ";
            break;

            case 'D':
            case 'd':
                cout<<"  _________   ";
            break;

            case 'E':
            case 'e':
                cout<<"  __________  ";
            break;

            case 'F':
            case 'f':
                cout<<"  __________  ";
            break;
            
            case 'G':
            case 'g':
                cout<<"   _________  ";
            break;

            case 'H':
            case 'h':
                cout<<"  _        _  ";
            break;

            case 'I':
            case 'i':
                cout<<"  __________  ";
            break;

            case 'J':
            case 'j':
                cout<<"   ___________  ";
            break;

            case 'K':
            case 'k':
                cout<<"  _     _   ";
            break;

            case 'L':
            case 'l':
                cout<<"  _           ";
            break;

            case 'M':
            case 'm':
                cout<<"  ___      ___  ";
            break;

            case 'N':
            case 'n':
                cout<<"  ___       _  ";
            break;

            case 'O':
            case 'o':
                cout<<"  _______  ";
            break;

            case 'P':
            case 'p':
                cout<<"  _______   ";
            break;

            case 'Q':
            case 'q':
                cout<<"  __________  ";
            break;

            case 'R':
            case 'r':
                cout<<"  _______   ";
            break;

            case 'S':
            case 's':
                cout<<"   _______  ";
            break;

            case 'T':
            case 't':
                cout<<"  ___________  ";
            break;

            case 'U':
            case 'u':
                cout<<"  _        _  ";
            break;

            case 'V':
            case 'v':
                cout<<"  _             _  ";
            break;

            case 'W':
            case 'w':
                cout<<"  _          _  ";
            break;

            case 'X':
            case 'x':
                cout<<"  _       _ ";
            break;

            case 'Y':
            case 'y':
                cout<<"  _        _ ";
            break;

            case 'Z':
            case 'z':
                cout<<"  _______  ";
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num2(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"       /  \\       ";
            break;

            case 'B':
            case 'b':
                cout<<" |  _____ \\  ";
            break;

            case 'C':
            case 'c':
                cout<<"  /  ______| ";
            break;

            case 'D':
            case 'd':
                cout<<" |  ______ \\  ";
            break;

            case 'E':
            case 'e':
                cout<<" |  ________| ";
            break;

            case 'F':
            case 'f':
                cout<<" |  ________| ";
            break;
            
            case 'G':
            case 'g':
                cout<<"  /  ______ | ";
            break;

            case 'H':
            case 'h':
                cout<<" | |      | | ";
            break;

            case 'I':
            case 'i':
                cout<<" |___   ____| ";
            break;

            case 'J':
            case 'j':
                cout<<"  |____   ____| ";
            break;

            case 'K':
            case 'k':
                cout<<" | |  / /   ";
            break;

            case 'L':
            case 'l':
                cout<<" | |          ";
            break;

            case 'M':
            case 'm':
                cout<<" |   \\    /   | ";
            break;

            case 'N':
            case 'n':
                cout<<" |   \\     | | ";
            break;

            case 'O':
            case 'o':
                cout<<" |  ____ | ";
            break;

            case 'P':
            case 'p':
                cout<<" |  ___  \\  ";
            break;

            case 'Q':
            case 'q':
                cout<<" /  ______  \\ ";
            break;

            case 'R':
            case 'r':
                cout<<" |  ___  \\  ";
            break;

            case 'S':
            case 's':
                cout<<"  / ______| ";
            break;

            case 'T':
            case 't':
                cout<<" |____   ____| ";
            break;

            case 'U':
            case 'u':
                cout<<" | |      | | ";
            break;

            case 'V':
            case 'v':
                cout<<" \\ \\          / /  ";
            break;

            case 'W':
            case 'w':
                cout<<" | |        | | ";
            break;

            case 'X':
            case 'x':
                cout<<"  \\ \\   / / ";
            break;

            case 'Y':
            case 'y':
                cout<<"  \\ \\    / / ";
            break;

            case 'Z':
            case 'z':
               cout<<" |_____  | "; 
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num3(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"      / /\\ \\      ";
            break;

            case 'B':
            case 'b':
                cout<<" | |     \\ | ";
            break;

            case 'C':
            case 'c':
                cout<<" |  /        ";
            break;

            case 'D':
            case 'd':
                cout<<" | |      \\ | ";
            break;

            case 'E':
            case 'e':
                cout<<" | |          ";
            break;

            case 'F':
            case 'f':
                cout<<" | |          ";
            break;
            
            case 'G':
            case 'g':
                cout<<" |  /         ";
            break;

            case 'H':
            case 'h':
                cout<<" | |      | | ";
            break;

            case 'I':
            case 'i':
                cout<<"     | |      ";
            break;

            case 'J':
            case 'j':
                cout<<"       | |      ";
            break;

            case 'K':
            case 'k':
                cout<<" | | / /    ";
            break;

            case 'L':
            case 'l':
                cout<<" | |          ";
            break;

            case 'M':
            case 'm':
                cout<<" | |\\ \\  / /| | ";
            break;

            case 'N':
            case 'n':
                cout<<" | |\\ \\    | | ";
            break;

            case 'O':
            case 'o':
                cout<<" | |   | | ";
            break;

            case 'P':
            case 'p':
               cout<<" | |   \\  | "; 
            break;

            case 'Q':
            case 'q':
                cout<<" | |      | | ";
            break;

            case 'R':
            case 'r':
                cout<<" | |   \\  | ";
            break;

            case 'S':
            case 's':
                cout<<" | /        ";
            break;

            case 'T':
            case 't':
                cout<<"      | |      ";
            break;

            case 'U':
            case 'u':
                cout<<" | |      | | ";
            break;

            case 'V':
            case 'v':
                cout<<"  \\ \\        / /   ";
            break;

            case 'W':
            case 'w':
                cout<<" | |        | | ";
            break;

            case 'X':
            case 'x':
                cout<<"   \\ \\ / /  ";
            break;

            case 'Y':
            case 'y':
                cout<<"   \\ \\  / /  ";
            break;

            case 'Z':
            case 'z':
                cout<<"      / /  ";
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num4(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"     / /  \\ \\     ";
            break;

            case 'B':
            case 'b':
                cout<<" | |_____/ / ";
            break;

            case 'C':
            case 'c':
                cout<<" | |         ";
            break;

            case 'D':
            case 'd':
                cout<<" | |      | | ";
            break;

            case 'E':
            case 'e':
                cout<<" | |_____     ";
            break;

            case 'F':
            case 'f':
                cout<<" | |_____     ";
            break;
            
            case 'G':
            case 'g':
                cout<<" | |   _____  ";
            break;

            case 'H':
            case 'h':
                cout<<" | |______| | ";
            break;

            case 'I':
            case 'i':
                cout<<"     | |      ";
            break;

            case 'J':
            case 'j':
                cout<<"       | |      ";
            break;

            case 'K':
            case 'k':
                cout<<" | |/ /     ";
            break;

            case 'L':
            case 'l':
                cout<<" | |          ";
            break;

            case 'M':
            case 'm':
                cout<<" | | \\ \\/ / | | ";
            break;

            case 'N':
            case 'n':
                cout<<" | | \\ \\   | | ";
            break;

            case 'O':
            case 'o':
                cout<<" | |   | | ";
            break;

            case 'P':
            case 'p':
                cout<<" | |___/  | ";
            break;

            case 'Q':
            case 'q':
                cout<<" | |  _   | | ";
            break;

            case 'R':
            case 'r':
                cout<<" | |___/  | ";
            break;

            case 'S':
            case 's':
                cout<<" | \\_____   ";
            break;

            case 'T':
            case 't':
                cout<<"      | |      ";
            break;

            case 'U':
            case 'u':
                cout<<" | |      | | ";
            break;

            case 'V':
            case 'v':
                cout<<"   \\ \\      / /    ";
            break;

            case 'W':
            case 'w':
                cout<<" | |   __   | | ";
            break;

            case 'X':
            case 'x':
                cout<<"    \\ \\ /   ";
            break;

            case 'Y':
            case 'y':
                cout<<"    \\ \\/ /   ";
            break;

            case 'Z':
            case 'z':
                cout<<"     / /   ";
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num5(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"    / /____\\ \\    ";
            break;

            case 'B':
            case 'b':
                cout<<" |  _____  \\ ";
            break;

            case 'C':
            case 'c':
                cout<<" | |         ";
            break;

            case 'D':
            case 'd':
                cout<<" | |      | | ";
            break;

            case 'E':
            case 'e':
                cout<<" |  _____|    ";
            break;

            case 'F':
            case 'f':
                cout<<" |  _____|    ";
            break;
            
            case 'G':
            case 'g':
                cout<<" | |  |___  \\ ";
            break;

            case 'H':
            case 'h':
                cout<<" | |______| | ";
            break;

            case 'I':
            case 'i':
                cout<<"     | |      ";
            break;

            case 'J':
            case 'j':
                cout<<"  _    | |      ";
            break;

            case 'K':
            case 'k':
                cout<<" | | \\      ";
            break;

            case 'L':
            case 'l':
                cout<<" | |          ";
            break;

            case 'M':
            case 'm':
                cout<<" | |  \\__/  | | ";
            break;

            case 'N':
            case 'n':
                cout<<" | |  \\ \\  | | ";
            break;

            case 'O':
            case 'o':
                cout<<" | |   | | ";
            break;

            case 'P':
            case 'p':
                cout<<" |  _____/  ";
            break;

            case 'Q':
            case 'q':
                cout<<" | | \\ \\  | | ";
            break;

            case 'R':
            case 'r':
                cout<<" |  _   _/  ";
            break;

            case 'S':
            case 's':
                cout<<" \\______ \\  ";
            break;

            case 'T':
            case 't':
                cout<<"      | |      ";
            break;

            case 'U':
            case 'u':
                cout<<" | |      | | ";
            break;

            case 'V':
            case 'v':
                cout<<"    \\ \\    / /     ";
            break;

            case 'W':
            case 'w':
                cout<<" | |  /  \\  | | ";
            break;

            case 'X':
            case 'x':
                cout<<"    /\\ \\    ";
            break;

            case 'Y':
            case 'y':
                cout<<"     \\  /    ";
            break;

            case 'Z':
            case 'z':
                cout<<"    / /    ";
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num6(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"   / /______\\ \\   ";
            break;

            case 'B':
            case 'b':
                cout<<" | |     \\ | ";
            break;

            case 'C':
            case 'c':
                cout<<" | |         ";
            break;

            case 'D':
            case 'd':
                cout<<" | |      | | ";
            break;

            case 'E':
            case 'e':
                cout<<" | |          ";
            break;

            case 'F':
            case 'f':
                cout<<" | |          ";
            break;
            
            case 'G':
            case 'g':
                cout<<" | |      \\ | ";
            break;

            case 'H':
            case 'h':
                cout<<" | |      | | ";
            break;

            case 'I':
            case 'i':
                cout<<"     | |      ";
            break;

            case 'J':
            case 'j':
                cout<<" | |   | |      ";
            break;

            case 'K':
            case 'k':
                cout<<" | |\\ \\     ";
            break;

            case 'L':
            case 'l':
                cout<<" | |          ";
            break;

            case 'M':
            case 'm':
                cout<<" | |        | | ";
            break;

            case 'N':
            case 'n':
                cout<<" | |   \\ \\ | | ";
            break;

            case 'O':
            case 'o':
                cout<<" | |   | | ";
            break;

            case 'P':
            case 'p':
                cout<<" | |        ";
            break;

            case 'Q':
            case 'q':
                cout<<" | \\__\\ \\_/ | ";
            break;

            case 'R':
            case 'r':
                cout<<" | | \\ \\    ";
            break;

            case 'S':
            case 's':
                cout<<"        \\ | ";
            break;

            case 'T':
            case 't':
                cout<<"      | |      ";
            break;

            case 'U':
            case 'u':
                cout<<" | |      | | ";
            break;

            case 'V':
            case 'v':
                cout<<"     \\ \\  / /      ";
            break;

            case 'W':
            case 'w':
                cout<<" | | / /\\ \\ | | ";
            break;

            case 'X':
            case 'x':
                cout<<"   / /\\ \\   ";
            break;

            case 'Y':
            case 'y':
                cout<<"     / /     ";
            break;

            case 'Z':
            case 'z':
                cout<<"   / /     ";
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num7(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<"  / /        \\ \\  ";
            break;

            case 'B':
            case 'b':
                cout<<" | |_____/ / ";
            break;

            
            case 'C':
            case 'c':
                cout<<" |  \\______  ";
            break;

            case 'D':
            case 'd':
                cout<<" | |______/ | ";
            break;

            case 'E':
            case 'e':
                cout<<" | |________  ";
            break;

            case 'F':
            case 'f':
                cout<<" | |          ";
            break;

            case 'G':
            case 'g':
                cout<<" |  \\_____/ | ";
            break;

            case 'H':
            case 'h':
                cout<<" | |      | | ";
            break;

            case 'I':
            case 'i':
                cout<<"  ___| |____  ";
            break;

            case 'J':
            case 'j':
                cout<<" | \\___/ |      ";
            break;

            case 'K':
            case 'k':
                cout<<" | | \\ \\    ";
            break;

            case 'L':
            case 'l':
                cout<<" | |________  ";
            break;

            case 'M':
            case 'm':
                cout<<" | |        | | ";
            break;

            case 'N':
            case 'n':
                cout<<" | |    \\ \\| | ";
            break;

            case 'O':
            case 'o':
                cout<<" | |___| | ";
            break;

            case 'P':
            case 'p':
                cout<<" | |        ";
            break;
            
            case 'Q':
            case 'q':
                cout<<" \\_____\\ \\__/ ";
            break;

            case 'R':
            case 'r':
                cout<<" | |  \\ \\   ";
            break;

            case 'S':
            case 's':
                cout<<"  ______/ | ";
            break;

            case 'T':
            case 't':
                cout<<"      | |      ";
            break;

            case 'U':
            case 'u':
                cout<<" | \\______/ | ";
            break;

            case 'V':
            case 'v':
                cout<<"      \\ \\/ /       ";
            break;

            case 'W':
            case 'w':
                cout<<" | |/ /  \\ \\| | ";
            break;

            case 'X':
            case 'x':
                cout<<"  / /  \\ \\  ";
            break;

            case 'Y':
            case 'y':
                cout<<"    / /      ";
            break;

            case 'Z':
            case 'z':
                cout<<"  / /____  ";
            break;
        }
        if(i == len-1)
            cout<<endl;
    }
}

void Num8(string text, int len){
    
    for (int i = 0; i < len; i++){
        switch (text[i]){
            case 'A':
            case 'a': 
                cout<<" /_/          \\_\\ ";
            break;

            case 'B':
            case 'b':
                cout<<" |________/  ";
            break;
            
            case 'C':
            case 'c':
                cout<<"  \\________| ";
            break;

            case 'D':
            case 'd':
                cout<<" |_________/  ";
            break;

            case 'E':
            case 'e':
                cout<<" |__________| ";
            break;

            case 'F':
            case 'f':
                cout<<" |_|          ";
            break;
            
            case 'G':
            case 'g':
                cout<<"  \\_________/ ";
            break;

            case 'H':
            case 'h':
                cout<<" |_|      |_| ";
            break;

            case 'I':
            case 'i':
                cout<<" |__________| ";
            break;

            case 'J':
            case 'j':
                cout<<"  \\_____/       ";
            break;

            case 'K':
            case 'k':
                cout<<" |_|  \\_\\   ";
            break;

            case 'L':
            case 'l':
                cout<<" |__________| ";
            break;

            case 'M':
            case 'm':
                cout<<" |_|        |_| ";
            break;

            case 'N':
            case 'n':
                cout<<" |_|     \\___| ";
            break;

            case 'O':
            case 'o':
                cout<<" |_______| ";
            break;

            case 'P':
            case 'p':
                cout<<" |_|        ";
            break;

            case 'Q':
            case 'q':
                cout<<"        \\_\\   ";
            break;

            case 'R':
            case 'r':
                cout<<" |_|   \\_\\  ";
            break;

            case 'S':
            case 's':
                cout<<" |_______/  ";
            break;

            case 'T':
            case 't':
                cout<<"      |_|      ";
            break;

            case 'U':
            case 'u':
                cout<<" \\__________/ ";
            break;

            case 'V':
            case 'v':
                cout<<"       \\__/        ";
            break;

            case 'W':
            case 'w':
                cout<<" |___/    \\___| ";
            break;

            case 'X':
            case 'x':
                cout<<" /_/    \\_\\ ";
            break;

            case 'Y':
            case 'y':
                cout<<"   /_/       ";
            break;

            case 'Z':
            case 'z':
                cout<<" /_______| ";
            break;

        }
        if(i == len-1)
            cout<<endl;
    }
}