//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_JSON_EXPORTER_H
#define EXPENSES_PATTERNS_JSON_EXPORTER_H

#include "../expense.h"

#include <sstream>

struct JsonExporter {

    std::string
    export_expenses(
        const ExpenseList&
        expenses
    ) const
    {
        std::ostringstream out;

        out << "[";

        for (
            size_t i = 0;
            i < expenses.size();
            ++i
        )
        {
            const auto& e =
                expenses[i];

            out
            << "{"

            << "\"date\":\""
            << e.date
            << "\","

            << "\"category\":\""
            << e.category
            << "\","

            << "\"detail\":\""
            << e.detail
            << "\","

            << "\"amount\":"
            << e.amount

            << "}";

            if (
                i + 1
                <
                expenses.size()
            )
            {
                out << ",";
            }
        }

        out << "]";

        return out.str();
    }

};

#endif //EXPENSES_PATTERNS_JSON_EXPORTER_H