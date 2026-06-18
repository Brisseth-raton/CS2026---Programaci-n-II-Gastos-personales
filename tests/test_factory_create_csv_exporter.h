//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_TEST_FACTORY_CREATE_CSV_EXPORTER_H
#define EXPENSES_PATTERNS_TEST_FACTORY_CREATE_CSV_EXPORTER_H

#include "../include/exporter_factory.h"
#include "../include/exporters/csv_exporter.h"

#include <cassert>

inline
void
test_factory_create_csv_exporter()
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

    auto exporter =

    make_exporter< CsvExporter >();

    auto output = exporter( expenses );

    assert( output.find("date,category,detail,amount" ) != std::string::npos );
    assert( output.find( "food" ) != std::string::npos );
    assert( output.find("transport" ) != std::string::npos );
}
#endif //EXPENSES_PATTERNS_TEST_FACTORY_CREATE_CSV_EXPORTER_H