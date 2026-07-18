
int __thiscall AiPlrClassTy::InitData(AiPlrClassTy *this,undefined4 *param_1)

{
  code *pcVar1;
  AiPlrClassTy *pAVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  AiPlrClassTy *pAVar10;
  undefined4 *puVar11;
  void *unaff_EDI;
  bool bVar12;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  AiPlrClassTy *pAStack_c;
  AiPlrClassTy *pAStack_8;
  
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pAStack_c = this;
  iVar3 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  pAVar2 = pAStack_c;
  if (iVar3 == 0) {
    if (pAStack_c == (AiPlrClassTy *)0x0) {
      pAVar10 = (AiPlrClassTy *)0x0;
    }
    else {
      pAVar10 = pAStack_c + 0x5d3;
    }
    puVar11 = param_1;
    for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      pAVar10 = pAVar10 + 4;
    }
    *(undefined2 *)pAVar10 = *(undefined2 *)puVar11;
    pAVar10[2] = *(AiPlrClassTy *)((int)puVar11 + 2);
    *(undefined4 *)(pAStack_c + 0x5d3) = 0x398;
    pAStack_c[0x5eb] = (AiPlrClassTy)0x1;
    AiEventClassTy::InitData
              ((AiEventClassTy *)(pAStack_c + 0x1c),
               (int *)(*(int *)(pAStack_c + 0x6d1) + 0x12a + (int)param_1));
    pAVar10 = pAVar2 + 0x695;
    iVar3 = 5;
    pAStack_8 = pAVar10;
    do {
      if (*(int *)pAVar10 != 0) {
        iVar4 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(pAVar10 + 4) + 0x12a + (int)param_1));
        *(int *)pAVar10 = iVar4;
      }
      pAVar10 = pAVar10 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (*(int *)(pAVar2 + 0x6a1) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,0x12,5);
      *(uint **)(pAVar2 + 0x6a1) = puVar5;
    }
    if (*(int *)(pAVar2 + 0x6ad) == 0) {
      puVar5 = FUN_006ae290((uint *)0x0,10,0x1c,5);
      *(uint **)(pAVar2 + 0x6ad) = puVar5;
    }
    uVar9 = 0;
    iVar3 = *(int *)pAStack_8;
    if (0 < *(int *)(iVar3 + 0xc)) {
      bVar12 = *(int *)(iVar3 + 0xc) != 0;
      do {
        if (bVar12) {
          puVar11 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar9 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar11 = (undefined4 *)0x0;
        }
        if (puVar11[1] == 0) {
          iVar3 = puVar11[2];
          puVar6 = FUN_006aac10(puVar11[3]);
          uVar8 = puVar11[3];
          *puVar11 = puVar6;
          puVar11 = (undefined4 *)(iVar3 + 0x12a + (int)param_1);
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar6 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        uVar9 = uVar9 + 1;
        iVar3 = *(int *)pAStack_8;
        bVar12 = uVar9 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar9 < (int)*(uint *)(iVar3 + 0xc));
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  thunk_FUN_00678ba0((int)pAStack_c);
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_plr_cpp_007d2e4c,0x3c,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  FUN_006a5e40(iVar3,0,0x7d2e4c,0x3d);
  return iVar3;
}

