
void __thiscall thunk_FUN_005508f0(void *this,int param_1)

{
  HINSTANCE pHVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char cVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  void *pvStack_10;
  uint uStack_c;
  byte bStack_5;
  
  cVar8 = -1;
  uVar4 = (uint)DAT_00808aaf;
  uVar2 = 0;
  uStack_c = CONCAT31(uStack_c._1_3_,0xff);
  bStack_5 = 0;
  if (uVar4 != 0) {
    pcVar6 = &DAT_00808af6;
    do {
      if ((*(int *)(pcVar6 + -6) == param_1) && (*pcVar6 == '\x01')) {
        cVar8 = pcVar6[-2];
        uStack_c = CONCAT31(uStack_c._1_3_,cVar8);
        break;
      }
      uVar2 = uVar2 + 1;
      pcVar6 = pcVar6 + 0x9c;
    } while (uVar2 < uVar4);
    if (uVar4 != 0) {
      pcVar6 = &DAT_00808af6;
      uVar2 = uVar4;
      do {
        if ((pcVar6[-2] == cVar8) && (*pcVar6 == '\x01')) {
          bStack_5 = bStack_5 + 1;
        }
        pcVar6 = pcVar6 + 0x9c;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  pvStack_10 = this;
  if (((((DAT_0080877e != '\0') && (bStack_5 < 2)) && (cVar8 != -1)) &&
      (((DAT_008087a0 == '\x04' || (DAT_008087a0 == '\a')) ||
       ((DAT_008087a0 == '\x13' || ((DAT_008087a0 == '\r' || (DAT_008087a0 == '\x0e')))))))) &&
     (uVar2 = uStack_c & 0xff, (&DAT_00809950)[uVar2] == '\0')) {
    uVar9 = 0;
    if (uVar4 != 0) {
      pcVar6 = &DAT_00808af6;
      do {
        pHVar1 = DAT_00807618;
        if ((*(int *)(pcVar6 + -6) == param_1) && (*pcVar6 == '\x01')) {
          pcVar12 = pcVar6 + -0x46;
          *pcVar6 = '\0';
          uVar3 = FUN_006b0140(0x4273,pHVar1);
          wsprintfA((LPSTR)&DAT_0080f33a,s__s__s_007c411c,uVar3,pcVar12);
          if (DAT_008016d8 != (void *)0x0) {
            thunk_FUN_0052d320(DAT_008016d8,(char *)&DAT_0080f33a,8);
          }
        }
        uVar9 = uVar9 + 1;
        pcVar6 = pcVar6 + 0x9c;
      } while (uVar9 < DAT_00808aaf);
    }
    uStack_18 = (uint)(byte)(&DAT_008087e8)[uVar2 * 0x51];
    uStack_1c = 8;
    uStack_14 = uVar2;
    thunk_FUN_0054edf0((undefined4 *)0x5,&uStack_1c,1,0xffffffff);
  }
  if ((&DAT_00809950)[uStack_c & 0xff] == '\0') {
    uVar2 = 0;
    uVar4 = (uint)DAT_00808aaf;
    if (uVar4 != 0) {
      piVar7 = &DAT_00808af0;
      while (*piVar7 != param_1) {
        uVar2 = uVar2 + 1;
        piVar7 = piVar7 + 0x27;
        if (uVar4 <= uVar2) {
          return;
        }
      }
      if (uVar2 != uVar4 - 1) {
        puVar10 = &DAT_00808b4c + uVar2 * 0x27;
        puVar11 = &DAT_00808ab0 + uVar2 * 0x27;
        for (uVar4 = ((uVar4 - uVar2) + -1) * 0x27 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
      puVar10 = (undefined4 *)(&DAT_00808a14 + (uint)DAT_00808aaf * 0x9c);
      for (iVar5 = 0x27; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      DAT_00808aaf = DAT_00808aaf - 1;
      if (DAT_008016e4 != (void *)0x0) {
        thunk_FUN_0053a540(DAT_008016e4);
      }
    }
  }
  return;
}

