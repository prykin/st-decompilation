#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::Update */

void __thiscall BehPanelTy::Update(BehPanelTy *this)

{
  BehPanelTy *this_00;
  int local_EAX_35;
  int iVar2;
  int iVar4;
  int iVar3;
  int *piVar5;
  short *psVar6;
  Global_sub_005272B0_param_1Enum *pGVar7;
  short *psVar8;
  bool bVar9;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  byte local_16;
  int local_14;
  BehPanelTy *local_10;
  int local_c;
  Global_sub_005272B0_param_1Enum *local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\behpanel.cpp",0xb2,0,local_EAX_35,
                               "%s","BehPanelTy::Update");
    if (iVar3 == 0) {
      RaiseInternalException(local_EAX_35,0,"E:\\__titans\\Andrey\\behpanel.cpp",0xb2);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_28 = local_10->field_01AB;
  local_24 = *(undefined4 *)&local_10->field_0x1af;
  local_20 = *(undefined4 *)&local_10->field_0x1b3;
  local_1c = local_10->field_01B7;
  local_18 = *(undefined2 *)&local_10->field_0x1bb;
  local_16 = local_10->field_01BD;
  STAllPlayersC::GetPanelInfo
            (g_allPlayers_007FA174,0xb,(AnonShape_0043BEB0_1C00EC12 *)&local_10->field_01AB);
  local_8 = (Global_sub_005272B0_param_1Enum *)&local_24;
  local_14 = -0x1af - (int)this_00;
  pGVar7 = &this_00->field_0x1af;
  piVar5 = &this_00->field_01CF;
  local_c = 6;
  do {
    this_00->field_0028 = 0x54;
    *(uint *)&this_00->field_0x2c = (uint)pGVar7[6];
    this_00->field_0030 = pGVar7 + local_14;
    FUN_006e6080(this_00,2,this_00->field_01BE,(undefined4 *)&this_00->field_0x18);
    if (*pGVar7 != *local_8) {
      *(undefined1 *)((int)piVar5 + -1) = 1;
      iVar2 = thunk_FUN_00525390(*pGVar7,this_00->field_01AB);
      *piVar5 = iVar2;
      iVar4 = thunk_FUN_005272b0(*pGVar7);
      piVar5[2] = iVar4;
      *(undefined1 *)(piVar5 + 3) = 3;
    }
    piVar5 = (int *)((int)piVar5 + 0x27);
    pGVar7 = pGVar7 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar4 = 3;
  bVar9 = true;
  psVar6 = (short *)&this_00->field_0x1af;
  psVar8 = (short *)&local_24;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *psVar6 == *psVar8;
    psVar6 = psVar6 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar9);
  if (!bVar9) {
    this_00->field_0028 = 5;
    FUN_006e6080(this_00,2,this_00->field_01BE,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0x1bb != (byte)local_18) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0x1bb;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,this_00->field_01C2,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0x1bc != STPiece<1,1>(local_18)) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0x1bc;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,this_00->field_01C6,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_01BD != local_16) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_01BD;
    this_00->field_0028 = 0x20;
    FUN_006e6080(this_00,2,this_00->field_01CA,(undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

