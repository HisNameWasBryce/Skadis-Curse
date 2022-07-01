#include <iostream>
#include <conio.h>

/*

This story follow our protagonist who hears a voice from a witch of some sort. 
This witch is psychic and proceeds to quiz and test the player. 
The player is given a series of answers to choose from. 
Depending on the player choices, the witch may kill, abandon, or swear allegiance the player. 

The witch's name is Skadi, the player does not know this. 

*/
int main()
{
    int skadi_annoyed = 0;
    int skadi_impressed = 0;
    int skadi_angry = 0;

    // introduction to Skadi
    std::cout << "========================================================================================================================\n";
    std::cout << "========================================================================================================================\n";
    std::cout << "========================================================================================================================\n";
    std::cout << "========================================================================================================================\n";
    std::cout << "========================================================================================================================\n\n\n";


    std::cout << "Greetings stranger, how nice to meet you.\n";
    std::cout << "I see you're having trouble speaking, dont worry, thats normal.\n";
    std::cout << "Afterall, its not everyday I get to speak with your kind.\n";
    std::cout << "Now, can you tell me your name?\n\n\n";

    //take answer for the players name
    std::string player_name;
    std::cin >> player_name;
    
    system("cls");
    
    bool foo = false;

    //loop until a proper answer is given
    while (!foo) 
    {
        std::cout << "\n\n\n\n";
        std::cout << player_name << "... What a peculiar name...\n";
        std::cout << "Tell me, " << player_name << ", do you know of your fate?\n\n\n";

        // player is given option to skip background information
        // If the player already knows their fate, Skadi is impressed
        std::cout << "================***    Answers should be given as a number     ***================\n\n";

        std::cout << "            1). I know my true purpose       2). I know nothing of my true purpose \n\n";

        int answer1;

        std::cin >> answer1;

        system("cls");

        if (2 == answer1)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            std::cout << "As I suspected. Allow me to remind you of the ways of the world.\n\n";

            // loop while the intro questions are being asked. If the player wishes to skip after asking a question, then skip variable is set to True.

            bool skipIntro = false;
            while (!skipIntro) {


                std::cout << "You are bound by fate to be a great warrior, of this I am certain.\n";
                std::cout << "How you achieve this goal, I dont know exactly, but the blood of a warrior courses through you.\n\n\n";


                std::cout << "               1) Who are you?               2) Where am I? \n";
                std::cout << "               3) How are we speaking?       4) How do you know of my fate?\n\n";

                int answer1a;
                std::cin >> answer1a;
                system("cls");
                
                
                //logic for handling answers
                if (1 == answer1a)
                {

                    foo = true;
                    std::cout << "\n\n\n\n";
                    std::cout << "Me? I am your guide, your muse, your best friend...\n";
                    std::cout << "I am many things, but know this, I am here to guide you to your fate, whatever that is.\n";
                    std::cout << "Some call me a sorceress. You may call me what you wish, parhaps one day we may even meet.\n\n\n";


                }
                else if (2 == answer1a)
                {

                    foo = true;
                    std::cout << "\n\n\n\n";
                    std::cout << "Why, you are asleep of course.\n";
                    std::cout << "You are within your own mind.\n";
                    std::cout << "I have summoned myself here to speak with you.\n";
                    std::cout << "I must know if you are the warrior I seek.\n\n\n";


                }
                else if (3 == answer1a)
                {

                    foo = true;
                    std::cout << "\n\n\n\n";
                    std::cout << "I am speaking to you through your subconscious.\n";
                    std::cout << "It is one of my best tricks, truth be told.\n";
                    std::cout << "However, you are special, afterall I only use this skill to communicate with the exceptionally strong.\n\n\n";

                }
                else if (4 == answer1a)
                {

                    foo = true;
                    std::cout << "\n\n\n\n";
                    std::cout << "I know of your fate because I have seen this moment in my dreams.\n";
                    std::cout << "You see, your fate and mine are intertwined.\n";
                    std::cout << "You and I are bound and I shall help you to reach your ultimate destination.\n\n\n";

                }
                //if the player gives an improper answer, the narrator gets annoyed and eventually fails the game. closing the app. 
                //This occurs anytime the player inputs an invalid answer
                else
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << "\n\n\n\n";
                    std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
                    skadi_annoyed += 2;
                    system("pause");

                    system("cls");

                    if (skadi_annoyed == 10)
                    {
                        std::cout << "\n\n\n\n";
                        std::cout << "You are a fool! You take me for a joke?\n";
                        std::cout << "I will not be mocked, I will not have my time wasted!\n";
                        std::cout << "Your fate is to die a horrible painful death.\n";
                        std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                        std::cout << "******************************************************************************************************\n";
                        std::cout << "******************************************************************************************************\n";
                        std::cout << "                                                                                                      \n";
                        std::cout << "                                           GAME OVER                                                  \n";
                        std::cout << "                                                                                                      \n";
                        std::cout << "******************************************************************************************************\n";
                        std::cout << "******************************************************************************************************\n";
                        system("pause");

                        return 0;
                    }
                }

                std::cout << "Do you have more questions?\n\n\n";

                std::cout << "               1) Yes               2) No \n\n";

                int loopbreak;
                std::cin >> loopbreak;

                system("cls");

                //logic for escaping the intro questions
                foo = false;
                while (!foo)
                {

                    if (1 == loopbreak)
                    {
                        
                        foo = true;
                        std::cout << "\n\n\n\n";
                        std::cout << "The warrior who seeks to understand wins before the battle is fought.\n\n";

                    }
                    else if (2 == loopbreak)
                    {

                        foo = true;
                        skipIntro = true;
                        std::cout << "\n\n\n\n";
                        std::cout << "Very good, then allow us to continue... Master " << player_name << ".\n\n\n";

                        system("pause");
                        system("cls");

                        std::cout << "\n\n\n\n";
                        std::cout << "Knowing your true purpose is only the first step of many you will take on your journey.\n\n";
                        std::cout << "While knowing your true purpose will keep you true to your goals.\n";
                        std::cout << "Only by remaining skillful and quick witted can you hope to become a great warrior\n";
                        std::cout << "I will test you, to be sure your strength.\n\n\n";

                        std::cout << "               1) I accept your challenge.               2) I do not accept your challenge. \n";
                        std::cout << "               3) Why do you want to test me?            4) I dont need your help... witch\n\n";

                        int reaction1;
                        std::cin >> reaction1;

                        system("cls");

                        foo = false;
                        while (!foo)
                        {
                            if (1 == reaction1) {

                                foo = true;
                                skadi_impressed++;

                                std::cout << "\n\n\n\n";
                                std::cout << "Yes, I would expect nothing less of you.\n";
                                std::cout << "Let us to begin... This will be interesting.\n\n\n";

                                system("pause");


                            }
                            else if (2 == reaction1) {

                                foo = true;
                                skadi_angry++;

                                std::cout << "\n\n\n\n";
                                std::cout << "Well, you see...have no choice.\n";
                                std::cout << "I am the one holding you here.\n";
                                std::cout << "Without me releasing you, you will remain here... forever\n";
                                std::cout << "So please, let me know when you are ready to begin.\n\n\n";

                                system("pause");

                            }
                            else if (3 == reaction1) {

                                foo = true;
                                skadi_impressed++;

                                std::cout << "\n\n\n\n";
                                std::cout << "I must be sure of your wit and strength.\n";
                                std::cout << "You see, we are bound by fate.\n";
                                std::cout << "This will allow me to see if you are the warrior I have been seeking.\n";
                                std::cout << "Now, let me know when you are ready to begin.\n\n\n";

                                system("pause");

                            }
                            else if (4 == reaction1) {

                                foo = true;
                                skadi_angry++;

                                std::cout << "\n\n\n\n";
                                std::cout << "Watch your tongue, I am no mere wench for you to speak to with such insolence.\n";
                                std::cout << "You will answer my questions, and you will do so willingly.\n";
                                std::cout << "Now... let us begin.\n\n\n";

                                system("pause");

                            }
                            else
                            {

                                if (skadi_annoyed == 10)
                                {
                                    std::cout << "\n\n\n\n";
                                    std::cout << "You are a fool! You take me for a joke?\n";
                                    std::cout << "I will not be mocked, I will not have my time wasted!\n";
                                    std::cout << "Your fate is to die a horrible painful death.\n";
                                    std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                                    system("pause");

                                    return 0;
                                }

                                else
                                {
                                    std::cout << "\n\n\n\n";
                                    std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
                                    skadi_annoyed++;

                                    system("cls");
                                }

                            }
                        }
                    }
                    else
                    {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                        std::cout << "\n\n\n\n";
                        std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
                        skadi_annoyed += 2;
                        system("pause");

                        system("cls");

                        if (skadi_annoyed == 10)
                        {
                            std::cout << "\n\n\n\n";
                            std::cout << "You are a fool! You take me for a joke?\n";
                            std::cout << "I will not be mocked, I will not have my time wasted!\n";
                            std::cout << "Your fate is to die a horrible painful death.\n";
                            std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                            std::cout << "******************************************************************************************************\n";
                            std::cout << "******************************************************************************************************\n";
                            std::cout << "                                                                                                      \n";
                            std::cout << "                                           GAME OVER                                                  \n";
                            std::cout << "                                                                                                      \n";
                            std::cout << "******************************************************************************************************\n";
                            std::cout << "******************************************************************************************************\n";
                            system("pause");

                            return 0;
                        }
                    }
                }
            }
        }
        else if (1 == answer1)
        {

            foo = true;
            skadi_impressed++;

            std::cout << "\n\n\n\n";
            std::cout << "Knowing your true purpose is only the first step of many you will take on your journey.\n\n";
            std::cout << "While knowing your true purpose will keep you true to your goals.\n";
            std::cout << "Only by remaining skillful and quick witted can you hope to become a great warrior\n";
            std::cout << "I will test you, to be sure your strength.\n\n\n";

            std::cout << "               1) I accept your challenge.               2) I do not accept your challenge. \n";
            std::cout << "               3) Why do you want to test me?            4) I dont need your help... witch\n\n";

            int reaction1;
            std::cin >> reaction1;

            system("cls");


            if (reaction1 == 1) {

                skadi_impressed++;

                std::cout << "\n\n\n\n";
                std::cout << "Yes, I would expect nothing less of you.\n";
                std::cout << "Let us to begin... This will be interesting.\n\n\n";

                system("pause");


            }
            else if (reaction1 == 2) {

                skadi_angry++;

                std::cout << "\n\n\n\n";
                std::cout << "Well, you see...have no choice.\n";
                std::cout << "I am the one holding you here.\n";
                std::cout << "Without me releasing you, you will remain here... forever\n";
                std::cout << "So please, let me know when you are ready to begin.\n\n\n";

                system("pause");

            }
            else if (reaction1 == 3) {

                skadi_impressed++;

                std::cout << "\n\n\n\n";
                std::cout << "I must be sure of your wit and strength.\n";
                std::cout << "You see, we are bound by fate.\n";
                std::cout << "This will allow me to see if you are the warrior I have been seeking.\n";
                std::cout << "Now, let me know when you are ready to begin.\n\n\n";

                system("pause");

            }
            else if (reaction1 == 4) {

                skadi_angry++;

                std::cout << "\n\n\n\n";
                std::cout << "Watch your tongue, I am no mere wench for you to speak to with such insolence.\n";
                std::cout << "You will answer my questions, and you will do so willingly.\n";
                std::cout << "Now... let us begin.\n\n\n";

                system("pause");


            }
            else {

                if (skadi_annoyed == 10)
                {
                    std::cout << "\n\n\n\n";
                    std::cout << "You are a fool! You take me for a joke?\n";
                    std::cout << "I will not be mocked, I will not have my time wasted!\n";
                    std::cout << "Your fate is to die a horrible painful death.\n";
                    std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                    system("pause");

                    return 0;
                }
                else
                {
                    std::cout << "\n\n\n\n";
                    std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
                    skadi_annoyed++;

                    system("cls");
                }

            }
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
            skadi_annoyed += 2;
            std::cout << "\n\n\n\n";
            std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
            system("pause");

            system("cls");

            if (skadi_annoyed == 10)
            {
                std::cout << "\n\n\n\n";
                std::cout << "You are a fool! You take me for a joke?\n";
                std::cout << "I will not be mocked, I will not have my time wasted!\n";
                std::cout << "Your fate is to die a horrible painful death.\n";
                std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "                                                                                                      \n";
                std::cout << "                                           GAME OVER                                                  \n";
                std::cout << "                                                                                                      \n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                system("pause");

                return 0;
            }
        }
    }

    system("cls");

    std::cout << "\n\n\n\n";
    std::cout << "You and your best lieutenant have gathered a small group of local militia from your town to search for work in the \nsurrounding area. ";
    std::cout << "You find a nearby city where the king is asking for someone to clear out a military outpost that has \nbeen taken over by barbarians.\n\n";
    std::cout << "You accept the kings request in return for silver. \n\nThe king and his men accompany you, and you reach the outpost only moments before the kings guard does. ";
    std::cout << "Upon reaching \nthe outpost, you find the group in control of the objective is a highly skilled group of warriors led by a well known \nwarlord.\n\n";
    std::cout << "This warlord is vicious and known for eating his enemies after killing them. ";
    std::cout << "The warlord approaches you and asks you \nand your men to join him and betray the king.\n\nWhat do you do?\n\n\n";

    std::cout << "               1) Join forces with the warlord and attack the king, together.\n";
    std::cout << "               2) Refuse the request, insult the warlord, and fight with the king. \n";
    std::cout << "               3) Draw your sword and attempt to defeat the warlord before the king arrives.\n";
    std::cout << "               4) Attempt to intimidate the warlord.\n\n";

    int testanswer1;
    std::cin >> testanswer1;

    system("cls");

    foo = false;
    while (!foo)
    {
        if (1 == testanswer1)
        {
            foo = true;
            skadi_impressed++;
            std::cout << "\n\n\n\n";
            std::cout << "1) Join forces with the warlordand attack the king, together.\n\n";
            std::cout << "This path surely leads to victory.\n";
            std::cout << "The king would not have asked for help if he was strong enough to win alone.\n";
            std::cout << "You turn and win an asured victory with the warlord.\n";
            std::cout << "Only a fool would take a fight without knowing the result.\n\n";
            system("pause");

            system("cls");
        }
        else if (2 == testanswer1)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_impressed++;
            std::cout << "2) Refuse the request, insult the warlord, and fight with the king.\n\n";
            std::cout << "A noble answer to be sure. However, the result of this battle is not guaranteed.\n";
            std::cout << "Your strength must be great to be so sure of yourself in the face of such danger.\n";
            std::cout << "The fight will be long and many will perish, but there is a small chance for victory.\n\n";
            system("pause");

            system("cls");
        }
        else if (3 == testanswer1)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_angry++;
            std::cout << "3) Draw your sword and attempt to defeat the warlord before the king arrives.\n\n";
            std::cout << "Only a fool would choose this path.\n";
            std::cout << "The full strength of the group is not present, and you are fighting at a disadvantage.\n";
            std::cout << "This will surely lead to the death of you and all your men.\n\n";
            system("pause");

            system("cls");
        }
        else if (4 == testanswer1)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_angry++;
            std::cout << "4) Attempt to intimidate the warlord.\n\n";
            std::cout << "Sometimes intimidation can be used to avoid a fight.\n";
            std::cout << "This tactic is often used by the weak, or by the very strong to take pity.\n";
            std::cout << "However, intimidation against a superior foe is unlikely to work.\n";
            std::cout << "This path likely leads to your death, and all the death of your men.\n\n";
            system("pause");

            system("cls");
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            skadi_annoyed += 2;
            std::cout << "\n\n\n\n";
            std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
            system("pause");

            system("cls");

            if (skadi_annoyed == 10)
            {
                std::cout << "\n\n\n\n";
                std::cout << "You are a fool! You take me for a joke?\n";
                std::cout << "I will not be mocked, I will not have my time wasted!\n";
                std::cout << "Your fate is to die a horrible painful death.\n";
                std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "                                                                                                      \n";
                std::cout << "                                           GAME OVER                                                  \n";
                std::cout << "                                                                                                      \n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                system("pause");

                return 0;
            }
        }
    }

    std::cout << "\n\n\n\n";
    std::cout << "One of your mortal enemies calls upon a witch to give him advantage against you.\n\n";
    std::cout << "The witch, through spell, has bound herself to you. ";
    std::cout << "This spell will curse you and your children with sickness and death \nif any of her blood is spilled. ";
    std::cout << "She has also casts a spell which prevents you from being able to fight at full strength.\n\n";
    std::cout << "You happen upon the witch while raiding a town under the control of your enemy. She is now your prisoner. ";
    std::cout << "You must \nconfront her master soon, and doing so while lowered in strength will cost you your life.\n\n";
    std::cout << "You will surly lose the approaching battle while she still breathes.\n\nHow do you solve this dilemma?\n\n\n";

    std::cout << "               1) Damn the curse and slit her thoat, breaking your bond to her.\n";
    std::cout << "               2) Fight her master with reduced strength despite the risk.\n";
    std::cout << "               3) Drown the witch in a nearby lake.\n";
    std::cout << "               4) Try to convince the witch to join you and reverse the curse.\n\n";

    int testanswer2;
    std::cin >> testanswer2;

    system("cls");

    foo = false;
    while (!foo)
    {
        if (1 == testanswer2)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_angry++;
            std::cout << "1) Damn the curse and slit her thoat, breaking your bond to her.\n\n";
            std::cout << "Only a fool ignores curses from greater powers.\n";
            std::cout << "By spilling her blood, you have damned yourself.\n";
            std::cout << "You will find yourself dead with such disregard for risk.\n\n";
            system("pause");

            system("cls");

        }
        else if (2 == testanswer2)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_angry++;
            std::cout << "2) Fight her master with reduced strength despite the risk.\n\n";
            std::cout << "You decide to ignore the risk and fight anyways?\n";
            std::cout << "A foolish endevour, you will find yourself out matched by an inferior foe.\n";
            std::cout << "If you are outmatched or at disadvantage, you should seek to nullify that disadvantage before entering battle.\n\n";
            system("pause");

            system("cls");

        }
        else if (3 == testanswer2)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_impressed++;
            std::cout << "3) Drown the witch in a nearby lake.\n\n";
            std::cout << "Intelligent and resourceful, this takes care of two problems at once.\n";
            std::cout << "Not only do you rid yourself of this witches curse, but you also assure your own victory against your enemies.\n";
            std::cout << "You will win the coming battle as your opponent will know nothing of her fate.\n\n";
            system("pause");

            system("cls");

        }
        else if (4 == testanswer2)
        {
            foo = true;
            std::cout << "\n\n\n\n";
            skadi_impressed++;
            std::cout << "4) Try to convince the witch to join you and reverse the curse.\n\n";
            std::cout << "Ahh, a charismatic one, are we?\n";
            std::cout << "Decisions like this one will allow you to grow a large following.\n";
            std::cout << "Great warriors will attract all kinds, and drawing in others will serve you well.\n\n";
            std::cout << "Regard your soldiers as your children, and they will follow you into the deepest valleys;\n look upon them as your own beloved sons, and they will stand by you even unto death.\n\n";
            system("pause");

            system("cls");
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            skadi_annoyed += 2;
            std::cout << "\n\n\n\n";
            std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
            system("pause");

            system("cls");

            if (skadi_annoyed == 10)
            {
                std::cout << "\n\n\n\n";
                std::cout << "You are a fool! You take me for a joke?\n";
                std::cout << "I will not be mocked, I will not have my time wasted!\n";
                std::cout << "Your fate is to die a horrible painful death.\n";
                std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "                                                                                                      \n";
                std::cout << "                                           GAME OVER                                                  \n";
                std::cout << "                                                                                                      \n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                system("pause");

                return 0;
            }
        }
    }

    std::cout << "\n\n\n\n";
    std::cout << "Interesting answers. Now we reach my final question.\n\n";
    std::cout << "You are out collecting wood at the request of your father.\n";
    std::cout << "While out searching for wood, your family farm is attacked, nearly all your servants are killed.\n";
    std::cout << "You return to find your father fighting several men single handedly.\n";
    std::cout << "He notices you and yells, \"Run son! leave me, I will fend them off as long as I can.\"\n";
    std::cout << "What do you do?\n\n\n";

    std::cout << "               1) Grab a nearby sword and fight with your father.\n";
    std::cout << "               2) Run away and leave your father to fight the men alone.\n";
    std::cout << "               3) Taunt the men to draw their attention away from your father.\n";
    std::cout << "               4) Run and look for help.\n\n";

    int testanswer3;
    std::cin >> testanswer3;
    system("cls");

    foo = false;
    while (!foo)
    {
        if (1 == testanswer3)
        {
            foo = true;
            skadi_impressed++;
            std::cout << "\n\n\n\n";
            std::cout << "1) Grab a nearby sword and fight with your father.\n\n";
            std::cout << "You grab a nearby sword and join your father.\n";
            std::cout << "Despite his protest you join him in life or death.\n";
            std::cout << "This bolsters your father and allows him to fight like an unkillable demon.\n";
            std::cout << "Together you slay all those before you. You do not easily abondon those who rely on you.\n\n";

            system("pause");

            system("cls");
        }
        else if (2 == testanswer3)
        {
            foo = true;
            skadi_angry++;
            std::cout << "\n\n\n\n";
            std::cout << "2) Run away and leave your father to fight the men alone.\n\n";
            std::cout << "You run away. Leaving your father as he asked.\n";
            std::cout << "Like a coward, you run and your fathers fate is sealed.\n";
            std::cout << "Parhaps you could've saved him, but you ran anyway. Great warriors never run from those that rely on them.\n\n";

            system("pause");

            system("cls");
        }
        else if (3 == testanswer3)
        {
            foo = true;
            skadi_impressed++;
            std::cout << "\n\n\n\n";
            std::cout << "3) Taunt the men to draw their attention away from your father.\n\n";
            std::cout << "You draw some of the men away from your father, serving as a support to his fight.\n";
            std::cout << "This shows intelligence in the face of danger. It shows loyalty to your father.\n";
            std::cout << "Your father is able to overcome the men he now faces. Leading to assured victory over the entire invading group\n\n";

            system("pause");

            system("cls");
        }
        else if (4 == testanswer3)
        {
            foo = true;
            skadi_angry++;
            std::cout << "\n\n\n\n";
            std::cout << "4) Run and look for help.\n\n";
            std::cout << "You turn and run to look for help.\n";
            std::cout << "You soon realize that everyone who could be of help has been killed.\n";
            std::cout << "When you return to your father, he is dead. Having been abandoned, you are left with nothing.\n";
            std::cout << "Great warriors seek victory from within themselves, not from others.\n\n";

            system("pause");

            system("cls");
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            skadi_annoyed += 2;
            std::cout << "\n\n\n\n";
            std::cout << "Perhaps I was wrong about you, a true warrior speaks true and staight\n\n";
            system("pause");

            system("cls");

            if (skadi_annoyed == 10)
            {
                std::cout << "\n\n\n\n";
                std::cout << "You are a fool! You take me for a joke?\n";
                std::cout << "I will not be mocked, I will not have my time wasted!\n";
                std::cout << "Your fate is to die a horrible painful death.\n";
                std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "                                                                                                      \n";
                std::cout << "                                           GAME OVER                                                  \n";
                std::cout << "                                                                                                      \n";
                std::cout << "******************************************************************************************************\n";
                std::cout << "******************************************************************************************************\n";
                system("pause");

                return 0;
            }
        }
    }

    //check all narrator attitude variables and give an ending based on highest value. 
    //Angry & impressed are priority over annoyed.Impressed takes priority over angry.

    if (skadi_annoyed > skadi_angry && skadi_annoyed > skadi_impressed) 
    {
        std::cout << "You are a fool! You take me for a joke?\n";
        std::cout << "I will not be mocked, I will not have my time wasted!\n";
        std::cout << "Your fate is to die a horrible painful death.\n";
        std::cout << "Good luck and may your death be silent, a fools death. Where you might find yourself in hel.\n";
        system("pause");

        return 0;

    }
    else if (skadi_angry >= skadi_annoyed && skadi_angry > skadi_impressed) 
    {
        std::cout << "\n\n\n\n";
        std::cout << "You are a weakling, and a joke of a warrior.\n";
        std::cout << "I am bound to you, this is true. However, i will never follow such a weak idiot.\n";
        std::cout << "You will die by my hand, now. May you find eternal pain in the depths of hel.\n";
        std::cout << "My true master will be relieved for having removed such a tiny obstacle from his path.\n\n";

        system("pause");

        system("cls");

        std::cout << "\n\n\n\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "**                     You find yourself choking on each breath, gasping for air                    **\n";
        std::cout << "**               You slowly realize the life force is being drained from your soul                  **\n";
        std::cout << "**  Parhaps you should think better on your answers, should you wish a different fate in the future **\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "                                                                                                      \n";
        std::cout << "                                           GAME OVER                                                  \n";
        std::cout << "                                                                                                      \n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        system("pause");
    }
    else if (skadi_impressed >= skadi_annoyed && skadi_impressed > skadi_angry) 
    {
        std::cout << "\n\n\n\n";
        std::cout << "You are truly the warrior I seek. Together, we will be unstopable.\n";
        std::cout << "I will find you when you wake, I will give you a weapon beyond that of all your enemies.\n";
        std::cout << "The power of kings, the power of warlords, the ultimate power... Magic, fortune, and the seers eye.\n";
        std::cout << "I look forward to our future together... my lord.\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "                                                                                                      \n";
        std::cout << "                                           Victory                                                    \n";
        std::cout << "                                                                                                      \n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        system("pause");
    }
    else if (skadi_impressed == skadi_angry && skadi_impressed > skadi_annoyed) 
    {

        std::cout << "\n\n\n\n";
        std::cout << "You are truly the warrior I seek. Although, you are not what I was expecting.\n";
        std::cout << "I will find you when you wake, I will give you a weapon beyond that of all your enemies.\n";
        std::cout << "The power of kings, the power of warlords, the ultimate power... Magic, fortune, and the seers eye.\n";
        std::cout << "I look forward to out future together... my lord.\n";
        std::cout << "do not make me regret this decision.\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "                                                                                                      \n";
        std::cout << "                                           Victory                                                    \n";
        std::cout << "                                                                                                      \n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        system("pause");
    }
    else 
    {
        std::cout << "\n\n\n\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "                                                                                                      \n";
        std::cout << "                                       Error 01 has occured                                           \n";
        std::cout << "                                       HOW DID THIS HAPPEN?                                           \n";
        std::cout << "                                                                                                      \n";
        std::cout << "******************************************************************************************************\n";
        std::cout << "******************************************************************************************************\n";
        system("pause");
    }


    return 0;
}