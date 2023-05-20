#include "DisturbanceTorques.h"
#include "rtwtypes.h"
#include "DisturbanceTorques_private.h"
#include <string.h>
#include "mwmathutil.h"
#include "blas.h"
#include "rt_logging_mmi.h"
#include "DisturbanceTorques_capi.h"
#include "DisturbanceTorques_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.7 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define c2vxeytp5a (-1)
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void lxwunlml3l ( SimStruct * rtS_e ) { if ( ssGetTaskTime (
rtS_e , 1 ) != ssGetTStart ( rtS_e ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ; } } void awwp2oqwza (
SimStruct * rtS_p ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ;
} void llswu3fq4m ( real_T ikxrl3vml5 , real_T mny14th4zf , real_T *
ivxoxfojvc , real_T * gr4ye1skvv , dcyrtw3wnk * localP ) { * ivxoxfojvc =
ikxrl3vml5 + localP -> Bias1_Bias ; * gr4ye1skvv = mny14th4zf + localP ->
Bias_Bias ; } void gtysyqskxw ( SimStruct * rtS_i ) { if ( ssGetTaskTime (
rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } void idxqlv2wef (
SimStruct * rtS_m ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ;
} void knhctetjg2 ( real_T igtxqxu5wt , real_T o13o0lss0j , real_T *
pzytmnclji , real_T * dwyqw2jzs5 ) { * pzytmnclji = igtxqxu5wt ; * dwyqw2jzs5
= o13o0lss0j ; } void MdlInitialize ( void ) { memcpy ( & rtX . jcbqkhpdfi [
0 ] , & rtP . normal . state [ 0 ] , sizeof ( real_T ) << 4U ) ; rtDW .
ftdnlxu5eu = rtP . otime_InitialCondition ; rtDW . jsse3tis1w = rtP .
olon_InitialCondition ; rtDW . am4ilc4itb = rtP . olat_InitialCondition ;
rtDW . memp4ggvk1 = rtP . oalt_InitialCondition ; rtDW . a1y5hchekq =
c2vxeytp5a ; rtDW . eh34jsuleh = 0U ; rtDW . d3n0scvwiw [ 0 ] = rtP .
UnitDelay1_InitialCondition_hwgje4hplv ; rtDW . d3n0scvwiw [ 1 ] = rtP .
UnitDelay1_InitialCondition_hwgje4hplv ; memcpy ( & rtB . kxc4kf24qb [ 0 ] ,
& rtP . sp13_Y0 [ 0 ] , 13U * sizeof ( real_T ) ) ; memcpy ( & rtB .
li1pebkq1i [ 0 ] , & rtP . cp13_Y0 [ 0 ] , 13U * sizeof ( real_T ) ) ; rtB .
p2jl0v3gnd = rtP . r_Y0 ; rtB . c5rb4awtge = rtP . ct_Y0 ; rtB . otveeadewh =
rtP . st_Y0 ; rtB . l2bs43i4ov = rtP . sa_Y0 ; rtB . lpqulyeqtp = rtP . ca_Y0
; rtDW . netfpjoud1 = rtP . UnitDelay_InitialCondition_izvbuzzrob ; rtDW .
m0obf4a2df [ 0 ] = rtP . UnitDelay2_InitialCondition_hirxjpuru5 [ 0 ] ; rtDW
. m0obf4a2df [ 1 ] = rtP . UnitDelay2_InitialCondition_hirxjpuru5 [ 1 ] ;
rtDW . m0obf4a2df [ 2 ] = rtP . UnitDelay2_InitialCondition_hirxjpuru5 [ 2 ]
; rtDW . m0obf4a2df [ 3 ] = rtP . UnitDelay2_InitialCondition_hirxjpuru5 [ 3
] ; rtDW . mhkwgq1w1q = rtP . UnitDelay1_InitialCondition_e3j2nzss4g ; rtDW .
oz0kfzg1gx = rtP . UnitDelay3_InitialCondition ; rtDW . nupgl2tg0v = rtP .
UnitDelay2_InitialCondition ; rtDW . adsttvgd3w = rtP .
UnitDelay4_InitialCondition ; rtB . pmvocf1tr2 = rtP . Merge1_InitialOutput ;
rtB . ee3rzr40lk = rtP . Merge_InitialOutput ; memcpy ( & rtDW . gcujf31myd [
0 ] , & rtP . UnitDelay_InitialCondition_aerxa5syf1 [ 0 ] , 169U * sizeof (
real_T ) ) ; memcpy ( & rtDW . mugz10zzsf [ 0 ] , & rtP .
UnitDelay_InitialCondition_d4stse4dcp [ 0 ] , 169U * sizeof ( real_T ) ) ;
memcpy ( & rtB . fqrycui3hg [ 0 ] , & rtP . tc1313_Y0 [ 0 ] , 169U * sizeof (
real_T ) ) ; memcpy ( & rtDW . f1engf53mb [ 0 ] , & rtP .
UnitDelay_InitialCondition [ 0 ] , 169U * sizeof ( real_T ) ) ; memcpy ( &
rtDW . mvzvd4lhhp [ 0 ] , & rtP . UnitDelay1_InitialCondition_h1mrayfsn3 [ 0
] , 169U * sizeof ( real_T ) ) ; memcpy ( & rtB . b4oxegn23q [ 0 ] , & rtP .
dp1313_Y0 [ 0 ] , 169U * sizeof ( real_T ) ) ; memcpy ( & rtB . il3cjwxqak [
0 ] , & rtP . snorm169_Y0 [ 0 ] , 169U * sizeof ( real_T ) ) ; memcpy ( &
rtDW . grmywfuesv [ 0 ] , & rtP . UnitDelay1_InitialCondition [ 0 ] , 13U *
sizeof ( real_T ) ) ; memcpy ( & rtB . jya0ikumz1 [ 0 ] , & rtP . pp13_Y0 [ 0
] , 13U * sizeof ( real_T ) ) ; memcpy ( & rtB . chcizdalne [ 0 ] , & rtP .
pp13_Y0_cy3pueip5o [ 0 ] , 13U * sizeof ( real_T ) ) ; rtB . fo2axebq0e = rtP
. bpp_Y0 ; rtB . i34dkicmu2 = rtP . bt_Y0 ; rtB . ebidgssiv2 = rtP . bp_Y0 ;
rtB . isabtmvvhz = rtP . br_Y0 ; rtB . b4hzfbcxpg = rtP . bpp_Y0_b1d2gwfond ;
rtB . ghxiy1odi5 [ 0 ] = rtP . btbpbrbpp_Y0 [ 0 ] ; rtB . ghxiy1odi5 [ 1 ] =
rtP . btbpbrbpp_Y0 [ 1 ] ; rtB . ghxiy1odi5 [ 2 ] = rtP . btbpbrbpp_Y0 [ 2 ]
; rtB . ghxiy1odi5 [ 3 ] = rtP . btbpbrbpp_Y0 [ 3 ] ; rtDW . irns0a4kt4 =
c2vxeytp5a ; rtDW . amaj5bb1c5 = 0U ; rtDW . magaskumor = c2vxeytp5a ; rtDW .
joqyigxeli = 0U ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T rt_ScopeSignalWidths [
] = { 16 } ; static int_T rt_ScopeSignalNumDimensions [ ] = { 2 } ; static
int_T rt_ScopeSignalDimensions [ ] = { 16 , 1 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) , ( NULL ) } ; static int_T
rt_ScopeCurrSigDimsSize [ ] = { 4 , 4 } ; static const char_T *
rt_ScopeSignalLabels [ ] = { "" } ; static char_T rt_ScopeSignalTitles [ ] =
"" ; static int_T rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static char_T rt_ScopeBlockName
[ ] = "DisturbanceTorques/ScopeOut" ; static int_T rt_ScopeFrameData [ ] = {
0 } ; static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs
[ ] = { ( NULL ) , ( NULL ) } ; rt_ScopeSignalInfo . numSignals = 1 ;
rt_ScopeSignalInfo . numCols = rt_ScopeSignalWidths ; rt_ScopeSignalInfo .
numDims = rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . gapex4ine0 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "Td_ScopeOut" , 1 , 0 , 1 , 0.0 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . gapex4ine0 .
LoggedData == ( NULL ) ) return ; } rtDW . oypsulirgi = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . odz5nl0xv4 = - 1
; rtDW . kdr2nz0rqw = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . jeociud4e4 = - 1
; rtDW . atcpxiamp2 = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . cktmfwuebm = - 1
; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . iil44wamvv = - 1
; rtDW . pb5er2v5my = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; rtDW . jmmeq40q3u = 0 ; rtDW . pwge0cg15r = 0 ; rtDW . bkrengnk5k = 0
; rtDW . cyjnxvzlkk = 0 ; rtDW . ld1te5cgi0 = 0 ; rtDW . phdloywugz = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; awwp2oqwza ( rtS ) ;
idxqlv2wef ( rtS ) ; rtDW . phrzlv44k2 = - 1 ; awwp2oqwza ( rtS ) ;
idxqlv2wef ( rtS ) ; rtDW . k3zxl5fwp3 = - 1 ; rtDW . dn3fk5nzmk = 0 ; rtDW .
ezsdw3knjx = 0 ; rtDW . bpx5osf5ip = 0 ; MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T fqhczkwux3 ; real_T drhq51ecwj ; real_T
jmhkip3f3e ; real_T ibmgplykgz ; int64_T tmp_p ; ptrdiff_t INCX ; ptrdiff_t
INCY ; ptrdiff_t LDA ; ptrdiff_t M ; ptrdiff_t N ; real_T mjfntwrie1 [ 169 ]
; real_T p1vowxt3lg [ 169 ] ; real_T aliqxvlnms [ 66 ] ; real_T bpxacse22y [
14 ] ; real_T hnte2wplxz [ 13 ] ; real_T mirinm00s5 [ 11 ] ; real_T
ozipx4athg [ 11 ] ; real_T Cb_LVLH [ 9 ] ; real_T a [ 9 ] ; real_T bqhmpz5uis
[ 9 ] ; real_T x_p [ 9 ] ; real_T tmp [ 8 ] ; real_T newstate [ 6 ] ; real_T
depsilon [ 3 ] ; real_T dm55klizel [ 3 ] ; real_T jjofqy2myg [ 3 ] ; real_T
lhamlihs4e [ 3 ] ; real_T x [ 3 ] ; real_T absxk ; real_T ahxzc3aa1u ; real_T
civlijdkfz ; real_T e4rajh1nbr_idx_1 ; real_T enptooxiqv ; real_T
fd351szxra_idx_1 ; real_T fx0x1gsshy_idx_1 ; real_T g22d2szued ; real_T
h0jfcu5ibu ; real_T m31egxeksf_idx_1 ; real_T scale ; real_T t ; int32_T i ;
int32_T p1 ; int32_T p2 ; int32_T qY ; int32_T qY_e ; int32_T qY_i ; int32_T
qY_p ; int32_T s110_iter ; int32_T s61_iter ; int32_T s69_iter ; char_T TRANS
; int8_T rtAction ; int8_T rtPrevAction ; boolean_T dqhdvg02ot ; SimStruct *
S ; void * diag ; static const int8_T b [ 9 ] = { 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 } ; srClearBC ( rtDW . llswu3fq4mw . knep3sgdju ) ; srClearBC ( rtDW .
knhctetjg2v . fwzsfq5oof ) ; srClearBC ( rtDW . hpyqqv1k12 ) ; srClearBC (
rtDW . c2d0nllycq ) ; srClearBC ( rtDW . ogav25z1tr ) ; srClearBC ( rtDW .
joclfqdu4c ) ; srClearBC ( rtDW . meglrmbhox ) ; srClearBC ( rtDW .
dckc2drf0i ) ; srClearBC ( rtDW . nmuzk31eka ) ; srClearBC ( rtDW .
atj4zyeuwz ) ; srClearBC ( rtDW . ojluwsc1jf ) ; srClearBC ( rtDW .
pshfio535r ) ; srClearBC ( rtDW . hluflh4dwz ) ; srClearBC ( rtDW .
adricj4j5d ) ; srClearBC ( rtDW . dojjho4dgz ) ; srClearBC ( rtDW .
ijbym44xcu ) ; srClearBC ( rtDW . oqz2wa1us5 ) ; memcpy ( & rtB . hbvbdloscq
[ 0 ] , & rtX . jcbqkhpdfi [ 0 ] , sizeof ( real_T ) << 4U ) ; if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
gapex4ine0 . LoggedData ; LogVar * var = svar -> signals . values ; { double
locTime = ssGetTaskTime ( rtS , 0 ) ; rt_UpdateLogVar ( ( LogVar * ) svar ->
time , & locTime , 0 ) ; } { real_T up0 [ 16 ] ; ( void ) memcpy ( & up0 [ 0
] , & rtB . hbvbdloscq [ 0 ] , 16 * sizeof ( real_T ) ) ; rt_UpdateLogVar ( (
LogVar * ) var , up0 , 0 ) ; } } rtDW . a1y5hchekq = c2vxeytp5a ; scale =
3.3121686421112381E-170 ; rtB . czioyjd4u3 [ 0 ] = rtP .
Constant_Value_iv2p3jxmvu [ 0 ] ; absxk = muDoubleScalarAbs ( rtB .
hbvbdloscq [ 10 ] ) ; if ( absxk > 3.3121686421112381E-170 ) { g22d2szued =
1.0 ; scale = absxk ; } else { t = absxk / 3.3121686421112381E-170 ;
g22d2szued = t * t ; } rtB . czioyjd4u3 [ 1 ] = rtP .
Constant_Value_iv2p3jxmvu [ 1 ] ; absxk = muDoubleScalarAbs ( rtB .
hbvbdloscq [ 11 ] ) ; if ( absxk > scale ) { t = scale / absxk ; g22d2szued =
g22d2szued * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ;
g22d2szued += t * t ; } rtB . czioyjd4u3 [ 2 ] = rtP .
Constant_Value_iv2p3jxmvu [ 2 ] ; absxk = muDoubleScalarAbs ( rtB .
hbvbdloscq [ 12 ] ) ; if ( absxk > scale ) { t = scale / absxk ; g22d2szued =
g22d2szued * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ;
g22d2szued += t * t ; } g22d2szued = 3.0 * rtP . mu / muDoubleScalarPower (
scale * muDoubleScalarSqrt ( g22d2szued ) , 5.0 ) ; x_p [ 0 ] = 0.0 ; x_p [ 3
] = - rtB . hbvbdloscq [ 12 ] ; x_p [ 6 ] = rtB . hbvbdloscq [ 11 ] ; x_p [ 1
] = rtB . hbvbdloscq [ 12 ] ; x_p [ 4 ] = 0.0 ; x_p [ 7 ] = - rtB .
hbvbdloscq [ 10 ] ; x_p [ 2 ] = - rtB . hbvbdloscq [ 11 ] ; x_p [ 5 ] = rtB .
hbvbdloscq [ 10 ] ; x_p [ 8 ] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { t = 0.0
; scale = x_p [ i + 3 ] ; absxk = x_p [ i ] ; h0jfcu5ibu = x_p [ i + 6 ] ;
for ( qY = 0 ; qY < 3 ; qY ++ ) { t += ( ( rtP . J . normal [ 3 * qY + 1 ] *
scale + rtP . J . normal [ 3 * qY ] * absxk ) + rtP . J . normal [ 3 * qY + 2
] * h0jfcu5ibu ) * rtB . hbvbdloscq [ qY + 10 ] ; } scale = g22d2szued * t ;
rtB . f4d4ikv243 [ i ] = scale ; rtB . czioyjd4u3 [ i + 3 ] = scale ; rtB .
czioyjd4u3 [ i + 6 ] = rtP . Constant_Value_g3bw3t45kc [ i ] ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . kytqfr5cmt = rtP . sectoyrs_Gain *
ssGetTaskTime ( rtS , 2 ) + rtP . Constant1_Value_bwj5nvg4ax ; rtB .
jnood2r1kz = rtB . kytqfr5cmt - rtP . epoch_Value ; rtB . dk4xtsv2jd = ( rtB
. kytqfr5cmt != rtDW . ftdnlxu5eu ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ rtPrevAction = rtDW . phrzlv44k2 ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtAction = ( int8_T ) ! ( rtP . JulianDateConversion_month <= 2.0 ) ; rtDW .
phrzlv44k2 = rtAction ; } else { rtAction = rtDW . phrzlv44k2 ; } if (
rtPrevAction != rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; switch ( rtPrevAction ) { case 0 : awwp2oqwza ( rtS ) ; break ; case 1 :
idxqlv2wef ( rtS ) ; break ; } } if ( rtAction == 0 ) { if ( rtPrevAction !=
0 ) { lxwunlml3l ( rtS ) ; } llswu3fq4m ( rtP . ECIPositiontoLLA_year , rtP .
JulianDateConversion_month , & fqhczkwux3 , & drhq51ecwj , & rtP .
llswu3fq4mw ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
llswu3fq4mw . knep3sgdju ) ; } } else { if ( rtAction != rtPrevAction ) {
gtysyqskxw ( rtS ) ; } knhctetjg2 ( rtP . ECIPositiontoLLA_year , rtP .
JulianDateConversion_month , & fqhczkwux3 , & drhq51ecwj ) ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( rtDW . knhctetjg2v .
fwzsfq5oof ) ; } } enptooxiqv = muDoubleScalarFloor ( rtP .
Gain2_Gain_hqpma2djpt * fqhczkwux3 ) ; enptooxiqv = ( ( ( ( ( ( ( ( (
muDoubleScalarFloor ( ( fqhczkwux3 + rtP . BiasYear_Bias ) * rtP .
Gain_Gain_gujouawppq ) + muDoubleScalarFloor ( ( drhq51ecwj + rtP .
Bias1_Bias_dioov3krxd ) * rtP . Gain1_Gain_jzaoszzly0 ) ) + rtP . Bias2_Bias
) - enptooxiqv ) + muDoubleScalarFloor ( rtP . Gain3_Gain * enptooxiqv ) ) +
rtB . kaz5v044bj [ 0 ] ) + rtP . BiasDay_Bias ) + rtB . ccw42d13yf ) + rtB .
gx2wbcyjkr ) + rtP . Bias1_Bias_dgmadvobfr ) * rtP . Gain_Gain_dv4u551ktp ;
rtB . mtlafyaqr5 = rtP . Gain_Gain_ct21xaxafa * enptooxiqv *
0.017453292519943295 ; } rtB . o0rtmcbxh1 [ 0 ] = rtB . mtlafyaqr5 ; rtB .
o0rtmcbxh1 [ 1 ] = rtB . iokseplynh [ 0 ] ; rtB . o0rtmcbxh1 [ 2 ] = rtB .
iokseplynh [ 1 ] ; muDoubleScalarSinCos ( rtB . o0rtmcbxh1 [ 0 ] , &
jjofqy2myg [ 0 ] , & lhamlihs4e [ 0 ] ) ; muDoubleScalarSinCos ( rtB .
o0rtmcbxh1 [ 1 ] , & jjofqy2myg [ 1 ] , & lhamlihs4e [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . o0rtmcbxh1 [ 2 ] , & jjofqy2myg [ 2 ] , &
lhamlihs4e [ 2 ] ) ; rtB . md3ccqv5wu [ 0 ] = lhamlihs4e [ 0 ] * lhamlihs4e [
1 ] ; rtB . md3ccqv5wu [ 1 ] = jjofqy2myg [ 1 ] * jjofqy2myg [ 2 ] *
lhamlihs4e [ 0 ] - jjofqy2myg [ 0 ] * lhamlihs4e [ 2 ] ; rtB . md3ccqv5wu [ 2
] = jjofqy2myg [ 1 ] * lhamlihs4e [ 2 ] * lhamlihs4e [ 0 ] + jjofqy2myg [ 0 ]
* jjofqy2myg [ 2 ] ; rtB . md3ccqv5wu [ 3 ] = jjofqy2myg [ 0 ] * lhamlihs4e [
1 ] ; rtB . md3ccqv5wu [ 4 ] = jjofqy2myg [ 1 ] * jjofqy2myg [ 2 ] *
jjofqy2myg [ 0 ] + lhamlihs4e [ 0 ] * lhamlihs4e [ 2 ] ; rtB . md3ccqv5wu [ 5
] = jjofqy2myg [ 1 ] * lhamlihs4e [ 2 ] * jjofqy2myg [ 0 ] - lhamlihs4e [ 0 ]
* jjofqy2myg [ 2 ] ; rtB . md3ccqv5wu [ 6 ] = - jjofqy2myg [ 1 ] ; rtB .
md3ccqv5wu [ 7 ] = lhamlihs4e [ 1 ] * jjofqy2myg [ 2 ] ; rtB . md3ccqv5wu [ 8
] = lhamlihs4e [ 1 ] * lhamlihs4e [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { rtPrevAction = rtDW . k3zxl5fwp3 ; if ( ssIsModeUpdateTimeStep ( rtS ) )
{ rtAction = ( int8_T ) ! ( rtP . JulianDateConversion_month_ikrq3awnv5 <=
2.0 ) ; rtDW . k3zxl5fwp3 = rtAction ; } else { rtAction = rtDW . k3zxl5fwp3
; } if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction )
{ case 0 : awwp2oqwza ( rtS ) ; break ; case 1 : idxqlv2wef ( rtS ) ; break ;
} } if ( rtAction == 0 ) { if ( rtPrevAction != 0 ) { lxwunlml3l ( rtS ) ; }
llswu3fq4m ( rtP . ECIPositiontoLLA_year , rtP .
JulianDateConversion_month_ikrq3awnv5 , & jmhkip3f3e , & ibmgplykgz , & rtP .
nxmiuso3xg ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
nxmiuso3xg . knep3sgdju ) ; } } else { if ( rtAction != rtPrevAction ) {
gtysyqskxw ( rtS ) ; } knhctetjg2 ( rtP . ECIPositiontoLLA_year , rtP .
JulianDateConversion_month_ikrq3awnv5 , & jmhkip3f3e , & ibmgplykgz ) ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( rtDW . darb2qbz0l .
fwzsfq5oof ) ; } } g22d2szued = muDoubleScalarFloor ( rtP .
Gain2_Gain_eltsd0pn5r * jmhkip3f3e ) ; g22d2szued = ( ( ( ( ( ( ( (
muDoubleScalarFloor ( ( jmhkip3f3e + rtP . BiasYear_Bias_eo2qoxtwnv ) * rtP .
Gain_Gain_hjvj4yayay ) + muDoubleScalarFloor ( ( ibmgplykgz + rtP .
Bias1_Bias_p0cn0wxags ) * rtP . Gain1_Gain_i31o51qfnv ) ) + rtP .
Bias2_Bias_ktmrwqktyn ) - g22d2szued ) + muDoubleScalarFloor ( rtP .
Gain3_Gain_gyf3iucjm2 * g22d2szued ) ) + rtB . gqlueshzcr [ 0 ] ) + rtP .
BiasDay_Bias_gliqly2fyb ) + rtB . fz40ghtjdv ) + rtB . h4obpjtzxu ) + rtP .
Bias_Bias_czq1qwvslb ; rtB . h04yhzhfaa = muDoubleScalarMod ( ( (
muDoubleScalarMod ( g22d2szued , rtP . Constant_Value_fy334lzfzn ) + rtP .
Bias1_Bias_ngou2bxwly ) + rtP . Gain_Gain_chxw0puanu * g22d2szued ) * rtP .
Gain1_Gain_ebnqqsdmj2 , rtP . Constant_Value_dm5x2qlarz ) ; } rtB .
jgzfsatgbr [ 0 ] = rtB . h04yhzhfaa ; rtB . jgzfsatgbr [ 1 ] = rtP .
Constant1_Value_gsuet0b3gk [ 0 ] ; rtB . jgzfsatgbr [ 2 ] = rtP .
Constant1_Value_gsuet0b3gk [ 1 ] ; muDoubleScalarSinCos ( rtB . jgzfsatgbr [
0 ] , & lhamlihs4e [ 0 ] , & jjofqy2myg [ 0 ] ) ; muDoubleScalarSinCos ( rtB
. jgzfsatgbr [ 1 ] , & lhamlihs4e [ 1 ] , & jjofqy2myg [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . jgzfsatgbr [ 2 ] , & lhamlihs4e [ 2 ] , &
jjofqy2myg [ 2 ] ) ; rtB . fgnjwyyj2d [ 0 ] = jjofqy2myg [ 0 ] * jjofqy2myg [
1 ] ; rtB . fgnjwyyj2d [ 1 ] = lhamlihs4e [ 1 ] * lhamlihs4e [ 2 ] *
jjofqy2myg [ 0 ] - lhamlihs4e [ 0 ] * jjofqy2myg [ 2 ] ; rtB . fgnjwyyj2d [ 2
] = lhamlihs4e [ 1 ] * jjofqy2myg [ 2 ] * jjofqy2myg [ 0 ] + lhamlihs4e [ 0 ]
* lhamlihs4e [ 2 ] ; rtB . fgnjwyyj2d [ 3 ] = lhamlihs4e [ 0 ] * jjofqy2myg [
1 ] ; rtB . fgnjwyyj2d [ 4 ] = lhamlihs4e [ 1 ] * lhamlihs4e [ 2 ] *
lhamlihs4e [ 0 ] + jjofqy2myg [ 0 ] * jjofqy2myg [ 2 ] ; rtB . fgnjwyyj2d [ 5
] = lhamlihs4e [ 1 ] * jjofqy2myg [ 2 ] * lhamlihs4e [ 0 ] - jjofqy2myg [ 0 ]
* lhamlihs4e [ 2 ] ; rtB . fgnjwyyj2d [ 6 ] = - lhamlihs4e [ 1 ] ; rtB .
fgnjwyyj2d [ 7 ] = jjofqy2myg [ 1 ] * lhamlihs4e [ 2 ] ; rtB . fgnjwyyj2d [ 8
] = jjofqy2myg [ 1 ] * jjofqy2myg [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { rtB . kl3rxlab5f = rtP . Y0_Coefs [ 0 ] ; for ( s61_iter = 0 ; s61_iter <
5 ; s61_iter ++ ) { rtB . kl3rxlab5f = rtB . kl3rxlab5f * enptooxiqv + rtP .
Y0_Coefs [ s61_iter + 1 ] ; } for ( i = 0 ; i < 277 ; i ++ ) { rtB .
nt0rmgoez2 [ i ] = enptooxiqv ; } g22d2szued = enptooxiqv * enptooxiqv ; for
( i = 0 ; i < 30 ; i ++ ) { rtB . b3j3xjpyda [ i ] = g22d2szued ; }
g22d2szued *= enptooxiqv ; for ( i = 0 ; i < 5 ; i ++ ) { rtB . kbxjza20xf [
i ] = g22d2szued ; } rtB . o0f1oyv2p4 = g22d2szued * enptooxiqv ; bpxacse22y
[ 0 ] = muDoubleScalarMod ( ( ( ( ( rtP . mMoon_Coefs [ 0 ] * enptooxiqv +
rtP . mMoon_Coefs [ 1 ] ) * enptooxiqv + rtP . mMoon_Coefs [ 2 ] ) *
enptooxiqv + rtP . mMoon_Coefs [ 3 ] ) * enptooxiqv + rtP . mMoon_Coefs [ 4 ]
) * rtP . Gain_Gain_paibjqobln * 0.017453292519943295 , rtP .
Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 1 ] = muDoubleScalarMod ( ( ( ( (
rtP . mSun_Coefs [ 0 ] * enptooxiqv + rtP . mSun_Coefs [ 1 ] ) * enptooxiqv +
rtP . mSun_Coefs [ 2 ] ) * enptooxiqv + rtP . mSun_Coefs [ 3 ] ) * enptooxiqv
+ rtP . mSun_Coefs [ 4 ] ) * rtP . Gain_Gain_paibjqobln *
0.017453292519943295 , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 2 ] =
muDoubleScalarMod ( ( ( ( ( rtP . umMoon_Coefs [ 0 ] * enptooxiqv + rtP .
umMoon_Coefs [ 1 ] ) * enptooxiqv + rtP . umMoon_Coefs [ 2 ] ) * enptooxiqv +
rtP . umMoon_Coefs [ 3 ] ) * enptooxiqv + rtP . umMoon_Coefs [ 4 ] ) * rtP .
Gain_Gain_paibjqobln * 0.017453292519943295 , rtP . Constant_Value_jxq10vvdgv
) ; bpxacse22y [ 3 ] = muDoubleScalarMod ( ( ( ( ( rtP . dSun_Coefs [ 0 ] *
enptooxiqv + rtP . dSun_Coefs [ 1 ] ) * enptooxiqv + rtP . dSun_Coefs [ 2 ] )
* enptooxiqv + rtP . dSun_Coefs [ 3 ] ) * enptooxiqv + rtP . dSun_Coefs [ 4 ]
) * rtP . Gain_Gain_paibjqobln * 0.017453292519943295 , rtP .
Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 4 ] = muDoubleScalarMod ( ( ( ( (
rtP . omegaMoon_Coefs [ 0 ] * enptooxiqv + rtP . omegaMoon_Coefs [ 1 ] ) *
enptooxiqv + rtP . omegaMoon_Coefs [ 2 ] ) * enptooxiqv + rtP .
omegaMoon_Coefs [ 3 ] ) * enptooxiqv + rtP . omegaMoon_Coefs [ 4 ] ) * rtP .
Gain_Gain_paibjqobln * 0.017453292519943295 , rtP . Constant_Value_jxq10vvdgv
) ; bpxacse22y [ 5 ] = muDoubleScalarMod ( rtP . lMercury_Coefs [ 0 ] *
enptooxiqv + rtP . lMercury_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ;
bpxacse22y [ 6 ] = muDoubleScalarMod ( rtP . lVenus_Coefs [ 0 ] * enptooxiqv
+ rtP . lVenus_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [
7 ] = muDoubleScalarMod ( rtP . lEarth_Coefs [ 0 ] * enptooxiqv + rtP .
lEarth_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 8 ] =
muDoubleScalarMod ( rtP . lMars_Coefs [ 0 ] * enptooxiqv + rtP . lMars_Coefs
[ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 9 ] =
muDoubleScalarMod ( rtP . lJupiter_Coefs [ 0 ] * enptooxiqv + rtP .
lJupiter_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 10 ]
= muDoubleScalarMod ( rtP . lSaturn_Coefs [ 0 ] * enptooxiqv + rtP .
lSaturn_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 11 ] =
muDoubleScalarMod ( rtP . lUranus_Coefs [ 0 ] * enptooxiqv + rtP .
lUranus_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 12 ] =
muDoubleScalarMod ( rtP . lNeptune_Coefs [ 0 ] * enptooxiqv + rtP .
lNeptune_Coefs [ 1 ] , rtP . Constant_Value_jxq10vvdgv ) ; bpxacse22y [ 13 ]
= muDoubleScalarMod ( ( rtP . pa_Coefs [ 0 ] * enptooxiqv + rtP . pa_Coefs [
1 ] ) * enptooxiqv + rtP . pa_Coefs [ 2 ] , rtP . Constant_Value_jxq10vvdgv )
; TRANS = 'N' ; M = 1275LL ; N = 14LL ; absxk = 1.0 ; LDA = 1275LL ; INCX =
1LL ; t = 0.0 ; INCY = 1LL ; dgemv ( & TRANS , & M , & N , & absxk , & rtB .
g5ynytyo0h [ 0 ] , & LDA , & bpxacse22y [ 0 ] , & INCX , & t , & rtB .
pivgykfro5_cl54gopm0x [ 0 ] , & INCY ) ; for ( i = 0 ; i < 1275 ; i ++ ) {
rtB . llz1zzc3vu [ i ] = muDoubleScalarSin ( rtB . pivgykfro5_cl54gopm0x [ i
] ) ; } } for ( i = 0 ; i < 962 ; i ++ ) { rtB . ehijmqjdpf [ i ] = rtP .
Constant1_Value_flxtcg3r0i [ i ] * rtB . hv2iutsstt [ i ] * rtB . llz1zzc3vu
[ i ] ; } for ( i = 0 ; i < 277 ; i ++ ) { rtB . ehijmqjdpf [ i + 962 ] = rtB
. hv2iutsstt [ i + 962 ] * rtB . nt0rmgoez2 [ i ] * rtB . llz1zzc3vu [ i +
962 ] ; } for ( i = 0 ; i < 30 ; i ++ ) { rtB . ehijmqjdpf [ i + 1239 ] = rtB
. hv2iutsstt [ i + 1239 ] * rtB . b3j3xjpyda [ i ] * rtB . llz1zzc3vu [ i +
1239 ] ; } for ( i = 0 ; i < 5 ; i ++ ) { rtB . ehijmqjdpf [ i + 1269 ] = rtB
. hv2iutsstt [ i + 1269 ] * rtB . kbxjza20xf [ i ] * rtB . llz1zzc3vu [ i +
1269 ] ; } rtB . ehijmqjdpf [ 1274 ] = rtB . o0f1oyv2p4 * rtB . hv2iutsstt [
1274 ] * rtB . llz1zzc3vu [ 1274 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
for ( i = 0 ; i < 1275 ; i ++ ) { rtB . ocvk4ihqkt [ i ] = muDoubleScalarCos
( rtB . pivgykfro5_cl54gopm0x [ i ] ) ; } } for ( i = 0 ; i < 962 ; i ++ ) {
rtB . aoik4xqpkh [ i ] = rtB . ocvk4ihqkt [ i ] * rtB . nadmkzwk2q [ i ] *
rtP . Constant1_Value_flxtcg3r0i [ i ] ; } for ( i = 0 ; i < 277 ; i ++ ) {
rtB . aoik4xqpkh [ i + 962 ] = rtB . ocvk4ihqkt [ i + 962 ] * rtB .
nadmkzwk2q [ i + 962 ] * rtB . nt0rmgoez2 [ i ] ; } for ( i = 0 ; i < 30 ; i
++ ) { rtB . aoik4xqpkh [ i + 1239 ] = rtB . ocvk4ihqkt [ i + 1239 ] * rtB .
nadmkzwk2q [ i + 1239 ] * rtB . b3j3xjpyda [ i ] ; } for ( i = 0 ; i < 5 ; i
++ ) { rtB . aoik4xqpkh [ i + 1269 ] = rtB . ocvk4ihqkt [ i + 1269 ] * rtB .
nadmkzwk2q [ i + 1269 ] * rtB . kbxjza20xf [ i ] ; } rtB . aoik4xqpkh [ 1274
] = rtB . ocvk4ihqkt [ 1274 ] * rtB . nadmkzwk2q [ 1274 ] * rtB . o0f1oyv2p4
; absxk = - 0.0 ; for ( i = 0 ; i < 1275 ; i ++ ) { g22d2szued = rtB .
ehijmqjdpf [ i ] + rtB . aoik4xqpkh [ i ] ; rtB . dnc3mx5v05 [ i ] =
g22d2szued ; absxk += g22d2szued ; } rtB . pdnglkyd5e = absxk ; rtB .
chtfk21cgs = rtB . kl3rxlab5f + rtB . pdnglkyd5e ; rtB . l31zd52gbe = rtP .
Gain4_Gain * rtB . chtfk21cgs ; rtB . maeuwlu3dy = 0.017453292519943295 * rtB
. l31zd52gbe ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . oe0slkwer3 = rtP
. X0_Coefs [ 0 ] ; for ( s61_iter = 0 ; s61_iter < 5 ; s61_iter ++ ) { rtB .
oe0slkwer3 = rtB . oe0slkwer3 * enptooxiqv + rtP . X0_Coefs [ s61_iter + 1 ]
; } for ( i = 0 ; i < 253 ; i ++ ) { rtB . hllxq5rrz1 [ i ] = enptooxiqv ; }
g22d2szued = enptooxiqv * enptooxiqv ; for ( i = 0 ; i < 36 ; i ++ ) { rtB .
objpjgb34p [ i ] = g22d2szued ; } g22d2szued *= enptooxiqv ; rtB . pq3zras5az
[ 0 ] = g22d2szued ; rtB . pq3zras5az [ 1 ] = g22d2szued ; rtB . pq3zras5az [
2 ] = g22d2szued ; rtB . pq3zras5az [ 3 ] = g22d2szued ; rtB . jrhgyfgs10 =
g22d2szued * enptooxiqv ; TRANS = 'N' ; M = 1600LL ; N = 14LL ; absxk = 1.0 ;
LDA = 1600LL ; INCX = 1LL ; t = 0.0 ; INCY = 1LL ; dgemv ( & TRANS , & M , &
N , & absxk , & rtB . glwb23azae [ 0 ] , & LDA , & bpxacse22y [ 0 ] , & INCX
, & t , & rtB . ios4glmzl1_mbvzarwird [ 0 ] , & INCY ) ; for ( i = 0 ; i <
1600 ; i ++ ) { rtB . eg4gfyhcmb [ i ] = muDoubleScalarSin ( rtB .
ios4glmzl1_mbvzarwird [ i ] ) ; } } for ( i = 0 ; i < 1306 ; i ++ ) { rtB .
iodgmtkgb3 [ i ] = rtP . Constant1_Value_jiecq0jhax [ i ] * rtB . gdbahczf45
[ i ] * rtB . eg4gfyhcmb [ i ] ; } for ( i = 0 ; i < 253 ; i ++ ) { rtB .
iodgmtkgb3 [ i + 1306 ] = rtB . gdbahczf45 [ i + 1306 ] * rtB . hllxq5rrz1 [
i ] * rtB . eg4gfyhcmb [ i + 1306 ] ; } for ( i = 0 ; i < 36 ; i ++ ) { rtB .
iodgmtkgb3 [ i + 1559 ] = rtB . gdbahczf45 [ i + 1559 ] * rtB . objpjgb34p [
i ] * rtB . eg4gfyhcmb [ i + 1559 ] ; } rtB . iodgmtkgb3 [ 1595 ] = rtB .
pq3zras5az [ 0 ] * rtB . gdbahczf45 [ 1595 ] * rtB . eg4gfyhcmb [ 1595 ] ;
rtB . iodgmtkgb3 [ 1596 ] = rtB . pq3zras5az [ 1 ] * rtB . gdbahczf45 [ 1596
] * rtB . eg4gfyhcmb [ 1596 ] ; rtB . iodgmtkgb3 [ 1597 ] = rtB . pq3zras5az
[ 2 ] * rtB . gdbahczf45 [ 1597 ] * rtB . eg4gfyhcmb [ 1597 ] ; rtB .
iodgmtkgb3 [ 1598 ] = rtB . pq3zras5az [ 3 ] * rtB . gdbahczf45 [ 1598 ] *
rtB . eg4gfyhcmb [ 1598 ] ; rtB . iodgmtkgb3 [ 1599 ] = rtB . jrhgyfgs10 *
rtB . gdbahczf45 [ 1599 ] * rtB . eg4gfyhcmb [ 1599 ] ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { for ( i = 0 ; i < 1600 ; i ++ ) { rtB . aplfnemlzg [ i ] =
muDoubleScalarCos ( rtB . ios4glmzl1_mbvzarwird [ i ] ) ; } } for ( i = 0 ; i
< 1306 ; i ++ ) { rtB . g04n5pngea [ i ] = rtB . aplfnemlzg [ i ] * rtB .
byd5egtmb2 [ i ] * rtP . Constant1_Value_jiecq0jhax [ i ] ; } for ( i = 0 ; i
< 253 ; i ++ ) { rtB . g04n5pngea [ i + 1306 ] = rtB . aplfnemlzg [ i + 1306
] * rtB . byd5egtmb2 [ i + 1306 ] * rtB . hllxq5rrz1 [ i ] ; } for ( i = 0 ;
i < 36 ; i ++ ) { rtB . g04n5pngea [ i + 1559 ] = rtB . aplfnemlzg [ i + 1559
] * rtB . byd5egtmb2 [ i + 1559 ] * rtB . objpjgb34p [ i ] ; } rtB .
g04n5pngea [ 1595 ] = rtB . aplfnemlzg [ 1595 ] * rtB . byd5egtmb2 [ 1595 ] *
rtB . pq3zras5az [ 0 ] ; rtB . g04n5pngea [ 1596 ] = rtB . aplfnemlzg [ 1596
] * rtB . byd5egtmb2 [ 1596 ] * rtB . pq3zras5az [ 1 ] ; rtB . g04n5pngea [
1597 ] = rtB . aplfnemlzg [ 1597 ] * rtB . byd5egtmb2 [ 1597 ] * rtB .
pq3zras5az [ 2 ] ; rtB . g04n5pngea [ 1598 ] = rtB . aplfnemlzg [ 1598 ] *
rtB . byd5egtmb2 [ 1598 ] * rtB . pq3zras5az [ 3 ] ; rtB . g04n5pngea [ 1599
] = rtB . aplfnemlzg [ 1599 ] * rtB . byd5egtmb2 [ 1599 ] * rtB . jrhgyfgs10
; absxk = - 0.0 ; for ( i = 0 ; i < 1600 ; i ++ ) { g22d2szued = rtB .
iodgmtkgb3 [ i ] + rtB . g04n5pngea [ i ] ; rtB . fizgkm4fea [ i ] =
g22d2szued ; absxk += g22d2szued ; } rtB . lq5a0eddu0 = absxk ; rtB .
owqmabzn3h = rtB . oe0slkwer3 + rtB . lq5a0eddu0 ; rtB . a51e0xiij2 = rtP .
Gain3_Gain_hiqnzkxnst * rtB . owqmabzn3h ; rtB . kngnjoyb1t =
0.017453292519943295 * rtB . a51e0xiij2 ; g22d2szued = muDoubleScalarAtan2 (
rtB . maeuwlu3dy , rtB . kngnjoyb1t ) ; rtB . ptjo1pvxxv = rtB . kngnjoyb1t *
rtB . kngnjoyb1t + rtB . maeuwlu3dy * rtB . maeuwlu3dy ; rtB . firudz0a2c =
rtP . Constant_Value_b3s3rkmbct - rtB . ptjo1pvxxv ; rtB . gtma5xo1tp = rtB .
ptjo1pvxxv / rtB . firudz0a2c ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW
. dn3fk5nzmk != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
dn3fk5nzmk = 0 ; } scale = muDoubleScalarSqrt ( rtB . gtma5xo1tp ) ; } else {
if ( rtB . gtma5xo1tp < 0.0 ) { scale = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . gtma5xo1tp ) ) ; } else { scale =
muDoubleScalarSqrt ( rtB . gtma5xo1tp ) ; } if ( rtB . gtma5xo1tp < 0.0 ) {
rtDW . dn3fk5nzmk = 1 ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
ir1guhjxkm = rtP . S0_Coefs [ 0 ] ; for ( s61_iter = 0 ; s61_iter < 5 ;
s61_iter ++ ) { rtB . ir1guhjxkm = rtB . ir1guhjxkm * enptooxiqv + rtP .
S0_Coefs [ s61_iter + 1 ] ; } rtB . e2yzgh3soa [ 0 ] = enptooxiqv ; rtB .
e2yzgh3soa [ 1 ] = enptooxiqv ; rtB . e2yzgh3soa [ 2 ] = enptooxiqv ; absxk =
enptooxiqv * enptooxiqv ; for ( i = 0 ; i < 25 ; i ++ ) { rtB . k0kwjfwzjs [
i ] = absxk ; } absxk *= enptooxiqv ; rtB . meewcjpsgd [ 0 ] = absxk ; rtB .
meewcjpsgd [ 1 ] = absxk ; rtB . meewcjpsgd [ 2 ] = absxk ; rtB . meewcjpsgd
[ 3 ] = absxk ; rtB . g1cf5mwiln = absxk * enptooxiqv ; TRANS = 'N' ; M =
66LL ; N = 8LL ; absxk = 1.0 ; LDA = 66LL ; for ( i = 0 ; i < 5 ; i ++ ) {
tmp [ i ] = bpxacse22y [ i ] ; } tmp [ 5 ] = bpxacse22y [ 6 ] ; tmp [ 6 ] =
bpxacse22y [ 7 ] ; tmp [ 7 ] = bpxacse22y [ 13 ] ; INCX = 1LL ; t = 0.0 ;
INCY = 1LL ; dgemv ( & TRANS , & M , & N , & absxk , & rtB . ljqkwpwmre [ 0 ]
, & LDA , & tmp [ 0 ] , & INCX , & t , & aliqxvlnms [ 0 ] , & INCY ) ; for (
i = 0 ; i < 66 ; i ++ ) { rtB . kqpnhluxxo [ i ] = muDoubleScalarSin (
aliqxvlnms [ i ] ) ; } } for ( i = 0 ; i < 33 ; i ++ ) { rtB . osubthz0r4 [ i
] = rtP . Constant1_Value_nsmljt0aoz [ i ] * rtB . k2lhbqlojh [ i ] * rtB .
kqpnhluxxo [ i ] ; } rtB . osubthz0r4 [ 33 ] = rtB . e2yzgh3soa [ 0 ] * rtB .
k2lhbqlojh [ 33 ] * rtB . kqpnhluxxo [ 33 ] ; rtB . osubthz0r4 [ 34 ] = rtB .
e2yzgh3soa [ 1 ] * rtB . k2lhbqlojh [ 34 ] * rtB . kqpnhluxxo [ 34 ] ; rtB .
osubthz0r4 [ 35 ] = rtB . e2yzgh3soa [ 2 ] * rtB . k2lhbqlojh [ 35 ] * rtB .
kqpnhluxxo [ 35 ] ; for ( i = 0 ; i < 25 ; i ++ ) { rtB . osubthz0r4 [ i + 36
] = rtB . k2lhbqlojh [ i + 36 ] * rtB . k0kwjfwzjs [ i ] * rtB . kqpnhluxxo [
i + 36 ] ; } rtB . osubthz0r4 [ 61 ] = rtB . meewcjpsgd [ 0 ] * rtB .
k2lhbqlojh [ 61 ] * rtB . kqpnhluxxo [ 61 ] ; rtB . osubthz0r4 [ 62 ] = rtB .
meewcjpsgd [ 1 ] * rtB . k2lhbqlojh [ 62 ] * rtB . kqpnhluxxo [ 62 ] ; rtB .
osubthz0r4 [ 63 ] = rtB . meewcjpsgd [ 2 ] * rtB . k2lhbqlojh [ 63 ] * rtB .
kqpnhluxxo [ 63 ] ; rtB . osubthz0r4 [ 64 ] = rtB . meewcjpsgd [ 3 ] * rtB .
k2lhbqlojh [ 64 ] * rtB . kqpnhluxxo [ 64 ] ; rtB . osubthz0r4 [ 65 ] = rtB .
g1cf5mwiln * rtB . k2lhbqlojh [ 65 ] * rtB . kqpnhluxxo [ 65 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i = 0 ; i < 66 ; i ++ ) { rtB .
bu42wqsdcf [ i ] = muDoubleScalarCos ( aliqxvlnms [ i ] ) ; } } for ( i = 0 ;
i < 33 ; i ++ ) { rtB . pfvnqwrrjo [ i ] = rtB . bu42wqsdcf [ i ] * rtB .
l4axxmgncw [ i ] * rtP . Constant1_Value_nsmljt0aoz [ i ] ; } rtB .
pfvnqwrrjo [ 33 ] = rtB . bu42wqsdcf [ 33 ] * rtB . l4axxmgncw [ 33 ] * rtB .
e2yzgh3soa [ 0 ] ; rtB . pfvnqwrrjo [ 34 ] = rtB . bu42wqsdcf [ 34 ] * rtB .
l4axxmgncw [ 34 ] * rtB . e2yzgh3soa [ 1 ] ; rtB . pfvnqwrrjo [ 35 ] = rtB .
bu42wqsdcf [ 35 ] * rtB . l4axxmgncw [ 35 ] * rtB . e2yzgh3soa [ 2 ] ; for (
i = 0 ; i < 25 ; i ++ ) { rtB . pfvnqwrrjo [ i + 36 ] = rtB . bu42wqsdcf [ i
+ 36 ] * rtB . l4axxmgncw [ i + 36 ] * rtB . k0kwjfwzjs [ i ] ; } rtB .
pfvnqwrrjo [ 61 ] = rtB . bu42wqsdcf [ 61 ] * rtB . l4axxmgncw [ 61 ] * rtB .
meewcjpsgd [ 0 ] ; rtB . pfvnqwrrjo [ 62 ] = rtB . bu42wqsdcf [ 62 ] * rtB .
l4axxmgncw [ 62 ] * rtB . meewcjpsgd [ 1 ] ; rtB . pfvnqwrrjo [ 63 ] = rtB .
bu42wqsdcf [ 63 ] * rtB . l4axxmgncw [ 63 ] * rtB . meewcjpsgd [ 2 ] ; rtB .
pfvnqwrrjo [ 64 ] = rtB . bu42wqsdcf [ 64 ] * rtB . l4axxmgncw [ 64 ] * rtB .
meewcjpsgd [ 3 ] ; rtB . pfvnqwrrjo [ 65 ] = rtB . bu42wqsdcf [ 65 ] * rtB .
l4axxmgncw [ 65 ] * rtB . g1cf5mwiln ; absxk = - 0.0 ; for ( i = 0 ; i < 66 ;
i ++ ) { enptooxiqv = rtB . osubthz0r4 [ i ] + rtB . pfvnqwrrjo [ i ] ; rtB .
h0catfsyh2 [ i ] = enptooxiqv ; absxk += enptooxiqv ; } rtB . cxtibow4zs =
absxk ; rtB . ag5tewkmjy = rtB . ir1guhjxkm + rtB . cxtibow4zs ; rtB .
preo4lepir = rtP . Gain2_Gain_n5zuiluoob * rtB . ag5tewkmjy ; rtB .
mxnmfxtv4i = rtB . maeuwlu3dy * rtB . kngnjoyb1t ; rtB . msy1rxbcp5 = rtP .
Gain5_Gain * rtB . mxnmfxtv4i ; rtB . nkdmlbvhok = 0.017453292519943295 * rtB
. preo4lepir - rtB . msy1rxbcp5 ; rtB . jx322ng04x = rtB . nkdmlbvhok +
g22d2szued ; rtB . ddt5n0lpvn = rtP . Gain1_Gain_cbzzikxxnt * rtB .
jx322ng04x ; rtB . gk51ql0lpo [ 0 ] = g22d2szued ; rtB . gk51ql0lpo [ 1 ] =
muDoubleScalarAtan ( scale ) ; rtB . gk51ql0lpo [ 2 ] = rtB . ddt5n0lpvn ;
muDoubleScalarSinCos ( rtB . gk51ql0lpo [ 0 ] , & lhamlihs4e [ 0 ] , &
jjofqy2myg [ 0 ] ) ; muDoubleScalarSinCos ( rtB . gk51ql0lpo [ 1 ] , &
lhamlihs4e [ 1 ] , & jjofqy2myg [ 1 ] ) ; muDoubleScalarSinCos ( rtB .
gk51ql0lpo [ 2 ] , & lhamlihs4e [ 2 ] , & jjofqy2myg [ 2 ] ) ; rtB .
gr1fa2psxf [ 0 ] = jjofqy2myg [ 0 ] * jjofqy2myg [ 2 ] * jjofqy2myg [ 1 ] -
lhamlihs4e [ 0 ] * lhamlihs4e [ 2 ] ; rtB . gr1fa2psxf [ 1 ] = - jjofqy2myg [
0 ] * jjofqy2myg [ 1 ] * lhamlihs4e [ 2 ] - lhamlihs4e [ 0 ] * jjofqy2myg [ 2
] ; rtB . gr1fa2psxf [ 2 ] = jjofqy2myg [ 0 ] * lhamlihs4e [ 1 ] ; rtB .
gr1fa2psxf [ 3 ] = lhamlihs4e [ 0 ] * jjofqy2myg [ 2 ] * jjofqy2myg [ 1 ] +
jjofqy2myg [ 0 ] * lhamlihs4e [ 2 ] ; rtB . gr1fa2psxf [ 4 ] = - lhamlihs4e [
0 ] * jjofqy2myg [ 1 ] * lhamlihs4e [ 2 ] + jjofqy2myg [ 0 ] * jjofqy2myg [ 2
] ; rtB . gr1fa2psxf [ 5 ] = lhamlihs4e [ 0 ] * lhamlihs4e [ 1 ] ; rtB .
gr1fa2psxf [ 6 ] = - lhamlihs4e [ 1 ] * jjofqy2myg [ 2 ] ; rtB . gr1fa2psxf [
7 ] = lhamlihs4e [ 1 ] * lhamlihs4e [ 2 ] ; rtB . gr1fa2psxf [ 8 ] =
jjofqy2myg [ 1 ] ; for ( qY = 0 ; qY < 3 ; qY ++ ) { enptooxiqv = rtB .
gr1fa2psxf [ 3 * qY + 1 ] ; g22d2szued = rtB . gr1fa2psxf [ 3 * qY ] ; scale
= rtB . gr1fa2psxf [ 3 * qY + 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { x_p [ i +
3 * qY ] = ( rtB . fgnjwyyj2d [ i + 3 ] * enptooxiqv + g22d2szued * rtB .
fgnjwyyj2d [ i ] ) + rtB . fgnjwyyj2d [ i + 6 ] * scale ; } } rtB .
f2rojwtbdm [ 0 ] = rtB . hbvbdloscq [ 10 ] ; rtB . f2rojwtbdm [ 1 ] = rtB .
hbvbdloscq [ 11 ] ; rtB . f2rojwtbdm [ 2 ] = rtB . hbvbdloscq [ 12 ] ; for (
i = 0 ; i < 3 ; i ++ ) { enptooxiqv = rtB . md3ccqv5wu [ i + 3 ] ; g22d2szued
= rtB . md3ccqv5wu [ i ] ; scale = rtB . md3ccqv5wu [ i + 6 ] ; absxk = 0.0 ;
for ( qY = 0 ; qY < 3 ; qY ++ ) { rtB . aco3rajakx [ i + 3 * qY ] = ( x_p [ 3
* qY + 1 ] * enptooxiqv + x_p [ 3 * qY ] * g22d2szued ) + x_p [ 3 * qY + 2 ]
* scale ; absxk += rtP . Gain_Gain_nbjre2xbkg [ 3 * qY + i ] * rtB .
f2rojwtbdm [ qY ] ; } rtB . nlahpypk0z [ i ] = absxk ; rtB . pg1rjoze33 [ i ]
= rtP . kmtom_Gain * absxk ; } enptooxiqv = rtB . pg1rjoze33 [ 1 ] ;
g22d2szued = rtB . pg1rjoze33 [ 0 ] ; scale = rtB . pg1rjoze33 [ 2 ] ; for (
qY = 0 ; qY < 3 ; qY ++ ) { rtB . mgyteopx4q [ qY ] = ( rtB . aco3rajakx [ qY
+ 3 ] * enptooxiqv + rtB . aco3rajakx [ qY ] * g22d2szued ) + rtB .
aco3rajakx [ qY + 6 ] * scale ; } depsilon [ 0 ] = rtB . mgyteopx4q [ 0 ] ;
depsilon [ 1 ] = rtB . mgyteopx4q [ 1 ] ; g22d2szued = muDoubleScalarAtan2 (
rtB . mgyteopx4q [ 2 ] , muDoubleScalarSqrt ( rtB . mgyteopx4q [ 0 ] * rtB .
mgyteopx4q [ 0 ] + rtB . mgyteopx4q [ 1 ] * rtB . mgyteopx4q [ 1 ] ) *
0.99664718933525254 ) ; enptooxiqv = muDoubleScalarAtan2 ( 42841.311513313573
* muDoubleScalarSin ( g22d2szued ) * muDoubleScalarSin ( g22d2szued ) *
muDoubleScalarSin ( g22d2szued ) + rtB . mgyteopx4q [ 2 ] ,
muDoubleScalarSqrt ( rtB . mgyteopx4q [ 0 ] * rtB . mgyteopx4q [ 0 ] + rtB .
mgyteopx4q [ 1 ] * rtB . mgyteopx4q [ 1 ] ) - 42697.672707179969 *
muDoubleScalarCos ( g22d2szued ) * muDoubleScalarCos ( g22d2szued ) *
muDoubleScalarCos ( g22d2szued ) ) ; scale = muDoubleScalarAtan2 (
0.99664718933525254 * muDoubleScalarSin ( enptooxiqv ) , muDoubleScalarCos (
enptooxiqv ) ) ; s61_iter = 0 ; while ( ( g22d2szued != scale ) && ( s61_iter
< 5 ) ) { g22d2szued = scale ; enptooxiqv = muDoubleScalarAtan2 (
42841.311513313573 * muDoubleScalarSin ( scale ) * muDoubleScalarSin ( scale
) * muDoubleScalarSin ( scale ) + rtB . mgyteopx4q [ 2 ] , muDoubleScalarSqrt
( depsilon [ 0 ] * depsilon [ 0 ] + depsilon [ 1 ] * depsilon [ 1 ] ) -
42697.672707179969 * muDoubleScalarCos ( scale ) * muDoubleScalarCos ( scale
) * muDoubleScalarCos ( scale ) ) ; scale = muDoubleScalarAtan2 (
0.99664718933525254 * muDoubleScalarSin ( enptooxiqv ) , muDoubleScalarCos (
enptooxiqv ) ) ; s61_iter ++ ; } g22d2szued = muDoubleScalarAbs ( enptooxiqv
) ; scale = enptooxiqv ; absxk = muDoubleScalarAtan2 ( rtB . mgyteopx4q [ 1 ]
, rtB . mgyteopx4q [ 0 ] ) ; if ( g22d2szued > 3.1415926535897931 ) { scale =
muDoubleScalarMod ( enptooxiqv + 3.1415926535897931 , 6.2831853071795862 ) -
3.1415926535897931 ; g22d2szued = muDoubleScalarAbs ( scale ) ; } if (
g22d2szued > 1.5707963267948966 ) { absxk = muDoubleScalarAtan2 ( rtB .
mgyteopx4q [ 1 ] , rtB . mgyteopx4q [ 0 ] ) + 3.1415926535897931 ; scale = (
1.5707963267948966 - ( g22d2szued - 1.5707963267948966 ) ) *
muDoubleScalarSign ( scale ) ; } if ( muDoubleScalarAbs ( absxk ) >
3.1415926535897931 ) { g22d2szued = muDoubleScalarRem ( absxk ,
6.2831853071795862 ) / 3.1415926535897931 ; if ( g22d2szued < 0.0 ) { t =
muDoubleScalarCeil ( g22d2szued ) ; } else { t = muDoubleScalarFloor (
g22d2szued ) ; } absxk = muDoubleScalarRem ( absxk , 6.2831853071795862 ) -
6.2831853071795862 * t ; } rtB . f4ayqsk2ze [ 0 ] = scale * 180.0 /
3.1415926535897931 ; rtB . f4ayqsk2ze [ 1 ] = absxk * 180.0 /
3.1415926535897931 ; rtB . aewg4wr5gf = ( ( 6.378137E+6 / muDoubleScalarSqrt
( 1.0 - muDoubleScalarSin ( enptooxiqv ) * muDoubleScalarSin ( enptooxiqv ) *
0.0066943799901413165 ) * 0.0066943799901413165 * muDoubleScalarSin (
enptooxiqv ) + rtB . mgyteopx4q [ 2 ] ) * muDoubleScalarSin ( enptooxiqv ) +
muDoubleScalarSqrt ( rtB . mgyteopx4q [ 0 ] * rtB . mgyteopx4q [ 0 ] + rtB .
mgyteopx4q [ 1 ] * rtB . mgyteopx4q [ 1 ] ) * muDoubleScalarCos ( enptooxiqv
) ) - 6.378137E+6 / muDoubleScalarSqrt ( 1.0 - muDoubleScalarSin ( enptooxiqv
) * muDoubleScalarSin ( enptooxiqv ) * 0.0066943799901413165 ) ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . lwtny2nhca = ( rtB . f4ayqsk2ze [ 0
] >= 0.0 ) ; } rtB . jhyk5cyvgo = rtDW . lwtny2nhca > 0 ? rtB . f4ayqsk2ze [
0 ] : - rtB . f4ayqsk2ze [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . fiwv2kubov = ( rtB . jhyk5cyvgo >
rtP . CompareToConstant_const_acmh2i3ocd ) ; } rtB . ok4e3lbh54 = rtDW .
fiwv2kubov ; } if ( rtB . ok4e3lbh54 ) { rtB . fdik4i2yoy = rtB . f4ayqsk2ze
[ 0 ] + rtP . Bias_Bias_mfwetpprm2 ; rtB . bbx15v2bu2 = muDoubleScalarMod (
rtB . fdik4i2yoy , rtP . Constant2_Value_hfkavtbu0i ) + rtP .
Bias1_Bias_eo1kc4cr1k ; rtB . dctl3otdrl = rtB . bbx15v2bu2 ; } else { rtB .
dctl3otdrl = rtB . f4ayqsk2ze [ 0 ] ; } if ( ssIsModeUpdateTimeStep ( rtS ) )
{ rtDW . iuxhwq4jer = ( rtB . dctl3otdrl >= 0.0 ) ; } rtB . br2bwcgt5b = rtDW
. iuxhwq4jer > 0 ? rtB . dctl3otdrl : - rtB . dctl3otdrl ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . ouiwc4kgj1
= ( rtB . br2bwcgt5b > rtP . CompareToConstant_const ) ; } rtB . k3guhezu25 =
rtDW . ouiwc4kgj1 ; if ( rtB . k3guhezu25 ) { rtB . ep15chbn1b = rtP .
Constant_Value_ptjny1bmmo ; } else { rtB . ep15chbn1b = rtP .
Constant1_Value_mwv4mh5zj3 ; } } rtB . lj20pakho0 = rtB . ep15chbn1b + rtB .
f4ayqsk2ze [ 1 ] ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . fwn4p5on3k
= ( rtB . lj20pakho0 >= 0.0 ) ; } rtB . emi51gcsdm = rtDW . fwn4p5on3k > 0 ?
rtB . lj20pakho0 : - rtB . lj20pakho0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . d4ejqm0gje = ( rtB .
emi51gcsdm > rtP . CompareToConstant_const_p1pgipjfy5 ) ; } rtB . bjbinfdrjx
= rtDW . d4ejqm0gje ; if ( rtB . dctl3otdrl > 0.0 ) { rtDW . crk3evsda4 = 1 ;
} else if ( rtB . dctl3otdrl < 0.0 ) { rtDW . crk3evsda4 = - 1 ; } else {
rtDW . crk3evsda4 = 0 ; } rtB . m0cdt1phky = rtDW . crk3evsda4 ; } if ( rtB .
bjbinfdrjx ) { rtB . g13lxtg0e3 = rtB . lj20pakho0 + rtP .
Bias_Bias_cflmnqqelv ; rtB . jucgq21ch3 = muDoubleScalarMod ( rtB .
g13lxtg0e3 , rtP . Constant2_Value_dcxdf2gjws ) + rtP . Bias1_Bias_p4ldxk01tt
; rtB . f4ydplcff4 = rtB . jucgq21ch3 ; } else { rtB . f4ydplcff4 = rtB .
lj20pakho0 ; } if ( rtB . k3guhezu25 ) { rtB . bk2vsf2v2j = rtB . br2bwcgt5b
+ rtP . Bias_Bias ; rtB . p44pkvp25m = rtP . Gain_Gain * rtB . bk2vsf2v2j ;
rtB . lxdc32drxf = rtB . p44pkvp25m + rtP . Bias1_Bias ; rtB . g3e3xxtq4l =
rtB . m0cdt1phky * rtB . lxdc32drxf ; rtB . ko0umezivk = rtB . g3e3xxtq4l ; }
else { rtB . ko0umezivk = rtB . dctl3otdrl ; } muDoubleScalarSinCos (
0.017453292519943295 * rtB . f4ydplcff4 , & enptooxiqv , & g22d2szued ) ;
muDoubleScalarSinCos ( 0.017453292519943295 * rtB . ko0umezivk , &
m31egxeksf_idx_1 , & e4rajh1nbr_idx_1 ) ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { rtB . nj4s45p4ic = rtDW . jsse3tis1w ; if ( ssIsModeUpdateTimeStep ( rtS
) ) { rtDW . k10lklhvn1 = ( rtB . f4ydplcff4 != rtB . nj4s45p4ic ) ; } rtB .
hjeiubi410 = rtDW . k10lklhvn1 ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if (
rtB . hjeiubi410 ) { if ( ! rtDW . phdloywugz ) { if ( ssGetTaskTime ( rtS ,
1 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . phdloywugz = true ; } } else if ( rtDW . phdloywugz ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . phdloywugz =
false ; } } } if ( rtDW . phdloywugz ) { rtB . bkofwc2kv1 = enptooxiqv ; rtB
. imzzxl4kxf = g22d2szued ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for (
s110_iter = 1 ; s110_iter <= rtP . ForIterator_IterationLimit ; s110_iter ++
) { if ( s110_iter > rtP . cpm1spm1_Threshold ) { h0jfcu5ibu = rtDW .
d3n0scvwiw [ 0 ] ; civlijdkfz = rtDW . d3n0scvwiw [ 1 ] ; } else { h0jfcu5ibu
= rtB . imzzxl4kxf ; civlijdkfz = rtB . bkofwc2kv1 ; } enptooxiqv =
h0jfcu5ibu * rtB . bkofwc2kv1 + civlijdkfz * rtB . imzzxl4kxf ; g22d2szued =
h0jfcu5ibu * rtB . imzzxl4kxf - civlijdkfz * rtB . bkofwc2kv1 ; if (
s110_iter == 1 ) { memcpy ( & mirinm00s5 [ 0 ] , & rtP .
Constant_Value_pb1sgkcw1r [ 0 ] , 11U * sizeof ( real_T ) ) ; memcpy ( &
ozipx4athg [ 0 ] , & rtP . Constant1_Value_ifecmw2xex [ 0 ] , 11U * sizeof (
real_T ) ) ; } mirinm00s5 [ s110_iter - 1 ] = enptooxiqv ; ozipx4athg [
s110_iter - 1 ] = g22d2szued ; rtDW . d3n0scvwiw [ 0 ] = g22d2szued ; rtDW .
d3n0scvwiw [ 1 ] = enptooxiqv ; } for ( i = 0 ; i < 11 ; i ++ ) { rtB .
dqajvuxpzp [ i ] = rtP . Gain_Gain_gwnhj43h2w * ozipx4athg [ i ] ; rtB .
gxmud3x5al [ i ] = rtP . Gain1_Gain_hkwrfrr3op * mirinm00s5 [ i ] ; } } rtB .
li1pebkq1i [ 0 ] = rtP . cp1_Value ; rtB . li1pebkq1i [ 1 ] = rtB .
imzzxl4kxf ; rtB . kxc4kf24qb [ 0 ] = rtP . sp1_Value ; rtB . kxc4kf24qb [ 1
] = rtB . bkofwc2kv1 ; memcpy ( & rtB . li1pebkq1i [ 2 ] , & rtB . dqajvuxpzp
[ 0 ] , 11U * sizeof ( real_T ) ) ; memcpy ( & rtB . kxc4kf24qb [ 2 ] , & rtB
. gxmud3x5al [ 0 ] , 11U * sizeof ( real_T ) ) ; if ( ssIsModeUpdateTimeStep
( rtS ) ) { srUpdateBC ( rtDW . oqz2wa1us5 ) ; } } rtB . kywdgcrg2n = rtP .
Gain_Gain_lqsvfvp1t2 * rtB . aewg4wr5gf ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { rtB . gkgpps4vtt = rtDW . am4ilc4itb ; if ( ssIsModeUpdateTimeStep ( rtS
) ) { rtDW . ppxomfw0y5 = ( rtB . ko0umezivk != rtB . gkgpps4vtt ) ; }
dqhdvg02ot = rtDW . ppxomfw0y5 ; } rtB . m2bsmrvap2 = m31egxeksf_idx_1 *
m31egxeksf_idx_1 ; rtB . cttb4jdb25 = e4rajh1nbr_idx_1 * e4rajh1nbr_idx_1 ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . he3zov4zzu = rtDW . memp4ggvk1 ;
if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . eexx2pbpof = ( rtB .
kywdgcrg2n != rtB . he3zov4zzu ) ; } rtB . f44c1l2haz = ( dqhdvg02ot || rtDW
. eexx2pbpof ) ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtB .
f44c1l2haz ) { if ( ! rtDW . pb5er2v5my ) { if ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} rtDW . pb5er2v5my = true ; } } else if ( rtDW . pb5er2v5my ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . pb5er2v5my =
false ; } } } if ( rtDW . pb5er2v5my ) { rtB . p0akgkjmrw = rtB . m2bsmrvap2
* rtB . l0urs01onp ; rtB . crec2go2qm = rtB . cukuluwn11 - rtB . p0akgkjmrw ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . jmmeq40q3u != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
jmmeq40q3u = 0 ; } civlijdkfz = muDoubleScalarSqrt ( rtB . crec2go2qm ) ; }
else { if ( rtB . crec2go2qm < 0.0 ) { civlijdkfz = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . crec2go2qm ) ) ; } else { civlijdkfz =
muDoubleScalarSqrt ( rtB . crec2go2qm ) ; } if ( rtB . crec2go2qm < 0.0 ) {
rtDW . jmmeq40q3u = 1 ; } } rtB . onnkbehyf1 = civlijdkfz * rtB . kywdgcrg2n
; rtB . krlobaa2y2 = rtB . cttb4jdb25 * rtB . cukuluwn11 ; rtB . orrsvm3fu1 =
rtB . i24o4k5fba * rtB . m2bsmrvap2 ; rtB . hhxogxux0y = rtB . krlobaa2y2 +
rtB . orrsvm3fu1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . pwge0cg15r
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
pwge0cg15r = 0 ; } h0jfcu5ibu = muDoubleScalarSqrt ( rtB . hhxogxux0y ) ; }
else { if ( rtB . hhxogxux0y < 0.0 ) { h0jfcu5ibu = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . hhxogxux0y ) ) ; } else { h0jfcu5ibu =
muDoubleScalarSqrt ( rtB . hhxogxux0y ) ; } if ( rtB . hhxogxux0y < 0.0 ) {
rtDW . pwge0cg15r = 1 ; } } rtB . bgzxmvrpag = rtB . kywdgcrg2n + h0jfcu5ibu
; rtB . fa41n4y13z = rtP . Gain_Gain_nstanrefgr * rtB . onnkbehyf1 ; rtB .
ppowqx1unv = rtB . kywdgcrg2n * rtB . kywdgcrg2n ; rtB . ce5nv0li1b = rtB .
pkjalnzw53 * rtB . m2bsmrvap2 ; rtB . lsfgqfsqp2 = rtB . e2ggxcowq2 - rtB .
ce5nv0li1b ; rtB . l4xweldks3 = civlijdkfz * civlijdkfz ; rtB . f0dl5arkfu =
rtB . lsfgqfsqp2 / rtB . l4xweldks3 ; rtB . bjsed3sxds = ( rtB . fa41n4y13z +
rtB . ppowqx1unv ) + rtB . f0dl5arkfu ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( rtDW . bkrengnk5k != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
bkrengnk5k = 0 ; } rtB . p2jl0v3gnd = muDoubleScalarSqrt ( rtB . bjsed3sxds )
; } else { if ( rtB . bjsed3sxds < 0.0 ) { rtB . p2jl0v3gnd = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtB . bjsed3sxds ) ) ; } else { rtB
. p2jl0v3gnd = muDoubleScalarSqrt ( rtB . bjsed3sxds ) ; } if ( rtB .
bjsed3sxds < 0.0 ) { rtDW . bkrengnk5k = 1 ; } } rtB . lpqulyeqtp = rtB .
bgzxmvrpag / rtB . p2jl0v3gnd ; rtB . oeznpvrjzl = rtB . cukuluwn11 + rtB .
onnkbehyf1 ; rtB . i0qy3mdqpp = rtB . onnkbehyf1 + rtB . i24o4k5fba ; rtB .
mmhx02zlba = rtB . i0qy3mdqpp * rtB . i0qy3mdqpp ; rtB . i1bcfmedhz = rtB .
oeznpvrjzl * rtB . oeznpvrjzl / rtB . mmhx02zlba ; rtB . nmn5cevwvg = rtB .
cttb4jdb25 * rtB . i1bcfmedhz ; rtB . m0gedlyqep = rtB . m2bsmrvap2 + rtB .
nmn5cevwvg ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . cyjnxvzlkk != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
cyjnxvzlkk = 0 ; } civlijdkfz = muDoubleScalarSqrt ( rtB . m0gedlyqep ) ; }
else { if ( rtB . m0gedlyqep < 0.0 ) { civlijdkfz = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . m0gedlyqep ) ) ; } else { civlijdkfz =
muDoubleScalarSqrt ( rtB . m0gedlyqep ) ; } if ( rtB . m0gedlyqep < 0.0 ) {
rtDW . cyjnxvzlkk = 1 ; } } rtB . c5rb4awtge = m31egxeksf_idx_1 / civlijdkfz
; rtB . foeyrpcycs = rtB . p2jl0v3gnd * h0jfcu5ibu ; rtB . l2bs43i4ov = rtB .
ammr4ytkw1 / rtB . foeyrpcycs * e4rajh1nbr_idx_1 * m31egxeksf_idx_1 ; rtB .
ld2zv5xzod = rtB . c5rb4awtge * rtB . c5rb4awtge ; rtB . a2zk5e0x0y = rtP .
Constant_Value_fpb5edacxf - rtB . ld2zv5xzod ; if ( ssIsMajorTimeStep ( rtS )
) { if ( rtDW . ld1te5cgi0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
ld1te5cgi0 = 0 ; } rtB . otveeadewh = muDoubleScalarSqrt ( rtB . a2zk5e0x0y )
; } else { if ( rtB . a2zk5e0x0y < 0.0 ) { rtB . otveeadewh = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtB . a2zk5e0x0y ) ) ; } else { rtB
. otveeadewh = muDoubleScalarSqrt ( rtB . a2zk5e0x0y ) ; } if ( rtB .
a2zk5e0x0y < 0.0 ) { rtDW . ld1te5cgi0 = 1 ; } } if ( ssIsModeUpdateTimeStep
( rtS ) ) { srUpdateBC ( rtDW . ijbym44xcu ) ; } } rtB . h4lalsdpvb = rtP .
re_Value / rtB . p2jl0v3gnd ; rtB . cqvciatqbv = rtB . h4lalsdpvb * rtB .
h4lalsdpvb ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . netfpjoud1 = rtP
. UnitDelay_InitialCondition_izvbuzzrob ; rtDW . m0obf4a2df [ 0 ] = rtP .
UnitDelay2_InitialCondition_hirxjpuru5 [ 0 ] ; rtDW . m0obf4a2df [ 1 ] = rtP
. UnitDelay2_InitialCondition_hirxjpuru5 [ 1 ] ; rtDW . m0obf4a2df [ 2 ] =
rtP . UnitDelay2_InitialCondition_hirxjpuru5 [ 2 ] ; rtDW . m0obf4a2df [ 3 ]
= rtP . UnitDelay2_InitialCondition_hirxjpuru5 [ 3 ] ; for ( s61_iter = 1 ;
s61_iter <= rtP . ForIterator_IterationLimit_jiabvhbqan ; s61_iter ++ ) { if
( s61_iter > rtP . arn_Threshold ) { t = rtDW . netfpjoud1 ; } else { t = rtB
. cqvciatqbv ; } h0jfcu5ibu = t * rtB . h4lalsdpvb ; if ( ( s61_iter < 0 ) &&
( rtP . Constant_Value_jvr52f2msl < MIN_int32_T - s61_iter ) ) { s110_iter =
MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( rtP .
Constant_Value_jvr52f2msl > MAX_int32_T - s61_iter ) ) { s110_iter =
MAX_int32_T ; } else { s110_iter = s61_iter + rtP . Constant_Value_jvr52f2msl
; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . mhkwgq1w1q = rtP
. UnitDelay1_InitialCondition_e3j2nzss4g ; rtDW . oz0kfzg1gx = rtP .
UnitDelay3_InitialCondition ; rtDW . nupgl2tg0v = rtP .
UnitDelay2_InitialCondition ; rtDW . adsttvgd3w = rtP .
UnitDelay4_InitialCondition ; for ( i = 0 ; i < 6 ; i ++ ) { rtDW .
mcn2nlny2x [ i ] = 1U ; } if ( s110_iter > 2147483646 ) { s110_iter =
2147483646 ; } else if ( s110_iter < 0 ) { s110_iter = 0 ; } for ( s69_iter =
1 ; s69_iter <= s110_iter ; s69_iter ++ ) { if ( rtP .
Constant_Value_c5udfinrgc < s69_iter - MAX_int32_T ) { qY_i = MAX_int32_T ; }
else { qY_i = s69_iter - rtP . Constant_Value_c5udfinrgc ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB . dk4xtsv2jd ) { if ( ! rtDW .
atcpxiamp2 ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . atcpxiamp2 =
true ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ( qY_i < 0 ) && ( rtP .
Constant1_Value_lbdlppdlrp < MIN_int32_T - qY_i ) ) { qY_e = MIN_int32_T ; qY
= MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP .
Constant1_Value_lbdlppdlrp > MAX_int32_T - qY_i ) ) { qY_e = MAX_int32_T ; qY
= MAX_int32_T ; } else { qY_e = qY_i + rtP . Constant1_Value_lbdlppdlrp ; qY
= qY_i + rtP . Constant1_Value_lbdlppdlrp ; } p1 = qY - 1 ; if ( ( s61_iter <
0 ) && ( rtP . Constant_Value_dovgvyvjt4 < MIN_int32_T - s61_iter ) ) { qY_p
= MIN_int32_T ; qY = MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( rtP .
Constant_Value_dovgvyvjt4 > MAX_int32_T - s61_iter ) ) { qY_p = MAX_int32_T ;
qY = MAX_int32_T ; } else { qY_p = s61_iter + rtP . Constant_Value_dovgvyvjt4
; qY = s61_iter + rtP . Constant_Value_dovgvyvjt4 ; } p2 = qY - 1 ;
ahxzc3aa1u = rtP . cdmaxdefmaxdef_Value [ ( ( qY_p - 1 ) * 13 + qY_e ) - 1 ]
* rtB . jnood2r1kz + rtP . cmaxdefmaxdef_Value [ ( ( qY_p - 1 ) * 13 + qY_e )
- 1 ] ; } if ( rtDW . mcn2nlny2x [ 4 ] < 2 ) { rtDW . mcn2nlny2x [ 4 ] = 2U ;
memcpy ( & rtB . e2n2dnhgeu [ 0 ] , & rtDW . gcujf31myd [ 0 ] , 169U * sizeof
( real_T ) ) ; } rtB . e2n2dnhgeu [ p1 + 13 * p2 ] = ahxzc3aa1u ; if (
s61_iter > rtP . tc_old_Threshold ) { memcpy ( & mjfntwrie1 [ 0 ] , & rtDW .
mugz10zzsf [ 0 ] , 169U * sizeof ( real_T ) ) ; } else { memcpy ( &
mjfntwrie1 [ 0 ] , & rtP . zerosmaxdef1maxdef1_Value [ 0 ] , 169U * sizeof (
real_T ) ) ; } rtPrevAction = rtDW . cktmfwuebm ; rtAction = ( int8_T ) (
qY_i == 0 ) ; rtDW . cktmfwuebm = rtAction ; if ( rtPrevAction != rtAction )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction
) { case 0 : break ; case 1 : break ; } } if ( rtAction == 0 ) { if (
rtPrevAction != 0 ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ( s61_iter <
0 ) && ( rtP . Constant_Value_am4zc2ltal < MIN_int32_T - s61_iter ) ) { qY_e
= MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( rtP .
Constant_Value_am4zc2ltal > MAX_int32_T - s61_iter ) ) { qY_e = MAX_int32_T ;
} else { qY_e = s61_iter + rtP . Constant_Value_am4zc2ltal ; } if ( rtDW .
mcn2nlny2x [ 5 ] < 2 ) { rtDW . mcn2nlny2x [ 5 ] = 2U ; memcpy ( & rtB .
p22cfrxj5n [ 0 ] , & mjfntwrie1 [ 0 ] , 169U * sizeof ( real_T ) ) ; } rtB .
p22cfrxj5n [ ( qY_e + 13 * ( qY_i - 1 ) ) - 1 ] = rtP . cdmaxdefmaxdef_Value
[ ( ( qY_i - 1 ) * 13 + qY_e ) - 1 ] * rtB . jnood2r1kz + rtP .
cmaxdefmaxdef_Value [ ( ( qY_i - 1 ) * 13 + qY_e ) - 1 ] ; for ( i = 0 ; i <
169 ; i ++ ) { rtB . dguvhjg5w4 [ i ] = rtP . Gain_Gain_b1db0o1fb1 * rtB .
p22cfrxj5n [ i ] ; } rtDW . pshfio535r = 4 ; } else { if ( rtPrevAction != 1
) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } memcpy ( & rtB .
dguvhjg5w4 [ 0 ] , & mjfntwrie1 [ 0 ] , 169U * sizeof ( real_T ) ) ; rtDW .
hluflh4dwz = 4 ; } for ( i = 0 ; i < 169 ; i ++ ) { rtB . fqrycui3hg [ i ] =
rtB . e2n2dnhgeu [ i ] + rtB . dguvhjg5w4 [ i ] ; } rtDW . adricj4j5d = 4 ; }
else if ( rtDW . atcpxiamp2 ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtDW .
cktmfwuebm ) { case 0 : break ; case 1 : break ; } rtDW . cktmfwuebm = - 1 ;
rtDW . atcpxiamp2 = false ; } } absxk = ( real_T ) qY_i + rtP .
Constant1_Value_m0eu3xzabt ; civlijdkfz = rtB . li1pebkq1i [ ( int32_T )
absxk - 1 ] ; absxk = rtB . kxc4kf24qb [ ( int32_T ) absxk - 1 ] ;
rtPrevAction = rtDW . iil44wamvv ; rtAction = ( int8_T ) ( qY_i != 0 ) ; rtDW
. iil44wamvv = rtAction ; if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction )
{ case 0 : break ; case 1 : break ; } } if ( rtAction == 0 ) { if (
rtPrevAction != 0 ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } enptooxiqv = (
real_T ) s61_iter + rtP . Constant_Value_f1alf1u4vx ; m31egxeksf_idx_1 = (
real_T ) qY_i + rtP . Constant_Value_f1alf1u4vx ; civlijdkfz = rtB .
fqrycui3hg [ ( ( ( int32_T ) enptooxiqv - 1 ) * 13 + ( int32_T )
m31egxeksf_idx_1 ) - 1 ] * civlijdkfz * rtP . Gain1_Gain ; absxk = rtB .
fqrycui3hg [ ( ( ( int32_T ) enptooxiqv - 1 ) * 13 + ( int32_T )
m31egxeksf_idx_1 ) - 1 ] * absxk * rtP . Gain2_Gain ; rtDW . joclfqdu4c = 4 ;
} else { if ( rtPrevAction != 1 ) { if ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } g22d2szued = ( real_T ) s61_iter + rtP . Constant_Value_grywn4afkt ;
e4rajh1nbr_idx_1 = ( real_T ) qY_i + rtP . Constant_Value_grywn4afkt ;
enptooxiqv = rtB . fqrycui3hg [ ( ( ( int32_T ) g22d2szued - 1 ) * 13 + (
int32_T ) e4rajh1nbr_idx_1 ) - 1 ] * civlijdkfz ; m31egxeksf_idx_1 = rtB .
fqrycui3hg [ ( ( ( int32_T ) g22d2szued - 1 ) * 13 + ( int32_T )
e4rajh1nbr_idx_1 ) - 1 ] * absxk ; e4rajh1nbr_idx_1 = ( real_T ) s61_iter +
rtP . Constant_Value_ekocq4ci4i ; g22d2szued = rtB . fqrycui3hg [ ( ( qY_i -
1 ) * 13 + ( int32_T ) e4rajh1nbr_idx_1 ) - 1 ] * civlijdkfz ; civlijdkfz =
rtB . fqrycui3hg [ ( ( qY_i - 1 ) * 13 + ( int32_T ) e4rajh1nbr_idx_1 ) - 1 ]
* absxk + enptooxiqv ; absxk = m31egxeksf_idx_1 - g22d2szued ; rtDW .
meglrmbhox = 4 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB .
f44c1l2haz ) { if ( ! rtDW . kdr2nz0rqw ) { if ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} rtDW . kdr2nz0rqw = true ; } memcpy ( & mjfntwrie1 [ 0 ] , & rtDW .
f1engf53mb [ 0 ] , 169U * sizeof ( real_T ) ) ; memcpy ( & p1vowxt3lg [ 0 ] ,
& rtDW . mvzvd4lhhp [ 0 ] , 169U * sizeof ( real_T ) ) ; rtPrevAction = rtDW
. jeociud4e4 ; rtAction = - 1 ; if ( s61_iter == qY_i ) { rtAction = 0 ; }
else if ( ( s61_iter == 1 ) && ( qY_i == 0 ) ) { rtAction = 1 ; } else if ( (
s61_iter > 1 ) && ( s61_iter != qY_i ) ) { rtAction = 2 ; } rtDW . jeociud4e4
= rtAction ; if ( rtPrevAction != rtAction ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtPrevAction )
{ case 0 : break ; case 1 : break ; case 2 : break ; } } switch ( rtAction )
{ case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 )
!= ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } } if ( ( qY_i >= 0 ) && ( rtP . Constant_Value_oc42kyw4do < qY_i -
MAX_int32_T ) ) { qY = MAX_int32_T ; } else if ( ( qY_i < 0 ) && ( rtP .
Constant_Value_oc42kyw4do > qY_i - MIN_int32_T ) ) { qY = MIN_int32_T ; }
else { qY = qY_i - rtP . Constant_Value_oc42kyw4do ; } tmp_p = ( int64_T )
rtP . Gain_Gain_dx15j3vl0r * qY ; if ( tmp_p > 2147483647LL ) { tmp_p =
2147483647LL ; } else if ( tmp_p < - 2147483648LL ) { tmp_p = - 2147483648LL
; } if ( ( s61_iter < 0 ) && ( ( int32_T ) tmp_p < MIN_int32_T - s61_iter ) )
{ qY = MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( ( int32_T ) tmp_p >
MAX_int32_T - s61_iter ) ) { qY = MAX_int32_T ; } else { qY = s61_iter + (
int32_T ) tmp_p ; } rtB . ee3rzr40lk = p1vowxt3lg [ qY - 1 ] * rtB .
otveeadewh ; if ( ( qY_i >= 0 ) && ( rtP . Constant_Value_oc42kyw4do < qY_i -
MAX_int32_T ) ) { qY = MAX_int32_T ; } else if ( ( qY_i < 0 ) && ( rtP .
Constant_Value_oc42kyw4do > qY_i - MIN_int32_T ) ) { qY = MIN_int32_T ; }
else { qY = qY_i - rtP . Constant_Value_oc42kyw4do ; } tmp_p = ( int64_T )
rtP . Gain_Gain_dx15j3vl0r * qY ; if ( tmp_p > 2147483647LL ) { tmp_p =
2147483647LL ; } else if ( tmp_p < - 2147483648LL ) { tmp_p = - 2147483648LL
; } if ( ( s61_iter < 0 ) && ( ( int32_T ) tmp_p < MIN_int32_T - s61_iter ) )
{ qY = MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( ( int32_T ) tmp_p >
MAX_int32_T - s61_iter ) ) { qY = MAX_int32_T ; } else { qY = s61_iter + (
int32_T ) tmp_p ; } rtB . pmvocf1tr2 = mjfntwrie1 [ ( ( s61_iter - 1 ) * 13 +
qY_i ) - 1 ] * rtB . otveeadewh + p1vowxt3lg [ qY - 1 ] * rtB . c5rb4awtge ;
rtDW . dckc2drf0i = 4 ; break ; case 1 : if ( rtAction != rtPrevAction ) { if
( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } tmp_p = ( int64_T )
rtP . Gain_Gain_na3lb1gfxf * qY_i ; if ( tmp_p > 2147483647LL ) { tmp_p =
2147483647LL ; } else if ( tmp_p < - 2147483648LL ) { tmp_p = - 2147483648LL
; } if ( ( s61_iter < 0 ) && ( ( int32_T ) tmp_p < MIN_int32_T - s61_iter ) )
{ qY = MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( ( int32_T ) tmp_p >
MAX_int32_T - s61_iter ) ) { qY = MAX_int32_T ; } else { qY = s61_iter + (
int32_T ) tmp_p ; } rtB . ee3rzr40lk = p1vowxt3lg [ qY - 1 ] * rtB .
c5rb4awtge ; tmp_p = ( int64_T ) rtP . Gain_Gain_na3lb1gfxf * qY_i ; if (
tmp_p > 2147483647LL ) { tmp_p = 2147483647LL ; } else if ( tmp_p < -
2147483648LL ) { tmp_p = - 2147483648LL ; } if ( ( qY_i < 0 ) && ( rtP .
Constant_Value_o1iy02torl < MIN_int32_T - qY_i ) ) { qY = MIN_int32_T ; }
else if ( ( qY_i > 0 ) && ( rtP . Constant_Value_o1iy02torl > MAX_int32_T -
qY_i ) ) { qY = MAX_int32_T ; } else { qY = qY_i + rtP .
Constant_Value_o1iy02torl ; } if ( ( s61_iter < 0 ) && ( ( int32_T ) tmp_p <
MIN_int32_T - s61_iter ) ) { i = MIN_int32_T ; } else if ( ( s61_iter > 0 )
&& ( ( int32_T ) tmp_p > MAX_int32_T - s61_iter ) ) { i = MAX_int32_T ; }
else { i = s61_iter + ( int32_T ) tmp_p ; } rtB . pmvocf1tr2 = mjfntwrie1 [ (
( s61_iter - 1 ) * 13 + qY ) - 1 ] * rtB . c5rb4awtge - p1vowxt3lg [ i - 1 ]
* rtB . otveeadewh ; rtDW . nmuzk31eka = 4 ; break ; case 2 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ( s61_iter < 0
) && ( rtP . Constant_Value_dllofnas1w < MIN_int32_T - s61_iter ) ) { qY_e =
MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( rtP .
Constant_Value_dllofnas1w > MAX_int32_T - s61_iter ) ) { qY_e = MAX_int32_T ;
} else { qY_e = s61_iter + rtP . Constant_Value_dllofnas1w ; } if ( ( qY_i <
0 ) && ( rtP . Constant_Value_dllofnas1w < MIN_int32_T - qY_i ) ) { qY_p =
MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP . Constant_Value_dllofnas1w >
MAX_int32_T - qY_i ) ) { qY_p = MAX_int32_T ; } else { qY_p = qY_i + rtP .
Constant_Value_dllofnas1w ; } tmp_p = ( int64_T ) rtP . Gain_Gain_i3u5isgwlk
* qY_i ; if ( tmp_p > 2147483647LL ) { tmp_p = 2147483647LL ; } else if (
tmp_p < - 2147483648LL ) { tmp_p = - 2147483648LL ; } if ( ( s61_iter >= 0 )
&& ( rtP . Constant1_Value_flirxgjqmw < s61_iter - MAX_int32_T ) ) { qY =
MAX_int32_T ; } else if ( ( s61_iter < 0 ) && ( rtP .
Constant1_Value_flirxgjqmw > s61_iter - MIN_int32_T ) ) { qY = MIN_int32_T ;
} else { qY = s61_iter - rtP . Constant1_Value_flirxgjqmw ; } if ( qY >= qY_i
) { if ( ( qY_i < 0 ) && ( rtP . Constant_Value_aw1dxv2tun < MIN_int32_T -
qY_i ) ) { qY = MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP .
Constant_Value_aw1dxv2tun > MAX_int32_T - qY_i ) ) { qY = MAX_int32_T ; }
else { qY = qY_i + rtP . Constant_Value_aw1dxv2tun ; } if ( ( s61_iter >= 0 )
&& ( rtP . Constant1_Value_ak4edp2juo < s61_iter - MAX_int32_T ) ) { i =
MAX_int32_T ; } else if ( ( s61_iter < 0 ) && ( rtP .
Constant1_Value_ak4edp2juo > s61_iter - MIN_int32_T ) ) { i = MIN_int32_T ; }
else { i = s61_iter - rtP . Constant1_Value_ak4edp2juo ; } t = mjfntwrie1 [ (
( i - 1 ) * 13 + qY ) - 1 ] ; } else { t = rtP . Constant_Value_prkljxqks0 ;
} if ( ( qY_i < 0 ) && ( rtP . Constant_Value_aw1dxv2tun < MIN_int32_T - qY_i
) ) { qY = MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP .
Constant_Value_aw1dxv2tun > MAX_int32_T - qY_i ) ) { qY = MAX_int32_T ; }
else { qY = qY_i + rtP . Constant_Value_aw1dxv2tun ; } if ( ( s61_iter < 0 )
&& ( ( int32_T ) tmp_p < MIN_int32_T - s61_iter ) ) { i = MIN_int32_T ; }
else if ( ( s61_iter > 0 ) && ( ( int32_T ) tmp_p > MAX_int32_T - s61_iter )
) { i = MAX_int32_T ; } else { i = s61_iter + ( int32_T ) tmp_p ; } rtB .
pmvocf1tr2 = ( mjfntwrie1 [ ( ( s61_iter - 1 ) * 13 + qY ) - 1 ] * rtB .
c5rb4awtge - p1vowxt3lg [ i - 1 ] * rtB . otveeadewh ) - rtP .
k1313_Value_aryoph4mav [ ( ( qY_e - 1 ) * 13 + qY_p ) - 1 ] * t ; if ( (
s61_iter >= 0 ) && ( rtP . Constant1_Value_abevpe4ykw < s61_iter -
MAX_int32_T ) ) { qY = MAX_int32_T ; } else if ( ( s61_iter < 0 ) && ( rtP .
Constant1_Value_abevpe4ykw > s61_iter - MIN_int32_T ) ) { qY = MIN_int32_T ;
} else { qY = s61_iter - rtP . Constant1_Value_abevpe4ykw ; } if ( qY >= qY_i
) { if ( ( s61_iter >= 0 ) && ( rtP . Constant1_Value_muv044ucpr < s61_iter -
MAX_int32_T ) ) { qY = MAX_int32_T ; } else if ( ( s61_iter < 0 ) && ( rtP .
Constant1_Value_muv044ucpr > s61_iter - MIN_int32_T ) ) { qY = MIN_int32_T ;
} else { qY = s61_iter - rtP . Constant1_Value_muv044ucpr ; } if ( ( qY < 0 )
&& ( ( int32_T ) tmp_p < MIN_int32_T - qY ) ) { qY = MIN_int32_T ; } else if
( ( qY > 0 ) && ( ( int32_T ) tmp_p > MAX_int32_T - qY ) ) { qY = MAX_int32_T
; } else { qY += ( int32_T ) tmp_p ; } t = p1vowxt3lg [ qY - 1 ] ; } else { t
= rtP . Constant1_Value_eonicn22pt ; } if ( ( s61_iter < 0 ) && ( ( int32_T )
tmp_p < MIN_int32_T - s61_iter ) ) { qY = MIN_int32_T ; } else if ( (
s61_iter > 0 ) && ( ( int32_T ) tmp_p > MAX_int32_T - s61_iter ) ) { qY =
MAX_int32_T ; } else { qY = s61_iter + ( int32_T ) tmp_p ; } rtB . ee3rzr40lk
= p1vowxt3lg [ qY - 1 ] * rtB . c5rb4awtge - rtP . k1313_Value_aryoph4mav [ (
( qY_e - 1 ) * 13 + qY_p ) - 1 ] * t ; rtDW . atj4zyeuwz = 4 ; break ; } if (
( s61_iter < 0 ) && ( rtP . Constant_Value_l1rxm2iqrx < MIN_int32_T -
s61_iter ) ) { qY_e = MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( rtP .
Constant_Value_l1rxm2iqrx > MAX_int32_T - s61_iter ) ) { qY_e = MAX_int32_T ;
} else { qY_e = s61_iter + rtP . Constant_Value_l1rxm2iqrx ; } if ( ( qY_i <
0 ) && ( rtP . Constant_Value_l1rxm2iqrx < MIN_int32_T - qY_i ) ) { qY_p =
MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP . Constant_Value_l1rxm2iqrx >
MAX_int32_T - qY_i ) ) { qY_p = MAX_int32_T ; } else { qY_p = qY_i + rtP .
Constant_Value_l1rxm2iqrx ; } if ( rtDW . mcn2nlny2x [ 2 ] < 2 ) { rtDW .
mcn2nlny2x [ 2 ] = 2U ; memcpy ( & rtB . b4oxegn23q [ 0 ] , & mjfntwrie1 [ 0
] , 169U * sizeof ( real_T ) ) ; } rtB . b4oxegn23q [ ( qY_p + 13 * ( qY_e -
1 ) ) - 1 ] = rtB . pmvocf1tr2 ; if ( rtDW . mcn2nlny2x [ 3 ] < 2 ) { rtDW .
mcn2nlny2x [ 3 ] = 2U ; memcpy ( & rtB . il3cjwxqak [ 0 ] , & p1vowxt3lg [ 0
] , 169U * sizeof ( real_T ) ) ; } if ( ( qY_p >= 0 ) && ( rtP .
Constant_Value_jerlgz20x0 < qY_p - MAX_int32_T ) ) { qY = MAX_int32_T ; }
else if ( ( qY_p < 0 ) && ( rtP . Constant_Value_jerlgz20x0 > qY_p -
MIN_int32_T ) ) { qY = MIN_int32_T ; } else { qY = qY_p - rtP .
Constant_Value_jerlgz20x0 ; } tmp_p = ( int64_T ) rtP . Gain_Gain_cmqgiitizz
* qY ; if ( tmp_p > 2147483647LL ) { tmp_p = 2147483647LL ; } else if ( tmp_p
< - 2147483648LL ) { tmp_p = - 2147483648LL ; } if ( ( qY_e < 0 ) && ( (
int32_T ) tmp_p < MIN_int32_T - qY_e ) ) { qY = MIN_int32_T ; } else if ( (
qY_e > 0 ) && ( ( int32_T ) tmp_p > MAX_int32_T - qY_e ) ) { qY = MAX_int32_T
; } else { qY = qY_e + ( int32_T ) tmp_p ; } rtB . il3cjwxqak [ qY - 1 ] =
rtB . ee3rzr40lk ; rtDW . ojluwsc1jf = 4 ; } else if ( rtDW . kdr2nz0rqw ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtDW .
jeociud4e4 ) { case 0 : break ; case 1 : break ; case 2 : break ; } rtDW .
jeociud4e4 = - 1 ; rtDW . kdr2nz0rqw = false ; } } if ( ( qY_i < 0 ) && ( rtP
. Constant_Value_km0iozet3r < MIN_int32_T - qY_i ) ) { qY = MIN_int32_T ; }
else if ( ( qY_i > 0 ) && ( rtP . Constant_Value_km0iozet3r > MAX_int32_T -
qY_i ) ) { qY = MAX_int32_T ; } else { qY = qY_i + rtP .
Constant_Value_km0iozet3r ; } if ( ( s61_iter < 0 ) && ( rtP .
Constant_Value_km0iozet3r < MIN_int32_T - s61_iter ) ) { i = MIN_int32_T ; }
else if ( ( s61_iter > 0 ) && ( rtP . Constant_Value_km0iozet3r > MAX_int32_T
- s61_iter ) ) { i = MAX_int32_T ; } else { i = s61_iter + rtP .
Constant_Value_km0iozet3r ; } e4rajh1nbr_idx_1 = rtB . b4oxegn23q [ ( ( i - 1
) * 13 + qY ) - 1 ] ; if ( ( rtP . Constant_Value_ftllb4jlut < 0 ) && (
s61_iter < MIN_int32_T - rtP . Constant_Value_ftllb4jlut ) ) { qY_e =
MIN_int32_T ; } else if ( ( rtP . Constant_Value_ftllb4jlut > 0 ) && (
s61_iter > MAX_int32_T - rtP . Constant_Value_ftllb4jlut ) ) { qY_e =
MAX_int32_T ; } else { qY_e = rtP . Constant_Value_ftllb4jlut + s61_iter ; }
tmp_p = ( int64_T ) rtP . Gain_Gain_cltiwcup4r * qY_i ; if ( tmp_p >
2147483647LL ) { tmp_p = 2147483647LL ; } else if ( tmp_p < - 2147483648LL )
{ tmp_p = - 2147483648LL ; } if ( ( qY_e < 0 ) && ( ( int32_T ) tmp_p <
MIN_int32_T - qY_e ) ) { qY = MIN_int32_T ; } else if ( ( qY_e > 0 ) && ( (
int32_T ) tmp_p > MAX_int32_T - qY_e ) ) { qY = MAX_int32_T ; } else { qY =
qY_e + ( int32_T ) tmp_p ; } enptooxiqv = rtB . il3cjwxqak [ qY - 1 ] *
h0jfcu5ibu ; if ( ( qY_i < 0 ) && ( rtP . Constant1_Value_njihgedrec <
MIN_int32_T - qY_i ) ) { qY = MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP
. Constant1_Value_njihgedrec > MAX_int32_T - qY_i ) ) { qY = MAX_int32_T ; }
else { qY = qY_i + rtP . Constant1_Value_njihgedrec ; } g22d2szued = rtP .
fm_Value [ qY - 1 ] ; if ( ( s61_iter < 0 ) && ( rtP .
Constant1_Value_njihgedrec < MIN_int32_T - s61_iter ) ) { qY = MIN_int32_T ;
} else if ( ( s61_iter > 0 ) && ( rtP . Constant1_Value_njihgedrec >
MAX_int32_T - s61_iter ) ) { qY = MAX_int32_T ; } else { qY = s61_iter + rtP
. Constant1_Value_njihgedrec ; } scale = rtP . fn_Value [ qY - 1 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ( rtB . otveeadewh == rtP .
Constant1_Value_bjfvbmsu1y ) && ( rtP . Constant_Value_aoq5ryznz0 == qY_i ) )
{ if ( ! rtDW . oypsulirgi ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart
( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
oypsulirgi = true ; } memcpy ( & hnte2wplxz [ 0 ] , & rtDW . grmywfuesv [ 0 ]
, 13U * sizeof ( real_T ) ) ; rtPrevAction = rtDW . odz5nl0xv4 ; rtAction = (
int8_T ) ( s61_iter != 1 ) ; rtDW . odz5nl0xv4 = rtAction ; if ( rtPrevAction
!= rtAction ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch (
rtPrevAction ) { case 0 : break ; case 1 : break ; } } if ( rtAction == 0 ) {
if ( rtPrevAction != 0 ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( rtDW
. mcn2nlny2x [ 0 ] < 2 ) { rtDW . mcn2nlny2x [ 0 ] = 2U ; memcpy ( & rtB .
jya0ikumz1 [ 0 ] , & hnte2wplxz [ 0 ] , 13U * sizeof ( real_T ) ) ; } rtB .
jya0ikumz1 [ ( int32_T ) ( ( real_T ) s61_iter + rtP . Constant_Value ) - 1 ]
= hnte2wplxz [ s61_iter - 1 ] ; rtDW . hpyqqv1k12 = 4 ; } else { if (
rtPrevAction != 1 ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( rtDW .
mcn2nlny2x [ 1 ] < 2 ) { rtDW . mcn2nlny2x [ 1 ] = 2U ; memcpy ( & rtB .
chcizdalne [ 0 ] , & hnte2wplxz [ 0 ] , 13U * sizeof ( real_T ) ) ; } if ( (
s61_iter < 0 ) && ( rtP . Constant_Value_lqomsxrg4p < MIN_int32_T - s61_iter
) ) { qY = MIN_int32_T ; } else if ( ( s61_iter > 0 ) && ( rtP .
Constant_Value_lqomsxrg4p > MAX_int32_T - s61_iter ) ) { qY = MAX_int32_T ; }
else { qY = s61_iter + rtP . Constant_Value_lqomsxrg4p ; } if ( ( qY_i < 0 )
&& ( rtP . Constant_Value_d5ile1kluq < MIN_int32_T - qY_i ) ) { i =
MIN_int32_T ; } else if ( ( qY_i > 0 ) && ( rtP . Constant_Value_d5ile1kluq >
MAX_int32_T - qY_i ) ) { i = MAX_int32_T ; } else { i = qY_i + rtP .
Constant_Value_d5ile1kluq ; } if ( ( s61_iter < 0 ) && ( rtP .
Constant_Value_d5ile1kluq < MIN_int32_T - s61_iter ) ) { qY_i = MIN_int32_T ;
} else if ( ( s61_iter > 0 ) && ( rtP . Constant_Value_d5ile1kluq >
MAX_int32_T - s61_iter ) ) { qY_i = MAX_int32_T ; } else { qY_i = s61_iter +
rtP . Constant_Value_d5ile1kluq ; } if ( ( s61_iter >= 0 ) && ( rtP .
Constant1_Value_clgbhgeoat < s61_iter - MAX_int32_T ) ) { qY_e = MAX_int32_T
; } else if ( ( s61_iter < 0 ) && ( rtP . Constant1_Value_clgbhgeoat >
s61_iter - MIN_int32_T ) ) { qY_e = MIN_int32_T ; } else { qY_e = s61_iter -
rtP . Constant1_Value_clgbhgeoat ; } rtB . chcizdalne [ qY - 1 ] = hnte2wplxz
[ s61_iter - 1 ] * rtB . c5rb4awtge - rtP . k1313_Value [ ( ( qY_i - 1 ) * 13
+ i ) - 1 ] * hnte2wplxz [ qY_e - 1 ] ; rtDW . c2d0nllycq = 4 ; } rtB .
hyhd1echxt [ 0 ] = hnte2wplxz [ 0 ] ; rtB . hyhd1echxt [ 1 ] = rtB .
jya0ikumz1 [ 1 ] ; memcpy ( & rtB . hyhd1echxt [ 2 ] , & rtB . chcizdalne [ 2
] , 11U * sizeof ( real_T ) ) ; rtB . fo2axebq0e = rtB . hyhd1echxt [ (
int32_T ) ( ( real_T ) s61_iter + rtP . Constant1_Value ) - 1 ] * h0jfcu5ibu
* rtP . Constant_Value_csv3mn5y1r * absxk ; rtDW . ogav25z1tr = 4 ; } else if
( rtDW . oypsulirgi ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( rtDW .
odz5nl0xv4 ) { case 0 : break ; case 1 : break ; } rtDW . odz5nl0xv4 = - 1 ;
rtB . fo2axebq0e = rtP . bpp_Y0 ; rtDW . oypsulirgi = false ; } if ( rtDW .
atcpxiamp2 ) { memcpy ( & rtDW . gcujf31myd [ 0 ] , & rtB . e2n2dnhgeu [ 0 ]
, 169U * sizeof ( real_T ) ) ; memcpy ( & rtDW . mugz10zzsf [ 0 ] , & rtB .
dguvhjg5w4 [ 0 ] , 169U * sizeof ( real_T ) ) ; } if ( rtDW . kdr2nz0rqw ) {
memcpy ( & rtDW . f1engf53mb [ 0 ] , & rtB . b4oxegn23q [ 0 ] , 169U * sizeof
( real_T ) ) ; memcpy ( & rtDW . mvzvd4lhhp [ 0 ] , & rtB . il3cjwxqak [ 0 ]
, 169U * sizeof ( real_T ) ) ; } if ( rtDW . oypsulirgi ) { memcpy ( & rtDW .
grmywfuesv [ 0 ] , & rtB . hyhd1echxt [ 0 ] , 13U * sizeof ( real_T ) ) ; } }
rtB . i34dkicmu2 = rtDW . mhkwgq1w1q - civlijdkfz * e4rajh1nbr_idx_1 *
h0jfcu5ibu ; rtB . ebidgssiv2 = enptooxiqv * g22d2szued * absxk + rtDW .
oz0kfzg1gx ; rtB . isabtmvvhz = enptooxiqv * scale * civlijdkfz + rtDW .
nupgl2tg0v ; rtB . b4hzfbcxpg = rtDW . adsttvgd3w + rtB . fo2axebq0e ; rtDW .
mhkwgq1w1q = rtB . i34dkicmu2 ; rtDW . oz0kfzg1gx = rtB . ebidgssiv2 ; rtDW .
nupgl2tg0v = rtB . isabtmvvhz ; rtDW . adsttvgd3w = rtB . b4hzfbcxpg ; rtDW .
dojjho4dgz = 4 ; } } rtB . ghxiy1odi5 [ 0 ] = rtDW . m0obf4a2df [ 0 ] + rtB .
i34dkicmu2 ; rtB . ghxiy1odi5 [ 1 ] = rtDW . m0obf4a2df [ 1 ] + rtB .
ebidgssiv2 ; rtB . ghxiy1odi5 [ 2 ] = rtDW . m0obf4a2df [ 2 ] + rtB .
isabtmvvhz ; rtB . ghxiy1odi5 [ 3 ] = rtDW . m0obf4a2df [ 3 ] + rtB .
b4hzfbcxpg ; rtDW . netfpjoud1 = h0jfcu5ibu ; rtDW . m0obf4a2df [ 0 ] = rtB .
ghxiy1odi5 [ 0 ] ; rtDW . m0obf4a2df [ 1 ] = rtB . ghxiy1odi5 [ 1 ] ; rtDW .
m0obf4a2df [ 2 ] = rtB . ghxiy1odi5 [ 2 ] ; rtDW . m0obf4a2df [ 3 ] = rtB .
ghxiy1odi5 [ 3 ] ; } } if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW .
izffr0xyvb = ( rtB . otveeadewh != 0.0 ) ; } if ( rtDW . izffr0xyvb ) { rtB .
ilabbmgpcv = rtB . ghxiy1odi5 [ 1 ] / rtB . otveeadewh ; rtB . pwovodyiox =
rtB . ilabbmgpcv ; } else { rtB . pwovodyiox = rtB . ghxiy1odi5 [ 3 ] ; } rtB
. he4pojjqgc = rtB . lpqulyeqtp * rtB . ghxiy1odi5 [ 0 ] ; rtB . bb4j1hqizb =
rtB . ghxiy1odi5 [ 2 ] * rtB . l2bs43i4ov ; rtB . ax2wd3o5ds = ( 0.0 - rtB .
he4pojjqgc ) - rtB . bb4j1hqizb ; ahxzc3aa1u = muDoubleScalarAtan2 ( rtB .
pwovodyiox , rtB . ax2wd3o5ds ) ; rtB . mvzbhjvzdu = rtB . l2bs43i4ov * rtB .
ghxiy1odi5 [ 0 ] ; rtB . h0pd4ejw0n = rtB . ghxiy1odi5 [ 2 ] * rtB .
lpqulyeqtp ; rtB . c3r4bgkeut = rtB . mvzbhjvzdu - rtB . h0pd4ejw0n ; rtB .
ejj2ps3lxp = rtB . pwovodyiox * rtB . pwovodyiox ; rtB . fbvhmnd1ae = rtB .
ax2wd3o5ds * rtB . ax2wd3o5ds ; rtB . i2fnkzdzvz = rtB . ejj2ps3lxp + rtB .
fbvhmnd1ae ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . ezsdw3knjx != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
ezsdw3knjx = 0 ; } h0jfcu5ibu = muDoubleScalarSqrt ( rtB . i2fnkzdzvz ) ; }
else { if ( rtB . i2fnkzdzvz < 0.0 ) { h0jfcu5ibu = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . i2fnkzdzvz ) ) ; } else { h0jfcu5ibu =
muDoubleScalarSqrt ( rtB . i2fnkzdzvz ) ; } if ( rtB . i2fnkzdzvz < 0.0 ) {
rtDW . ezsdw3knjx = 1 ; } } muDoubleScalarSinCos ( 0.017453292519943295 * (
57.295779513082323 * ahxzc3aa1u ) , & civlijdkfz , & m31egxeksf_idx_1 ) ;
muDoubleScalarSinCos ( 0.017453292519943295 * ( 57.295779513082323 *
muDoubleScalarAtan2 ( rtB . c3r4bgkeut , h0jfcu5ibu ) ) , & fx0x1gsshy_idx_1
, & fd351szxra_idx_1 ) ; rtB . ez4jvvdcb3 = rtB . c3r4bgkeut * rtB .
c3r4bgkeut ; rtB . mp0qqfeo1n = rtB . ez4jvvdcb3 + rtB . i2fnkzdzvz ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . bpx5osf5ip != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; rtDW .
bpx5osf5ip = 0 ; } ahxzc3aa1u = muDoubleScalarSqrt ( rtB . mp0qqfeo1n ) ; }
else { if ( rtB . mp0qqfeo1n < 0.0 ) { ahxzc3aa1u = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . mp0qqfeo1n ) ) ; } else { ahxzc3aa1u =
muDoubleScalarSqrt ( rtB . mp0qqfeo1n ) ; } if ( rtB . mp0qqfeo1n < 0.0 ) {
rtDW . bpx5osf5ip = 1 ; } } rtB . dyn3airtrr = fd351szxra_idx_1 * ahxzc3aa1u
; rtB . fs2ifagbrz = m31egxeksf_idx_1 * rtB . dyn3airtrr ; rtB . pxmhaqxtif =
civlijdkfz * rtB . dyn3airtrr ; rtB . b5ruxxfymn = fx0x1gsshy_idx_1 *
ahxzc3aa1u ; rtB . hb23mqgm5a [ 0 ] = rtP . nTtoT_Gain * rtB . fs2ifagbrz ;
rtB . hb23mqgm5a [ 1 ] = rtP . nTtoT_Gain * rtB . pxmhaqxtif ; rtB .
hb23mqgm5a [ 2 ] = rtP . nTtoT_Gain * rtB . b5ruxxfymn ; rtB . lqpyjun2rj [ 0
] = rtB . feljxtfwu5 [ 1 ] * rtB . hb23mqgm5a [ 2 ] ; rtB . lqpyjun2rj [ 1 ]
= rtB . hb23mqgm5a [ 0 ] * rtB . feljxtfwu5 [ 2 ] ; rtB . lqpyjun2rj [ 2 ] =
rtB . feljxtfwu5 [ 0 ] * rtB . hb23mqgm5a [ 1 ] ; rtB . lqpyjun2rj [ 3 ] =
rtB . hb23mqgm5a [ 1 ] * rtB . feljxtfwu5 [ 2 ] ; rtB . lqpyjun2rj [ 4 ] =
rtB . feljxtfwu5 [ 0 ] * rtB . hb23mqgm5a [ 2 ] ; rtB . lqpyjun2rj [ 5 ] =
rtB . hb23mqgm5a [ 0 ] * rtB . feljxtfwu5 [ 1 ] ; rtB . ax2kz3kcjb [ 0 ] =
rtB . lqpyjun2rj [ 0 ] - rtB . lqpyjun2rj [ 3 ] ; rtB . ax2kz3kcjb [ 1 ] =
rtB . lqpyjun2rj [ 1 ] - rtB . lqpyjun2rj [ 4 ] ; rtB . ax2kz3kcjb [ 2 ] =
rtB . lqpyjun2rj [ 2 ] - rtB . lqpyjun2rj [ 5 ] ; ahxzc3aa1u = rtB .
ax2kz3kcjb [ 1 ] ; enptooxiqv = rtB . ax2kz3kcjb [ 0 ] ; e4rajh1nbr_idx_1 =
rtB . ax2kz3kcjb [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { fx0x1gsshy_idx_1 = (
rtP . Cb_ECI [ i + 3 ] * ahxzc3aa1u + rtP . Cb_ECI [ i ] * enptooxiqv ) + rtP
. Cb_ECI [ i + 6 ] * e4rajh1nbr_idx_1 ; rtB . lbfme3rbjh [ i ] =
fx0x1gsshy_idx_1 ; rtB . czioyjd4u3 [ i + 9 ] = fx0x1gsshy_idx_1 ; } rtDW .
irns0a4kt4 = c2vxeytp5a ; jjofqy2myg [ 0 ] = - rtP . k * rtB . hbvbdloscq [ 0
] * 0.0 ; jjofqy2myg [ 1 ] = - rtP . k * rtB . hbvbdloscq [ 1 ] * 0.0 ;
jjofqy2myg [ 2 ] = - rtP . k * rtB . hbvbdloscq [ 2 ] * 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ! ( rtB . isxhnmoqsd != 0.0 ) ) { S =
rtS ; diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" ,
2 , 5 ,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/ECI Position to LLA/Check deltaT/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } if ( ! ( rtB . l0kin5hnea != 0.0 ) ) { S
= rtS ; diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert"
, 2 , 5 ,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/ECI Position to LLA/Direction Cosine Matrix ECI to ECEF/Check deltaT/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . o3l0fvabaz = ( rtP . CheckAltitude_min <= rtB . aewg4wr5gf ) ; rtDW .
pph5gzcq13 = ( rtB . aewg4wr5gf <= rtP . CheckAltitude_max ) ; } if ( ( !
rtDW . o3l0fvabaz ) || ( ! rtDW . pph5gzcq13 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/Check Altitude/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . o1h3l12sv1 = ( rtP . CheckLatitude_min <= rtB . f4ayqsk2ze [ 0 ] ) ;
rtDW . ohseta3i1a = ( rtB . f4ayqsk2ze [ 0 ] <= rtP . CheckLatitude_max ) ; }
if ( ( ! rtDW . o1h3l12sv1 ) || ( ! rtDW . ohseta3i1a ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/Check Latitude/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . pvgpa4cqis = ( rtP . CheckLongitude_min <= rtB . f4ayqsk2ze [ 1 ] ) ;
rtDW . mqaikwvoz0 = ( rtB . f4ayqsk2ze [ 1 ] <= rtP . CheckLongitude_max ) ;
} if ( ( ! rtDW . pvgpa4cqis ) || ( ! rtDW . mqaikwvoz0 ) ) { S = rtS ; diag
= CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/Check Longitude/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) &&
( ( ! ( rtP . Istimewithinmodellimits_min <= rtB . jnood2r1kz ) ) || ( ! (
rtB . jnood2r1kz <= rtP . Istimewithinmodellimits_max ) ) ) ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/Is time within model limits/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } rtDW . magaskumor = c2vxeytp5a ;
lhamlihs4e [ 0 ] = rtB . hbvbdloscq [ 0 ] ; lhamlihs4e [ 1 ] = rtB .
hbvbdloscq [ 1 ] ; lhamlihs4e [ 2 ] = rtB . hbvbdloscq [ 2 ] ; memcpy ( &
Cb_LVLH [ 0 ] , & rtP . J . normal [ 0 ] , 9U * sizeof ( real_T ) ) ; p1 = 0
; p2 = 3 ; s61_iter = 6 ; ahxzc3aa1u = muDoubleScalarAbs ( rtP . J . normal [
0 ] ) ; h0jfcu5ibu = muDoubleScalarAbs ( rtP . J . normal [ 1 ] ) ;
civlijdkfz = muDoubleScalarAbs ( rtP . J . normal [ 2 ] ) ; if ( ( h0jfcu5ibu
> ahxzc3aa1u ) && ( h0jfcu5ibu > civlijdkfz ) ) { p1 = 3 ; p2 = 0 ; Cb_LVLH [
0 ] = rtP . J . normal [ 1 ] ; Cb_LVLH [ 1 ] = rtP . J . normal [ 0 ] ;
Cb_LVLH [ 3 ] = rtP . J . normal [ 4 ] ; Cb_LVLH [ 4 ] = rtP . J . normal [ 3
] ; Cb_LVLH [ 6 ] = rtP . J . normal [ 7 ] ; Cb_LVLH [ 7 ] = rtP . J . normal
[ 6 ] ; } else if ( civlijdkfz > ahxzc3aa1u ) { p1 = 6 ; s61_iter = 0 ;
Cb_LVLH [ 0 ] = rtP . J . normal [ 2 ] ; Cb_LVLH [ 2 ] = rtP . J . normal [ 0
] ; Cb_LVLH [ 3 ] = rtP . J . normal [ 5 ] ; Cb_LVLH [ 5 ] = rtP . J . normal
[ 3 ] ; Cb_LVLH [ 6 ] = rtP . J . normal [ 8 ] ; Cb_LVLH [ 8 ] = rtP . J .
normal [ 6 ] ; } Cb_LVLH [ 1 ] /= Cb_LVLH [ 0 ] ; Cb_LVLH [ 2 ] /= Cb_LVLH [
0 ] ; Cb_LVLH [ 4 ] -= Cb_LVLH [ 1 ] * Cb_LVLH [ 3 ] ; Cb_LVLH [ 5 ] -=
Cb_LVLH [ 2 ] * Cb_LVLH [ 3 ] ; Cb_LVLH [ 7 ] -= Cb_LVLH [ 1 ] * Cb_LVLH [ 6
] ; Cb_LVLH [ 8 ] -= Cb_LVLH [ 2 ] * Cb_LVLH [ 6 ] ; if ( muDoubleScalarAbs (
Cb_LVLH [ 5 ] ) > muDoubleScalarAbs ( Cb_LVLH [ 4 ] ) ) { s110_iter = p2 ; p2
= s61_iter ; s61_iter = s110_iter ; ahxzc3aa1u = Cb_LVLH [ 1 ] ; Cb_LVLH [ 1
] = Cb_LVLH [ 2 ] ; Cb_LVLH [ 2 ] = ahxzc3aa1u ; ahxzc3aa1u = Cb_LVLH [ 4 ] ;
Cb_LVLH [ 4 ] = Cb_LVLH [ 5 ] ; Cb_LVLH [ 5 ] = ahxzc3aa1u ; ahxzc3aa1u =
Cb_LVLH [ 7 ] ; Cb_LVLH [ 7 ] = Cb_LVLH [ 8 ] ; Cb_LVLH [ 8 ] = ahxzc3aa1u ;
} Cb_LVLH [ 5 ] /= Cb_LVLH [ 4 ] ; Cb_LVLH [ 8 ] -= Cb_LVLH [ 5 ] * Cb_LVLH [
7 ] ; ahxzc3aa1u = ( Cb_LVLH [ 1 ] * Cb_LVLH [ 5 ] - Cb_LVLH [ 2 ] ) /
Cb_LVLH [ 8 ] ; h0jfcu5ibu = - ( Cb_LVLH [ 7 ] * ahxzc3aa1u + Cb_LVLH [ 1 ] )
/ Cb_LVLH [ 4 ] ; a [ p1 ] = ( ( 1.0 - Cb_LVLH [ 3 ] * h0jfcu5ibu ) - Cb_LVLH
[ 6 ] * ahxzc3aa1u ) / Cb_LVLH [ 0 ] ; a [ p1 + 1 ] = h0jfcu5ibu ; a [ p1 + 2
] = ahxzc3aa1u ; ahxzc3aa1u = - Cb_LVLH [ 5 ] / Cb_LVLH [ 8 ] ; h0jfcu5ibu =
( 1.0 - Cb_LVLH [ 7 ] * ahxzc3aa1u ) / Cb_LVLH [ 4 ] ; a [ p2 ] = - ( Cb_LVLH
[ 3 ] * h0jfcu5ibu + Cb_LVLH [ 6 ] * ahxzc3aa1u ) / Cb_LVLH [ 0 ] ; a [ p2 +
1 ] = h0jfcu5ibu ; a [ p2 + 2 ] = ahxzc3aa1u ; ahxzc3aa1u = 1.0 / Cb_LVLH [ 8
] ; h0jfcu5ibu = - Cb_LVLH [ 7 ] * ahxzc3aa1u / Cb_LVLH [ 4 ] ; a [ s61_iter
] = - ( Cb_LVLH [ 3 ] * h0jfcu5ibu + Cb_LVLH [ 6 ] * ahxzc3aa1u ) / Cb_LVLH [
0 ] ; a [ s61_iter + 1 ] = h0jfcu5ibu ; a [ s61_iter + 2 ] = ahxzc3aa1u ;
g22d2szued = 1.0 / muDoubleScalarCos ( rtB . hbvbdloscq [ 4 ] ) ; t = rtB .
hbvbdloscq [ 9 ] ; x_p [ 0 ] = 0.0 ; x_p [ 3 ] = - rtB . hbvbdloscq [ 8 ] ;
x_p [ 6 ] = rtB . hbvbdloscq [ 7 ] ; x_p [ 1 ] = rtB . hbvbdloscq [ 8 ] ; x_p
[ 4 ] = 0.0 ; x_p [ 7 ] = - rtB . hbvbdloscq [ 6 ] ; x_p [ 2 ] = - rtB .
hbvbdloscq [ 7 ] ; x_p [ 5 ] = rtB . hbvbdloscq [ 6 ] ; x_p [ 8 ] = 0.0 ; for
( qY = 0 ; qY < 9 ; qY ++ ) { Cb_LVLH [ qY ] = ( t * ( real_T ) b [ qY ] +
x_p [ qY ] ) * 0.5 ; } x [ 0 ] = rtB . hbvbdloscq [ 10 ] ; x [ 1 ] = rtB .
hbvbdloscq [ 11 ] ; x [ 2 ] = rtB . hbvbdloscq [ 12 ] ; ahxzc3aa1u = 0.0 ;
scale = 3.3121686421112381E-170 ; newstate [ 0 ] = rtB . hbvbdloscq [ 13 ] ;
newstate [ 1 ] = rtB . hbvbdloscq [ 14 ] ; newstate [ 2 ] = rtB . hbvbdloscq
[ 15 ] ; enptooxiqv = rtB . hbvbdloscq [ 1 ] ; e4rajh1nbr_idx_1 = rtB .
hbvbdloscq [ 0 ] ; fx0x1gsshy_idx_1 = rtB . hbvbdloscq [ 2 ] ; for ( s61_iter
= 0 ; s61_iter < 3 ; s61_iter ++ ) { depsilon [ s61_iter ] = ( Cb_LVLH [
s61_iter + 3 ] * enptooxiqv + Cb_LVLH [ s61_iter ] * e4rajh1nbr_idx_1 ) +
Cb_LVLH [ s61_iter + 6 ] * fx0x1gsshy_idx_1 ; absxk = muDoubleScalarAbs ( x [
s61_iter ] ) ; if ( absxk > scale ) { t = scale / absxk ; ahxzc3aa1u =
ahxzc3aa1u * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ;
ahxzc3aa1u += t * t ; } x [ s61_iter ] = rtB . hbvbdloscq [ s61_iter + 6 ] ;
} ahxzc3aa1u = scale * muDoubleScalarSqrt ( ahxzc3aa1u ) ; newstate [ 3 ] = -
rtP . mu * rtB . hbvbdloscq [ 10 ] / muDoubleScalarPower ( ahxzc3aa1u , 3.0 )
; newstate [ 4 ] = - rtP . mu * rtB . hbvbdloscq [ 11 ] / muDoubleScalarPower
( ahxzc3aa1u , 3.0 ) ; newstate [ 5 ] = - rtP . mu * rtB . hbvbdloscq [ 12 ]
/ muDoubleScalarPower ( ahxzc3aa1u , 3.0 ) ; ahxzc3aa1u = rtB . hbvbdloscq [
9 ] * rtB . hbvbdloscq [ 9 ] * 2.0 - 1.0 ; h0jfcu5ibu = 2.0 * rtB .
hbvbdloscq [ 9 ] ; for ( qY = 0 ; qY < 3 ; qY ++ ) { x_p [ 3 * qY ] = x [ 0 ]
* x [ qY ] ; x_p [ 3 * qY + 1 ] = x [ 1 ] * x [ qY ] ; x_p [ 3 * qY + 2 ] = x
[ 2 ] * x [ qY ] ; } bqhmpz5uis [ 0 ] = h0jfcu5ibu * 0.0 ; bqhmpz5uis [ 3 ] =
h0jfcu5ibu * - rtB . hbvbdloscq [ 8 ] ; bqhmpz5uis [ 6 ] = h0jfcu5ibu * rtB .
hbvbdloscq [ 7 ] ; bqhmpz5uis [ 1 ] = h0jfcu5ibu * rtB . hbvbdloscq [ 8 ] ;
bqhmpz5uis [ 4 ] = h0jfcu5ibu * 0.0 ; bqhmpz5uis [ 7 ] = h0jfcu5ibu * - rtB .
hbvbdloscq [ 6 ] ; bqhmpz5uis [ 2 ] = h0jfcu5ibu * - rtB . hbvbdloscq [ 7 ] ;
bqhmpz5uis [ 5 ] = h0jfcu5ibu * rtB . hbvbdloscq [ 6 ] ; bqhmpz5uis [ 8 ] =
h0jfcu5ibu * 0.0 ; for ( qY = 0 ; qY < 9 ; qY ++ ) { Cb_LVLH [ qY ] = (
ahxzc3aa1u * ( real_T ) b [ qY ] + 2.0 * x_p [ qY ] ) - bqhmpz5uis [ qY ] ; }
x_p [ 0 ] = 0.0 ; x_p [ 3 ] = - rtB . hbvbdloscq [ 2 ] ; x_p [ 6 ] = rtB .
hbvbdloscq [ 1 ] ; x_p [ 1 ] = rtB . hbvbdloscq [ 2 ] ; x_p [ 4 ] = 0.0 ; x_p
[ 7 ] = - rtB . hbvbdloscq [ 0 ] ; x_p [ 2 ] = - rtB . hbvbdloscq [ 1 ] ; x_p
[ 5 ] = rtB . hbvbdloscq [ 0 ] ; x_p [ 8 ] = 0.0 ; for ( qY = 0 ; qY < 3 ; qY
++ ) { t = 0.0 ; scale = x_p [ qY + 3 ] ; absxk = x_p [ qY ] ; h0jfcu5ibu =
x_p [ qY + 6 ] ; for ( i = 0 ; i < 3 ; i ++ ) { t += ( ( rtP . J . normal [ 3
* i + 1 ] * scale + rtP . J . normal [ 3 * i ] * absxk ) + rtP . J . normal [
3 * i + 2 ] * h0jfcu5ibu ) * lhamlihs4e [ i ] ; } x [ qY ] = ( ( ( ( rtB .
czioyjd4u3 [ qY + 3 ] + rtB . czioyjd4u3 [ qY ] ) + rtB . czioyjd4u3 [ qY + 6
] ) + rtB . czioyjd4u3 [ qY + 9 ] ) + jjofqy2myg [ qY ] ) - t ; } t = x [ 1 ]
; scale = x [ 0 ] ; absxk = x [ 2 ] ; for ( qY = 0 ; qY < 3 ; qY ++ ) {
jjofqy2myg [ qY ] = ( a [ qY + 3 ] * t + a [ qY ] * scale ) + a [ qY + 6 ] *
absxk ; } a [ 0 ] = g22d2szued * muDoubleScalarCos ( rtB . hbvbdloscq [ 4 ] )
; a [ 3 ] = muDoubleScalarSin ( rtB . hbvbdloscq [ 3 ] ) * muDoubleScalarSin
( rtB . hbvbdloscq [ 4 ] ) * g22d2szued ; a [ 6 ] = muDoubleScalarCos ( rtB .
hbvbdloscq [ 3 ] ) * muDoubleScalarSin ( rtB . hbvbdloscq [ 4 ] ) *
g22d2szued ; a [ 1 ] = g22d2szued * 0.0 ; a [ 4 ] = muDoubleScalarCos ( rtB .
hbvbdloscq [ 3 ] ) * muDoubleScalarCos ( rtB . hbvbdloscq [ 4 ] ) *
g22d2szued ; a [ 7 ] = - muDoubleScalarSin ( rtB . hbvbdloscq [ 3 ] ) *
muDoubleScalarCos ( rtB . hbvbdloscq [ 4 ] ) * g22d2szued ; a [ 2 ] =
g22d2szued * 0.0 ; a [ 5 ] = g22d2szued * muDoubleScalarSin ( rtB .
hbvbdloscq [ 3 ] ) ; a [ 8 ] = g22d2szued * muDoubleScalarCos ( rtB .
hbvbdloscq [ 3 ] ) ; x [ 0 ] = - 0.5 * rtB . hbvbdloscq [ 6 ] ; x [ 1 ] = -
0.5 * rtB . hbvbdloscq [ 7 ] ; x [ 2 ] = - 0.5 * rtB . hbvbdloscq [ 8 ] ; t =
0.0 ; for ( qY = 0 ; qY < 3 ; qY ++ ) { dm55klizel [ qY ] = ( a [ qY + 3 ] *
lhamlihs4e [ 1 ] + a [ qY ] * lhamlihs4e [ 0 ] ) + a [ qY + 6 ] * lhamlihs4e
[ 2 ] ; t += x [ qY ] * lhamlihs4e [ qY ] ; } rtB . jqtaqqwoi5 [ 6 ] =
depsilon [ 0 ] ; rtB . jqtaqqwoi5 [ 7 ] = depsilon [ 1 ] ; rtB . jqtaqqwoi5 [
8 ] = depsilon [ 2 ] ; rtB . jqtaqqwoi5 [ 9 ] = t ; for ( qY = 0 ; qY < 3 ;
qY ++ ) { ahxzc3aa1u = Cb_LVLH [ qY ] ; enptooxiqv = Cb_LVLH [ qY + 3 ] ;
e4rajh1nbr_idx_1 = Cb_LVLH [ qY + 6 ] ; fx0x1gsshy_idx_1 = 0.0 ;
fd351szxra_idx_1 = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { h0jfcu5ibu = rtP .
C_LVLH_ECI [ 3 * i ] ; civlijdkfz = ahxzc3aa1u * h0jfcu5ibu ;
m31egxeksf_idx_1 = ahxzc3aa1u * h0jfcu5ibu ; h0jfcu5ibu = rtP . C_LVLH_ECI [
3 * i + 1 ] ; civlijdkfz += enptooxiqv * h0jfcu5ibu ; m31egxeksf_idx_1 +=
enptooxiqv * h0jfcu5ibu ; h0jfcu5ibu = rtP . C_LVLH_ECI [ 3 * i + 2 ] ;
civlijdkfz += e4rajh1nbr_idx_1 * h0jfcu5ibu ; m31egxeksf_idx_1 +=
e4rajh1nbr_idx_1 * h0jfcu5ibu ; fx0x1gsshy_idx_1 += civlijdkfz * newstate [ i
] ; fd351szxra_idx_1 += newstate [ i + 3 ] * m31egxeksf_idx_1 ; } rtB .
jqtaqqwoi5 [ qY ] = jjofqy2myg [ qY ] ; rtB . jqtaqqwoi5 [ qY + 3 ] =
dm55klizel [ qY ] ; rtB . jqtaqqwoi5 [ qY + 10 ] = fx0x1gsshy_idx_1 ; rtB .
jqtaqqwoi5 [ qY + 13 ] = fd351szxra_idx_1 ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { real_T em0up00xdc [ 4 ] ; real_T
m_b_Value ; real_T m_b_Value_e ; real_T m_b_Value_p ; int32_T i ; rtB .
isxhnmoqsd = ( ( ! ( rtP . CheckdeltaT_minmax [ 0 ] > 0.0 ) ) && ( ! ( rtP .
CheckdeltaT_minmax [ 1 ] < 0.0 ) ) ) ; rtB . l0kin5hnea = ( ( ! ( rtP .
CheckdeltaT_minmax_envwls20re [ 0 ] > 0.0 ) ) && ( ! ( rtP .
CheckdeltaT_minmax_envwls20re [ 1 ] < 0.0 ) ) ) ; em0up00xdc [ 0 ] = rtP .
sec2_Value [ 0 ] ; em0up00xdc [ 1 ] = rtP . sec2_Value [ 1 ] ; em0up00xdc [ 2
] = rtP . sec2_Value [ 2 ] ; em0up00xdc [ 3 ] = rtP . sec2_Value [ 3 ] ;
em0up00xdc [ ( int32_T ) rtP . Index_Value - 1 ] = 0.0 ; rtB . kaz5v044bj [ 0
] = rtP . JulianDateConversion_day + em0up00xdc [ 0 ] ; rtB . kaz5v044bj [ 1
] = rtP . ECIPositiontoLLA_hour + em0up00xdc [ 1 ] ; rtB . kaz5v044bj [ 2 ] =
rtP . ECIPositiontoLLA_min + em0up00xdc [ 2 ] ; rtB . kaz5v044bj [ 3 ] = rtP
. JulianDateConversion_sec + em0up00xdc [ 3 ] ; rtB . ccw42d13yf = ( ( rtP .
Gain5_Gain_ir3vfx5fun * rtB . kaz5v044bj [ 2 ] + rtB . kaz5v044bj [ 1 ] ) +
rtP . Gain6_Gain * rtB . kaz5v044bj [ 3 ] ) * rtP . Gain4_Gain_lerancnrg0 ;
rtB . gx2wbcyjkr = ( rtP . ECIPositiontoLLA_sec + rtP . Bias_Bias_jmbkqzbdzr
) * rtP . secGain_Gain ; em0up00xdc [ 0 ] = rtP . sec2_Value_lmruwtlqrb [ 0 ]
; em0up00xdc [ 1 ] = rtP . sec2_Value_lmruwtlqrb [ 1 ] ; em0up00xdc [ 2 ] =
rtP . sec2_Value_lmruwtlqrb [ 2 ] ; em0up00xdc [ 3 ] = rtP .
sec2_Value_lmruwtlqrb [ 3 ] ; em0up00xdc [ ( int32_T ) rtP .
Index_Value_bfnfqkorro - 1 ] = 0.0 ; rtB . gqlueshzcr [ 0 ] = rtP .
JulianDateConversion_day_gmwb3op4jp + em0up00xdc [ 0 ] ; rtB . gqlueshzcr [ 1
] = rtP . ECIPositiontoLLA_hour + em0up00xdc [ 1 ] ; rtB . gqlueshzcr [ 2 ] =
rtP . ECIPositiontoLLA_min + em0up00xdc [ 2 ] ; rtB . gqlueshzcr [ 3 ] = rtP
. JulianDateConversion_sec_n54k2ymjb5 + em0up00xdc [ 3 ] ; rtB . fz40ghtjdv =
( ( rtP . Gain5_Gain_lzwhfe5gdm * rtB . gqlueshzcr [ 2 ] + rtB . gqlueshzcr [
1 ] ) + rtP . Gain6_Gain_cpux0up33m * rtB . gqlueshzcr [ 3 ] ) * rtP .
Gain4_Gain_am01oimejx ; rtB . h4obpjtzxu = rtP . gainVal_Gain * rtP .
ECIPositiontoLLA_sec ; memcpy ( & rtB . ljqkwpwmre [ 0 ] , & rtP .
Constant_Value_edl51wqsfm [ 198 ] , 528U * sizeof ( real_T ) ) ; memcpy ( &
rtB . k2lhbqlojh [ 0 ] , & rtP . Constant_Value_edl51wqsfm [ 66 ] , 66U *
sizeof ( real_T ) ) ; memcpy ( & rtB . l4axxmgncw [ 0 ] , & rtP .
Constant_Value_edl51wqsfm [ 132 ] , 66U * sizeof ( real_T ) ) ; memcpy ( &
rtB . glwb23azae [ 0 ] , & rtP . Constant_Value_cehvishv4i [ 4800 ] , 22400U
* sizeof ( real_T ) ) ; memcpy ( & rtB . gdbahczf45 [ 0 ] , & rtP .
Constant_Value_cehvishv4i [ 1600 ] , 1600U * sizeof ( real_T ) ) ; memcpy ( &
rtB . byd5egtmb2 [ 0 ] , & rtP . Constant_Value_cehvishv4i [ 3200 ] , 1600U *
sizeof ( real_T ) ) ; memcpy ( & rtB . g5ynytyo0h [ 0 ] , & rtP .
Constant_Value_a4ivvroqdq [ 3825 ] , 17850U * sizeof ( real_T ) ) ; memcpy (
& rtB . hv2iutsstt [ 0 ] , & rtP . Constant_Value_a4ivvroqdq [ 1275 ] , 1275U
* sizeof ( real_T ) ) ; memcpy ( & rtB . nadmkzwk2q [ 0 ] , & rtP .
Constant_Value_a4ivvroqdq [ 2550 ] , 1275U * sizeof ( real_T ) ) ; rtB .
iokseplynh [ 0 ] = rtP . Gain1_Gain_gkqsta5bk2 * 0.0 ; rtB . iokseplynh [ 1 ]
= rtP . Gain1_Gain_gkqsta5bk2 * 0.0 ; m_b_Value = rtP . m_b_Value [ 1 ] ;
m_b_Value_p = rtP . m_b_Value [ 0 ] ; m_b_Value_e = rtP . m_b_Value [ 2 ] ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . feljxtfwu5 [ i ] = ( rtP .
Gain1_Gain_iqmlteyir0 [ i + 3 ] * m_b_Value + rtP . Gain1_Gain_iqmlteyir0 [ i
] * m_b_Value_p ) + rtP . Gain1_Gain_iqmlteyir0 [ i + 6 ] * m_b_Value_e ; }
rtB . cukuluwn11 = rtP . a_Value * rtP . a_Value ; rtB . i24o4k5fba = rtP .
b_Value * rtP . b_Value ; rtB . l0urs01onp = rtB . cukuluwn11 - rtB .
i24o4k5fba ; rtB . e2ggxcowq2 = rtB . cukuluwn11 * rtB . cukuluwn11 ; rtB .
pkjalnzw53 = rtB . e2ggxcowq2 - rtB . i24o4k5fba * rtB . i24o4k5fba ; rtB .
ammr4ytkw1 = rtB . cukuluwn11 - rtB . i24o4k5fba ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { srUpdateBC ( rtDW . ijbym44xcu ) ;
srUpdateBC ( rtDW . oqz2wa1us5 ) ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW .
ftdnlxu5eu = rtB . kytqfr5cmt ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW
. jsse3tis1w = rtB . f4ydplcff4 ; rtDW . am4ilc4itb = rtB . ko0umezivk ; rtDW
. memp4ggvk1 = rtB . kywdgcrg2n ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; memcpy ( & _rtXdot -> jcbqkhpdfi [ 0 ] , & rtB . jqtaqqwoi5 [ 0 ] ,
sizeof ( real_T ) << 4U ) ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> ogo5oqmoc1 = rtB .
f4ayqsk2ze [ 0 ] ; _rtZCSV -> aekyf1ncnl = rtB . jhyk5cyvgo - rtP .
CompareToConstant_const_acmh2i3ocd ; _rtZCSV -> d1cwdtecpi = rtB . dctl3otdrl
; _rtZCSV -> espus4a1t1 = rtB . br2bwcgt5b - rtP . CompareToConstant_const ;
_rtZCSV -> kjdhx1xl42 = rtB . lj20pakho0 ; _rtZCSV -> cnovkz01r3 = rtB .
emi51gcsdm - rtP . CompareToConstant_const_p1pgipjfy5 ; _rtZCSV -> jthjd4s4hn
= rtB . dctl3otdrl ; _rtZCSV -> l2w5tkbm5c = rtB . f4ydplcff4 - rtB .
nj4s45p4ic ; _rtZCSV -> lmxxvbxiyr = rtB . ko0umezivk - rtB . gkgpps4vtt ;
_rtZCSV -> jfgu20hphn = rtB . kywdgcrg2n - rtB . he3zov4zzu ; _rtZCSV ->
czp5idu5se = rtB . otveeadewh ; _rtZCSV -> be0s5qbax2 = rtP .
CheckAltitude_min - rtB . aewg4wr5gf ; _rtZCSV -> mwv3tacbpi = rtB .
aewg4wr5gf - rtP . CheckAltitude_max ; _rtZCSV -> m2czhjnuas = rtP .
CheckLatitude_min - rtB . f4ayqsk2ze [ 0 ] ; _rtZCSV -> fq52lyktvx = rtB .
f4ayqsk2ze [ 0 ] - rtP . CheckLatitude_max ; _rtZCSV -> me1zzbfrbn = rtP .
CheckLongitude_min - rtB . f4ayqsk2ze [ 1 ] ; _rtZCSV -> bmwhcnkdri = rtB .
f4ayqsk2ze [ 1 ] - rtP . CheckLongitude_max ; } void MdlTerminate ( void ) {
} static void mr_DisturbanceTorques_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_DisturbanceTorques_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DisturbanceTorques_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_DisturbanceTorques_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_DisturbanceTorques_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_DisturbanceTorques_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_DisturbanceTorques_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DisturbanceTorques_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DisturbanceTorques_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_DisturbanceTorques_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DisturbanceTorques_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_DisturbanceTorques_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_DisturbanceTorques_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_DisturbanceTorques_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_DisturbanceTorques_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DisturbanceTorques_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_DisturbanceTorques_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_DisturbanceTorques_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 81 ] = { "rtDW.d3n0scvwiw" , "rtDW.netfpjoud1" ,
"rtDW.m0obf4a2df" , "rtDW.mhkwgq1w1q" , "rtDW.oz0kfzg1gx" , "rtDW.nupgl2tg0v"
, "rtDW.adsttvgd3w" , "rtDW.gcujf31myd" , "rtDW.mugz10zzsf" ,
"rtDW.f1engf53mb" , "rtDW.mvzvd4lhhp" , "rtDW.grmywfuesv" , "rtDW.ftdnlxu5eu"
, "rtDW.jsse3tis1w" , "rtDW.am4ilc4itb" , "rtDW.memp4ggvk1" ,
"rtDW.magaskumor" , "rtDW.a1y5hchekq" , "rtDW.irns0a4kt4" , "rtDW.lwtny2nhca"
, "rtDW.iuxhwq4jer" , "rtDW.fwn4p5on3k" , "rtDW.crk3evsda4" ,
"rtDW.phrzlv44k2" , "rtDW.k3zxl5fwp3" , "rtDW.dn3fk5nzmk" , "rtDW.ezsdw3knjx"
, "rtDW.bpx5osf5ip" , "rtDW.oqz2wa1us5" , "rtDW.ijbym44xcu" ,
"rtDW.jmmeq40q3u" , "rtDW.pwge0cg15r" , "rtDW.bkrengnk5k" , "rtDW.cyjnxvzlkk"
, "rtDW.ld1te5cgi0" , "rtDW.dojjho4dgz" , "rtDW.iil44wamvv" ,
"rtDW.adricj4j5d" , "rtDW.cktmfwuebm" , "rtDW.hluflh4dwz" , "rtDW.pshfio535r"
, "rtDW.ojluwsc1jf" , "rtDW.jeociud4e4" , "rtDW.atj4zyeuwz" ,
"rtDW.nmuzk31eka" , "rtDW.dckc2drf0i" , "rtDW.meglrmbhox" , "rtDW.joclfqdu4c"
, "rtDW.ogav25z1tr" , "rtDW.odz5nl0xv4" , "rtDW.c2d0nllycq" ,
"rtDW.hpyqqv1k12" , "rtDW.joqyigxeli" , "rtDW.eh34jsuleh" , "rtDW.mcn2nlny2x"
, "rtDW.amaj5bb1c5" , "rtDW.fiwv2kubov" , "rtDW.ouiwc4kgj1" ,
"rtDW.d4ejqm0gje" , "rtDW.k10lklhvn1" , "rtDW.ppxomfw0y5" , "rtDW.eexx2pbpof"
, "rtDW.izffr0xyvb" , "rtDW.o3l0fvabaz" , "rtDW.pph5gzcq13" ,
"rtDW.o1h3l12sv1" , "rtDW.ohseta3i1a" , "rtDW.pvgpa4cqis" , "rtDW.mqaikwvoz0"
, "rtDW.obrdaahckr" , "rtDW.dc4hcu0uor" , "rtDW.ovqbyqrxnj" ,
"rtDW.phdloywugz" , "rtDW.pb5er2v5my" , "rtDW.atcpxiamp2" , "rtDW.kdr2nz0rqw"
, "rtDW.oypsulirgi" , "rtDW.darb2qbz0l.fwzsfq5oof" ,
"rtDW.nxmiuso3xg.knep3sgdju" , "rtDW.knhctetjg2v.fwzsfq5oof" ,
"rtDW.llswu3fq4mw.knep3sgdju" , } ; mxArray * rtdwData = mxCreateStructMatrix
( 1 , 1 , 81 , rtdwDataFieldNames ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( rtDW . d3n0scvwiw ) , sizeof ( rtDW . d3n0scvwiw ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( rtDW . netfpjoud1 ) , sizeof ( rtDW . netfpjoud1 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( rtDW . m0obf4a2df ) , sizeof ( rtDW . m0obf4a2df ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( rtDW . mhkwgq1w1q ) , sizeof ( rtDW . mhkwgq1w1q ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( rtDW . oz0kfzg1gx ) , sizeof ( rtDW . oz0kfzg1gx ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( rtDW . nupgl2tg0v ) , sizeof ( rtDW . nupgl2tg0v ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( rtDW . adsttvgd3w ) , sizeof ( rtDW . adsttvgd3w ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( rtDW . gcujf31myd ) , sizeof ( rtDW . gcujf31myd ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( rtDW . mugz10zzsf ) , sizeof ( rtDW . mugz10zzsf ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( rtDW . f1engf53mb ) , sizeof ( rtDW . f1engf53mb ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void *
) & ( rtDW . mvzvd4lhhp ) , sizeof ( rtDW . mvzvd4lhhp ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void *
) & ( rtDW . grmywfuesv ) , sizeof ( rtDW . grmywfuesv ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void *
) & ( rtDW . ftdnlxu5eu ) , sizeof ( rtDW . ftdnlxu5eu ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void *
) & ( rtDW . jsse3tis1w ) , sizeof ( rtDW . jsse3tis1w ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void *
) & ( rtDW . am4ilc4itb ) , sizeof ( rtDW . am4ilc4itb ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void *
) & ( rtDW . memp4ggvk1 ) , sizeof ( rtDW . memp4ggvk1 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void *
) & ( rtDW . magaskumor ) , sizeof ( rtDW . magaskumor ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void *
) & ( rtDW . a1y5hchekq ) , sizeof ( rtDW . a1y5hchekq ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void *
) & ( rtDW . irns0a4kt4 ) , sizeof ( rtDW . irns0a4kt4 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void *
) & ( rtDW . lwtny2nhca ) , sizeof ( rtDW . lwtny2nhca ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void *
) & ( rtDW . iuxhwq4jer ) , sizeof ( rtDW . iuxhwq4jer ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void *
) & ( rtDW . fwn4p5on3k ) , sizeof ( rtDW . fwn4p5on3k ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void *
) & ( rtDW . crk3evsda4 ) , sizeof ( rtDW . crk3evsda4 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void *
) & ( rtDW . phrzlv44k2 ) , sizeof ( rtDW . phrzlv44k2 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void *
) & ( rtDW . k3zxl5fwp3 ) , sizeof ( rtDW . k3zxl5fwp3 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void *
) & ( rtDW . dn3fk5nzmk ) , sizeof ( rtDW . dn3fk5nzmk ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void *
) & ( rtDW . ezsdw3knjx ) , sizeof ( rtDW . ezsdw3knjx ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void *
) & ( rtDW . bpx5osf5ip ) , sizeof ( rtDW . bpx5osf5ip ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void *
) & ( rtDW . oqz2wa1us5 ) , sizeof ( rtDW . oqz2wa1us5 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void *
) & ( rtDW . ijbym44xcu ) , sizeof ( rtDW . ijbym44xcu ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void *
) & ( rtDW . jmmeq40q3u ) , sizeof ( rtDW . jmmeq40q3u ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void *
) & ( rtDW . pwge0cg15r ) , sizeof ( rtDW . pwge0cg15r ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void *
) & ( rtDW . bkrengnk5k ) , sizeof ( rtDW . bkrengnk5k ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void *
) & ( rtDW . cyjnxvzlkk ) , sizeof ( rtDW . cyjnxvzlkk ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void *
) & ( rtDW . ld1te5cgi0 ) , sizeof ( rtDW . ld1te5cgi0 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void *
) & ( rtDW . dojjho4dgz ) , sizeof ( rtDW . dojjho4dgz ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void *
) & ( rtDW . iil44wamvv ) , sizeof ( rtDW . iil44wamvv ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void *
) & ( rtDW . adricj4j5d ) , sizeof ( rtDW . adricj4j5d ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void *
) & ( rtDW . cktmfwuebm ) , sizeof ( rtDW . cktmfwuebm ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void *
) & ( rtDW . hluflh4dwz ) , sizeof ( rtDW . hluflh4dwz ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void *
) & ( rtDW . pshfio535r ) , sizeof ( rtDW . pshfio535r ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void *
) & ( rtDW . ojluwsc1jf ) , sizeof ( rtDW . ojluwsc1jf ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void *
) & ( rtDW . jeociud4e4 ) , sizeof ( rtDW . jeociud4e4 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void *
) & ( rtDW . atj4zyeuwz ) , sizeof ( rtDW . atj4zyeuwz ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void *
) & ( rtDW . nmuzk31eka ) , sizeof ( rtDW . nmuzk31eka ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void *
) & ( rtDW . dckc2drf0i ) , sizeof ( rtDW . dckc2drf0i ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void *
) & ( rtDW . meglrmbhox ) , sizeof ( rtDW . meglrmbhox ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void *
) & ( rtDW . joclfqdu4c ) , sizeof ( rtDW . joclfqdu4c ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void *
) & ( rtDW . ogav25z1tr ) , sizeof ( rtDW . ogav25z1tr ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void *
) & ( rtDW . odz5nl0xv4 ) , sizeof ( rtDW . odz5nl0xv4 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void *
) & ( rtDW . c2d0nllycq ) , sizeof ( rtDW . c2d0nllycq ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void *
) & ( rtDW . hpyqqv1k12 ) , sizeof ( rtDW . hpyqqv1k12 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void *
) & ( rtDW . joqyigxeli ) , sizeof ( rtDW . joqyigxeli ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void *
) & ( rtDW . eh34jsuleh ) , sizeof ( rtDW . eh34jsuleh ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void *
) & ( rtDW . mcn2nlny2x ) , sizeof ( rtDW . mcn2nlny2x ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void *
) & ( rtDW . amaj5bb1c5 ) , sizeof ( rtDW . amaj5bb1c5 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void *
) & ( rtDW . fiwv2kubov ) , sizeof ( rtDW . fiwv2kubov ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void *
) & ( rtDW . ouiwc4kgj1 ) , sizeof ( rtDW . ouiwc4kgj1 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void *
) & ( rtDW . d4ejqm0gje ) , sizeof ( rtDW . d4ejqm0gje ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void *
) & ( rtDW . k10lklhvn1 ) , sizeof ( rtDW . k10lklhvn1 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void *
) & ( rtDW . ppxomfw0y5 ) , sizeof ( rtDW . ppxomfw0y5 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void *
) & ( rtDW . eexx2pbpof ) , sizeof ( rtDW . eexx2pbpof ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void *
) & ( rtDW . izffr0xyvb ) , sizeof ( rtDW . izffr0xyvb ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void *
) & ( rtDW . o3l0fvabaz ) , sizeof ( rtDW . o3l0fvabaz ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void *
) & ( rtDW . pph5gzcq13 ) , sizeof ( rtDW . pph5gzcq13 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void *
) & ( rtDW . o1h3l12sv1 ) , sizeof ( rtDW . o1h3l12sv1 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void *
) & ( rtDW . ohseta3i1a ) , sizeof ( rtDW . ohseta3i1a ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void *
) & ( rtDW . pvgpa4cqis ) , sizeof ( rtDW . pvgpa4cqis ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void *
) & ( rtDW . mqaikwvoz0 ) , sizeof ( rtDW . mqaikwvoz0 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void *
) & ( rtDW . obrdaahckr ) , sizeof ( rtDW . obrdaahckr ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void *
) & ( rtDW . dc4hcu0uor ) , sizeof ( rtDW . dc4hcu0uor ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void *
) & ( rtDW . ovqbyqrxnj ) , sizeof ( rtDW . ovqbyqrxnj ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void *
) & ( rtDW . phdloywugz ) , sizeof ( rtDW . phdloywugz ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void *
) & ( rtDW . pb5er2v5my ) , sizeof ( rtDW . pb5er2v5my ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void *
) & ( rtDW . atcpxiamp2 ) , sizeof ( rtDW . atcpxiamp2 ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void *
) & ( rtDW . kdr2nz0rqw ) , sizeof ( rtDW . kdr2nz0rqw ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void *
) & ( rtDW . oypsulirgi ) , sizeof ( rtDW . oypsulirgi ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void *
) & ( rtDW . darb2qbz0l . fwzsfq5oof ) , sizeof ( rtDW . darb2qbz0l .
fwzsfq5oof ) ) ; mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 78
, ( const void * ) & ( rtDW . nxmiuso3xg . knep3sgdju ) , sizeof ( rtDW .
nxmiuso3xg . knep3sgdju ) ) ; mr_DisturbanceTorques_cacheDataAsMxArray (
rtdwData , 0 , 79 , ( const void * ) & ( rtDW . knhctetjg2v . fwzsfq5oof ) ,
sizeof ( rtDW . knhctetjg2v . fwzsfq5oof ) ) ;
mr_DisturbanceTorques_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void *
) & ( rtDW . llswu3fq4mw . knep3sgdju ) , sizeof ( rtDW . llswu3fq4mw .
knep3sgdju ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_DisturbanceTorques_SetDWork ( const mxArray * ssDW ) { (
void ) ssDW ; mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d3n0scvwiw ) , rtdwData , 0 , 0 , sizeof ( rtDW . d3n0scvwiw ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
netfpjoud1 ) , rtdwData , 0 , 1 , sizeof ( rtDW . netfpjoud1 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m0obf4a2df ) , rtdwData , 0 , 2 , sizeof ( rtDW . m0obf4a2df ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mhkwgq1w1q ) , rtdwData , 0 , 3 , sizeof ( rtDW . mhkwgq1w1q ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oz0kfzg1gx ) , rtdwData , 0 , 4 , sizeof ( rtDW . oz0kfzg1gx ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nupgl2tg0v ) , rtdwData , 0 , 5 , sizeof ( rtDW . nupgl2tg0v ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
adsttvgd3w ) , rtdwData , 0 , 6 , sizeof ( rtDW . adsttvgd3w ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gcujf31myd ) , rtdwData , 0 , 7 , sizeof ( rtDW . gcujf31myd ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mugz10zzsf ) , rtdwData , 0 , 8 , sizeof ( rtDW . mugz10zzsf ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f1engf53mb ) , rtdwData , 0 , 9 , sizeof ( rtDW . f1engf53mb ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mvzvd4lhhp ) , rtdwData , 0 , 10 , sizeof ( rtDW . mvzvd4lhhp ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
grmywfuesv ) , rtdwData , 0 , 11 , sizeof ( rtDW . grmywfuesv ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ftdnlxu5eu ) , rtdwData , 0 , 12 , sizeof ( rtDW . ftdnlxu5eu ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jsse3tis1w ) , rtdwData , 0 , 13 , sizeof ( rtDW . jsse3tis1w ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
am4ilc4itb ) , rtdwData , 0 , 14 , sizeof ( rtDW . am4ilc4itb ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
memp4ggvk1 ) , rtdwData , 0 , 15 , sizeof ( rtDW . memp4ggvk1 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
magaskumor ) , rtdwData , 0 , 16 , sizeof ( rtDW . magaskumor ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a1y5hchekq ) , rtdwData , 0 , 17 , sizeof ( rtDW . a1y5hchekq ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
irns0a4kt4 ) , rtdwData , 0 , 18 , sizeof ( rtDW . irns0a4kt4 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lwtny2nhca ) , rtdwData , 0 , 19 , sizeof ( rtDW . lwtny2nhca ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iuxhwq4jer ) , rtdwData , 0 , 20 , sizeof ( rtDW . iuxhwq4jer ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fwn4p5on3k ) , rtdwData , 0 , 21 , sizeof ( rtDW . fwn4p5on3k ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
crk3evsda4 ) , rtdwData , 0 , 22 , sizeof ( rtDW . crk3evsda4 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
phrzlv44k2 ) , rtdwData , 0 , 23 , sizeof ( rtDW . phrzlv44k2 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k3zxl5fwp3 ) , rtdwData , 0 , 24 , sizeof ( rtDW . k3zxl5fwp3 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dn3fk5nzmk ) , rtdwData , 0 , 25 , sizeof ( rtDW . dn3fk5nzmk ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ezsdw3knjx ) , rtdwData , 0 , 26 , sizeof ( rtDW . ezsdw3knjx ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bpx5osf5ip ) , rtdwData , 0 , 27 , sizeof ( rtDW . bpx5osf5ip ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oqz2wa1us5 ) , rtdwData , 0 , 28 , sizeof ( rtDW . oqz2wa1us5 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ijbym44xcu ) , rtdwData , 0 , 29 , sizeof ( rtDW . ijbym44xcu ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jmmeq40q3u ) , rtdwData , 0 , 30 , sizeof ( rtDW . jmmeq40q3u ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pwge0cg15r ) , rtdwData , 0 , 31 , sizeof ( rtDW . pwge0cg15r ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bkrengnk5k ) , rtdwData , 0 , 32 , sizeof ( rtDW . bkrengnk5k ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cyjnxvzlkk ) , rtdwData , 0 , 33 , sizeof ( rtDW . cyjnxvzlkk ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ld1te5cgi0 ) , rtdwData , 0 , 34 , sizeof ( rtDW . ld1te5cgi0 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dojjho4dgz ) , rtdwData , 0 , 35 , sizeof ( rtDW . dojjho4dgz ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iil44wamvv ) , rtdwData , 0 , 36 , sizeof ( rtDW . iil44wamvv ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
adricj4j5d ) , rtdwData , 0 , 37 , sizeof ( rtDW . adricj4j5d ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cktmfwuebm ) , rtdwData , 0 , 38 , sizeof ( rtDW . cktmfwuebm ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hluflh4dwz ) , rtdwData , 0 , 39 , sizeof ( rtDW . hluflh4dwz ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pshfio535r ) , rtdwData , 0 , 40 , sizeof ( rtDW . pshfio535r ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ojluwsc1jf ) , rtdwData , 0 , 41 , sizeof ( rtDW . ojluwsc1jf ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jeociud4e4 ) , rtdwData , 0 , 42 , sizeof ( rtDW . jeociud4e4 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
atj4zyeuwz ) , rtdwData , 0 , 43 , sizeof ( rtDW . atj4zyeuwz ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nmuzk31eka ) , rtdwData , 0 , 44 , sizeof ( rtDW . nmuzk31eka ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dckc2drf0i ) , rtdwData , 0 , 45 , sizeof ( rtDW . dckc2drf0i ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
meglrmbhox ) , rtdwData , 0 , 46 , sizeof ( rtDW . meglrmbhox ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
joclfqdu4c ) , rtdwData , 0 , 47 , sizeof ( rtDW . joclfqdu4c ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ogav25z1tr ) , rtdwData , 0 , 48 , sizeof ( rtDW . ogav25z1tr ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
odz5nl0xv4 ) , rtdwData , 0 , 49 , sizeof ( rtDW . odz5nl0xv4 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c2d0nllycq ) , rtdwData , 0 , 50 , sizeof ( rtDW . c2d0nllycq ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hpyqqv1k12 ) , rtdwData , 0 , 51 , sizeof ( rtDW . hpyqqv1k12 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
joqyigxeli ) , rtdwData , 0 , 52 , sizeof ( rtDW . joqyigxeli ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eh34jsuleh ) , rtdwData , 0 , 53 , sizeof ( rtDW . eh34jsuleh ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mcn2nlny2x ) , rtdwData , 0 , 54 , sizeof ( rtDW . mcn2nlny2x ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
amaj5bb1c5 ) , rtdwData , 0 , 55 , sizeof ( rtDW . amaj5bb1c5 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fiwv2kubov ) , rtdwData , 0 , 56 , sizeof ( rtDW . fiwv2kubov ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ouiwc4kgj1 ) , rtdwData , 0 , 57 , sizeof ( rtDW . ouiwc4kgj1 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d4ejqm0gje ) , rtdwData , 0 , 58 , sizeof ( rtDW . d4ejqm0gje ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k10lklhvn1 ) , rtdwData , 0 , 59 , sizeof ( rtDW . k10lklhvn1 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ppxomfw0y5 ) , rtdwData , 0 , 60 , sizeof ( rtDW . ppxomfw0y5 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eexx2pbpof ) , rtdwData , 0 , 61 , sizeof ( rtDW . eexx2pbpof ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
izffr0xyvb ) , rtdwData , 0 , 62 , sizeof ( rtDW . izffr0xyvb ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o3l0fvabaz ) , rtdwData , 0 , 63 , sizeof ( rtDW . o3l0fvabaz ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pph5gzcq13 ) , rtdwData , 0 , 64 , sizeof ( rtDW . pph5gzcq13 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o1h3l12sv1 ) , rtdwData , 0 , 65 , sizeof ( rtDW . o1h3l12sv1 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ohseta3i1a ) , rtdwData , 0 , 66 , sizeof ( rtDW . ohseta3i1a ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pvgpa4cqis ) , rtdwData , 0 , 67 , sizeof ( rtDW . pvgpa4cqis ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mqaikwvoz0 ) , rtdwData , 0 , 68 , sizeof ( rtDW . mqaikwvoz0 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
obrdaahckr ) , rtdwData , 0 , 69 , sizeof ( rtDW . obrdaahckr ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dc4hcu0uor ) , rtdwData , 0 , 70 , sizeof ( rtDW . dc4hcu0uor ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ovqbyqrxnj ) , rtdwData , 0 , 71 , sizeof ( rtDW . ovqbyqrxnj ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
phdloywugz ) , rtdwData , 0 , 72 , sizeof ( rtDW . phdloywugz ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pb5er2v5my ) , rtdwData , 0 , 73 , sizeof ( rtDW . pb5er2v5my ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
atcpxiamp2 ) , rtdwData , 0 , 74 , sizeof ( rtDW . atcpxiamp2 ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kdr2nz0rqw ) , rtdwData , 0 , 75 , sizeof ( rtDW . kdr2nz0rqw ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oypsulirgi ) , rtdwData , 0 , 76 , sizeof ( rtDW . oypsulirgi ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
darb2qbz0l . fwzsfq5oof ) , rtdwData , 0 , 77 , sizeof ( rtDW . darb2qbz0l .
fwzsfq5oof ) ) ; mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) &
( rtDW . nxmiuso3xg . knep3sgdju ) , rtdwData , 0 , 78 , sizeof ( rtDW .
nxmiuso3xg . knep3sgdju ) ) ; mr_DisturbanceTorques_restoreDataFromMxArray (
( void * ) & ( rtDW . knhctetjg2v . fwzsfq5oof ) , rtdwData , 0 , 79 , sizeof
( rtDW . knhctetjg2v . fwzsfq5oof ) ) ;
mr_DisturbanceTorques_restoreDataFromMxArray ( ( void * ) & ( rtDW .
llswu3fq4mw . knep3sgdju ) , rtdwData , 0 , 80 , sizeof ( rtDW . llswu3fq4mw
. knep3sgdju ) ) ; } } mxArray *
mr_DisturbanceTorques_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 3 ] = { "Scope" , "Scope" , "Scope" , } ; static const
char_T * blockPath [ 3 ] = { "DisturbanceTorques/ScopeOut" ,
"DisturbanceTorques/Disturbance Torques/Gravity Gradient Torque" ,
"DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/Scope" , } ; static
const int reason [ 3 ] = { 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ]
< 3 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 16 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 671 ) ;
ssSetNumBlockIO ( rtS , 206 ) ; ssSetNumBlockParams ( rtS , 55002 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 1.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3345140926U ) ; ssSetChecksumVal ( rtS , 1 ,
2552635528U ) ; ssSetChecksumVal ( rtS , 2 , 293012912U ) ; ssSetChecksumVal
( rtS , 3 , 2387563753U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { real_T * x
= ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void
* ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 26 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
DisturbanceTorques_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "DisturbanceTorques" ) ;
ssSetPath ( rtS , "DisturbanceTorques" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 30000.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 16 , 2
, 1 , 4 , 1 , 1 , 1 , 1 , 169 , 169 , 169 , 169 , 13 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 16 , 2 , 1 , 4 , 1
, 1 , 1 , 1 , 169 , 169 , 169 , 169 , 13 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" }
; static const char_T * rt_LoggedStateBlockNames [ ] = {
"DisturbanceTorques/Integrator" ,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Convert from geodetic to\n spherical coordinates\n/For Iterator\nSubsystem/Unit Delay1"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/Unit Delay"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/Unit Delay2"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Accumulate terms of the \nspherical harmonic expansion/Unit Delay1"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Accumulate terms of the \nspherical harmonic expansion/Unit Delay3"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Accumulate terms of the \nspherical harmonic expansion/Unit Delay2"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Accumulate terms of the \nspherical harmonic expansion/Unit Delay4"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Time adjust the gauss coefficients/Unit Delay"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Time adjust the gauss coefficients/if (m~=0)/Unit Delay"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Compute unnormalized associated \nlegendre polynomials and \nderivatives via recursion relations/Unit Delay"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Compute unnormalized associated \nlegendre polynomials and \nderivatives via recursion relations/Unit Delay1"
,
 "DisturbanceTorques/Disturbance Torques/EARTH MAG FIELD/World Magnetic Model/geomag/Compute magnetic vector in\nspherical coordinates/For Iterator\nSubsystem/Accumulate terms of the \nspherical harmonic expansion/Special case - North//South Geographic Pole/Unit Delay1"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 0 ,
1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 13 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 13 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . jcbqkhpdfi [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . d3n0scvwiw ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . netfpjoud1 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . m0obf4a2df ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . mhkwgq1w1q ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . oz0kfzg1gx ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . nupgl2tg0v ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . adsttvgd3w ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) rtDW . gcujf31myd ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) rtDW . mugz10zzsf ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) rtDW . f1engf53mb ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) rtDW . mvzvd4lhhp ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) rtDW . grmywfuesv ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 16 ] ;
static real_T absTol [ 16 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 16 ] = { 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ;
static real_T contStateJacPerturbBoundMinVec [ 16 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 16 ] ; static uint8_T zcAttributes [ 17 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 29 ] =
{ { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . m0cdt1phky ) , ( NULL ) } ,
{ 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . bjbinfdrjx ) , ( NULL ) } ,
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . ep15chbn1b ) , ( NULL ) } , {
1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . k3guhezu25 ) , ( NULL ) } , {
1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . ok4e3lbh54 ) , ( NULL ) } , {
66 * sizeof ( real_T ) , ( char * ) ( & rtB . bu42wqsdcf [ 0 ] ) , ( NULL ) }
, { 66 * sizeof ( real_T ) , ( char * ) ( & rtB . kqpnhluxxo [ 0 ] ) , ( NULL
) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . g1cf5mwiln ) , ( NULL )
} , { 4 * sizeof ( real_T ) , ( char * ) ( & rtB . meewcjpsgd [ 0 ] ) , (
NULL ) } , { 25 * sizeof ( real_T ) , ( char * ) ( & rtB . k0kwjfwzjs [ 0 ] )
, ( NULL ) } , { 3 * sizeof ( real_T ) , ( char * ) ( & rtB . e2yzgh3soa [ 0
] ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . ir1guhjxkm
) , ( NULL ) } , { 1600 * sizeof ( real_T ) , ( char * ) ( & rtB . aplfnemlzg
[ 0 ] ) , ( NULL ) } , { 1600 * sizeof ( real_T ) , ( char * ) ( & rtB .
eg4gfyhcmb [ 0 ] ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( &
rtB . jrhgyfgs10 ) , ( NULL ) } , { 4 * sizeof ( real_T ) , ( char * ) ( &
rtB . pq3zras5az [ 0 ] ) , ( NULL ) } , { 36 * sizeof ( real_T ) , ( char * )
( & rtB . objpjgb34p [ 0 ] ) , ( NULL ) } , { 253 * sizeof ( real_T ) , (
char * ) ( & rtB . hllxq5rrz1 [ 0 ] ) , ( NULL ) } , { 1 * sizeof ( real_T )
, ( char * ) ( & rtB . oe0slkwer3 ) , ( NULL ) } , { 1275 * sizeof ( real_T )
, ( char * ) ( & rtB . ocvk4ihqkt [ 0 ] ) , ( NULL ) } , { 1275 * sizeof (
real_T ) , ( char * ) ( & rtB . llz1zzc3vu [ 0 ] ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . o0f1oyv2p4 ) , ( NULL ) } , { 5 *
sizeof ( real_T ) , ( char * ) ( & rtB . kbxjza20xf [ 0 ] ) , ( NULL ) } , {
30 * sizeof ( real_T ) , ( char * ) ( & rtB . b3j3xjpyda [ 0 ] ) , ( NULL ) }
, { 277 * sizeof ( real_T ) , ( char * ) ( & rtB . nt0rmgoez2 [ 0 ] ) , (
NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . kl3rxlab5f ) , (
NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . h04yhzhfaa ) , (
NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . mtlafyaqr5 ) , (
NULL ) } , { 4 * sizeof ( real_T ) , ( char * ) ( & rtB . ghxiy1odi5 [ 0 ] )
, ( NULL ) } } ; { int i ; for ( i = 0 ; i < 16 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 1.0 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 29 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS
, 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector (
rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 17 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 17 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3345140926U ) ; ssSetChecksumVal ( rtS , 1 ,
2552635528U ) ; ssSetChecksumVal ( rtS , 2 , 293012912U ) ; ssSetChecksumVal
( rtS , 3 , 2387563753U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 30 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & rtDW . llswu3fq4mw . knep3sgdju ;
systemRan [ 3 ] = ( sysRanDType * ) & rtDW . knhctetjg2v . fwzsfq5oof ;
systemRan [ 4 ] = ( sysRanDType * ) & rtDW . nxmiuso3xg . knep3sgdju ;
systemRan [ 5 ] = ( sysRanDType * ) & rtDW . darb2qbz0l . fwzsfq5oof ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = ( sysRanDType * ) &
rtDW . hpyqqv1k12 ; systemRan [ 10 ] = ( sysRanDType * ) & rtDW . c2d0nllycq
; systemRan [ 11 ] = ( sysRanDType * ) & rtDW . ogav25z1tr ; systemRan [ 12 ]
= ( sysRanDType * ) & rtDW . joclfqdu4c ; systemRan [ 13 ] = ( sysRanDType *
) & rtDW . meglrmbhox ; systemRan [ 14 ] = ( sysRanDType * ) & rtDW .
dckc2drf0i ; systemRan [ 15 ] = ( sysRanDType * ) & rtDW . nmuzk31eka ;
systemRan [ 16 ] = ( sysRanDType * ) & rtDW . atj4zyeuwz ; systemRan [ 17 ] =
( sysRanDType * ) & rtDW . ojluwsc1jf ; systemRan [ 18 ] = ( sysRanDType * )
& rtDW . adricj4j5d ; systemRan [ 19 ] = ( sysRanDType * ) & rtDW .
pshfio535r ; systemRan [ 20 ] = ( sysRanDType * ) & rtDW . hluflh4dwz ;
systemRan [ 21 ] = ( sysRanDType * ) & rtDW . adricj4j5d ; systemRan [ 22 ] =
( sysRanDType * ) & rtDW . dojjho4dgz ; systemRan [ 23 ] = & rtAlwaysEnabled
; systemRan [ 24 ] = ( sysRanDType * ) & rtDW . ijbym44xcu ; systemRan [ 25 ]
= ( sysRanDType * ) & rtDW . oqz2wa1us5 ; systemRan [ 26 ] = ( sysRanDType *
) & rtDW . oqz2wa1us5 ; systemRan [ 27 ] = & rtAlwaysEnabled ; systemRan [ 28
] = & rtAlwaysEnabled ; systemRan [ 29 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_DisturbanceTorques_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_DisturbanceTorques_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_DisturbanceTorques_SetDWork ) ; rtP .
CheckdeltaT_minmax [ 1 ] = rtInf ; rtP . CheckdeltaT_minmax_envwls20re [ 1 ]
= rtInf ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus
( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
