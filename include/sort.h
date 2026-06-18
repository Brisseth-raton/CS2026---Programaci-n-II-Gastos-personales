//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_SORT_H
#define EXPENSES_PATTERNS_SORT_H

#include "concepts/sort_strategy.h"

#include <algorithm>

void sort_with(
auto& values,
auto comparator
)

requires

SortStrategy<
decltype(values),
decltype(comparator)
>

{
    std::ranges::
    sort(
    values,
    comparator
    );
}

#endif //EXPENSES_PATTERNS_SORT_H