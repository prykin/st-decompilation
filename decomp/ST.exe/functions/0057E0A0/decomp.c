
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0057e0a0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  int *this_00;
  byte bVar6;
  short sVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar13;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 unaff_ESI;
  int *piVar14;
  int iVar15;
  byte *pbVar16;
  void *unaff_EDI;
  undefined4 *puVar17;
  int iVar18;
  byte *pbVar19;
  undefined4 uVar20;
  undefined4 local_68;
  undefined4 local_64 [16];
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  if (((*(byte *)((int)this + 0x261) & 4) != 0) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_68 = DAT_00858df8;
  DAT_00858df8 = &local_68;
  local_24 = this;
  iVar8 = __setjmp3(local_64,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar8 != 0) {
    DAT_00858df8 = (undefined4 *)local_68;
    iVar12 = FUN_006ad4d0(s_E____titans_Igor_To_gold_cpp_007cb19c,0x169,0,iVar8,&DAT_007a4ccc);
    if (iVar12 == 0) {
      FUN_006a5e40(iVar8,0,0x7cb19c,0x16a);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return uVar20;
  }
  iVar8 = thunk_FUN_0041e530(param_1);
  uVar13 = extraout_var_01;
  if (iVar8 == 0xffff) {
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7cb19c,0x56);
    uVar13 = extraout_var_02;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (0x108 < uVar9) {
    if (uVar9 == 0x10f) {
      if (*(int *)((int)this_00 + 0x25d) == 2) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      local_10 = (byte *)thunk_FUN_004210e0((int *)&local_8);
      local_c = (byte *)FUN_006aac70(local_8 + 0x46);
      if (local_10 == (byte *)0x0) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      if (local_c == (byte *)0x0) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      *(undefined4 *)((int)this_00 + 0x23d) = 2;
      puVar10 = (undefined4 *)((int)this_00 + 0x231);
      pbVar16 = local_c;
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pbVar16 = *puVar10;
        puVar10 = puVar10 + 1;
        pbVar16 = pbVar16 + 4;
      }
      *(undefined2 *)pbVar16 = *(undefined2 *)puVar10;
      pbVar16 = local_10;
      pbVar19 = local_c + 0x46;
      for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar19 = *(undefined4 *)pbVar16;
        pbVar16 = pbVar16 + 4;
        pbVar19 = pbVar19 + 4;
      }
      for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar19 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        pbVar19 = pbVar19 + 1;
      }
      thunk_FUN_0054d430(DAT_00802a38,this_00[6],local_c,local_8 + 0x46);
      FUN_006ab060(&local_10);
      FUN_006ab060(&local_c);
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    if (uVar9 != 0x111) {
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    sVar7 = *(short *)((int)this_00 + 0x245);
    sVar1 = *(short *)((int)this_00 + 0x24d);
    sVar2 = *(short *)((int)this_00 + 0x249);
    if ((((sVar7 < 0) || (DAT_007fb240 <= sVar7)) || (sVar2 < 0)) ||
       (((DAT_007fb242 <= sVar2 || (sVar1 < 0)) || (DAT_007fb244 <= sVar1)))) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = *(int **)(DAT_007fb248 +
                         ((int)sVar1 * (int)DAT_007fb246 + (int)sVar2 * (int)DAT_007fb240 +
                         (int)sVar7) * 8);
    }
    if (piVar14 == (int *)0x0) {
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    iVar8 = (**(code **)(*piVar14 + 0x2c))();
    if ((*(int *)((int)this_00 + 0x255) != 0xdd) || ((iVar8 != 0x39 && (iVar8 != 0x5e)))) {
      if (*(int *)((int)this_00 + 0x255) != 0xde) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      if ((iVar8 != 0x4f) && (iVar8 != 0x61)) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
    }
    thunk_FUN_005803c0();
    DAT_00858df8 = (undefined4 *)local_68;
    return 0;
  }
  if (uVar9 == 0x108) {
    iVar8 = thunk_FUN_004ab050();
    local_18 = (undefined4 *)0x0;
    if (*(int *)((int)this_00 + 0x265) < 1) {
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    iVar12 = iVar8 * 2 + 1;
    local_14 = iVar8 * 8 + -0x1c;
    iVar8 = iVar12 * 4;
    do {
      iVar11 = iVar8;
      if (8 < iVar12) {
        iVar11 = local_14;
      }
      local_20 = *(int *)((int)&DAT_007cb0b8 + iVar11) + *(int *)((int)this_00 + 0x245);
      thunk_FUN_004ad3c0(*(void **)(*(int *)((int)this_00 + 0x26d) + (int)local_18 * 4),
                         (float)local_20 * _DAT_007904f8 + _DAT_007904f4,
                         (float)(*(int *)((int)&DAT_007cb0dc + iVar11) +
                                *(int *)((int)this_00 + 0x249)) * _DAT_007904f8 + _DAT_007904f4,
                         (float)*(int *)((int)this_00 + 0x24d) * _DAT_00790504 + _DAT_00790500 +
                         _DAT_007904fc);
      iVar18 = iVar8 + 4;
      iVar15 = iVar12 + 1;
      iVar11 = local_14 + 4;
      if (*(int *)((int)this_00 + 0x255) == 0xde) {
        iVar18 = iVar8 + 8;
        iVar15 = iVar12 + 2;
        iVar11 = local_14 + 8;
      }
      local_14 = iVar11;
      local_18 = (undefined4 *)((int)local_18 + 1);
      iVar12 = iVar15;
      iVar8 = iVar18;
    } while ((int)local_18 < *(int *)((int)this_00 + 0x265));
    DAT_00858df8 = (undefined4 *)local_68;
    return 0;
  }
  if (uVar9 != 0) {
    if (uVar9 != 2) {
      if (uVar9 != 3) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      thunk_FUN_004d8530((int)this_00);
      uVar13 = extraout_var;
      if (*(int *)((int)this_00 + 0x26d) != 0) {
        iVar8 = *(int *)((int)this_00 + 0x265) + -1;
        *(int *)((int)this_00 + 0x265) = iVar8;
        while (-1 < iVar8) {
          thunk_FUN_004ad310(*(int *)(*(int *)((int)this_00 + 0x26d) + iVar8 * 4));
          FUN_0072e2b0(*(undefined4 **)
                        (*(int *)((int)this_00 + 0x26d) + *(int *)((int)this_00 + 0x265) * 4));
          iVar8 = *(int *)((int)this_00 + 0x265) + -1;
          *(int *)((int)this_00 + 0x265) = iVar8;
        }
        FUN_0072e2b0(*(undefined4 **)((int)this_00 + 0x26d));
        uVar13 = extraout_var_00;
      }
      if (*(short *)((int)this_00 + 0x32) != -1) {
        thunk_FUN_0044a440(CONCAT22(uVar13,*(short *)((int)this_00 + 0x32)),(uint)this_00);
      }
      thunk_FUN_004ad310((int)this_00 + 0x1d5);
      if (*(int **)((int)this_00 + 0x273) == (int *)0x0) {
        DAT_00858df8 = (undefined4 *)local_68;
        return 0;
      }
      FUN_006e6580(*(void **)((int)this_00 + 0x211),*(int **)((int)this_00 + 0x273));
      *(undefined4 *)((int)this_00 + 0x273) = 0;
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    local_18 = *(undefined4 **)(param_1 + 0x14);
    if ((uint)local_18[3] < 2) {
      *(undefined4 *)((int)this_00 + 0x261) = 4;
      *(undefined4 *)((int)this_00 + 0x265) = 0;
      *(undefined4 *)((int)this_00 + 0x26d) = 0;
      puVar10 = *(undefined4 **)(param_1 + 0x14);
      puVar17 = (undefined4 *)((int)this_00 + 0x231);
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar17 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar17 = puVar17 + 1;
      }
      if (*(int *)((int)this_00 + 0x251) < 1) {
        thunk_FUN_00580380(this_00);
        goto LAB_0057e624;
      }
      iVar8 = *(int *)((int)this_00 + 0x255);
      if ((((iVar8 != 0xdd) && (iVar8 != 0xde)) && (iVar8 != 0xdc)) && (iVar8 != 0xe0)) {
        iVar8 = FUN_006ad4d0(s_E____titans_Igor_To_gold_cpp_007cb19c,0x6a,0,0,&DAT_007a4ccc);
        if (iVar8 != 0) {
          pcVar3 = (code *)swi(3);
          uVar20 = (*pcVar3)();
          return uVar20;
        }
        *(undefined4 *)((int)this_00 + 0x231) = 0xde;
        uVar13 = extraout_var_04;
      }
      sVar7 = *(short *)((int)this_00 + 0x245);
      sVar1 = *(short *)((int)this_00 + 0x249);
      local_14 = CONCAT22(uVar13,sVar1);
      sVar2 = *(short *)((int)this_00 + 0x24d);
      if (((sVar7 < 0) || (DAT_007fb240 <= sVar7)) ||
         (((sVar1 < 0 || ((DAT_007fb242 <= sVar1 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)))) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = *(int **)(DAT_007fb248 +
                           ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar1 +
                           (int)sVar7) * 8);
      }
      if (((((sVar7 < 0) || (DAT_007fb240 <= sVar7)) || (sVar1 < 0)) ||
          ((DAT_007fb242 <= sVar1 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
        sVar7 = -1;
      }
      else {
        sVar7 = *(short *)(DAT_007fb280 +
                          ((int)DAT_007fb278 * (int)sVar1 + (int)DAT_007fb27e * (int)sVar2 +
                          (int)sVar7) * 2);
      }
      if ((sVar7 != 0) &&
         ((piVar14 == (int *)0x0 ||
          (((iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x39 &&
            (iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x4f)) &&
           ((iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x5e &&
            (iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x61)))))))) {
        thunk_FUN_00580380(this_00);
      }
      iVar8 = thunk_FUN_0044a2c0(0xffff,this_00);
      if (iVar8 != 0) {
        thunk_FUN_00580380(this_00);
      }
      *(uint *)((int)this_00 + 0x261) = *(uint *)((int)this_00 + 0x261) | 1;
      *(undefined4 *)((int)this_00 + 0x259) = *(undefined4 *)((int)this_00 + 0x251);
      thunk_FUN_00417a20(this_00,*(short *)((int)this_00 + 0x245),*(short *)((int)this_00 + 0x249),
                         *(short *)((int)this_00 + 0x24d),0);
      iVar8 = thunk_FUN_0057f6e0();
      if (iVar8 == 0xffff) {
        uVar20 = 0x85;
        goto LAB_0057e60c;
      }
    }
    else {
      if (local_18[3] != 2) goto LAB_0057e624;
      puVar10 = local_18;
      puVar17 = (undefined4 *)((int)this_00 + 0x231);
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar17 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar17 = puVar17 + 1;
      }
      *(undefined2 *)puVar17 = *(undefined2 *)puVar10;
      *(undefined4 *)((int)this_00 + 0x273) = 0;
      *(undefined4 *)((int)this_00 + 0x265) = 0;
      *(undefined4 *)((int)this_00 + 0x26d) = 0;
      *(undefined4 *)((int)this_00 + 0x261) = 4;
      thunk_FUN_00422210((undefined4 *)((int)local_18 + 0x46));
      sVar7 = *(short *)((int)this_00 + 0x245);
      sVar1 = *(short *)((int)this_00 + 0x249);
      local_14 = CONCAT22(extraout_var_03,sVar1);
      sVar2 = *(short *)((int)this_00 + 0x24d);
      if (((((sVar7 < 0) || (DAT_007fb240 <= sVar7)) || (sVar1 < 0)) ||
          ((DAT_007fb242 <= sVar1 || (sVar2 < 0)))) || (DAT_007fb244 <= sVar2)) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = *(int **)(DAT_007fb248 +
                           ((int)sVar1 * (int)DAT_007fb240 + (int)DAT_007fb246 * (int)sVar2 +
                           (int)sVar7) * 8);
      }
      if (((sVar7 < 0) || (DAT_007fb240 <= sVar7)) ||
         ((sVar1 < 0 || (((DAT_007fb242 <= sVar1 || (sVar2 < 0)) || (DAT_007fb244 <= sVar2)))))) {
        sVar7 = -1;
      }
      else {
        sVar7 = *(short *)(DAT_007fb280 +
                          ((int)sVar1 * (int)DAT_007fb278 + (int)DAT_007fb27e * (int)sVar2 +
                          (int)sVar7) * 2);
      }
      if ((sVar7 != 0) &&
         ((piVar14 == (int *)0x0 ||
          (((iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x39 &&
            (iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x4f)) &&
           ((iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x5e &&
            (iVar8 = (**(code **)(*piVar14 + 0x2c))(), iVar8 != 0x61)))))))) {
        thunk_FUN_00580380(this_00);
      }
      iVar8 = thunk_FUN_0044a2c0(*(ushort *)((int)this_00 + 0x32),this_00);
      if (iVar8 != 0) {
        thunk_FUN_00580380(this_00);
      }
      if (local_18[3] == 1) {
        thunk_FUN_00580f50();
      }
      *(uint *)((int)this_00 + 0x261) = *(uint *)((int)this_00 + 0x261) | 1;
      *(undefined4 *)((int)this_00 + 0x259) = *(undefined4 *)((int)this_00 + 0x251);
      thunk_FUN_00417a20(this_00,*(short *)((int)this_00 + 0x245),*(short *)((int)this_00 + 0x249),
                         *(short *)((int)this_00 + 0x24d),0);
      iVar8 = thunk_FUN_0057f6e0();
      if (iVar8 == 0xffff) {
        uVar20 = 0xb1;
LAB_0057e60c:
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7cb19c,uVar20);
      }
    }
    *(uint *)((int)this_00 + 0x261) = *(uint *)((int)this_00 + 0x261) & 0xfffffffb;
LAB_0057e624:
    if ((*(byte *)((int)this_00 + 0x261) & 4) != 0) {
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
    thunk_FUN_004d84e0((int)this_00);
    *(undefined2 *)((int)this_00 + 0x47) = *(undefined2 *)((int)this_00 + 0x245);
    *(undefined2 *)((int)this_00 + 0x5b) = *(undefined2 *)((int)this_00 + 0x245);
    *(undefined2 *)((int)this_00 + 0x49) = *(undefined2 *)((int)this_00 + 0x249);
    *(undefined2 *)((int)this_00 + 0x5d) = *(undefined2 *)((int)this_00 + 0x249);
    *(undefined2 *)((int)this_00 + 0x4b) = *(undefined2 *)((int)this_00 + 0x24d);
    *(undefined2 *)((int)this_00 + 0x5f) = *(undefined2 *)((int)this_00 + 0x24d);
    *(short *)((int)this_00 + 0x45) = *(short *)((int)this_00 + 0x24d) * 200 + 100;
    *(short *)((int)this_00 + 0x41) = *(short *)((int)this_00 + 0x245) * 0xc9 + 100;
    *(short *)((int)this_00 + 0x43) = *(short *)((int)this_00 + 0x249) * 0xc9 + 100;
    DAT_00858df8 = (undefined4 *)local_68;
    return 0;
  }
  iVar8 = thunk_FUN_0041c710((int)this_00);
  if (iVar8 == 0) {
    if ((*(byte *)((int)this_00 + 0x261) & 1) == 0) {
      thunk_FUN_005803e0((int)this_00);
      uVar9 = *(uint *)((int)this_00 + 0x261) | 2;
LAB_0057e6f0:
      *(uint *)((int)this_00 + 0x261) = uVar9;
    }
  }
  else if ((*(byte *)((int)this_00 + 0x261) & 2) != 0) {
    thunk_FUN_005803c0();
    uVar9 = *(uint *)((int)this_00 + 0x261) & 0xfffffffd;
    goto LAB_0057e6f0;
  }
  pvVar5 = DAT_00802a88;
  if (*(int *)((int)this_00 + 0x273) == 0) {
    if (DAT_00802a88 == (void *)0x0) goto LAB_0057e9c2;
    iVar8 = *(int *)((int)this_00 + 0x24d);
    if ((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) {
      uVar9 = 0;
    }
    else {
      thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                         *(int *)((int)this_00 + 0x245),*(int *)((int)this_00 + 0x249),
                         (int *)&local_18,&local_14);
      if ((iVar8 < 0) || (4 < iVar8)) {
        uVar9 = 0xffffffff;
      }
      else {
        if (((((int)local_18 < 0) || (*(int *)((int)pvVar5 + 0x28) <= (int)local_18)) ||
            ((&DAT_0079aed0)[iVar8] + local_14 < 0)) ||
           (*(int *)((int)pvVar5 + 0x2c) <= (&DAT_0079aed0)[iVar8] + local_14)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && (*(int *)((int)pvVar5 + 0x10c) < 4)) &&
           (iVar12 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x10c) * 4 + 0x3c), iVar12 != 0))
        {
          uVar9 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_14) * *(int *)((int)pvVar5 + 0x28)
                                  + iVar12 + (int)local_18);
        }
        else {
          uVar9 = 0xffffffff;
        }
        if (-1 < (int)uVar9) {
          if (uVar9 == 0xf) {
            if ((((int)local_18 < 0) || (*(int *)((int)pvVar5 + 0x30) <= (int)local_18)) ||
               (((&DAT_0079aed0)[iVar8] + local_14 < 0 ||
                (*(int *)((int)pvVar5 + 0x34) <= (&DAT_0079aed0)[iVar8] + local_14)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (*(int *)((int)pvVar5 + 0x4c) != 0)) {
              uVar9 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_14) *
                                      *(int *)((int)pvVar5 + 0x30) + *(int *)((int)pvVar5 + 0x4c) +
                                     (int)local_18);
            }
            else {
              uVar9 = 0xffffffff;
            }
            if (-1 < (int)uVar9) {
              uVar9 = (uint)(uVar9 != 0xf);
            }
          }
          else {
            uVar9 = 2;
          }
        }
      }
    }
    if (uVar9 != 2) {
      puVar10 = thunk_FUN_00580b60(*(int *)((int)this_00 + 0x245),*(int *)((int)this_00 + 0x249));
      *(undefined4 **)((int)this_00 + 0x273) = puVar10;
      goto LAB_0057e9c2;
    }
    piVar14 = *(int **)((int)this_00 + 0x273);
    if (piVar14 == (int *)0x0) goto LAB_0057e9c2;
  }
  else {
    if (DAT_00802a88 == (void *)0x0) goto LAB_0057e9c2;
    iVar8 = *(int *)((int)this_00 + 0x24d);
    if ((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) {
      uVar9 = 0;
    }
    else {
      thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                         *(int *)((int)this_00 + 0x245),*(int *)((int)this_00 + 0x249),&local_1c,
                         &local_20);
      if ((iVar8 < 0) || (4 < iVar8)) {
        uVar9 = 0xffffffff;
      }
      else {
        if ((((local_1c < 0) || (*(int *)((int)pvVar5 + 0x28) <= local_1c)) ||
            ((&DAT_0079aed0)[iVar8] + local_20 < 0)) ||
           (*(int *)((int)pvVar5 + 0x2c) <= (&DAT_0079aed0)[iVar8] + local_20)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && (*(int *)((int)pvVar5 + 0x10c) < 4)) &&
           (iVar12 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x10c) * 4 + 0x3c), iVar12 != 0))
        {
          uVar9 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_20) * *(int *)((int)pvVar5 + 0x28)
                                  + iVar12 + local_1c);
        }
        else {
          uVar9 = 0xffffffff;
        }
        if (-1 < (int)uVar9) {
          if (uVar9 == 0xf) {
            if (((local_1c < 0) || (*(int *)((int)pvVar5 + 0x30) <= local_1c)) ||
               (((&DAT_0079aed0)[iVar8] + local_20 < 0 ||
                (*(int *)((int)pvVar5 + 0x34) <= (&DAT_0079aed0)[iVar8] + local_20)))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (*(int *)((int)pvVar5 + 0x4c) != 0)) {
              uVar9 = (uint)*(byte *)(((&DAT_0079aed0)[iVar8] + local_20) *
                                      *(int *)((int)pvVar5 + 0x30) + *(int *)((int)pvVar5 + 0x4c) +
                                     local_1c);
            }
            else {
              uVar9 = 0xffffffff;
            }
            if (-1 < (int)uVar9) {
              uVar9 = (uint)(uVar9 != 0xf);
            }
          }
          else {
            uVar9 = 2;
          }
        }
      }
    }
    if (uVar9 != 2) goto LAB_0057e9c2;
    piVar14 = *(int **)((int)this_00 + 0x273);
  }
  FUN_006e6580(*(void **)((int)this_00 + 0x211),piVar14);
  *(undefined4 *)((int)this_00 + 0x273) = 0;
