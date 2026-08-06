#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004cbad0(AnonShape_004CBAD0_DCDD6BA9 *param_1)

{
  int iVar2;
  uint uVar3;
  int iVar1;
  int local_EAX_229;

  iVar2 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
    Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
    if ((STT3DSprC *)param_1->field_05FF != nullptr) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_05FF);
      Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
    }
    if ((STT3DSprC *)param_1->field_0603 != nullptr) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_0603);
      Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
    }
    iVar1 = thunk_FUN_0041caf0((AnonShape_0041CAF0_1630B9E0 *)param_1);
    uVar3 = (uint)(iVar1 != 0);
  }
  else {
    if ((param_1->field_046C != 4) || (param_1->field_0490 == 0)) {
      iVar2 = 1;
      uVar3 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
      Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
      if ((STT3DSprC *)param_1->field_05FF != nullptr) {
        iVar2 = 1;
        uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_05FF);
        Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
      }
      if ((STT3DSprC *)param_1->field_0603 != nullptr) {
        iVar2 = 1;
        uVar3 = thunk_FUN_004ad650((STT3DSprC *)param_1->field_0603);
        Library::Ourlib::ST3DSMAP::SprSetVisible(param_1->field_0211,uVar3,iVar2);
      }
    }
    uVar3 = 1;
  }
  local_EAX_229 = thunk_FUN_004ad650((STT3DSprC *)&param_1->field_0x1d5);
  FUN_006e6870(param_1->field_0211,local_EAX_229,uVar3);
  return 0;
}

