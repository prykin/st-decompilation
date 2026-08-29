#include "../../pseudocode_runtime.h"


void __fastcall FUN_00584b10(RecoveredRecordView_00584B10_465CC529 *param_1)

{
  byte *this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  this = &param_1->field_0x1d5;
  /* ST_CALLSITE[00584B1E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
  STT3DSprC::StopShow((STT3DSprC *)this,0xe);
  thunk_FUN_004ad5e0((STT3DSprC *)this);
  /* ST_CALLSITE[00584B3B]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  STT3DSprC::LoadSequence((STT3DSprC *)this,8,PTR_00806774,"Expb22",CASE_1D);
  /* ST_CALLSITE[00584B52]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  STT3DSprC::LoadSequence((STT3DSprC *)this,10,PTR_00806774,"expmask3",CASE_1D);
  uVar4 = 0x45;
  uVar3 = 0x5a;
  iVar2 = 1;

  uVar1 = thunk_FUN_004ad650((STT3DSprC *)this);

  Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand(param_1->field_0211,uVar1,iVar2,uVar3,uVar4);
  /* ST_CALLSITE[00584B74]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
  STT3DSprC::sub_004ACFE0((STT3DSprC *)this,'\n');
  /* ST_CALLSITE[00584B84]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
  STT3DSprC::sub_004ACF20((STT3DSprC *)this,PTR_008032b8,0x10);
  /* ST_CALLSITE[00584B99]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[00584BAF]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  STT3DSprC::StartShow((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[00584BB8]: CALL dword ptr [EDX + 0xd8]; [STIndirectCallsiteApplier] exact slot 0xD8; mode=structural-presentation; signature=__thiscall;/void;pointer:/void */
  STStructuralVirtualCall<void>(param_1, 0xD8);
  /* ST_CALLSITE[00584BCF]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this,9,PTR_00806764,"expl_bbt0",CASE_1D);
  if (iVar2 == 0) {
    /* ST_CALLSITE[00584BDC]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
    STT3DSprC::sub_004AD070((STT3DSprC *)this,9);
    /* ST_CALLSITE[00584BE5]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\t');
    param_1->field_0255 = (char)uVar3;
    param_1->field_0256 = DAT_007cb8e0;
    param_1->field_0257 = 0;
  }
  return;
}

