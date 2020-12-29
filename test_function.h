//
// Created by david on 29.12.2020.
//

#ifndef FFI_BUG_TEST_FUNCTION_H
#define FFI_BUG_TEST_FUNCTION_H


namespace test {

    struct PrimitiveVec {
        int x;
        int y;
    };

    struct NonPrimitiveVec {
        int x;
        int y;

        NonPrimitiveVec() : x(0), y(0) {}

        NonPrimitiveVec(int x, int y) : x(x), y(y) {}
    };


    PrimitiveVec AddPrimitiveVec(PrimitiveVec by_value, int add_x, int add_y);

    NonPrimitiveVec AddNonPrimitive(NonPrimitiveVec by_value, int add_x, int add_y);

};

#endif //FFI_BUG_TEST_FUNCTION_H
