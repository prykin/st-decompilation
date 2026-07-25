#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::DoneMTask */

void __thiscall MTaskTy::DoneMTask(MTaskTy *this)

{
  code *pcVar1;
  MTaskTy *this_00;
  int iVar2;
  DArrayTy *pDVar3;
  AnonShape_005E10A0_819783CC *pAVar4;
  int iVar5;
  cMf32 *this_01;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  void **value;
  SpriteClassTy *this_02;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",299,0,iVar2,"%s",
                               "MTaskTy::DoneMTask");
    if (iVar5 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\task_obj.cpp",299);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DarkScreen(DAT_0080759c,10,2);
  this_00 = local_8;
  SetAccelerator(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_0488 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0488);
    this_00->field_0488 = 0;
  }
  if (-1 < this_00->field_063F) {
    FUN_006b3bb0((int *)PTR_008075a8,this_00->field_063F);
    this_00->field_063F = -1;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_048C);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_051D);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_05AE);
  if ((DArrayTy *)this_00->field_0643 != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)this_00->field_0643);
  }
  this_00->field_0643 = (AnonPointee_MTaskTy_0643 *)0x0;
  if (this_00->field_02CD != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02CD);
    this_00->field_02CD = 0;
  }
  if (-1 < this_00->field_0484) {
    FUN_006b3bb0((int *)PTR_008075a8,this_00->field_0484);
    this_00->field_0484 = -1;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_02D1);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_0362);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_03F3);
  piVar6 = &this_00->field_02BD;
  iVar2 = 4;
  do {
    if (-1 < *piVar6) {
      FUN_006b3bb0((int *)PTR_008075a8,*piVar6);
      *piVar6 = 0xffffffff;
    }
    piVar6 = piVar6 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this_00->field_02B9 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
    this_00->field_02B9 = 0;
  }
  piVar6 = &this_00->field_02A5;
  iVar2 = 5;
  do {
    if (-1 < *piVar6) {
      FUN_006b3bb0((int *)PTR_008075a8,*piVar6);
      *piVar6 = 0xffffffff;
    }
    piVar6 = piVar6 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar7 = &this_00->field_0291;
  iVar2 = 5;
  do {
    if (*puVar7 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pDVar3 = this_00->field_064B;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar8 = 0;
    if (pDVar3->count != 0) {
      if (pDVar3->count == 0) {
        this_02 = (SpriteClassTy *)0x0;
        goto LAB_005e0672;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar8) (runtime stride) */
        this_02 = (SpriteClassTy *)(pDVar3->elementSize * uVar8 + (int)pDVar3->data);
LAB_005e0672:
        SpriteClassTy::CloseSprite(this_02);
        if (*(int *)((int)&this_02[1].field_0008 + 1) != 0) {
          FreeAndNull((void **)((int)&this_02[1].field_0008 + 1));
        }
        pDVar3 = this_00->field_064B;
        uVar8 = uVar8 + 1;
      } while (uVar8 < pDVar3->count);
    }
    DArrayDestroy(this_00->field_064B);
    this_00->field_064B = (DArrayTy *)0x0;
  }
  pDVar3 = this_00->field_0647;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar8 = 0;
    if (pDVar3->count != 0) {
      if (pDVar3->count == 0) {
        pAVar4 = (AnonShape_005E10A0_819783CC *)0x0;
        goto LAB_005e06d9;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar8) (runtime stride) */
        pAVar4 = (AnonShape_005E10A0_819783CC *)(pDVar3->elementSize * uVar8 + (int)pDVar3->data);
LAB_005e06d9:
        TTaskItemClose(this_00,pAVar4);
        pDVar3 = this_00->field_0647;
        uVar8 = uVar8 + 1;
      } while (uVar8 < pDVar3->count);
    }
    DArrayDestroy(this_00->field_0647);
    this_00->field_0647 = (DArrayTy *)0x0;
  }
  pDVar3 = this_00->field_064F;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar8 = 0;
    if (pDVar3->count != 0) {
      if (pDVar3->count == 0) {
        pAVar4 = (AnonShape_005E10A0_819783CC *)0x0;
        goto LAB_005e072b;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar8) (runtime stride) */
        pAVar4 = (AnonShape_005E10A0_819783CC *)(pDVar3->elementSize * uVar8 + (int)pDVar3->data);
LAB_005e072b:
        TTaskItemClose(this_00,pAVar4);
        pDVar3 = this_00->field_064F;
        uVar8 = uVar8 + 1;
      } while (uVar8 < pDVar3->count);
    }
    DArrayDestroy(this_00->field_064F);
    this_00->field_064F = (DArrayTy *)0x0;
  }
  value = (void **)&this_00->field_0653;
  iVar2 = 0xb;
  do {
    if (*value != (void *)0x0) {
      FreeAndNull(value);
    }
    value = value + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this_00->field_0089 != (ccFntTy *)0x0) {
    ccFntTy::operator((uint *)this_00->field_0089);
    this_00->field_0089 = (ccFntTy *)0x0;
  }
  if (this_00->field_008D != (ccFntTy *)0x0) {
    ccFntTy::operator((uint *)this_00->field_008D);
    this_00->field_008D = (ccFntTy *)0x0;
  }
  this_00->field_0081 = (ushort *)0x0;
  if (this_00->field_005D != (cMf32 *)0x0) {
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
  if (this_00->field_0074 != (DArrayTy *)0x0) {
    DArrayDestroy(this_00->field_0074);
  }
  this_00->field_0074 = (DArrayTy *)0x0;
  if ((DArrayTy *)this_00->field_0078 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this_00->field_0078);
  }
  this_00->field_0078 = 0;
  if (this_00->field_0070 != (cMf32 *)0x0) {
    cMf32::delete(this_00->field_0070);
  }
  this_00->field_0070 = (cMf32 *)0x0;
  if (this_00->field_004D != 0) {
    AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x3d);
  }
  DAT_00807654 = 0x21;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

