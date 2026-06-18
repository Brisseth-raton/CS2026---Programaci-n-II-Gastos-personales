//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_EXPENSE_EXPORTER_H
#define EXPENSES_PATTERNS_EXPENSE_EXPORTER_H

#include "../expense.h"

#include <concepts>

template<class T>
concept ExpenseExporter =

requires( T exporter, const ExpenseList& expenses )

{
    {
        exporter.export_expenses(expenses)
        }
    ->
    std::same_as< std::string >;
};

#endif //EXPENSES_PATTERNS_EXPENSE_EXPORTER_H