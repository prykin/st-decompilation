#include "st/generated.hpp"
// Generated translation unit: source/original/pal_tbl.cpp

// 0055D730 LoadGamePlt
#line 4 "decomp/ST.exe/functions/0055D730/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\pal_tbl.CPP
   Diagnostic line evidence: 81 | 85 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0055D730 -> 00717FC0 @ 0055D771 | 0055D730 -> 00717FC0 @ 0055D7C7 | 0055D730 ->
   00717FC0 @ 0055D81D */

int __cdecl st::fn_0055D730(int param_1,byte param_2)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    PTR_008032b4 = st::fn_00717FC0(param_1,PTR_s_PLT_PAUSE_0079af70,param_2,1);
    PTR_008032b8 = st::fn_00717FC0(param_1,PTR_s_PLT_EXPLITE_0079af74,param_2,1);
    PTR_008032bc = st::fn_00717FC0(param_1,PTR_s_PLT_SHAD30_0079af78,param_2,1);
    PTR_008032c0 = st::fn_00717FC0(param_1,PTR_s_PLT_SHAD40_0079af7c,param_2,1);
    PTR_008032c4 = st::fn_00717FC0(param_1,PTR_s_PLT_SHAD60_0079af80,param_2,1);
    PTR_008032c8 = st::fn_00717FC0(param_1,PTR_s_PLT_FOG_0079af84,param_2,1);
    PTR_008032cc = st::fn_00717FC0(param_1,PTR_s_PLT_NUCL_0079af8c,param_2,1);
    PTR_008032d0 = st::fn_00717FC0(param_1,PTR_s_PLT_GLOW_0079af90,param_2,1);
    PTR_008032d4 = st::fn_00717FC0(param_1,PTR_s_PLT_DKD_0079af94,param_2,1);
    PTR_008073cc = PTR_008032c0;
    g_currentExceptionFrame = local_48.previous;
    DAT_00807560 = st::machine_word_boundary_cast<undefined4>(PTR_008032c4);
    DAT_008073c8 = st::machine_word_boundary_cast<undefined4>(PTR_008032bc);
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\pal_tbl.CPP"),0x51,0,iVar2,st::mutable_c_string("%s"),
                             "LoadGamePlt");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404039();
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\pal_tbl.CPP"),0x55);
  return iVar2;
}

// 0055DA40 LoadStartPlt
#line 4 "decomp/ST.exe/functions/0055DA40/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\pal_tbl.CPP
   Diagnostic line evidence: 123 | 125 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DB4F0 -> 0055DA40 @ 005DB6E8 */

int __cdecl st::fn_0055DA40(cMf32 *param_1,byte param_2)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    PTR_008032a4 = st::fn_00717FC0
                             ((int)param_1,PTR_s_PLT_MMGLASS_0079af6c,param_2,1);
    PTR_008032a8 = st::fn_00717FC0
                             ((int)param_1,PTR_s_PLT_MMSHAD_0079af88,param_2,1);
    PTR_008032ac = st::fn_00717FC0
                             ((int)param_1,PTR_s_PLT_FSGSGLASS_0079af98,param_2,1);
    PTR_008032b0 = st::fn_00717FC0
                             ((int)param_1,PTR_s_PLT_FSGSSHAD_0079af9c,param_2,1);
    g_currentExceptionFrame = local_48.previous;
    return 0;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\pal_tbl.CPP"),0x7b,0,iVar2,st::mutable_c_string("%s"),
                             "LoadStartPlt");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404304();
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\pal_tbl.CPP"),0x7d);
  return iVar2;
}

