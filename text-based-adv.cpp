#include <iostream>

/*
Fun little Text adventure project while re-learning C++. The project didn't really have any instructions, so I based off on the Big Bang Theory's Sheldon playing Zork scene.
Didn't really like having to rely on only if, switch, and loops so I added goto in the project just so that it's a little more organized.
Have fun!!
*/


int main()
{
  int count = 0;

 std::cout << "========================================\n";
 std::cout << "         What does Sheldon do?\n";
 std::cout << "========================================\n";
 std::cout << "This game was inspired by the popular TV Series the Big Bang Theory. You play as Sheldon playing the popular text based adventure game Zork. You'll need to navigate Sheldon as he plays the game.\n\n\nDo you wish to play? 1 for Yes or 2 for No\n";
int answer;
std::cin >> answer;
std::cout << "\n";

if(answer == 1)
{
  std::cout << "You flip open your computer and immediately turn it on.\n You've found an emulator online and started to play Zork.\nYou read the text on your screen and it says:\n\n\n";
 
 goto BEGINNING;
  
}
else
{
  std::cout << "It's okay. It's way past your bedtime anyways.\nGood night.";
  std::cout << "\n";
  
}
return 0;

QUICKSAND:
 std::cout << "Ohh noo. You died in quicksand. Not knowing what to do call Leonard and ask him in urgency. Leonard looks at you in frustration and immediately tells you to go to bed. You go to bed.\n";
 return 0;

GO_EAST:
  std::cout << "A gate blocks your way.\n";
  std::cout << "1) Open Gate\n";
  std::cout << "2) Go back\n";
  std::cout << "3) Close Laptop and go to bed\n";
  int q2;
  std::cin >> q2;
  std::cout << "\n";
  if(q2 == 1)
  {
    std::cout << "The gate is locked. Well...so much for that.\n";
    std::cout << "Leonard walks in and tells you that it's getting pretty late. He asks you why are you still up?\n";
    std::cout << "1) Tell him that you're playing classic 80's game Zork.\n";
    std::cout << "2) Ignore him and continue playing.\n";
    std::cout << "3 Tell you're right and I should go to bed.\n";
    
    int q3;
    std::cin >> q3;
    std::cout << "\n";
    switch(q3)
    {
      case 1:
      goto TELL_LEONARD;
      break;
      case 2:
      goto BAD_ENDING;
      break;
      case 3:
      goto GOOD_ENDING;
      break;
    }
  }
  else if (q2 == 2)
  {
  goto BEGINNING;
  }
  else
  {
    goto GOOD_ENDING;
  }


GOOD_ENDING:
 std::cout << "All is well in Sheldon's Spot. You're exhausted and your Brain needs rest from the fun of playing Zork. Good night adventurer.\n";
return 0;

BAD_ENDING:
 std::cout << "As you are playing you see Pryia kissing Leonard. You yell out \"FOR SHAME LEONARD\" and storm into your run in disgust.\nYou stopped playing Zork.";
return 0;


BEGINNING:


  
  do
  {
    std::cout << "You're in a forest. There is quicksand to the west and a path to the east.\nWhat do you do?\n";
  std::cout << "1) Go east\n";
  std::cout << "2) Go west\n";
  std::cout << "3) Drink a glass of milk\n";
  std::cout << "4) Go night night\n";
  int q1;
  std::cin >> q1;


  switch(q1)
  {
    case 1:
      goto GO_EAST;
      break;
    case 2:
     goto QUICKSAND;
     break;
    case 3:
     std::cout << "You drink milk.\n\n";
     count++;
     break;
    case 4:
     goto GOOD_ENDING;
     break;
  }
  } while(count < 3);

  goto DRINK_MILK;


DRINK_MILK:
  std::cout << "As you start to drink the milk, you start getting sleepy. You immediately close your laptop and go to bed. The next morning you feel a little hurt in your tummy. You quickly rush to the bathroom and notice Leonard and Priya together in the shower. You point out that this is a violation of the Roommate agreement and start to get in an argument with Leonard and Priya. You begin to cave and rush over to your neighbor Penny next door. You knock PENNY...PENNY...PENNY and as she opens the door you move her aside and user her restroom.\n";
return 0;


TELL_LEONARD:
std::cout << "You tell Leonard that you found an emulator online that allows you to play classic text based adventure games from the 1980's. Leonard says \"That's cool\". You tell him that it runs on the worlds most power graphics chip \"Imagination\". Leonard walks away in exasperated.\n";
return 0;


  
}
