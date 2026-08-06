#include "../../pseudocode_runtime.h"


void __fastcall FUN_00584b10(AnonShape_00584B10_33997544 *param_1)

{
  undefined1 *this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  this = &param_1->field_0x1d5;
  STT3DSprC::StopShow((STT3DSprC *)this,0xe);
  thunk_FUN_004ad5e0((STT3DSprC *)this);
  STT3DSprC::LoadSequence((STT3DSprC *)this,8,PTR_00806774,"Expb22",CASE_1D);
  STT3DSprC::LoadSequence((STT3DSprC *)this,10,PTR_00806774,"expmask3",CASE_1D);
  uVar4 = 0x45;
  uVar3 = 0x5a;
  iVar2 = 1;
  uVar1 = thunk_FUN_004ad650((STT3DSprC *)this);
  Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand(param_1->field_0211,uVar1,iVar2,uVar3,uVar4);
  STT3DSprC::sub_004ACFE0((STT3DSprC *)this,'\n');
  STT3DSprC::sub_004ACF20((STT3DSprC *)this,PTR_008032b8,0x10);
  STT3DSprC::StartShow((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
  STT3DSprC::StartShow((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  iVar2 = STT3DSprC::LoadSequence((STT3DSprC *)this,9,PTR_00806764,"expl_bbt0",CASE_1D);
  if (iVar2 == 0) {
    STT3DSprC::sub_004AD070((STT3DSprC *)this,9);
    uVar3 = STT3DSprC::sub_004ACD30((STT3DSprC *)this,'\t');
    param_1->field_0255 = (char)uVar3;
    param_1->field_0256 = DAT_007cb8e0;
    param_1->field_0257 = 0;
  }
  return;
}

