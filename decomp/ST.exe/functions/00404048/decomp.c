
undefined4 __thiscall thunk_FUN_004da390(void *this,uint param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 auStack_280 [78];
  undefined4 auStack_148 [3];
  undefined2 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  byte bStack_10;
  undefined3 uStack_f;
  void *pvStack_c;
  byte *pbStack_8;
  
  pbVar3 = param_2;
  param_2[1] = 0xff;
  param_2[2] = 0xff;
  param_2[3] = 0xff;
  param_2[4] = 0xff;
  pbStack_8 = &DAT_008087e9;
  param_2[5] = 0xff;
  param_2[6] = 0xff;
  param_2[7] = 0xff;
  param_2[8] = 0xff;
  *param_2 = 0;
  pvStack_c = this;
  do {
    pbVar4 = pbStack_8;
    bVar12 = (byte)param_1;
    if (*pbStack_8 != 0xff) {
      uVar6 = thunk_FUN_004406c0(*pbStack_8);
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1) {
        param_2 = (byte *)0x3d;
      }
      else if (uVar6 == 2) {
        param_2 = (byte *)0x8d;
      }
      else if (uVar6 == 3) {
        param_2 = (byte *)0x49;
      }
      else {
        param_2 = (byte *)0x0;
      }
      bVar1 = *pbVar4;
      if (((bVar1 != 0xff) && (bVar1 != param_1)) && (pbVar4[-1] != 0)) {
        if (param_3 != 0) {
          _bStack_10 = CONCAT31(uStack_f,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar12) {
LAB_004da4d3:
              iVar7 = 0;
            }
            else {
              uVar6 = (uint)bVar1;
              uVar13 = param_1 & 0xff;
              cVar2 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar13);
              if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar6) == '\0')) {
                iVar7 = -2;
              }
              else if ((cVar2 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar6) == '\0')) {
                iVar7 = -1;
              }
              else if ((cVar2 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar6) == '\x01')) {
                iVar7 = 1;
              }
              else {
                if ((cVar2 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar6) != '\x01'))
                goto LAB_004da4d3;
                iVar7 = 2;
              }
            }
            bVar15 = iVar7 < 0;
          }
          else {
            bVar15 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51]
            ;
          }
          if ((bVar15) &&
             ((*(int *)((int)&DAT_007f582e + param_1 * 0xa62) != 3 ||
              (iVar7 = thunk_FUN_004e60d0((uint)bVar1,(int)param_2),
              (uint)((&DAT_00798f74)[iVar7] + *(int *)((int)&DAT_007f583a + param_1 * 0xa62)) <=
              *(uint *)(DAT_00802a38 + 0xe4))))) goto LAB_004da71f;
        }
        bVar1 = *pbStack_8;
        uVar8 = thunk_FUN_004d8870(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 9) = uVar8;
        uVar8 = thunk_FUN_004d89b0(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0xd) = uVar8;
        iVar7 = thunk_FUN_004406c0(bVar1);
        if ((char)iVar7 == '\x03') {
          uVar8 = thunk_FUN_004e4410((uint)bVar1);
        }
        else {
          uVar8 = thunk_FUN_004d8af0(bVar1);
        }
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x11) = uVar8;
        iVar7 = thunk_FUN_004406c0(bVar1);
        if ((char)iVar7 == '\x03') {
          iVar11 = thunk_FUN_004e41c0(param_1);
          iVar7 = thunk_FUN_004e4180(param_1);
          iVar7 = (iVar11 * 0x14) / iVar7;
          if (0x14 < iVar7) {
            iVar7 = 0x14;
          }
        }
        else {
          iVar7 = (uint)bVar1 * 0xa62;
          iVar11 = *(int *)((int)&DAT_007f5792 + iVar7);
          iVar9 = iVar11 - *(int *)((int)&DAT_007f5796 + iVar7);
          iVar7 = 0;
          if (iVar9 != 0) {
            if (iVar11 == 0) {
              iVar7 = -0xd;
            }
            else {
              iVar7 = (iVar9 * 0xd) / iVar11;
            }
          }
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x15) = iVar7;
        puVar10 = (undefined4 *)thunk_FUN_0043e420(auStack_280,bVar1);
        puVar14 = auStack_148;
        for (iVar7 = 0x4e; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar14 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
        }
        sVar5 = (short)auStack_148[1] + (short)auStack_148[0];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x89) = sVar5 + (short)auStack_148[2];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8b) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8d) = (short)auStack_148[2];
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8f) = uStack_13c;
        sVar5 = (short)iStack_134 + (short)iStack_138;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x91) = sVar5 + (short)uStack_130;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x93) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x95) = (short)uStack_130;
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x97) = uStack_12c;
        pbVar3[*pbVar3 + 1] = bVar1;
        *pbVar3 = *pbVar3 + 1;
      }
    }
LAB_004da71f:
    pbStack_8 = pbStack_8 + 0x51;
    if (0x808a70 < (int)pbStack_8) {
      uVar8 = thunk_FUN_004d8870(bVar12);
      *(undefined4 *)(pbVar3 + 0x79) = uVar8;
      uVar8 = thunk_FUN_004d89b0(bVar12);
      *(undefined4 *)(pbVar3 + 0x7d) = uVar8;
      iVar7 = thunk_FUN_004406c0(bVar12);
      if ((char)iVar7 == '\x03') {
        uVar8 = thunk_FUN_004e4410(param_1);
      }
      else {
        uVar8 = thunk_FUN_004d8af0(bVar12);
      }
      *(undefined4 *)(pbVar3 + 0x81) = uVar8;
      iVar7 = *(int *)((int)&DAT_007f5792 + param_1 * 0xa62);
      iVar9 = iVar7 - *(int *)((int)&DAT_007f5796 + param_1 * 0xa62);
      iVar11 = 0;
      if (iVar9 != 0) {
        if (iVar7 == 0) {
          iVar11 = -0xd;
        }
        else {
          iVar11 = (iVar9 * 0xd) / iVar7;
        }
      }
      *(int *)(pbVar3 + 0x85) = iVar11;
      puVar10 = (undefined4 *)thunk_FUN_0043e420(auStack_280,bVar12);
      puVar14 = auStack_148;
      for (iVar7 = 0x4e; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      }
      sVar5 = (short)auStack_148[1] + (short)auStack_148[0];
      *(short *)(pbVar3 + 0xfb) = sVar5;
      *(short *)(pbVar3 + 0xfd) = (short)auStack_148[2];
      *(short *)(pbVar3 + 0xf9) = sVar5 + (short)auStack_148[2];
      *(undefined2 *)(pbVar3 + 0xff) = uStack_13c;
      sVar5 = (short)(iStack_134 + iStack_138);
      *(short *)(pbVar3 + 0x103) = sVar5;
      *(short *)(pbVar3 + 0x105) = (short)uStack_130;
      *(short *)(pbVar3 + 0x101) = sVar5 + (short)uStack_130;
      *(undefined2 *)(pbVar3 + 0x107) = uStack_12c;
      pbVar3[8] = bVar12;
      return 0;
    }
  } while( true );
}

