//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_CSV_EXPORTER_H
#define EXPENSES_PATTERNS_CSV_EXPORTER_H

#include "../expense.h"

#include <sstream>

struct CsvExporter {

    std::string
    export_expenses(
        const ExpenseList&
        expenses
    ) const
    {
        std::ostringstream out;

        out
        << "date,category,detail,amount\n";

        for (
            const auto& e
            : expenses
        )
        {
            out
            << e.date
            << ","
            << e.category
            << ","
            << e.detail
            << ","
            << e.amount
            << "\n";
        }

        return out.str();
    }

};

#endif //EXPENSES_PATTERNS_CSV_EXPORTER_H