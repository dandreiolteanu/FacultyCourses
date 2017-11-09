//
//  ui.cpp
//  test1
//
//  Created by Olteanu Andrei on 10/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//

#include "ui.hpp"
#include <string>

using namespace std;


void UI::printMenu()
{
    cout << "\nPossible commands: \n";
    cout << "\t 1 - Add project.\n";
    cout << "\t 2 - Display all projects.\n";
    cout << "\t 3 - Display total cost\n";
    cout << "\t 0 - Exit.\n\n";
}
void UI::addProjectToRepo()
{
    cout << "Enter the name: ";
    std::string name;
    getline(cin, name);
    cout << "Enter the customer: ";
    std::string customer;
    getline(cin, customer);
    int day,month,year,cost = 0;
    cout << "\tDay: ";
    cin >> day;
    cin.ignore();
    cout << "\tMonth: ";
    cin >> month;
    cin.ignore();
    cout << "\tYear: ";
    cin >> year;
    cin.ignore();
    cout << "\tCost: ";
    cin >> month;
    cin.ignore();
    cout << "Status isDone: ";
    bool isDone;
    cin >> isDone;
    
    this->ctrl.addProjectToRepository(name,customer,day,month,year,cost,isDone);
}

void UI::displayAllProjectsRepo()
{
    DynamicVector v = this->ctrl.getRepo().getProjects();
    Project* project = v.getAllElems();
    if (project == NULL)
        return;
    if (v.getSize() == 0)
    {
        cout << "There are no projects in the repository." << endl;
        return;
    }
    
    for (int i = 0; i < v.getSize(); i++)
    {
        Project p = project[i];
        cout << p.getName() << " ; " << p.getCustomer() << " ; " << p.getDay() << "." << p.getMonth() << "." << p.getYear() << ";" << p.getCost() << ";" << p.getIsDone() << endl;
    }
}

void UI::displayAllCostRepo()
{
    int costSum = 0,costOne;
    DynamicVector v = this->ctrl.getRepo().getProjects();
    Project* project = v.getAllElems();
    if (project == NULL)
        return;
    if (v.getSize() == 0)
    {
        cout << "There are no projects in the repository." << endl;
        return;
    }
    
    for (int i = 0; i < v.getSize(); i++)
    {
        Project p = project[i];
        costOne = p.getCost();
        costSum = costSum + costOne;
    }
    cout << "Total costs are : "<<costSum;
}



void UI::run()
{
    while (true)
    {
        UI::printMenu();
        string commandRepo = "f";
        cout << "Input the command: ";
        cin >> commandRepo;
        if (commandRepo == "0")
            break;
        else if (commandRepo == "1")
        {
            this->addProjectToRepo();
        }
        else if (commandRepo == "2")
        {
            this->displayAllProjectsRepo();
        }
        else if (commandRepo == "3")
        {
            this->displayAllCostRepo();
        }
    }
}
