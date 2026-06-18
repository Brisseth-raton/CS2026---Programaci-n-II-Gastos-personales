//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_TEST_DECORATOR_AUDIT_PRESERVES_INNER_EXPORT_H
#define EXPENSES_PATTERNS_TEST_DECORATOR_AUDIT_PRESERVES_INNER_EXPORT_H

#include "../include/exporters/csv_exporter.h"
#include "../include/decorators/audited_exporter.h"

#include <cassert>

inline
void
test_decorator_audit_preserves_inner_export()
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
            }

    };

    AuditedExporter
    exporter{
        CsvExporter{}
    };

    auto output =

    exporter
    .export_expenses(
        expenses
    );

    assert( output.find( "date,category,detail,amount" ) != std::string::npos );
    assert( output.find( "transport" ) != std::string::npos );
    assert( output.find( "audit" ) != std::string::npos );
}

#endif //EXPENSES_PATTERNS_TEST_DECORATOR_AUDIT_PRESERVES_INNER_EXPORT_H