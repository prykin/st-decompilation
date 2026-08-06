#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0057D5F0 -> 0057D420 @ 0057D677; STFishC::sub_0057D5F0 this; stable alias ESI */

undefined4 __fastcall FUN_0057d420(STFishC *param_1)

{
  STFishC_field_0267State SVar1;
  int uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  bVar9 = 6;
  SVar1 = param_1->field_0267;
  if ((SVar1 == CASE_E7) || (SVar1 == CASE_E8)) {
    bVar9 = 3;
  }
  else if (SVar1 == CASE_E9) {
    bVar9 = 4;
  }
  uVar2 = FUN_006db910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0235,
                       (int)param_1->field_0237);
  uVar3 = FUN_006db990(uVar2,8);
  uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar4;
  uVar4 = uVar4 >> 0x10;
  piVar12 = (int *)local_8;
  piVar11 = (int *)local_c;
  iVar7 = (int)param_1->field_0049;
  iVar8 = (int)param_1->field_0047;
  piVar10 = (int *)local_10;
  iVar5 = (int)param_1->field_004B;
  iVar6 = FUN_006acf90(iVar8,iVar7,(int)param_1->field_0235,(int)param_1->field_0237);
  iVar5 = thunk_FUN_005845b0(uVar3,(int)param_1->field_0239 - (int)param_1->field_004B,iVar6,iVar8,
                             iVar7,iVar5,piVar10,piVar11,piVar12,uVar4);
  if (iVar5 == 0) {
    thunk_FUN_00417ff0(param_1,bVar9);
    thunk_FUN_00418010(param_1,bVar9 - 1);
    iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0235,param_1->field_0237,
                       param_1->field_0239);
    if (iVar5 != 0) {
      param_1->field_023F = 0x10;
      return 0;
    }
    return 1;
  }
  thunk_FUN_00417ff0(param_1,bVar9);
  thunk_FUN_00418010(param_1,bVar9 - 1);
  iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                    ((AnonReceiver_004167A0 *)param_1,local_10[0],local_c[0],local_8[0]);
  if ((iVar5 != 0) &&
     (iVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                        ((AnonReceiver_004167A0 *)param_1,param_1->field_0235,param_1->field_0237,
                         param_1->field_0239), iVar5 != 0)) {
    return 0;
  }
  return 1;
}

