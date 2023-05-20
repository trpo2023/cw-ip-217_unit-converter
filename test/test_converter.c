#include <ctest.h>
#include <libconverter/converter.h>

/*----------------------WeightFuncs----------------------------*/
CTEST(gr_to_kg, test1) {
 float result = gr_to_kg(1000);
 float expected = 1;
 ASSERT_DBL_NEAR(expected, result);
}

CTEST(gr_to_tn, test1) {
 float result = gr_to_tn(1000000);
 float expected = 1;
 ASSERT_DBL_NEAR(expected, result);
}

CTEST(kg_to_gr, test1) {
 float result = kg_to_gr(1);
 float expected = 1000;
 ASSERT_DBL_NEAR(expected, result);
}

CTEST(kg_to_tn, test1) {
 float result = kg_to_tn(1000);
 float expected = 1;
 ASSERT_DBL_NEAR(expected, result);
}

CTEST(tn_to_gr, test1) {
 float result = tn_to_gr(1);
 float expected = 1000000;
 ASSERT_DBL_NEAR(expected, result);
}

CTEST(tn_to_kg, test1) {
 float result = tn_to_kg(1);
 float expected = 1000;
 ASSERT_DBL_NEAR(expected, result);
}
/*----------------------WeightFuncs----------------------------*/