#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e9050(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  int uVar2;
  int iVar2;
  uint uVar3;
  byte *pbVar4;

  if (param_1->field_05AC != CASE_37) goto LAB_004e914a;
  uVar2 = LookupRecordByte(*(char *)&param_1->field_0024);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    pbVar4 = param_1->field_0024;
    iVar2 = 0x21;
LAB_004e9090:
    iVar2 = thunk_FUN_004e60d0((int)pbVar4,iVar2);
    uVar3 = (uint)(iVar2 != 0);
  }
  else {
    if (uVar2 == 2) {
      pbVar4 = param_1->field_0024;
      iVar2 = 0x8c;
      goto LAB_004e9090;
    }
    uVar3 = 0;
  }
  if (((int)param_1->field_04D0 < 100) &&
     ((uint)(&DAT_0079a9fc)[uVar3] / 100 + param_1->field_04D4 <= g_playSystem_00802A38->field_00E4)
     ) {
    TVar1 = param_1->field_04D0 + CASE_1;
    param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D0 = TVar1;
    if ((99 < (int)TVar1) && (param_1->field_04E0[5] == 0)) {
      param_1->field_04E0[5] = 1;
      TLOBaseTy::RotateSpr(param_1,1);
    }
  }
  if (((int)param_1->field_04D0 < 100) && (param_1->field_04E0[5] != 0)) {
    iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    if (iVar2 == param_1->field_01F5->field_01C4) {
      param_1->field_04E0[5] = 0;
      TLOBaseTy::RotateSpr(param_1,1);
    }
  }
LAB_004e914a:
  if (((param_1->field_05AC == CASE_6C) &&
      (param_1->field_061B != nullptr)) && (param_1->field_04E0[7] == 0))
  {
    iVar2 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_04E0[6],
                       nullptr);
    if (iVar2 != 0) {
      param_1->field_04E0[6] = 0;
      param_1->field_061B = nullptr;
    }
  }
  return 0;
}

