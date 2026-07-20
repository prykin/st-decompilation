
undefined4 __thiscall FUN_006264d0(void *this,int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  undefined4 unaff_EBX;
  int *piVar10;
  int *piVar11;
  short sVar12;
  undefined4 unaff_ESI;
  int iVar13;
  short sVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  undefined4 local_bc [6];
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  int local_8f;
  undefined2 local_8b;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  byte local_44;
  undefined3 uStack_43;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar15 = local_bc;
  local_18 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  iVar7 = param_2 * 6;
  sVar9 = *(short *)(&DAT_007d046c + iVar7) + *(short *)((int)this + 0x2c2);
  local_20 = CONCAT22((short)((uint)unaff_EBX >> 0x10),sVar9);
  sVar14 = *(short *)(&DAT_007d046e + iVar7) + *(short *)((int)this + 0x2c6);
  local_54 = CONCAT22((short)((uint)puVar15 >> 0x10),sVar14);
  sVar12 = *(short *)(&DAT_007d0470 + iVar7) + *(short *)((int)this + 0x2ca);
  local_40 = CONCAT22((short)((uint)unaff_ESI >> 0x10),sVar12);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  thunk_FUN_00416270(param_1,(undefined2 *)&local_28,&local_24,&local_38);
  iVar13 = (int)sVar12;
  iVar16 = (int)sVar14;
  iVar7 = FUN_006acf0d((int)sVar9,iVar16,iVar13,(int)(short)local_28,(int)(short)local_24,
                       (int)(short)local_38);
  bVar6 = thunk_FUN_00430750(CASE_9B);
  local_10 = iVar7 / (int)(uint)bVar6;
  if (local_10 < 1) {
    local_10 = 1;
  }
  param_2 = 1;
  piVar10 = local_18;
  local_1c = (int)(short)local_20;
  local_14 = iVar16;
  local_8 = iVar13;
  if (0 < local_10) {
    do {
      iVar7 = (((int)(short)local_28 - (int)(short)local_20) * param_2) / local_10 +
              (int)(short)local_20;
      local_34 = (((int)(short)local_24 - (int)(short)local_54) * param_2) / local_10 +
                 (int)(short)local_54;
      local_4c = (((int)(short)local_38 - (int)(short)local_40) * param_2) / local_10 +
                 (int)(short)local_40;
      local_60 = iVar7;
      local_c = FUN_006acf0d(local_1c,local_14,local_8,iVar7,local_34,local_4c);
      local_c = local_c / 0x32;
      if (local_c < 1) {
        local_c = 1;
      }
      local_48 = 1;
      if (0 < local_c) {
        local_5c = local_4c - local_8;
        local_64 = local_34 - local_14;
        local_58 = iVar7 - local_1c;
        piVar11 = piVar10;
        iVar13 = local_c;
        local_3c = local_5c;
        local_30 = local_58;
        local_2c = local_64;
        do {
          piVar10 = local_18;
          iVar7 = local_1c + local_30 / iVar13;
          sVar9 = (short)(iVar7 >> 0x1f);
          if (iVar7 < 0) {
            iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar9) -
                           (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar9) -
                                (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
          }
          iVar16 = local_14 + local_2c / iVar13;
          sVar9 = (short)(iVar16 >> 0x1f);
          if (iVar16 < 0) {
            iVar16 = (short)(((short)(iVar16 / 0xc9) + sVar9) -
                            (short)((longlong)iVar16 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar16 = (int)(short)(((short)(iVar16 / 0xc9) + sVar9) -
                                 (short)((longlong)iVar16 * 0x28c1979 >> 0x3f));
          }
          iVar8 = local_8 + local_3c / iVar13;
          sVar9 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            iVar8 = (short)(((short)(iVar8 / 200) + sVar9) -
                           (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            iVar8 = (int)(short)(((short)(iVar8 / 200) + sVar9) -
                                (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
          }
          sVar9 = (short)iVar7;
          if (((((sVar9 < 0) || (SHORT_007fb240 <= sVar9)) || (sVar12 = (short)iVar16, sVar12 < 0))
              || ((SHORT_007fb242 <= sVar12 || (sVar14 = (short)iVar8, sVar14 < 0)))) ||
             ((SHORT_007fb244 <= sVar14 ||
              (piVar3 = *(int **)(DAT_007fb248 +
                                 ((int)SHORT_007fb246 * (int)sVar14 +
                                  (int)SHORT_007fb240 * (int)sVar12 + (int)sVar9) * 8),
              piVar11 = local_18, iVar13 = local_c, piVar3 == (int *)0x0)))) {
            piVar10 = piVar11;
            if (*(short *)(DAT_007fb280 +
                          (SHORT_007fb278 * iVar16 + iVar7 + SHORT_007fb27e * iVar8) * 2) < 0) {
              return 0;
            }
          }
          else if (local_18[6] != piVar3[6]) {
            iVar7 = (**(code **)(*param_1 + 0xf0))();
            if (iVar7 == 0) {
              return 0;
            }
            if (((uint)param_1[9] < 8) &&
               ((DAT_00802a38 == (STPlaySystemC *)0x0 ||
                ((byte)(&DAT_008087e9)[param_1[9] * 0x51] < 8)))) {
              bVar6 = *(byte *)(piVar3 + 9);
              bVar1 = *(byte *)(piVar10 + 9);
              _local_50 = CONCAT31(uStack_4f,bVar6);
              _local_44 = CONCAT31(uStack_43,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar6 == bVar1) {
LAB_0062687f:
                  iVar7 = 0;
                }
                else {
                  uVar4 = (uint)bVar6;
                  uVar5 = (uint)bVar1;
                  cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
                  if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')
                     ) {
                    iVar7 = -2;
                  }
                  else if ((cVar2 == '\x01') &&
                          (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                    iVar7 = -1;
                  }
                  else if ((cVar2 == '\0') &&
                          (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
                    iVar7 = 1;
                  }
                  else {
                    if ((cVar2 != '\x01') ||
                       (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01'))
                    goto LAB_0062687f;
                    iVar7 = 2;
                  }
                }
                bVar17 = iVar7 < 0;
              }
              else {
                bVar17 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar6 * 0x51];
              }
              if (!bVar17) {
                return 0;
              }
            }
            iVar7 = (**(code **)(*piVar3 + 0xf8))();
            iVar13 = local_c;
            if (iVar7 == 0) {
              return 0;
            }
          }
          local_30 = local_30 + local_58;
          local_2c = local_2c + local_64;
          local_48 = local_48 + 1;
          local_3c = local_3c + local_5c;
          piVar11 = piVar10;
          iVar7 = local_60;
        } while (local_48 <= iVar13);
      }
      local_14 = local_34;
      local_8 = local_4c;
      param_2 = param_2 + 1;
      local_1c = iVar7;
    } while (param_2 <= local_10);
  }
  local_bc[3] = 1;
  local_bc[2] = 1;
  local_bc[1] = *(undefined4 *)((int)piVar10 + 0x262);
  local_9e = (short)local_40;
  local_a2 = (short)local_20;
  local_98 = (undefined2)local_38;
  local_9c = (undefined2)local_28;
  local_9a = (undefined2)local_24;
  local_bc[0] = 0x28;
  local_a0 = (undefined2)local_54;
  local_94 = 0x9b;
  local_96 = (**(code **)(*piVar10 + 0x10))(local_20,local_54,local_40,local_28,local_24,local_38);
  local_8f = piVar10[6];
  local_8b = 0xffff;
  STPlaySystemC::CreateGameObject(DAT_00802a38,0x28,0,0,local_bc,0);
  return 1;
}

