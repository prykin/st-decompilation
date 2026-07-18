
void __thiscall MTaskTy::DoneMTask(MTaskTy *this)

{
  code *pcVar1;
  MTaskTy *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *pcVar5;
  MTaskTy *pMVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SpriteClassTy *this_01;
  undefined4 *puVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  MTaskTy *pMStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  pMStack_8 = this;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_task_obj_cpp_007cd994,299,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7cd994,299);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  thunk_FUN_0055dbf0(DAT_0080759c,10,2);
  this_00 = pMStack_8;
  thunk_FUN_00540dc0(0,*(undefined4 *)(pMStack_8 + 8),2,100,2,1,0,0,0,0,0,0);
  thunk_FUN_00540dc0(0,*(undefined4 *)(this_00 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
  if (*(uint *)(this_00 + 0x488) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x488));
    *(undefined4 *)(this_00 + 0x488) = 0;
  }
  if (-1 < (int)*(uint *)(this_00 + 0x63f)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x63f));
    *(undefined4 *)(this_00 + 0x63f) = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)(this_00 + 0x48c));
  SpriteClassTy::CloseSprite((SpriteClassTy *)(this_00 + 0x51d));
  SpriteClassTy::CloseSprite((SpriteClassTy *)(this_00 + 0x5ae));
  if (*(byte **)(this_00 + 0x643) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(this_00 + 0x643));
  }
  *(undefined4 *)(this_00 + 0x643) = 0;
  if (*(uint *)(this_00 + 0x2cd) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x2cd));
    *(undefined4 *)(this_00 + 0x2cd) = 0;
  }
  if (-1 < (int)*(uint *)(this_00 + 0x484)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(this_00 + 0x484));
    *(undefined4 *)(this_00 + 0x484) = 0xffffffff;
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)(this_00 + 0x2d1));
  SpriteClassTy::CloseSprite((SpriteClassTy *)(this_00 + 0x362));
  SpriteClassTy::CloseSprite((SpriteClassTy *)(this_00 + 0x3f3));
  pMVar6 = this_00 + 0x2bd;
  iVar2 = 4;
  do {
    if (-1 < (int)*(uint *)pMVar6) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)pMVar6);
      *(uint *)pMVar6 = 0xffffffff;
    }
    pMVar6 = pMVar6 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(uint *)(this_00 + 0x2b9) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x2b9));
    *(undefined4 *)(this_00 + 0x2b9) = 0;
  }
  pMVar6 = this_00 + 0x2a5;
  iVar2 = 5;
  do {
    if (-1 < (int)*(uint *)pMVar6) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)pMVar6);
      *(uint *)pMVar6 = 0xffffffff;
    }
    pMVar6 = pMVar6 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pMVar6 = this_00 + 0x291;
  iVar2 = 5;
  do {
    if (*(uint *)pMVar6 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pMVar6);
      *(uint *)pMVar6 = 0;
    }
    pMVar6 = pMVar6 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(this_00 + 0x64b);
  if (iVar2 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        this_01 = (SpriteClassTy *)0x0;
        goto LAB_005e0672;
      }
      do {
        this_01 = (SpriteClassTy *)(*(int *)(iVar2 + 8) * uVar7 + *(int *)(iVar2 + 0x1c));
LAB_005e0672:
        SpriteClassTy::CloseSprite(this_01);
        if (*(int *)(this_01 + 0x9a) != 0) {
          FUN_006ab060((undefined4 *)(this_01 + 0x9a));
        }
        iVar2 = *(int *)(this_00 + 0x64b);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(this_00 + 0x64b));
    *(undefined4 *)(this_00 + 0x64b) = 0;
  }
  iVar2 = *(int *)(this_00 + 0x647);
  if (iVar2 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_005e06d9;
      }
      do {
        puVar3 = (uint *)(*(int *)(iVar2 + 8) * uVar7 + *(int *)(iVar2 + 0x1c));
LAB_005e06d9:
        TTaskItemClose(this_00,puVar3);
        iVar2 = *(int *)(this_00 + 0x647);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(this_00 + 0x647));
    *(undefined4 *)(this_00 + 0x647) = 0;
  }
  iVar2 = *(int *)(this_00 + 0x64f);
  if (iVar2 != 0) {
    uVar7 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_005e072b;
      }
      do {
        puVar3 = (uint *)(*(int *)(iVar2 + 8) * uVar7 + *(int *)(iVar2 + 0x1c));
LAB_005e072b:
        TTaskItemClose(this_00,puVar3);
        iVar2 = *(int *)(this_00 + 0x64f);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(this_00 + 0x64f));
    *(undefined4 *)(this_00 + 0x64f) = 0;
  }
  pMVar6 = this_00 + 0x653;
  iVar2 = 0xb;
  do {
    if (*(int *)pMVar6 != 0) {
      FUN_006ab060((undefined4 *)pMVar6);
    }
    pMVar6 = pMVar6 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(uint **)(this_00 + 0x89) != (uint *)0x0) {
    FUN_00710560(*(uint **)(this_00 + 0x89));
    *(undefined4 *)(this_00 + 0x89) = 0;
  }
  if (*(uint **)(this_00 + 0x8d) != (uint *)0x0) {
    FUN_00710560(*(uint **)(this_00 + 0x8d));
    *(undefined4 *)(this_00 + 0x8d) = 0;
  }
  *(undefined4 *)(this_00 + 0x81) = 0;
  pcVar5 = (cMf32 *)0x0;
  if (*(int *)(this_00 + 0x5d) != 0) {
    pcVar5 = DAT_00806780;
    if ((this_00[0x80] != (MTaskTy)0x1) && (pcVar5 = DAT_00806798, this_00[0x80] != (MTaskTy)0x2)) {
      pcVar5 = *(cMf32 **)(this_00 + 0x70);
    }
    cMf32::RecMemFree(pcVar5,(uint *)(this_00 + 0x5d));
    pcVar5 = extraout_ECX;
  }
  if (DAT_008085e3 != 0) {
    FUN_006c1e20();
    puVar8 = &DAT_00808463;
    for (iVar2 = 0x60; pcVar5 = (cMf32 *)0x0, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(byte **)(this_00 + 0x74) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this_00 + 0x74));
    pcVar5 = extraout_ECX_00;
  }
  *(undefined4 *)(this_00 + 0x74) = 0;
  if (*(byte **)(this_00 + 0x78) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this_00 + 0x78));
    pcVar5 = extraout_ECX_01;
  }
  *(undefined4 *)(this_00 + 0x78) = 0;
  if (*(undefined4 **)(this_00 + 0x70) != (undefined4 *)0x0) {
    cMf32::delete(pcVar5,*(undefined4 **)(this_00 + 0x70));
  }
  *(undefined4 *)(this_00 + 0x70) = 0;
  if (*(int *)(this_00 + 0x4d) != 0) {
    FUN_006e3b50((undefined4 *)(this_00 + 0x3d));
  }
  DAT_00807654 = 0x21;
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

