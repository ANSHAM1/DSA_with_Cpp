#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// reverse a string
//  string reverse(string str)
//  {
//      int n = str.length();
//      if (n == 0)
//      {
//          return "";
//      }
//      else
//      {
//          return str[n-1] + reverse(str.substr(0,n-1));
//      }
//  }

// substring convert pi to 3.14
//  string pi_convert(string str)
//  {
//      int i = str.find("pi");
//      if (i == -1)
//      {
//          return str;
//      }
//      else
//      {
//          str.replace(i,2,"3.14");
//          return pi_convert(str);
//      }
//  }

// void hanoi(int n, char from_rod, char to_rod, char aux_rod)
// {
//     if (n == 1)
//     {
//         cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
//         return;
//     }
//     hanoi(n - 1, from_rod, aux_rod, to_rod);
//     cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
//     hanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// string repeate_remover(string str, int n)
// {
//     if (str.length() == n+1)
//     {
//         return str;
//     }
//     char f = str[n];
//     int i = n+1;
//     while (i < str.length())
//     {
//         if (str[i] == f)
//         {
//             str.erase(i, 1);
//         }
//         i++;
//     }
//     return repeate_remover(str, n + 1);
// }

// string x_slider(string str, int l)
// {
//     int i = str.find("x");
//     if (i == l - 1)
//     {
//         return str;
//     }
//     else
//     {
//         str.erase(i, 1);
//         str.insert(l - 1, "x");
//         return x_slider(str, l - 1);
//     }
// }

// string x_slider(string str)
// {
//     if(str.length()==0)
//     {
//         return "";
//     }

//     char ch=str[0];
//     string ans=x_slider(str.substr(1));

//     if(ch=='x')
//     {
//         return ans+ch;
//     }
//     else
//     {
//         return ch+ans;
//     }

}


int main()
{
    string str = "xanshamxmauryax";
    string a = x_slider(str);
    cout << a << endl;
    return 0;
}