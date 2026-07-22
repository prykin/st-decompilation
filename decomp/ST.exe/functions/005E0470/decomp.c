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
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  void **value;
  SpriteClassTy *this_02;
  undefined4 *puVar10;
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
  piVar7 = &this_00->field_02BD;
  iVar2 = 4;
  do {
    if (-1 < *piVar7) {
      FUN_006b3bb0((int *)PTR_008075a8,*piVar7);
      *piVar7 = 0xffffffff;
    }
    piVar7 = piVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this_00->field_02B9 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_02B9);
    this_00->field_02B9 = 0;
  }
  piVar7 = &this_00->field_02A5;
  iVar2 = 5;
  do {
    if (-1 < *piVar7) {
      FUN_006b3bb0((int *)PTR_008075a8,*piVar7);
      *piVar7 = 0xffffffff;
    }
    piVar7 = piVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar8 = &this_00->field_0291;
  iVar2 = 5;
  do {
    if (*puVar8 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar8);
      *puVar8 = 0;
    }
    puVar8 = puVar8 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pDVar3 = this_00->field_064B;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar9 = 0;
    if (pDVar3->count != 0) {
      if (pDVar3->count == 0) {
        this_02 = (SpriteClassTy *)0x0;
        goto LAB_005e0672;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar9) (runtime stride) */
        this_02 = (SpriteClassTy *)(pDVar3->elementSize * uVar9 + (int)pDVar3->data);
LAB_005e0672:
        SpriteClassTy::CloseSprite(this_02);
        if (*(int *)((int)&this_02[1].field_0008 + 1) != 0) {
          FreeAndNull((void **)((int)&this_02[1].field_0008 + 1));
        }
        pDVar3 = this_00->field_064B;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar3->count);
    }
    DArrayDestroy(this_00->field_064B);
    this_00->field_064B = (DArrayTy *)0x0;
  }
  pDVar3 = this_00->field_0647;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar9 = 0;
    if (pDVar3->count != 0) {
      if (pDVar3->count == 0) {
        pAVar4 = (AnonShape_005E10A0_819783CC *)0x0;
        goto LAB_005e06d9;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar9) (runtime stride) */
        pAVar4 = (AnonShape_005E10A0_819783CC *)(pDVar3->elementSize * uVar9 + (int)pDVar3->data);
LAB_005e06d9:
        TTaskItemClose(this_00,pAVar4);
        pDVar3 = this_00->field_0647;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar3->count);
    }
    DArrayDestroy(this_00->field_0647);
    this_00->field_0647 = (DArrayTy *)0x0;
  }
  pDVar3 = this_00->field_064F;
  this_01 = (ccFntTy *)0x0;
  if (pDVar3 != (DArrayTy *)0x0) {
    uVar9 = 0;
    if (pDVar3->count != 0) {
      if (pDVar3->count == 0) {
        pAVar4 = (AnonShape_005E10A0_819783CC *)0x0;
        goto LAB_005e072b;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar3, uVar9) (runtime stride) */
        pAVar4 = (AnonShape_005E10A0_819783CC *)(pDVar3->elementSize * uVar9 + (int)pDVar3->data);
LAB_005e072b:
        TTaskItemClose(this_00,pAVar4);
        pDVar3 = this_00->field_064F;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar3->count);
    }
    DArrayDestroy(this_00->field_064F);
    this_00->field_064F = (DArrayTy *)0x0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_01 = extraout_ECX;
  }
  value = (void **)&this_00->field_0653;
  iVar2 = 0xb;
  do {
    if (*value != (void *)0x0) {
      FreeAndNull(value);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_00;
    }
    value = value + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this_00->field_0089 != (ccFntTy *)0x0) {
    ccFntTy::operator(this_01,(uint *)this_00->field_0089);
    this_00->field_0089 = (ccFntTy *)0x0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_01 = extraout_ECX_01;
  }
  if (this_00->field_008D != (ccFntTy *)0x0) {
    ccFntTy::operator(this_01,(uint *)this_00->field_008D);
    this_00->field_008D = (ccFntTy *)0x0;
  }
  this_00->field_0081 = (ushort *)0x0;
  pcVar6 = (cMf32 *)0x0;
  if (this_00->field_005D != (cMf32 *)0x0) {
    pcVar6 = g_cMf32_00806780;
    if ((this_00->field_0080 != '\x01') &&
       (pcVar6 = g_cMf32_00806798, this_00->field_0080 != '\x02')) {
      pcVar6 = this_00->field_0070;
    }
    cMf32::RecMemFree(pcVar6,(uint *)&this_00->field_005D);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pcVar6 = extraout_ECX_02;
  }
  if (DAT_008085e3 != 0) {
    FUN_006c1e20();
    puVar10 = &DAT_00808463;
    for (iVar2 = 0x60; pcVar6 = (cMf32 *)0x0, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  if (this_00->field_0074 != (DArrayTy *)0x0) {
    DArrayDestroy(this_00->field_0074);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pcVar6 = extraout_ECX_03;
  }
  this_00->field_0074 = (DArrayTy *)0x0;
  if ((DArrayTy *)this_00->field_0078 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this_00->field_0078);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pcVar6 = extraout_ECX_04;
  }
  this_00->field_0078 = 0;
  if (this_00->field_0070 != (cMf32 *)0x0) {
    cMf32::delete(pcVar6,this_00->field_0070);
  }
  this_00->field_0070 = (cMf32 *)0x0;
  if (this_00->field_004D != 0) {
    AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x3d);
  }
  DAT_00807654 = 0x21;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

