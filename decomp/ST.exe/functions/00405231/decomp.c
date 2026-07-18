
uint thunk_FUN_004f8c80(void)

{
  uint *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  LPCSTR pCVar12;
  undefined4 *puStack_50;
  undefined4 auStack_4c [16];
  char cStack_c;
  undefined3 uStack_b;
  int iStack_8;
  
  puStack_50 = DAT_00858df8;
  DAT_00858df8 = &puStack_50;
  iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = puStack_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2fc,0,iVar4,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    uVar5 = FUN_006a5e40(iVar4,0,0x7c1bd8,0x2fc);
    return uVar5;
  }
  if ((uint)(*(int *)(iStack_8 + 0x38) - *(int *)(iStack_8 + 0x998)) < 100) {
    if ((*(int *)((int)DAT_00807598 + 0x442) == 0) && (*(int *)((int)DAT_00807598 + 0x446) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      DAT_00858df8 = puStack_50;
      return 0;
    }
    if (1 < DAT_0080673c) {
      DAT_00858df8 = puStack_50;
      return uVar5;
    }
  }
  *(int *)(iStack_8 + 0x998) = *(int *)(iStack_8 + 0x38);
  thunk_FUN_0052b330(iStack_8);
  FUN_006e6fb0(DAT_00807598,*(int *)(iStack_8 + 400),5,7,(uint)(*(short *)(iStack_8 + 0x23f) != 2));
  uVar5 = *(uint *)(DAT_00802a38 + 0xe4) * 0x51eb851f;
  uVar9 = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
  if (300 < uVar9 - DAT_0080c4cf) {
    uVar5 = thunk_FUN_0056f930(0x807620);
    DAT_00808794 = uVar5;
    DAT_0080c4cf = uVar9;
  }
  if (uVar9 != *(uint *)(iStack_8 + 0x9a0)) {
    *(uint *)(iStack_8 + 0x9a0) = uVar9;
    FUN_00710a90(*(int *)(iStack_8 + 400),0,(DAT_0080874e == '\x03') + 7,0x10,0x28,0xb);
    uVar5 = (uint)DAT_0080874d;
    if ((&DAT_008087f7)[uVar5 * 0x51] == '\0') {
      uVar9 = *(int *)(&DAT_008087f8 + uVar5 * 0x51) + *(int *)(iStack_8 + 0x9a0);
      uVar5 = uVar9 / 0xe10;
      cVar8 = (char)uVar5;
      _cStack_c = CONCAT31(uStack_b,cVar8);
      puVar1 = (uint *)(iStack_8 + 0x1e1);
      if (cVar8 == '\0') {
        puVar7 = &DAT_007c2198;
        pCVar12 = &DAT_007c2194;
      }
      else {
        puVar7 = (undefined *)(uVar5 & 0xff);
        pCVar12 = &DAT_007c219c;
      }
      wsprintfA((LPSTR)puVar1,pCVar12,puVar7);
      uVar2 = (ulonglong)uVar9 % 0xe10;
      wsprintfA((LPSTR)puVar1,s__s_02d__02d_007c2184,puVar1,(int)(uVar2 / 0x3c),(int)(uVar2 % 0x3c))
      ;
      uVar5 = FUN_00711b70(puVar1,0,0,(uint)(DAT_0080874e == '\x03'),-1,-1);
    }
    else {
      uVar9 = *(int *)(iStack_8 + 0x9a0) - *(int *)(&DAT_008087fc + uVar5 * 0x51);
      if (uVar9 < *(uint *)(&DAT_008087f8 + uVar5 * 0x51)) {
        uVar9 = *(uint *)(&DAT_008087f8 + uVar5 * 0x51) - uVar9;
        uVar5 = uVar9 / 0xe10;
        cVar8 = (char)uVar5;
        _cStack_c = CONCAT31(uStack_b,cVar8);
        if (cVar8 == '\0') {
          puVar7 = &DAT_007c2198;
          pCVar12 = &DAT_007c2194;
        }
        else {
          puVar7 = (undefined *)(uVar5 & 0xff);
          pCVar12 = &DAT_007c219c;
        }
        wsprintfA((LPSTR)(iStack_8 + 0x1e1),pCVar12,puVar7);
        uVar2 = (ulonglong)uVar9 % 0xe10;
        wsprintfA((LPSTR)(iStack_8 + 0x1e1),s__s_02d__02d_007c2184,(LPSTR)(iStack_8 + 0x1e1),
                  (int)(uVar2 / 0x3c),(int)(uVar2 % 0x3c));
      }
      else {
        uVar5 = 0xffffffff;
        pcVar10 = &DAT_007c21a4;
        do {
          pcVar11 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar11 = pcVar10 + 1;
          cVar8 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar8 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar11 + -uVar5;
        pcVar11 = (char *)(iStack_8 + 0x1e1);
        for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      uVar5 = FUN_00711b70((uint *)(iStack_8 + 0x1e1),0,0,(DAT_0080874e == '\x03') + 2,-1,-1);
      if (DAT_0080c4d3 != 2) {
        FUN_00711b70((uint *)(iStack_8 + 0x1e1),0xd,10,0,-1,-1);
        uVar5 = FUN_006b3640(DAT_008075a8,*(uint *)(iStack_8 + 0x174),0xffffffff,
                             *(uint *)(iStack_8 + 0xec),*(uint *)(iStack_8 + 0xf0));
      }
    }
  }
  if ((*(short *)(iStack_8 + 0x23f) != 2) && (uVar5 = *(uint *)(iStack_8 + 0x158), -1 < (int)uVar5))
  {
    uVar5 = FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,*(uint *)(iStack_8 + 0x4c),
                         *(uint *)(iStack_8 + 0xa4));
  }
  DAT_00858df8 = puStack_50;
  return uVar5;
}

