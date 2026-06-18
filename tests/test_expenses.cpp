#include <iostream>

#include "test_strategy_sort_by_amount_descending.h"

#include "test_strategy_sort_by_category_then_date.h"

#include "test_factory_create_csv_exporter.h"

#include "test_factory_create_json_exporter.h"

#include "test_decorator_audit_preserves_inner_export.h"

#include "test_decorator_summary_adds_total.h"

#include "test_integration_export_sorted_expenses.h"

int main()
{
    std::cout
    <<

    "Iniciamos ....\n";

    test_strategy_sort_by_amount_descending();

    test_strategy_sort_by_category_then_date();

    test_factory_create_csv_exporter();

    test_factory_create_json_exporter();

    test_decorator_audit_preserves_inner_export();

    test_decorator_summary_adds_total();

    test_integration_export_sorted_expenses();

    std::cout
    <<

    "\nSalio todo wiiii\n";

    return 0;
}