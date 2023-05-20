#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_eYFdmadaAEbmfNbyeiZ4KH" , 17 , 396808 } , {
"struct_C1dG0evggfCKVd8ecMVw1D" , 18 , 200 } , {
"struct_wqpHpJLpkTF3Z3IUXU0sYH" , 19 , 144 } , { "uint64_T" , 20 , 8 } , {
"int64_T" , 21 , 8 } , { "uint_T" , 22 , 32 } , { "char_T" , 23 , 8 } , {
"uchar_T" , 24 , 8 } , { "time_T" , 25 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( struct_eYFdmadaAEbmfNbyeiZ4KH ) , sizeof (
struct_C1dG0evggfCKVd8ecMVw1D ) , sizeof ( struct_wqpHpJLpkTF3Z3IUXU0sYH ) ,
sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) , sizeof (
char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" ,
"struct_eYFdmadaAEbmfNbyeiZ4KH" , "struct_C1dG0evggfCKVd8ecMVw1D" ,
"struct_wqpHpJLpkTF3Z3IUXU0sYH" , "uint64_T" , "int64_T" , "uint_T" ,
"char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & rtB . hbvbdloscq [ 0 ] ) , 0 , 0 , 63362 } , { (
char_T * ) ( & rtB . dk4xtsv2jd ) , 8 , 0 , 6 } , { ( char_T * ) ( & rtDW .
d3n0scvwiw [ 0 ] ) , 0 , 0 , 704 } , { ( char_T * ) ( & rtDW . gapex4ine0 .
LoggedData ) , 11 , 0 , 3 } , { ( char_T * ) ( & rtDW . magaskumor ) , 6 , 0
, 3 } , { ( char_T * ) ( & rtDW . lwtny2nhca ) , 10 , 0 , 4 } , { ( char_T *
) ( & rtDW . phrzlv44k2 ) , 2 , 0 , 29 } , { ( char_T * ) ( & rtDW .
joqyigxeli ) , 3 , 0 , 9 } , { ( char_T * ) ( & rtDW . fiwv2kubov ) , 8 , 0 ,
21 } , { ( char_T * ) ( & rtDW . darb2qbz0l . fwzsfq5oof ) , 2 , 0 , 1 } , {
( char_T * ) ( & rtDW . nxmiuso3xg . knep3sgdju ) , 2 , 0 , 1 } , { ( char_T
* ) ( & rtDW . knhctetjg2v . fwzsfq5oof ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . llswu3fq4mw . knep3sgdju ) , 2 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 13U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP . normal ) ,
18 , 0 , 1 } , { ( char_T * ) ( & rtP . J ) , 19 , 0 , 1 } , { ( char_T * ) (
& rtP . C_LVLH_ECI [ 0 ] ) , 0 , 0 , 54966 } , { ( char_T * ) ( & rtP .
Constant_Value_lqomsxrg4p ) , 6 , 0 , 30 } , { ( char_T * ) ( & rtP .
nxmiuso3xg . Bias1_Bias ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
llswu3fq4mw . Bias1_Bias ) , 0 , 0 , 2 } } ; static DataTypeTransitionTable
rtPTransTable = { 6U , rtPTransitions } ;
