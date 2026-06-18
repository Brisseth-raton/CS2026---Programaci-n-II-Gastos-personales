//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_AUDITED_EXPORTER_H
#define EXPENSES_PATTERNS_AUDITED_EXPORTER_H

#include "../concepts/expense_exporter.h"

template<
ExpenseExporter Inner
>

struct AuditedExporter {

    Inner inner;

    std::string
    export_expenses(
        const ExpenseList&
        expenses
    ) const
    {
        return

        inner
        .export_expenses(
            expenses
        )

        +

        "\n"

        "audit";
    }

};

#endif //EXPENSES_PATTERNS_AUDITED_EXPORTER_H