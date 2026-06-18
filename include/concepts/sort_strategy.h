//
// Created by HP on 18/06/2026.
//

#ifndef EXPENSES_PATTERNS_SORT_STRATEGY_H
#define EXPENSES_PATTERNS_SORT_STRATEGY_H

#include <ranges>

template<
class R,
class Comparator
>

concept SortStrategy =

std::ranges::
random_access_range<R>

&&

std::sortable<
std::ranges::
iterator_t<R>,
Comparator
>;

#endif //EXPENSES_PATTERNS_SORT_STRATEGY_H