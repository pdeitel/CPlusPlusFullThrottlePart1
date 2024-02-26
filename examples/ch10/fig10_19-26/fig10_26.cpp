// fig10_26.cpp
// Processing Employees with various CompensationModels.
#include <format>
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Salaried.h" 
#include "Commission.h"  

int main() {
   // create CompensationModels and Employees
   Salaried salaried{800.0}; 
   Employee employee1{"Pierre Simon", &salaried};

   Commission commission{10000, .06};
   Employee employee2{"Sierra Dembo", &commission};

   // create and initialize vector of Employees
   std::vector employees{employee1, employee2};

   // print each Employee's information and earnings 
   for (const Employee& employee : employees) {
      std::cout << std::format("{}\nearned: ${:.2f}\n\n",
         employee.toString(), employee.earnings());
   }

   std::cout << std::format(
      "\nChanging employee2 compensation model:\n");

   Salaried newCompensationModel{1500.0};
   employee2.setCompensationModel(&newCompensationModel);
   std::cout << std::format("{}\nearned: ${:.2f}\n\n",
      employee2.toString(), employee2.earnings());

}





/**************************************************************************
 * (C) Copyright 1992-2024 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
