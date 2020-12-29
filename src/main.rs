mod generated;

use generated::*;

fn main() {
    println!("Hello, world!");
    
    let primitive = test_PrimitiveVec{x: 1, y : 2};
    let primitive_result = unsafe { test_AddPrimitiveVec(primitive, 3, 4) };
    
    let non_primitive = test_NonPrimitiveVec{x: 1, y :2};
    let non_primitive_result = unsafe {test_AddNonPrimitive(non_primitive, 3,4)};
    
}
