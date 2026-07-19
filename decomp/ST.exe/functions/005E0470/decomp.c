
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::DoneMTask */

void __thiscall MTaskTy::DoneMTask(MTaskTy *this)

{
  char cVar1;
  code *pcVar2;
  MTaskTy *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  cMf32 *extraout_ECX_02;
  cMf32 *extraout_ECX_03;
  cMf32 *extraout_ECX_04;
  cMf32 *pcVar6;
  uint uVar7;
  int *piVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SpriteClassTy *this_02;
  undefined4 *puVar9;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,299,0,iVar3,&DAT_007a4ccc,
                               s_MTaskTy__DoneMTask_007cda70);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Start_task_obj_cpp_007cd994,299);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_0055dbf0(DAT_0080759c,10,2);
  this_00 = local_8;
  thunk_FUN_00540dc0(0,*(undefined4 *)&local_8->field_0x8,2,100,2,1,0,0,0,0,0,0);
  thunk_FUN_00540dc0(0,*(undefined4 *)&this_00->field_0x8,2,0x62,2,0x1c,0,0,0,0,0,0);
  if (*(uint *)&this_00[10].field_0x46 != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00[10].field_0x46);
    *(undefined4 *)&this_00[10].field_0x46 = 0;
  }
  if (-1 < (int)*(uint *)&this_00[0xe].field_0x49) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00[0xe].field_0x49);
    *(undefined4 *)&this_00[0xe].field_0x49 = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00[10].field_0x4a);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00[0xc].field_0x1);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00[0xd].field_0x25);
  if (*(byte **)&this_00[0xe].field_0x4d != (byte *)0x0) {
    FUN_006b5570(*(byte **)&this_00[0xe].field_0x4d);
  }
  uVar7 = *(uint *)&this_00[6].field_0x3f;
  *(undefined4 *)&this_00[0xe].field_0x4d = 0;
  if (uVar7 != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,uVar7);
    *(undefined4 *)&this_00[6].field_0x3f = 0;
  }
  if (-1 < (int)*(uint *)&this_00[10].field_0x42) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)&this_00[10].field_0x42);
    *(undefined4 *)&this_00[10].field_0x42 = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00[6].field_0x43);
  SpriteClassTy::CloseSprite((SpriteClassTy *)((int)&this_00[7].field_0065 + 2));
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this_00[9].field_0x1e);
  puVar4 = (uint *)&this_00[6].field_0x2f;
  iVar3 = 4;
  do {
    if (-1 < (int)*puVar4) {
      FUN_006b3bb0(DAT_008075a8,*puVar4);
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(uint *)&this_00[6].field_0x2b != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00[6].field_0x2b);
    *(undefined4 *)&this_00[6].field_0x2b = 0;
  }
  puVar4 = (uint *)&this_00[6].field_0x17;
  iVar3 = 5;
  do {
    if (-1 < (int)*puVar4) {
      FUN_006b3bb0(DAT_008075a8,*puVar4);
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (uint *)&this_00[6].field_0x3;
  iVar3 = 5;
  do {
    if (*puVar4 != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar4);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = *(int *)&this_00[0xe].field_0x55;
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        this_02 = (SpriteClassTy *)0x0;
        goto LAB_005e0672;
      }
      do {
        this_02 = (SpriteClassTy *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e0672:
        SpriteClassTy::CloseSprite(this_02);
        if (*(int *)((int)&this_02[1].field_0008 + 1) != 0) {
          FUN_006ab060((undefined4 *)((int)&this_02[1].field_0008 + 1));
        }
        iVar3 = *(int *)&this_00[0xe].field_0x55;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
    FUN_006ae110(*(byte **)&this_00[0xe].field_0x55);
    *(undefined4 *)&this_00[0xe].field_0x55 = 0;
  }
  iVar3 = *(int *)&this_00[0xe].field_0x51;
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar4 = (uint *)0x0;
        goto LAB_005e06d9;
      }
      do {
        puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e06d9:
        TTaskItemClose(this_00,puVar4);
        iVar3 = *(int *)&this_00[0xe].field_0x51;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
    FUN_006ae110(*(byte **)&this_00[0xe].field_0x51);
    *(undefined4 *)&this_00[0xe].field_0x51 = 0;
  }
  iVar3 = *(int *)&this_00[0xe].field_0x59;
  this_01 = (ccFntTy *)0x0;
  if (iVar3 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      if (*(int *)(iVar3 + 0xc) == 0) {
        puVar4 = (uint *)0x0;
        goto LAB_005e072b;
      }
      do {
        puVar4 = (uint *)(*(int *)(iVar3 + 8) * uVar7 + *(int *)(iVar3 + 0x1c));
LAB_005e072b:
        TTaskItemClose(this_00,puVar4);
        iVar3 = *(int *)&this_00[0xe].field_0x59;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar3 + 0xc));
    }
    FUN_006ae110(*(byte **)&this_00[0xe].field_0x59);
    *(undefined4 *)&this_00[0xe].field_0x59 = 0;
    this_01 = extraout_ECX;
  }
  piVar8 = (int *)&this_00[0xe].field_0x5d;
  iVar3 = 0xb;
  do {
    if (*piVar8 != 0) {
      FUN_006ab060(piVar8);
      this_01 = extraout_ECX_00;
    }
    piVar8 = piVar8 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(uint **)&this_00[1].field_0x1c != (uint *)0x0) {
    ccFntTy::operator(this_01,*(uint **)&this_00[1].field_0x1c);
    *(undefined4 *)&this_00[1].field_0x1c = 0;
    this_01 = extraout_ECX_01;
  }
  if (*(uint **)&this_00[1].field_0x20 != (uint *)0x0) {
    ccFntTy::operator(this_01,*(uint **)&this_00[1].field_0x20);
    *(undefined4 *)&this_00[1].field_0x20 = 0;
  }
  iVar3 = *(int *)&this_00->field_0x5d;
  *(undefined4 *)&this_00[1].field_0x14 = 0;
  pcVar6 = (cMf32 *)0x0;
  if (iVar3 != 0) {
    cVar1 = *(char *)((int)&this_00[1].field_0010 + 3);
    pcVar6 = DAT_00806780;
    if ((cVar1 != '\x01') && (pcVar6 = DAT_00806798, cVar1 != '\x02')) {
      pcVar6 = *(cMf32 **)&this_00[1].field_0x3;
    }
    cMf32::RecMemFree(pcVar6,(uint *)&this_00->field_0x5d);
    pcVar6 = extraout_ECX_02;
  }
  if (DAT_008085e3 != 0) {
    FUN_006c1e20();
    puVar9 = &DAT_00808463;
    for (iVar3 = 0x60; pcVar6 = (cMf32 *)0x0, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  if (*(byte **)&this_00[1].field_0x7 != (byte *)0x0) {
    FUN_006ae110(*(byte **)&this_00[1].field_0x7);
    pcVar6 = extraout_ECX_03;
  }
  *(undefined4 *)&this_00[1].field_0x7 = 0;
  if (*(byte **)&this_00[1].field_0xb != (byte *)0x0) {
    FUN_006ae110(*(byte **)&this_00[1].field_0xb);
    pcVar6 = extraout_ECX_04;
  }
  *(undefined4 *)&this_00[1].field_0xb = 0;
  if (*(undefined4 **)&this_00[1].field_0x3 != (undefined4 *)0x0) {
    cMf32::delete(pcVar6,*(undefined4 **)&this_00[1].field_0x3);
  }
  iVar3 = *(int *)&this_00->field_0x4d;
  *(undefined4 *)&this_00[1].field_0x3 = 0;
  if (iVar3 != 0) {
    AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x3d);
  }
  DAT_00807654 = 0x21;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

