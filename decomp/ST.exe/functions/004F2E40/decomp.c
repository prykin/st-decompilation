#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::SetButStruct

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00502360 -> 004F2E40 @ 00502527 | 00503450 -> 004F2E40 @ 00503643 | 005097E0 ->
   004F2E40 @ 005099DD | 0050E7D0 -> 004F2E40 @ 0050EA07 */

void __thiscall
CPanelTy::SetButStruct
          (CPanelTy *this,AnonShape_004F2E40_DC76A8C6 *param_1,byte param_2,undefined4 param_3,
          int param_4,int param_5,byte param_6,LPSTR param_7,undefined2 param_8,undefined2 param_9,
          undefined4 param_10,char *param_11)

{
  undefined1 *text;
  code *pcVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  AnonShape_004F2E40_DC76A8C6 *pAVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar4 == 0) {
    pAVar7 = param_1;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pAVar7 = 0;
      pAVar7 = (AnonShape_004F2E40_DC76A8C6 *)&pAVar7->field_0x4;
    }
    *(undefined4 *)param_1 = param_3;
    uVar2 = (uint)param_2;
    *(int *)&param_1->field_0x8 = (&local_c->field_003C)[uVar2] + param_4;
    iVar4 = local_c->field_0130;
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar4 = local_c->field_0134;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar4 = local_c->field_0138;
    }
    if (iVar4 == 0) {
      if ((param_2 == 1) || (param_2 == 7)) {
        iVar4 = local_c->field_00C0;
      }
      else {
        iVar4 = 0;
      }
      iVar4 = iVar4 + DAT_00806734;
    }
    else {
      iVar4 = (&local_c->field_0094)[uVar2];
    }
    text = &local_c->field_0x1e1;
    *(int *)&param_1->field_0xc = iVar4 + param_5;
    *(undefined4 *)&param_1[1].field_0x54 = 1;
    *(undefined4 *)&param_1[1].field_0x58 = 1;
    wsprintfA(text,"%s0",param_7);
    local_8 = cMf32::RecGet(DAT_00806790,param_6,text,(int *)0x0,1);
    uVar3 = local_8[3];
    *(ushort *)&param_1->field_0x10 = local_8[2];
    *(ushort *)&param_1->field_0x12 = uVar3;
    uVar3 = local_8[5];
    *(ushort *)&param_1->field_0x14 = local_8[4];
    *(ushort *)&param_1->field_0x16 = uVar3;
    cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
    *(undefined4 *)&param_1->field_0x84 = 3;
    *(undefined4 *)&param_1->field_0xa8 = 3;
    *(undefined4 *)&param_1->field_0x80 = 0x101;
    *(undefined4 *)&param_1->field_0x88 = 0x4201;
    *(undefined2 *)&param_1->field_0x8c = param_9;
    param_1->field_008E = param_8;
    *(undefined4 *)&param_1->field_0x90 = param_10;
    *(undefined4 *)&param_1->field_0x98 = 0;
    *(undefined4 *)&param_1[1].field_0x8 = 1;
    *(undefined4 *)&param_1->field_0xa4 = 0x101;
    *(undefined4 *)&param_1->field_0xac = 0x4202;
    *(undefined2 *)&param_1->field_0xb0 = param_9;
    param_1->field_00B2 = param_8;
    *(undefined4 *)(param_1 + 1) = param_10;
    if (param_11 != (char *)0x0) {
      uVar5 = FUN_0070aa70(DAT_00806790,param_11,0,1);
      *(undefined4 *)&param_1[1].field_0x70 = uVar5;
      iVar4 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,param_11,1);
      *(int *)&param_1[1].field_0x74 = iVar4;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x171,0,iVar4,"%s",
                             "CPanelTy::SetButStruct");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x171);
  return;
}

