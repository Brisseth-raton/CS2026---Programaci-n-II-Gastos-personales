//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_EXPORTER_FACTORY_H
#define EXPENSES_PATTERNS_EXPORTER_FACTORY_H

#include "concepts/expense_exporter.h"

#include <utility>

template<
ExpenseExporter E,
class... Args
>

ExportFunction
make_exporter(
Args&&... args
)

{
    return

    [=](
    const ExpenseList&
    expenses
    )

    {

        E exporter{
            std::forward<
            Args
            >(
            args
            )...
            };

        return

        exporter
        .export_expenses(
        expenses
        );

    };

}

#endif //EXPENSES_PATTERNS_EXPORTER_FACTORY_H