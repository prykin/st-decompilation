
int thunk_FUN_00678980(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  undefined4 *puVar10;
  void *unaff_EDI;
  bool bVar11;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  int iStack_c;
  int *piStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  iVar2 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (iStack_c == 0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)(iStack_c + 0x5d3);
    }
    puVar5 = param_1;
    for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar5 + 2);
    *(undefined4 *)(iStack_c + 0x5d3) = 0x398;
    *(undefined1 *)(iStack_c + 0x5eb) = 1;
    thunk_FUN_0064cd80((int *)(*(int *)(iStack_c + 0x6d1) + 0x12a + (int)param_1));
    piVar9 = (int *)(iStack_c + 0x695);
    iVar2 = 5;
    piStack_8 = piVar9;
    do {
      if (*piVar9 != 0) {
        iVar3 = FUN_006b0060((uint *)0x0,(uint *)(piVar9[1] + 0x12a + (int)param_1));
        *piVar9 = iVar3;
      }
      piVar9 = piVar9 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int *)(iStack_c + 0x6a1) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x12,5);
      *(uint **)(iStack_c + 0x6a1) = puVar4;
    }
    if (*(int *)(iStack_c + 0x6ad) == 0) {
      puVar4 = FUN_006ae290((uint *)0x0,10,0x1c,5);
      *(uint **)(iStack_c + 0x6ad) = puVar4;
    }
    uVar8 = 0;
    iVar2 = *piStack_8;
    if (0 < *(int *)(iVar2 + 0xc)) {
      bVar11 = *(int *)(iVar2 + 0xc) != 0;
      do {
        if (bVar11) {
          puVar10 = (undefined4 *)(*(int *)(iVar2 + 8) * uVar8 + *(int *)(iVar2 + 0x1c));
        }
        else {
          puVar10 = (undefined4 *)0x0;
        }
        if (puVar10[1] == 0) {
          iVar2 = puVar10[2];
          puVar5 = FUN_006aac10(puVar10[3]);
          uVar7 = puVar10[3];
          *puVar10 = puVar5;
          puVar10 = (undefined4 *)(iVar2 + 0x12a + (int)param_1);
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar5 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar5 = puVar5 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
        }
        uVar8 = uVar8 + 1;
        iVar2 = *piStack_8;
        bVar11 = uVar8 < *(uint *)(iVar2 + 0xc);
      } while ((int)uVar8 < (int)*(uint *)(iVar2 + 0xc));
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  thunk_FUN_00678ba0(iStack_c);
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3c,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7d2e4c,0x3d);
  return iVar2;
}

