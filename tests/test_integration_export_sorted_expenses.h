//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_TEST_INTEGRATION_EXPORT_SORTED_EXPENSES_H
#define EXPENSES_PATTERNS_TEST_INTEGRATION_EXPORT_SORTED_EXPENSES_H

#include "../include/exporters/csv_exporter.h"

#include "../include/decorators/audited_exporter.h"

#include "../include/decorators/summary_exporter.h"

#include "../include/sort.h"

#include <cassert>

inline
void
test_integration_export_sorted_expenses()
{
    ExpenseList expenses{

            {
                "2026-06-01",
                "food",
                "lunch",
                18.50
            },

            {
                "2026-06-02",
                "transport",
                "bus",
                3.20
            },

            {
                "2026-06-03",
                "books",
                "cpp",
                45.00
            }

    };

    auto by_amount =

    [](
        const Expense& a,
        const Expense& b
    )
    {
        return
        a.amount >
        b.amount;
    };

    sort_with(
        expenses,
        by_amount
    );

    auto exporter =

    AuditedExporter{

        SummaryExporter{

            CsvExporter{}

        }

    };

    auto output =

    exporter
    .export_expenses(
        expenses
    );

    assert( expenses.front().amount == 45.00 );
    assert( output.find( "date,category,detail,amount" ) != std::string::npos );
    assert( output.find( "total" ) != std::string::npos );
    assert( output.find( "audit" ) != std::string::npos );
}
#endif //EXPENSES_PATTERNS_TEST_INTEGRATION_EXPORT_SORTED_EXPENSES_H