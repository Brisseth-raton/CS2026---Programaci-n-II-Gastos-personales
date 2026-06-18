//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_TEST_FACTORY_CREATE_JSON_EXPORTER_H
#define EXPENSES_PATTERNS_TEST_FACTORY_CREATE_JSON_EXPORTER_H

#include "../include/exporter_factory.h"
#include "../include/exporters/json_exporter.h"

#include <cassert>

inline
void
test_factory_create_json_exporter()
{
    ExpenseList expenses{

            {
                "2026-06-01",
                "food",
                "lunch",
                18.50
            }

    };

    auto exporter = make_exporter< JsonExporter >();
    auto output = exporter( expenses );

    assert( output.find( "\"category\"" ) != std::string::npos );
    assert( output.find( "\"food\"" ) != std::string::npos );
    assert( output.find( "\"amount\"" ) != std::string::npos );
}

#endif //EXPENSES_PATTERNS_TEST_FACTORY_CREATE_JSON_EXPORTER_H