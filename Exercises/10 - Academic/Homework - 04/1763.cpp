/*
    Name: Santa's Translator
    Link: https://judge.beecrowd.com/en/problems/view/1763
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> translator;
    map<string, string>::iterator it;
    istringstream iss;
    char word[20];

    translator["brasil"] = "Feliz Natal!";
    translator["alemanha"] = "Frohliche Weihnachten!";
    translator["austria"] = "Frohe Weihnacht!";
    translator["coreia"] = "Chuk Sung Tan!";
    translator["espanha"] = "Feliz Navidad!";
    translator["grecia"] = "Kala Christougena!";
    translator["estados-unidos"] = "Merry Christmas!";
    translator["inglaterra"] = "Merry Christmas!";
    translator["australia"] = "Merry Christmas!";
    translator["portugal"] = "Feliz Natal!";
    translator["suecia"] = "God Jul!";
    translator["turquia"] = "Mutlu Noeller";
    translator["argentina"] = "Feliz Navidad!";
    translator["chile"] = "Feliz Navidad!";
    translator["mexico"] = "Feliz Navidad!";
    translator["antardida"] = "Merry Christmas!";
    translator["canada"] = "Merry Christmas!";
    translator["irlanda"] = "Nollaig Shona Dhuit!";
    translator["belgica"] = "Zalig Kerstfeest!";
    translator["italia"] = "Buon Natale!";
    translator["libia"] = "Buon Natale!";
    translator["siria"] = "Milad Mubarak!";
    translator["marrocos"] = "Milad Mubarak!";
    translator["japao"] = "Merii Kurisumasu!";

    while(scanf(" %s", word) != EOF){
        iss.str(word);
        it = translator.find(word);
        if(it != translator.end()){
            cout << translator[word] << '\n';
        }
        else{
            printf("--- NOT FOUND ---\n");
        }
    }

    return 0;
}