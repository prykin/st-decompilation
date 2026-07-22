#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::CreateBut

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0050E7D0 -> 004F3130 @ 0050EC8C | 0050E7D0 -> 004F3130 @ 0050ECDA | 0050E7D0 ->
   004F3130 @ 0050EF83 | 0050E7D0 -> 004F3130 @ 0050EFC5 | 0050E7D0 -> 004F3130 @ 0050F00A |
   0050E7D0 -> 004F3130 @ 0050F04F */

undefined4 __thiscall
CPanelTy::CreateBut(CPanelTy *this,byte param_1,undefined4 param_2,int param_3,int param_4,
                   int param_5,byte param_6,char *text,undefined4 param_8,undefined4 param_9,
                   short param_10,undefined2 param_11,int param_12,char *param_13,int param_14,
                   undefined4 param_15,undefined4 param_16)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  InternalExceptionFrame local_1d0;
  int local_18c [4];
  int local_17c;
  undefined4 local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  short local_fe;
  int local_fc;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  short local_da;
  int local_d8;
  undefined4 local_d0;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  CPanelTy *local_10;
  undefined4 local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_c = 0;
  local_1d0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_1d0;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_1d0.jumpBuffer,0);
  pCVar3 = local_10;
  if (iVar4 == 0) {
    memset(local_18c, 0, 0x17c); /* compiler bulk-zero initialization */
    local_18c[1] = param_2;
    local_18c[0] = param_3;
    if (text != (char *)0x0) {
      wsprintfA(&pCVar3->field_0x1e1,"%s0",text);
      local_8 = cMf32::RecGet(DAT_00806790,param_6,&pCVar3->field_0x1e1,(int *)0x0,1);
    }
    if (param_6 == 1) {
      local_17c = *(int *)(local_8 + 2);
      local_178 = *(undefined4 *)(local_8 + 4);
    }
    else {
      local_17c = param_14;
      local_178 = param_15;
      if (param_6 == 6) {
        local_17c = *(int *)(local_8 + 2);
        local_178 = *(undefined4 *)(local_8 + 4);
      }
    }
    if (param_4 < 0) {
      param_4 = ((&pCVar3->field_0068)[param_1] - local_17c) / 2;
    }
    uVar2 = (uint)param_1;
    local_18c[2] = (&pCVar3->field_003C)[uVar2] + param_4;
    iVar4 = pCVar3->field_0130;
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar4 = pCVar3->field_0134;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar4 = pCVar3->field_0138;
    }
    if (iVar4 == 0) {
      if ((param_1 == 1) || (param_1 == 7)) {
        local_18c[3] = pCVar3->field_00C0;
      }
      else {
        local_18c[3] = 0;
      }
      local_18c[3] = local_18c[3] + DAT_00806734;
    }
    else {
      local_18c[3] = (&pCVar3->field_0094)[uVar2];
    }
    local_18c[3] = local_18c[3] + param_5;
    if (local_8 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
    }
    local_16c = pCVar3->field_0008;
    local_124 = param_9;
    local_164 = param_8;
    local_168 = 2;
    local_148 = 2;
    local_128 = 2;
    local_144 = param_16;
    local_84 = 1;
    local_80 = 1;
    if (param_10 != 0) {
      local_10c = 0x101;
      local_108 = 3;
      local_104 = 0x4201;
      local_100 = param_11;
      local_fe = param_10;
      local_fc = param_12;
      local_f4 = 0;
      local_d0 = 1;
      local_e8 = 0x101;
      local_e4 = 3;
      local_e0 = 0x4202;
      local_dc = param_11;
      local_da = param_10;
      local_d8 = param_12;
    }
    if ((param_10 == 1) && (-1 < *(int *)(param_12 + 9))) {
      local_5c = *(undefined4 *)(&DAT_00807e66 + *(int *)(param_12 + 9) * 4);
      local_60 = 8;
    }
    local_14c = local_16c;
    local_12c = local_16c;
    if (param_13 != (char *)0x0) {
      local_68 = FUN_0070aa70(DAT_00806790,param_13,0,1);
      local_64 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,param_13,1);
    }
    (*pCVar3->field_000C->vtable->CreateObject)
              ((SystemClassTy *)pCVar3->field_000C,2,&local_c,(int *)0x0,local_18c,0);
    g_currentExceptionFrame = local_1d0.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_1d0.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x1b3,0,iVar4,"%s",
                             "CPanelTy::CreateBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x1b3);
  return 0;
}

