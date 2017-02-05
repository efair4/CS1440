cmake_minimum_required(VERSION 3.6)
project(AnalystComparer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Utils.cpp Utils.h Analyst.cpp Analyst.h PurchaseSale.cpp PurchaseSale.h History.cpp History.h Comparer.cpp Comparer.h
        ColumnDefinition.cpp ColumnDefinition.h FormattedCell.cpp FormattedCell.h FormattedRow.h FormattedRow.cpp FormattedTable.cpp FormattedTable.h)
add_executable(AnalystComparer ${SOURCE_FILES})

