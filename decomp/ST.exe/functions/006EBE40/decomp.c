
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006ebe40(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  
  puVar11 = *(undefined1 **)(param_1 + 0xc);
  puVar13 = *(undefined1 **)(param_1 + 0x1c);
  DAT_00856db0 = *(int *)(param_1 + 0x28);
  puVar6 = (undefined1 *)(*(int *)(param_1 + 0x14) + 1);
  _DAT_00856dbc = *(int *)(param_1 + 0x28) << 1;
  _DAT_00856dac = 0;
  _DAT_00856db4 = *(int *)(param_1 + 0x174);
  iVar4 = *(int *)(param_1 + 0x158);
  DAT_00856da8 = iVar4;
  do {
    if ((_DAT_00856dac & 1) == 0) {
      iVar8 = DAT_00856db0 + -4;
      do {
        puVar14 = puVar13;
        puVar12 = puVar11;
        puVar10 = puVar6;
        puVar11 = puVar12 + 4;
        puVar6 = puVar10 + 8;
        uVar1 = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(puVar10[2],puVar12[1]));
        *puVar14 = *(undefined1 *)(iVar4 + (uint)CONCAT11(*puVar10,*puVar12));
        uVar2 = puVar10[4];
        puVar14[1] = uVar1;
        uVar1 = puVar10[6];
        puVar13 = puVar14 + 4;
        uVar3 = puVar12[3];
        puVar14[2] = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(uVar2,puVar12[2]));
        iVar9 = iVar8 + -4;
        puVar14[3] = *(undefined1 *)(iVar4 + -0x300 + (uint)CONCAT11(uVar1,uVar3));
        bVar5 = 3 < iVar8;
        iVar8 = iVar9;
      } while (bVar5);
      cVar7 = (char)iVar9;
      if (-4 < cVar7) {
        uVar1 = *puVar6;
        puVar6 = puVar10 + 10;
        uVar2 = *puVar11;
        puVar11 = puVar12 + 5;
        *puVar13 = *(undefined1 *)(iVar4 + (uint)CONCAT11(uVar1,uVar2));
        puVar13 = puVar14 + 5;
        if (cVar7 != -3 && '\0' < (char)(cVar7 + '\x04')) {
          uVar1 = *puVar6;
          puVar6 = puVar10 + 0xc;
          uVar2 = *puVar11;
          puVar11 = puVar12 + 6;
          *puVar13 = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(uVar1,uVar2));
          puVar13 = puVar14 + 6;
          if ('\x01' < (char)(cVar7 + '\x03')) {
            uVar1 = *puVar6;
            puVar6 = puVar10 + 0xe;
            uVar2 = *puVar11;
            puVar11 = puVar12 + 7;
            *puVar13 = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(uVar1,uVar2));
            puVar13 = puVar14 + 7;
          }
        }
      }
    }
    else {
      iVar8 = DAT_00856db0 + -4;
      do {
        puVar14 = puVar13;
        puVar12 = puVar11;
        puVar10 = puVar6;
        iVar9 = iVar8;
        puVar11 = puVar12 + 4;
        puVar6 = puVar10 + 8;
        uVar1 = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(puVar10[2],puVar12[1]));
        *puVar14 = *(undefined1 *)(iVar4 + -0x300 + (uint)CONCAT11(*puVar10,*puVar12));
        uVar2 = puVar10[4];
        puVar14[1] = uVar1;
        uVar1 = puVar10[6];
        puVar13 = puVar14 + 4;
        uVar3 = puVar12[3];
        puVar14[2] = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(uVar2,puVar12[2]));
        puVar14[3] = *(undefined1 *)(iVar4 + (uint)CONCAT11(uVar1,uVar3));
        iVar8 = iVar9 + -4;
      } while (3 < iVar9);
      if (iVar9 != 0 && -5 < iVar9 + -4) {
        uVar1 = *puVar6;
        puVar6 = puVar10 + 10;
        uVar2 = *puVar11;
        puVar11 = puVar12 + 5;
        *puVar13 = *(undefined1 *)(iVar4 + -0x300 + (uint)CONCAT11(uVar1,uVar2));
        puVar13 = puVar14 + 5;
        if ('\x01' < (char)iVar9) {
          uVar1 = *puVar6;
          puVar6 = puVar10 + 0xc;
          uVar2 = *puVar11;
          puVar11 = puVar12 + 6;
          *puVar13 = *(undefined1 *)(iVar4 + -0x200 + (uint)CONCAT11(uVar1,uVar2));
          puVar13 = puVar14 + 6;
          if ('\x01' < (char)((char)iVar9 + -1)) {
            uVar1 = *puVar6;
            puVar6 = puVar10 + 0xe;
            uVar2 = *puVar11;
            puVar11 = puVar12 + 7;
            *puVar13 = *(undefined1 *)(iVar4 + -0x100 + (uint)CONCAT11(uVar1,uVar2));
            puVar13 = puVar14 + 7;
          }
        }
      }
    }
    iVar8 = _DAT_00856db4;
    _DAT_00856dac = _DAT_00856dac + 1;
    _DAT_00856db4 = _DAT_00856db4 + -1;
  } while (_DAT_00856db4 != 0 && 0 < iVar8);
  return;
}

