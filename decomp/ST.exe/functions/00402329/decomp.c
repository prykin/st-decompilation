
void thunk_FUN_005e0470(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
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
  thunk_FUN_00540dc0(0,*(undefined4 *)(iStack_8 + 8),2,100,2,1,0,0,0,0,0,0);
  thunk_FUN_00540dc0(0,*(undefined4 *)(iStack_8 + 8),2,0x62,2,0x1c,0,0,0,0,0,0);
  if (*(uint *)(iStack_8 + 0x488) != 0) {
    FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x488));
    *(undefined4 *)(iStack_8 + 0x488) = 0;
  }
  if (-1 < (int)*(uint *)(iStack_8 + 0x63f)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(iStack_8 + 0x63f));
    *(undefined4 *)(iStack_8 + 0x63f) = 0xffffffff;
  }
  FUN_00715ab0();
  FUN_00715ab0();
  FUN_00715ab0();
  if (*(byte **)(iStack_8 + 0x643) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(iStack_8 + 0x643));
  }
  *(undefined4 *)(iStack_8 + 0x643) = 0;
  if (*(uint *)(iStack_8 + 0x2cd) != 0) {
    FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x2cd));
    *(undefined4 *)(iStack_8 + 0x2cd) = 0;
  }
  if (-1 < (int)*(uint *)(iStack_8 + 0x484)) {
    FUN_006b3bb0(DAT_008075a8,*(uint *)(iStack_8 + 0x484));
    *(undefined4 *)(iStack_8 + 0x484) = 0xffffffff;
  }
  FUN_00715ab0();
  FUN_00715ab0();
  FUN_00715ab0();
  puVar3 = (uint *)(iStack_8 + 0x2bd);
  iVar2 = 4;
  do {
    if (-1 < (int)*puVar3) {
      FUN_006b3bb0(DAT_008075a8,*puVar3);
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(uint *)(iStack_8 + 0x2b9) != 0) {
    FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x2b9));
    *(undefined4 *)(iStack_8 + 0x2b9) = 0;
  }
  puVar3 = (uint *)(iStack_8 + 0x2a5);
  iVar2 = 5;
  do {
    if (-1 < (int)*puVar3) {
      FUN_006b3bb0(DAT_008075a8,*puVar3);
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = (uint *)(iStack_8 + 0x291);
  iVar2 = 5;
  do {
    if (*puVar3 != 0) {
      FUN_006e56b0(*(void **)(iStack_8 + 0xc),*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(iStack_8 + 0x64b);
  if (iVar2 != 0) {
    uVar5 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar2 = 0;
        goto LAB_005e0672;
      }
      do {
        iVar2 = *(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c);
LAB_005e0672:
        FUN_00715ab0();
        if (*(int *)(iVar2 + 0x9a) != 0) {
          FUN_006ab060((undefined4 *)(iVar2 + 0x9a));
        }
        iVar2 = *(int *)(iStack_8 + 0x64b);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(iStack_8 + 0x64b));
    *(undefined4 *)(iStack_8 + 0x64b) = 0;
  }
  iVar2 = *(int *)(iStack_8 + 0x647);
  if (iVar2 != 0) {
    uVar5 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_005e06d9;
      }
      do {
        puVar3 = (uint *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c));
LAB_005e06d9:
        thunk_FUN_005e10a0(puVar3);
        iVar2 = *(int *)(iStack_8 + 0x647);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(iStack_8 + 0x647));
    *(undefined4 *)(iStack_8 + 0x647) = 0;
  }
  iVar2 = *(int *)(iStack_8 + 0x64f);
  if (iVar2 != 0) {
    uVar5 = 0;
    if (*(int *)(iVar2 + 0xc) != 0) {
      if (*(int *)(iVar2 + 0xc) == 0) {
        puVar3 = (uint *)0x0;
        goto LAB_005e072b;
      }
      do {
        puVar3 = (uint *)(*(int *)(iVar2 + 8) * uVar5 + *(int *)(iVar2 + 0x1c));
LAB_005e072b:
        thunk_FUN_005e10a0(puVar3);
        iVar2 = *(int *)(iStack_8 + 0x64f);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(iVar2 + 0xc));
    }
    FUN_006ae110(*(byte **)(iStack_8 + 0x64f));
    *(undefined4 *)(iStack_8 + 0x64f) = 0;
  }
  piVar6 = (int *)(iStack_8 + 0x653);
  iVar2 = 0xb;
  do {
    if (*piVar6 != 0) {
      FUN_006ab060(piVar6);
    }
    piVar6 = piVar6 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(uint **)(iStack_8 + 0x89) != (uint *)0x0) {
    FUN_00710560(*(uint **)(iStack_8 + 0x89));
    *(undefined4 *)(iStack_8 + 0x89) = 0;
  }
  if (*(uint **)(iStack_8 + 0x8d) != (uint *)0x0) {
    FUN_00710560(*(uint **)(iStack_8 + 0x8d));
    *(undefined4 *)(iStack_8 + 0x8d) = 0;
  }
  *(undefined4 *)(iStack_8 + 0x81) = 0;
  if (*(int *)(iStack_8 + 0x5d) != 0) {
    FUN_006f20e0((uint *)(iStack_8 + 0x5d));
  }
  if (DAT_008085e3 != 0) {
    FUN_006c1e20();
    puVar7 = &DAT_00808463;
    for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(byte **)(iStack_8 + 0x74) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(iStack_8 + 0x74));
  }
  *(undefined4 *)(iStack_8 + 0x74) = 0;
  if (*(byte **)(iStack_8 + 0x78) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(iStack_8 + 0x78));
  }
  *(undefined4 *)(iStack_8 + 0x78) = 0;
  if (*(undefined4 **)(iStack_8 + 0x70) != (undefined4 *)0x0) {
    FUN_006f1170(*(undefined4 **)(iStack_8 + 0x70));
  }
  *(undefined4 *)(iStack_8 + 0x70) = 0;
  if (*(int *)(iStack_8 + 0x4d) != 0) {
    FUN_006e3b50((undefined4 *)(iStack_8 + 0x3d));
  }
  DAT_00807654 = 0x21;
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return;
}

