#include <iostream> //required for cout and cin

using namespace std; //sets standard namespace

//start of the main function
int main() {
    //initializing variables
    string name = "unknown";
    int left = 4;
    int right = 9;
    int answer = 13;

    //aesthetic header
    cout <<"Welcome to the tower of the wizard of magical math tutoring (V1)" << endl;
    cout << R"(
,---.    ,---.   ____   ,---------. .---.  .---.         .--.      .--..-./`)  ____..--'   ____    .-------.     ______
|    \  /    | .'  __ `.\          \|   |  |_ _|         |  |_     |  |\ .-.')|        | .'  __ `. |  _ _   \   |    _ `''.
|  ,  \/  ,  |/   '  \  \`--.  ,---'|   |  ( ' )         | _( )_   |  |/ `-' \|   .-'  '/   '  \  \| ( ' )  |   | _ | ) _  \
|  |\_   /|  ||___|  /  |   |   \   |   '-(_{;}_)        |(_ o _)  |  | `-'`"`|.-'.'   /|___|  /  ||(_ o _) /   |( ''_'  ) |
|  _( )_/ |  |   _.-`   |   :_ _:   |      (_,_)         | (_,_) \ |  | .---.    /   _/    _.-`   || (_,_).' __ | . (_) `. |
| (_ o _) |  |.'   _    |   (_I_)   | _ _--.   |         |  |/    \|  | |   |  .'._( )_ .'   _    ||  |\ \  |  ||(_    ._) '
|  (_,_)  |  ||  _( )_  |  (_(=)_)  |( ' ) |   |         |  '  /\  `  | |   |.'  (_'o._)|  _( )_  ||  | \ `'   /|  (_.\.' /
|  |      |  |\ (_ o _) /   (_I_)   (_{;}_)|   |         |    /  \    | |   ||    (_,_)|\ (_ o _) /|  |  \    / |       .'
'--'      '--' '.(_,_).'    '---'   '(_,_) '---'         `---'    `---` '---'|_________| '.(_,_).' ''-'   `'-'  '-----'`

                                                                                                                                 )" << endl;

    //jokes
    cout <<R"(A wise wizards words:
What's a wizard's favorite school subject? spell-gebra!
Why did the sorcerer break his calculator? He wanted to do math-a-magics in his head!
What is a witch's favorite shape? A Hex-agon!
What do you call a snake that is 3.14 feet long? A Pi-thon!)"<< endl;
    
    //obtaining user's name
    cout <<"What is your name young apprentice?"<< endl;
    cin >>name;

    //math question and answer
    cout << name << ", What is " << left << "+ " << right << "= ";
    cin >> answer;

    return 0;
}
