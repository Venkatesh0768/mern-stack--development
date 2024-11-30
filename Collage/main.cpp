#include <iostream>
using namespace std;


int vaildparenthesis( char *str){
   if(!isalpha(str[0]) && str[0] != '_'){
    return 0;
   } 

   for (int i = 1; str[i] != '\0'; i++)
   {
    if (!isalnum(str[i]) && str[i]  != '_')
    {
       return 0;
    }
   }

   return 1;  
}

int reserved_word(string str){
    const char *reserved_keywords[] = {
        "auto", "break", "case", "char", "const", "continue",
        "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "inline", "int", "long",
        "register", "restrict", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while",
        "_Alignas", "_Alignof", "_Atomic", "_Bool", "_Complex",
        "_Generic", "_Imaginary", "_Noreturn", "_Static_assert",
        "_Thread_local"
    };

    int n = sizeof(reserved_keywords) / sizeof(reserved_keywords[0]);

    printf("C reserved keywords:\n");
    for (int i = 0; i < n; i++) {
        if(str == reserved_keywords[i]){
            return 0;
        }
    }

    return 1;
}


void operator_valid(char str){
    switch (str)
    {
    case '+':
        cout << "Valid opeator";
        break;
    case '-':
        cout << "Valid opeator";
        break;
    case '*':
        cout << "Valid opeator";
        break;
    case '/':
        cout << "Valid opeator";
        break;
    case '%':
        cout << "Valid opeator";
        break;
    
    default:
        cout << "Not Valid opeator";
        break;
    }
}

int main()
{   
    char ans[] = "input";
    if (vaildparenthesis(ans) == 1)
    {
        cout << "This is valid variable" << endl;
    }else{
         cout << "This is  not valid variable" << endl;
    }

    char a = '+';
    operator_valid(a);


    string ans1 ="int1";
    if (reserved_word(ans1) == 0){
        cout << "This is valid variable" << endl;
    }else{
         cout << "This is  not valid variable" << endl;
    }


    string ans2 =  "int a = a + 1b * 10";
    for (int i = 0; i <ans2.size(); i++)
    {
       
    }
    




    return 0;
}