LAB_0057e9c2:
  (**(code **)(*this_00 + 0xd8))();
  if ((*(int *)((int)this_00 + 0x255) != 0xe0) && (iVar8 = 0, 0 < *(int *)((int)this_00 + 0x265))) {
    do {
      thunk_FUN_004ac9e0(*(void **)(*(int *)((int)this_00 + 0x26d) + iVar8 * 4),
                         *(int *)((int)DAT_00802a38 + 0xe4));
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this_00 + 0x265));
  }
  if (*(int *)((int)this_00 + 0x25d) == 2) {
    if ((*(int *)((int)this_00 + 0x211) != 0) && (*(uint *)((int)DAT_00802a38 + 0xe4) % 0xf == 0)) {
      bVar6 = *(char *)((int)this_00 + 0x272) + 1;
      *(byte *)((int)this_00 + 0x272) = bVar6;
      if ((short)(ushort)bVar6 < *(short *)(DAT_00806724 + 0x23)) {
        thunk_FUN_004ace30((void *)((int)this_00 + 0x1d5),
                           *(uint *)(DAT_00806724 + 0x30 + (uint)bVar6 * 4),
                           (int)*(short *)(DAT_00806724 + 0x2c));
        if ((*(int *)((int)this_00 + 0x255) != 0xe0) &&
           (iVar8 = 0, 0 < *(int *)((int)this_00 + 0x265))) {
          do {
            thunk_FUN_004ace30(*(void **)(*(int *)((int)this_00 + 0x26d) + iVar8 * 4),
                               *(uint *)(DAT_00806724 + 0x30 +
                                        (uint)*(byte *)((int)this_00 + 0x272) * 4),
                               (int)*(short *)(DAT_00806724 + 0x2c));
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)((int)this_00 + 0x265));
        }
      }
      else {
        thunk_FUN_00580380(this_00);
      }
    }
    if ((((*(int *)((int)this_00 + 0x259) != 0) && (iVar8 = thunk_FUN_00580dc0(this_00), iVar8 != 0)
         ) && (thunk_FUN_004ace30((void *)((int)this_00 + 0x1d5),0,
                                  (int)*(short *)(DAT_00806724 + 0x2c)),
              *(int *)((int)this_00 + 0x255) != 0xe0)) &&
       (iVar8 = 0, 0 < *(int *)((int)this_00 + 0x265))) {
      do {
        thunk_FUN_004ace30(*(void **)(*(int *)((int)this_00 + 0x26d) + iVar8 * 4),0,
                           (int)*(short *)(DAT_00806724 + 0x2c));
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)this_00 + 0x265));
      DAT_00858df8 = (undefined4 *)local_68;
      return 0;
    }
  }
  DAT_00858df8 = (undefined4 *)local_68;
  return 0;
}

