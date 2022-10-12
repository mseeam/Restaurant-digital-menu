/*
Author: Mohammad Seeam
Course: COSC 1337 Semester: Spring 2022
Section: DL9 ; Instructor: Thayer
Lab: 4 Purpose: Write a program to help a customer to order food from a fast-food joint.
*/

#include<iostream>
using namespace std;

int main(){

    int calory=0;           /* initially the price and calories are zero*/
    double price=0.0;
    int soup_count=0;       /* Created these to calculate the number of orders, such as 1 chicken, 2 tacos, 5 wine */
    int chicken_count=0;
    int beef_count=0;
    int tacos_count=0;
    int fries_count=0;
    int drink_count=0;
    int mutton_count=0;
    int icecream_count=0;
    int pizza_count=0;
    int wine_count=0;

    /* Created the menu below */
    enum Food {soup='s', chicken='c', beef='b', tacos='t', fries='f', drink='d', mutton='m', icecream='i', pizza='p', wine='w', reset='r', order='o' ,quit='q' };
    cout<<"Welcome to the Seeam's heavenly restaurant."<<endl;
    cout<<"Here is the menu: "<<endl;
    cout<<"Soup     : Calories 200 ,Price 10$"<<endl;
    cout<<"Chicken  : Calories 400 ,Price 12$"<<endl;
    cout<<"Beef     : Calories 700 ,Price 15$"<<endl;
    cout<<"Tacos    : Calories 250 ,Price 07$"<<endl;
    cout<<"Fries    : Calories 350 ,Price 05$"<<endl;
    cout<<"Drink    : Calories 100 ,Price 03$"<<endl;               
    cout<<"Mutton   : Calories 575 ,Price 13$"<<endl;
    cout<<"Ice-cream: Calories 200 ,Price 02$"<<endl;
    cout<<"Pizza    : Calories 1200,Price 11$"<<endl;
    cout<<"Wine     : Calories 275 ,Price 06$"<<endl;
    cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is : "<< calory<<", and Your total ordered cost is : "<<price<<endl<<endl; 
    

    
    while(true){
        char choice; /* choice means the options of choosing food, such as s for soup, which will be taken from user as input */
        cout << "Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : ";
        cin>> choice;   
        choice = tolower(choice);
        Food food = static_cast<Food>(choice);
        
        switch(food){
        case soup:
            calory=calory + 200;
            price=price + 10;
            soup_count=soup_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl;   
            break;

        case chicken:
            calory=calory + 400;
            price=price + 12;
            chicken_count=chicken_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;


        case beef:
            calory=calory + 700;
            price=price + 15;
            beef_count=beef_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case tacos:
            calory=calory + 250;
            price=price + 7;
            tacos_count=tacos_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case fries:
            calory=calory + 350;
            price=price + 5;
            fries_count=fries_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case drink:
            calory=calory + 100;
            price=price + 3;
            drink_count=drink_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case mutton:
            calory=calory + 575;
            price=price + 13;
            mutton_count=mutton_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case icecream:
            calory=calory + 200;
            price=price + 2;
            icecream_count=icecream_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case pizza:
            calory=calory + 1200;
            price=price + 11;
            pizza_count=pizza_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case wine:
            calory=calory + 275;
            price=price + 6;
            wine_count=wine_count+1;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;

        case quit:
            cout<<"Good Bye !"<<endl;
            exit(0);

        case order:
            cout<<"Thank for placing your order."<<endl;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: " << price <<endl;
            cout<<"Good Bye !"<<endl;
            exit(0);

        case reset:
            calory=0;
            price=0;
            soup_count=0;       /* When the user will press r of reset, all previous order will be canceled, so that the user can select order again from zero/beginning */
            chicken_count=0;    
            beef_count=0;
            tacos_count=0;
            fries_count=0;
            drink_count=0;
            mutton_count=0;
            icecream_count=0;
            pizza_count=0;
            wine_count=0;
            cout<<"You ordered "<<soup_count<<" soup, "<<chicken_count<<" chicken, "<< beef_count<< " beef, "<< tacos_count<<" tacos, "<< fries_count<< " fries, "<< drink_count<<" drink, "<<mutton_count<< " mutton, "<< icecream_count<<" ice-cream, "<< pizza_count<< " pizza, "<< wine_count<< " wine, Your total ordered calory is: "<< calory<<", and Your total ordered cost is: "<<price<<endl<<endl; 
            break;
            
        default:
            cout<<"Please enter the correct option"<<endl<<endl;        
        }
    }
    return 0;
}

/*
Welcome to the Seeam's heavenly restaurant.
Here is the menu: 
Soup     : Calories 200 ,Price 10$
Chicken  : Calories 400 ,Price 12$
Beef     : Calories 700 ,Price 15$
Tacos    : Calories 250 ,Price 07$
Fries    : Calories 350 ,Price 05$
Drink    : Calories 100 ,Price 03$
Mutton   : Calories 575 ,Price 13$
Ice-cream: Calories 200 ,Price 02$
Pizza    : Calories 1200,Price 11$
Wine     : Calories 275 ,Price 06$
You ordered 0 soup, 0 chicken, 0 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is : 0, and Your total ordered cost is : 0

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : s
You ordered 1 soup, 0 chicken, 0 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 200, and Your total ordered cost is: 10

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : s
You ordered 2 soup, 0 chicken, 0 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 400, and Your total ordered cost is: 20

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : t
You ordered 2 soup, 0 chicken, 0 beef, 1 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 650, and Your total ordered cost is: 27

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : f
You ordered 2 soup, 0 chicken, 0 beef, 1 tacos, 1 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 1000, and Your total ordered cost is: 32

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : r
You ordered 0 soup, 0 chicken, 0 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 0, and Your total ordered cost is: 0

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : s
You ordered 1 soup, 0 chicken, 0 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 200, and Your total ordered cost is: 10

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : b
You ordered 1 soup, 0 chicken, 1 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 900, and Your total ordered cost is: 25

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : b
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 0 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 1600, and Your total ordered cost is: 40

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : f
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 0 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 1950, and Your total ordered cost is: 45

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : l
Please enter the correct option

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : d
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 1 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 2050, and Your total ordered cost is: 48

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : d
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 2 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 2150, and Your total ordered cost is: 51

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : d
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 3 drink, 0 mutton, 0 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 2250, and Your total ordered cost is: 54

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : i
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 3 drink, 0 mutton, 1 ice-cream, 0 pizza, 0 wine, Your total ordered calory is: 2450, and Your total ordered cost is: 56

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : w
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 3 drink, 0 mutton, 1 ice-cream, 0 pizza, 1 wine, Your total ordered calory is: 2725, and Your total ordered cost is: 62

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : w
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 3 drink, 0 mutton, 1 ice-cream, 0 pizza, 2 wine, Your total ordered calory is: 3000, and Your total ordered cost is: 68

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : w
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 3 drink, 0 mutton, 1 ice-cream, 0 pizza, 3 wine, Your total ordered calory is: 3275, and Your total ordered cost is: 74

Please enter your choice: (S)Soup, (C)Chicken, (B)Beef, (T)Tacos, (F)Fries, (D)Drink, (M)Mutton, (I)Ice-Cream, (P)Pizza, (W)Wine, (R)Reset, (O)Order, (Q)Quit : o
Thank for placing your order.
You ordered 1 soup, 0 chicken, 2 beef, 0 tacos, 1 fries, 3 drink, 0 mutton, 1 ice-cream, 0 pizza, 3 wine, Your total ordered calory is: 3275, and Your total ordered cost is: 74
Good Bye !
*/