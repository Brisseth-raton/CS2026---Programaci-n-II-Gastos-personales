//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_TEST_DECORATOR_SUMMARY_ADDS_TOTAL_H
#define EXPENSES_PATTERNS_TEST_DECORATOR_SUMMARY_ADDS_TOTAL_H

#pragma once

#include "../include/exporters/text_exporter.h"
#include "../include/decorators/summary_exporter.h"

#include <cassert>

inline
void
test_decorator_summary_adds_total()
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

    SummaryExporter
    exporter{
        TextExporter{}
    };

    auto output =

    exporter
    .export_expenses(
        expenses
    );

    assert( output.find( "food" ) != std::string::npos );
    assert( output.find( "total" ) != std::string::npos );
    assert( output.find( "21.7" ) != std::string::npos || output.find( "21.70" ) != std::string::npos );
}
#endif //EXPENSES_PATTERNS_TEST_DECORATOR_SUMMARY_ADDS_TOTAL_H