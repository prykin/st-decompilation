#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00589740(AnonShape_00589740_397F9B27 *param_1)

{
  byte *this;
  int iVar1;
  uint uVar2;
  this = &param_1->field_0x1d5;
  /* ST_CALLSITE[0058975F]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,8,PTR_00806774,"Expb23",CASE_1D);
  if (iVar1 == 0) {
    /* ST_CALLSITE[0058977D]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[00589793]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    STT3DSprC::LoadSequence((STT3DSprC *)this,10,PTR_00806774,"expmask2",CASE_1D);
    /* ST_CALLSITE[0058979C]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
    STT3DSprC::sub_004ACFE0((STT3DSprC *)this,'\n');
    /* ST_CALLSITE[005897AC]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    STT3DSprC::sub_004ACF20((STT3DSprC *)this,PTR_008032b8,0x10);
    /* ST_CALLSITE[005897C2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
    /* ST_CALLSITE[005897CB]: CALL dword ptr [EDX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(param_1->field_0000 + 0xd8))();
    /* ST_CALLSITE[005897E2]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar1 = STT3DSprC::LoadSequence((STT3DSprC *)this,9,PTR_00806764,"bulb_n4",CASE_1D);
    if (iVar1 == 0) {
      /* ST_CALLSITE[005897EF]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
      STT3DSprC::sub_004AD070((STT3DSprC *)this,9);
      /* ST_CALLSITE[005897F8]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar2 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\t');
      param_1->field_0275 = (char)uVar2;
      param_1->field_0276 = DAT_007cb958;
      param_1->field_0277 = 0;
    }
    return 0;
  }
  return 0xffffffff;
}

