
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::DoneMTask */

void __thiscall MTaskTy::DoneMTask(MTaskTy *this)

{
  code *pcVar1;
  MTaskTy *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar5;
  uint uVar6;
  int *piVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SpriteClassTy *this_02;
  undefined4 *puVar8;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,299,0,iVar2,&DAT_007a4ccc,
                               s_MTaskTy__DoneMTask_007cda70);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_Start_task_obj_cpp_007cd994,299);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DarkScreen(DAT_0080759c,10,2);
  this_00 = local_8;
  SetAccelerator(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_0488 != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_0488);
    this_00->field_0488 = 0;
  }
  if (-1 < (int)this_00->field_063F) {
    FUN_006b3bb0(DAT_008075a8,this_00->field_063F);
    this_00->field_063F = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_048C);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_051D);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_05AE);
  if ((byte *)this_00->field_0643 != (byte *)0x0) {
    FUN_006b5570((byte *)this_00->field_0643);
  }
  this_00->field_0643 = 0;
  if (this_00->field_02CD != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_02CD);
    this_00->field_02CD = 0;
  }
  if (-1 < (int)this_00->field_0484) {
    FUN_006b3bb0(DAT_008075a8,this_00->field_0484);
    this_00->field_0484 = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_02D1);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_0362);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00->field_03F3);
  puVar3 = &this_00->field_02BD;
  iVar2 = 4;
  do {
    if (-1 < (int)*puVar3) {
      FUN_006b3bb0(DAT_008075a8,*puVar3);
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this_00->field_02B9 != 0) {
    FUN_006e56b0((void *)this_00->field_000C,this_00->field_02B9);
    this_00->field_02B9 = 0;
  }
  puVar3 = &this_00->field_02A5;
  iVar2 = 5;
  do {
    if (-1 < (int)*puVar3) {
      FUN_006b3bb0(DAT_008075a8,*puVar3);
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = &this_00->field_0291;
  iVar2 = 5;
  do {
    if (*puVar3 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = this_00->field_064B;
  if (iVar2 != 0) {
    uVar6 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        this_02 = (SpriteClassTy *)0x0;
        goto LAB_005e0672;
      }
      do {
        this_02 = (SpriteClassTy *)(*(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c));
LAB_005e0672:
        SpriteClassTy::CloseSprite(this_02);
        if (*(int *)((int)&this_02[1].field_0008 + 1) != 0) {
          FUN_006ab060((undefined4 *)((int)&this_02[1].field_0008 + 1));
        }
        iVar2 = this_00->field_064B;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110((byte *)this_00->field_064B);
    this_00->field_064B = 0;
  }
  iVar2 = this_00->field_0647;
  if (iVar2 != 0) {
    uVar6 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_005e06d9;
      }
      do {
        puVar3 = (uint *)(*(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c));
LAB_005e06d9:
        TTaskItemClose(this_00,puVar3);
        iVar2 = this_00->field_0647;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110((byte *)this_00->field_0647);
    this_00->field_0647 = 0;
  }
  iVar2 = this_00->field_064F;
  this_01 = (ccFntTy *)0x0;
  if (iVar2 != 0) {
    uVar6 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_005e072b;
      }
      do {
        puVar3 = (uint *)(*(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c));
LAB_005e072b:
        TTaskItemClose(this_00,puVar3);
        iVar2 = this_00->field_064F;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110((byte *)this_00->field_064F);
    this_00->field_064F = 0;
    this_01 = extraout_ECX;
  }
  piVar7 = &this_00->field_0653;
  iVar2 = 0xb;
  do {
    if (*piVar7 != 0) {
      FUN_006ab060(piVar7);
      this_01 = extraout_ECX_00;
    }
    piVar7 = piVar7 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (this_00->field_0089 != (ccFntTy *)0x0) {
    ccFntTy::operator(this_01,(uint *)this_00->field_0089);
    this_00->field_0089 = (ccFntTy *)0x0;
    this_01 = extraout_ECX_01;
  }
  if (this_00->field_008D != (ccFntTy *)0x0) {
    ccFntTy::operator(this_01,(uint *)this_00->field_008D);
    this_00->field_008D = (ccFntTy *)0x0;
  }
  this_00->field_0081 = 0;
  pcVar5 = (cMf32 *)0x0;
  if (this_00->field_005D != 0) {
    pcVar5 = DAT_00806780;
    if ((this_00->field_0080 != '\x01') && (pcVar5 = DAT_00806798, this_00->field_0080 != '\x02')) {
      pcVar5 = this_00->field_0070;
    }
    cMf32::RecMemFree(pcVar5,&this_00->field_005D);
    pcVar5 = extraout_ECX_02;
  }
  if (DAT_008085e3 != 0) {
    FUN_006c1e20();
    puVar8 = &DAT_00808463;
    for (iVar2 = 0x60; pcVar5 = (cMf32 *)0x0, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if ((byte *)this_00->field_0074 != (byte *)0x0) {
    FUN_006ae110((byte *)this_00->field_0074);
    pcVar5 = extraout_ECX_03;
  }
  this_00->field_0074 = 0;
  if ((byte *)this_00->field_0078 != (byte *)0x0) {
    FUN_006ae110((byte *)this_00->field_0078);
    pcVar5 = extraout_ECX_04;
  }
  this_00->field_0078 = 0;
  if (this_00->field_0070 != (cMf32 *)0x0) {
    cMf32::delete(pcVar5,&this_00->field_0070->field_0000);
  }
  this_00->field_0070 = (cMf32 *)0x0;
  if (this_00->field_004D != 0) {
    AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x3d);
  }
  DAT_00807654 = 0x21;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

