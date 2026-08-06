#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeNumStr */

void __thiscall PopUpTy::ChangeNumStr(PopUpTy *this)

{
  ushort *puVar1;
  uint *puVar2;
  PopUpTy *this_00;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  char *resourceString;
  int uVar9;
  uint uVar7;
  int iVar8;
  uint uVar10;
  uint *puVar11;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x7e,0,iVar5,"%s",
                               "PopUpTy::ChangeNumStr");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x7e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar1 = local_18->field_0090;
  uVar10 = *(uint *)(puVar1 + 10);
  if (uVar10 == 0) {
    uVar10 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(puVar1 + 4);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0((int *)puVar1);
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar6 = 0x89898989;
    puVar6 = puVar6 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = 0x1e;
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar6 = 0x89;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  local_10 = -0x18 - (int)this_00;
  local_14 = 0;
  puVar11 = this_00->field_0018;
  do {
    iVar5 = local_14;
    if ((DAT_00807342 == 0) || (DAT_00807346 <= (byte)local_8)) {
LAB_0052d7d4:
      puVar11[0xf] = 0;
      FUN_006b2800(g_ddxContext_008075A8,*puVar11,0,0x13);
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar11);
    }
    else {
      puVar2 = this_00->field_0098;
      if (local_14 < (int)puVar2[2]) {
        iVar8 = *(int *)(puVar2[5] + local_10 + (int)puVar11);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 == 0) goto LAB_0052d7d4;
      if (local_14 < (int)puVar2[2]) {
        resourceString = *(char **)(puVar2[5] + local_10 + (int)puVar11);
      }
      else {
        resourceString = nullptr;
      }
      uVar9 = FUN_00711110(this_00->field_0094,resourceString);
      if ((int)*(uint *)(this_00->field_0090 + 2) <= uVar9) {
        uVar9 = *(uint *)(this_00->field_0090 + 2);
      }
      puVar11[0xf] = uVar9;
      FUN_006b2800(g_ddxContext_008075A8,*puVar11,uVar9,0x13);
      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar11,0xffffffff,0xd,local_c);
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar11);
    }
    bVar4 = (byte)local_8 + 1;
    local_14 = iVar5 + 1;
    puVar11 = puVar11 + 1;
    local_c = local_c + 0x13;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    if (0xe < bVar4) {
      bVar4 = DAT_00807346;
      if ((int)this_00->field_0098[2] < (int)(uint)DAT_00807346) {
        bVar4 = (byte)this_00->field_0098[2];
      }
      this_00->field_009C = bVar4;
      local_8 = (uint)STPiece<1,3>(local_8) << 8;
      if (DAT_00807346 != 0) {
        do {
          if ((int)(local_8 & 0xff) < (int)this_00->field_0098[2]) {
            iVar5 = *(int *)(this_00->field_0098[5] + (local_8 & 0xff) * 4);
          }
          else {
            iVar5 = 0;
          }
          if (iVar5 != 0) {
            OutStr(this_00,(byte)local_8);
          }
          bVar4 = (byte)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < DAT_00807346);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

