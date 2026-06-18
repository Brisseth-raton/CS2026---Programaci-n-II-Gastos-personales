//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_SUMMARY_EXPORTER_H
#define EXPENSES_PATTERNS_SUMMARY_EXPORTER_H

#include "../concepts/expense_exporter.h"

#include <numeric>
#include <sstream>

template<
ExpenseExporter Inner
>

struct SummaryExporter {

    Inner inner;

    std::string
    export_expenses(
        const ExpenseList&
        expenses
    ) const
    {
        auto total =

        std::accumulate(

            expenses.begin(),

            expenses.end(),

            0.0,

            [](
                double acc,
                const Expense&
                e
            )
            {
                return
                    acc
                    +
                    e.amount;
            }

        );

        std::ostringstream out;

        out

        <<

        inner
        .export_expenses(
            expenses
        );

        out
        << "\n";

        out
        << "total: ";

        out
        << total;

        return out.str();
    }

};

#endif //EXPENSES_PATTERNS_SUMMARY_EXPORTER_H