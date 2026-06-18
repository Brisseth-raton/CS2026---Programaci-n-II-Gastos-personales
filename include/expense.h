//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_EXPENSE_H
#define EXPENSES_PATTERNS_EXPENSE_H

#include <functional>
#include <string>
#include <vector>

struct Expense {
    std::string date;
    std::string category;
    std::string detail;
    double amount{};
};

using ExpenseList =
    std::vector<Expense>;

using ExportFunction =
std::function<
std::string(
const ExpenseList&
)>;

#endif //EXPENSES_PATTERNS_EXPENSE_H