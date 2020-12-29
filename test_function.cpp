//
// Created by david on 29.12.2020.
//

#include "test_function.h"

test::PrimitiveVec test::AddPrimitiveVec(PrimitiveVec by_value, int add_x, int add_y)
{
    return PrimitiveVec{by_value.x + add_x, by_value.y + add_y};
}

test::NonPrimitiveVec test::AddNonPrimitive(NonPrimitiveVec by_value, int add_x, int add_y){
    return NonPrimitiveVec{by_value.x + add_x, by_value.y + add_y};
}
