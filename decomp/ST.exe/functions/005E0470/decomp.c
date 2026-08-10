#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::DoneMTask */

void __thiscall MTaskTy::DoneMTask(MTaskTy *this)

{
  MTaskTy *this_00;
  int iVar2;
  DArrayTy *pDVar2;
  AnonShape_005E10A0_819783CC *pAVar3;
  int iVar6;
  cMf32 *this_01;
  uint *puVar4;
  uint uVar5;
  int *slotStorage;
  int iVar7;
  SpriteClassTy *this_02;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",299,0,iVar2,"%s",
                               "MTaskTy::DoneMTask");
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\task_obj.cpp",299);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DarkScreen(g_dDXContext_0080759C,10,2);
  this_00 = local_8;
  SetAccelerator(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_0488 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0488);
    this_00->field_0488 = 0;
  }
  if (-1 < (int)this_00->field_063F) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_063F);
    this_00->field_063F = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_048C);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_051D);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_05AE);
  if (this_00->field_0643 != nullptr) {
    FUN_006b5570(this_00->field_0643);
  }
  this_00->field_0643 = nullptr;
  if (this_00->field_02CD != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02CD);
    this_00->field_02CD = 0;
  }
  if (-1 < (int)this_00->field_0484) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,this_00->field_0484);
    this_00->field_0484 = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_02D1);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_0362);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_03F3);
  puVar4 = &this_00->field_02BD;
  iVar7 = 4;
  do {
    if (-1 < (int)*puVar4) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,*puVar4);
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (this_00->field_02B9 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
    this_00->field_02B9 = 0;
  }
  puVar4 = this_00->field_02A5;
  iVar7 = 5;
  do {
    if (-1 < (int)*puVar4) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,*puVar4);
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = this_00->field_0291;
  iVar7 = 5;
  do {
    if (*puVar4 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar4);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pDVar2 = this_00->field_064B;
  if (pDVar2 != nullptr) {
    uVar5 = 0;
    if (pDVar2->count != 0) {
      if (pDVar2->count == 0) {
        this_02 = nullptr;
        goto LAB_005e0672;
      }
      do {
        this_02 = DArrayAt<SpriteClassTy>(pDVar2, uVar5);
LAB_005e0672:
        SpriteClassTy::CloseSprite(this_02);
        if (*(int *)((int)&this_02[1].field_0008 + 1) != 0) {
          FreeAndNull((void *)((int)&this_02[1].field_0008 + 1));
        }
        pDVar2 = this_00->field_064B;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar2->count);
    }
    DArrayDestroy(this_00->field_064B);
    this_00->field_064B = nullptr;
  }
  pDVar2 = this_00->field_0647;
  if (pDVar2 != nullptr) {
    uVar5 = 0;
    if (pDVar2->count != 0) {
      if (pDVar2->count == 0) {
        pAVar3 = nullptr;
        goto LAB_005e06d9;
      }
      do {
        pAVar3 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar2, uVar5);
LAB_005e06d9:
        TTaskItemClose(this_00,pAVar3);
        pDVar2 = this_00->field_0647;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar2->count);
    }
    DArrayDestroy(this_00->field_0647);
    this_00->field_0647 = nullptr;
  }
  pDVar2 = this_00->field_064F;
  if (pDVar2 != nullptr) {
    uVar5 = 0;
    if (pDVar2->count != 0) {
      if (pDVar2->count == 0) {
        pAVar3 = nullptr;
        goto LAB_005e072b;
      }
      do {
        pAVar3 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar2, uVar5);
LAB_005e072b:
        TTaskItemClose(this_00,pAVar3);
        pDVar2 = this_00->field_064F;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar2->count);
    }
    DArrayDestroy(this_00->field_064F);
    this_00->field_064F = nullptr;
  }
  slotStorage = &this_00->field_0653;
  iVar7 = 0xb;
  do {
    if (*slotStorage != 0) {
      FreeAndNull(slotStorage);
    }
    slotStorage = slotStorage + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (this_00->field_0089 != nullptr) {
    ccFntTy::operator_delete((uint *)this_00->field_0089);
    this_00->field_0089 = nullptr;
  }
  if (this_00->field_008D != nullptr) {
    ccFntTy::operator_delete((uint *)this_00->field_008D);
    this_00->field_008D = nullptr;
  }
  this_00->field_0081 = nullptr;
  if (this_00->field_005D != nullptr) {
    this_01 = g_cMf32_00806780;
    if ((this_00->field_0080 != '\x01') &&
       (this_01 = g_cMf32_00806798, this_00->field_0080 != '\x02')) {
      this_01 = this_00->field_0070;
    }
    cMf32::RecMemFree(this_01,(uint *)&this_00->field_005D);
  }
  if (DAT_008085e3 != 0) {
    FUN_006c1e20();
    memset(&DAT_00808463, 0, 0x180); /* compiler bulk-zero initialization */
  }
  if (this_00->field_0074 != nullptr) {
    DArrayDestroy((DArrayTy *)this_00->field_0074);
  }
  this_00->field_0074 = nullptr;
  if (this_00->field_0078 != nullptr) {
    DArrayDestroy(this_00->field_0078);
  }
  this_00->field_0078 = nullptr;
  if (this_00->field_0070 != nullptr) {
    cMf32::delete(this_00->field_0070);
  }
  this_00->field_0070 = nullptr;
  if (this_00->field_004D != 0) {
    AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x3d);
  }
  DAT_00807654 = 0x21;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

