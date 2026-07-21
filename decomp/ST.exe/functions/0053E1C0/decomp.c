#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::CreateTab */

undefined4 __thiscall
UPanelTy::CreateTab(UPanelTy *this,byte param_1,byte param_2,int param_3,int param_4,uint param_5,
                   uint param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar8;
  uint local_510 [280];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  UPanelTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  if (iVar3 == 0) {
    memset(local_6c, 0, 0x58); /* compiler bulk-zero initialization */
    iVar3 = 0;
    memset(local_510, 0, 0x460); /* compiler bulk-zero initialization */
    bVar2 = 0;
    if (param_1 != 0) {
      local_14 = local_c->field_005C;
      iVar3 = 0;
      local_10 = 1;
      puVar6 = local_510 + 1;
      uVar8 = local_c->field_003C + param_3;
      do {
        puVar6[-1] = local_10;
        iVar5 = local_14;
        *puVar6 = (uint)(bVar2 == param_2);
        puVar6[2] = uVar8;
        if (iVar5 == 0) {
          iVar5 = -local_c->field_0048;
        }
        else {
          iVar5 = local_c->field_0044;
        }
        puVar6[3] = iVar5 + iVar3 + param_4;
        puVar6[4] = param_5;
        puVar6[5] = param_6;
        bVar2 = bVar2 + 1;
        local_10 = local_10 + 1;
        iVar3 = iVar3 + param_8;
        uVar8 = uVar8 + param_7;
        puVar6 = puVar6 + 0x1c;
      } while (bVar2 < param_1);
    }
    local_24 = local_510;
    local_5c = local_c->field_0008;
    local_20 = param_2 + 1;
    local_34 = param_10;
    local_58 = 2;
    local_38 = 2;
    local_6c[0] = 1;
    local_6c[1] = 0;
    local_54 = param_9;
    local_1c = 1;
    local_18 = 1;
    local_3c = local_5c;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)local_c->field_000C + 8))(5,&local_8,0,local_6c,0);
    g_currentExceptionFrame = local_b0.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0xd1,0,iVar3,"%s",
                             "UPanelTy::CreateTab");
  if (iVar5 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0xd1);
    return 0xffffffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

