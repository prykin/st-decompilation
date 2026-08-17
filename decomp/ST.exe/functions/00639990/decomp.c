#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00639990(AnonShape_00639990_2135AB0A *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1->field_026F < 2) {
    puVar1 = &param_1->field_0x1d5;
    /* ST_CALLSITE[00639AC8]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,PTR_00806774,"trmbomb",CASE_1D);
    if (iVar2 != 0) {
      return 0xffff;
    }
    /* ST_CALLSITE[00639AEB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar1,0xf,PTR_00806764,(char *)&DAT_007d1db8,CASE_1D);
    if (iVar2 != 0) {
      return 0xffff;
    }
    thunk_FUN_004ac700(puVar1,'\x0f');
    /* ST_CALLSITE[00639B1F]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(param_1,param_1->field_027A,param_1->field_027E,param_1->field_0282);
    /* ST_CALLSITE[00639B28]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    param_1->field_0296 = uVar3;
    thunk_FUN_004ac660(puVar1,'\r');
    /* ST_CALLSITE[00639B4D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
    param_1->field_0271 = 1;
  }
  else {
    if (param_1->field_026F != 2) {
      return 0;
    }
    puVar1 = &param_1->field_0x1d5;
    /* ST_CALLSITE[006399C1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)puVar1,0xd,PTR_00806774,&DAT_007d1db0,CASE_1D);
    if (iVar2 != 0) {
      return 0xffff;
    }
    /* ST_CALLSITE[006399E4]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar2 = STT3DSprC::LoadSequence
                      ((STT3DSprC *)puVar1,0xe,PTR_00806774,"expmask2",CASE_1D);
    if (iVar2 != 0) {
      return 0xffff;
    }
    /* ST_CALLSITE[00639A06]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)puVar1,0xe,g_playSystem_00802A38->field_00E4);
    param_1->field_02A2 = 1;
    /* ST_CALLSITE[00639A23]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)puVar1,0xd,g_playSystem_00802A38->field_00E4);
    param_1->field_0271 = 1;
    if (param_1->field_0292 != 0) {
      /* ST_CALLSITE[00639A3E]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\r',param_1->field_0292);
    }
    if (param_1->field_0292 != 0) {
      /* ST_CALLSITE[00639A52]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',param_1->field_0292);
    }
    /* ST_CALLSITE[00639A71]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(param_1,param_1->field_027A,param_1->field_027E,param_1->field_0282);
    /* ST_CALLSITE[00639A80]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    STT3DSprC::sub_004ACF20((STT3DSprC *)puVar1,PTR_008032b8,0x10);
    /* ST_CALLSITE[00639A89]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    STT3DSprC::sub_004ACFE0((STT3DSprC *)puVar1,'\x0e');
    /* ST_CALLSITE[00639A92]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\r');
    param_1->field_0296 = uVar3;
    /* ST_CALLSITE[00639AA1]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)puVar1,'\x0e');
    param_1->field_029E = uVar3;
  }
  param_1->field_02A7 = g_playSystem_00802A38->field_00E4;
  return 0;
}

