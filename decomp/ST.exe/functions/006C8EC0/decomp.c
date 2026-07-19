
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006C8EC0_param_3Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4
FUN_006c8ec0(int param_1,int param_2,Global_sub_006C8EC0_param_3Enum param_3,undefined4 *param_4,
            int param_5,int param_6,int param_7,short *param_8,int param_9,int param_10)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  short *psVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  short *psVar30;
  Global_sub_006C8EC0_param_3Enum GVar31;
  ushort *puVar32;
  Global_sub_006C8EC0_param_3Enum GVar33;
  ushort *puVar34;
  int iVar35;
  int iVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  ushort uVar39;
  int iVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  int local_54;
  undefined4 *local_4c;
  int local_48;
  int local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 local_18;
  uint local_10;
  
  psVar15 = param_8;
  if ((((int)param_8 < 0) || (param_9 < 0)) || (param_10 < 0)) {
    uVar16 = FUN_006ab090(param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7,(int)param_8,
                          param_9,param_10);
    return uVar16;
  }
  iVar18 = param_2 * param_3;
  local_4c = (undefined4 *)0x0;
  param_8 = &DAT_007ed572;
  while ((((iVar19 = (int)param_8[-1] + (int)psVar15, iVar19 < 0 || (param_2 <= iVar19)) ||
          ((iVar40 = *param_8 + param_9, iVar40 < 0 ||
           (((int)param_3 <= iVar40 || (iVar20 = param_8[1] + param_10, iVar20 < 0)))))) ||
         (((int)param_4 <= iVar20 ||
          (*(short *)(param_1 + (iVar40 * param_2 + iVar19 + iVar20 * iVar18) * 2) != 0))))) {
    param_8 = param_8 + 4;
    local_4c = (undefined4 *)((int)local_4c + 1);
    if (0x7ed641 < (int)param_8) {
LAB_006c8f65:
      uVar16 = FUN_006ab090(param_1,param_2,param_3,(int)param_4,param_5,param_6,param_7,
                            (int)psVar15,param_9,param_10);
      return uVar16;
    }
  }
  if ((int)local_4c < 0x1a) {
    iVar19 = -param_9;
    uVar41 = param_7 - param_10;
    iVar40 = param_3 - param_9;
    iVar20 = (int)param_4 + (-1 - param_10);
    iVar21 = param_6 - param_9;
    psVar1 = (short *)(param_1 + ((int)psVar15 + param_2 * param_9 + iVar18 * param_10) * 2);
    local_38 = 0;
    local_4c = (undefined4 *)0x0;
    psVar1[iVar21 * param_2 + (param_5 - (int)psVar15) + uVar41 * iVar18] = 1;
    if ((((short *)param_5 == psVar15) && (param_6 == param_9)) && (param_7 == param_10)) {
      return 0;
    }
    sVar3 = *psVar1;
    bVar13 = false;
    if (sVar3 != 0) {
      *psVar1 = 0;
      if (((((int)psVar15 < 1) || (psVar1[-1] != 0)) &&
          (((param_2 + -1 <= (int)psVar15 || (psVar1[1] != 0)) &&
           ((param_9 < 1 || (psVar1[-param_2] != 0)))))) &&
         ((((int)(param_3 - CASE_1) <= param_9 || (psVar1[param_2] != 0)) &&
          (((param_10 < 1 || (psVar1[-iVar18] != 0)) &&
           (((int)param_4 + -1 <= param_10 || (psVar1[iVar18] != 0)))))))) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
    }
    local_48 = FUN_006aae60(param_5,param_6,param_7,(int)psVar15,param_9,param_7);
    local_48 = local_48 + ((uVar41 ^ (int)uVar41 >> 0x1f) - ((int)uVar41 >> 0x1f));
    local_34 = local_48 * 2 + 10;
    param_4 = FUN_006b04d0(local_34 * 4);
    puVar17 = local_4c;
    if ((param_4 == (undefined4 *)0x0) ||
       (local_4c = (undefined4 *)FUN_006bfb70(0x3e84), local_4c == (undefined4 *)0x0))
    goto LAB_006ce63a;
    *local_4c = 0;
    puVar17 = local_4c + 1;
    local_3c = local_4c + 5;
    *puVar17 = 0;
    local_40 = 999;
    param_9 = -1;
    *puVar17 = param_4[local_48 + 1];
    local_18 = (undefined2)iVar21;
    param_4[local_48 + 1] = puVar17;
    *(short *)(local_4c + 2) = (short)(param_5 - (int)psVar15);
    *(undefined2 *)((int)local_4c + 10) = local_18;
    param_8._0_2_ = (undefined2)uVar41;
    *(short *)((int)local_4c + 0xe) = (short)local_48;
    *(undefined2 *)(local_4c + 3) = param_8._0_2_;
    *(undefined2 *)(local_4c + 4) = 1;
    bVar14 = false;
    puVar37 = (undefined4 *)0x0;
    goto LAB_006c9187;
  }
  goto LAB_006c8f65;
LAB_006c9187:
  if (local_34 <= local_48) goto LAB_006ce641;
  puVar17 = param_4 + local_48;
  while (puVar11 = (undefined4 *)*puVar17, puVar11 == (undefined4 *)0x0) {
    local_48 = local_48 + 1;
    puVar17 = puVar17 + 1;
    if (local_34 <= local_48) goto LAB_006ce641;
  }
  if (local_34 <= local_48) goto LAB_006ce641;
  if (local_34 <= local_48 + 10) {
    param_4 = (undefined4 *)FUN_006bfb50(param_4,local_34 * 4 + 400);
    puVar17 = local_4c;
    if (param_4 == (undefined4 *)0x0) goto LAB_006ce63a;
    puVar17 = param_4 + local_34;
    for (iVar21 = 100; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar17 = 0;
      puVar17 = puVar17 + 1;
    }
    local_34 = local_34 + 100;
  }
  local_54 = 0;
  param_4[local_48] = 0;
  puVar17 = puVar11;
  do {
    puVar22 = puVar17;
    sVar4 = *(short *)(puVar22 + 1);
    iVar36 = (int)sVar4;
    sVar5 = *(short *)((int)puVar22 + 6);
    iVar21 = (int)sVar5;
    sVar6 = *(short *)(puVar22 + 2);
    iVar23 = (int)sVar6;
    psVar2 = psVar1 + iVar21 * param_2 + iVar36 + iVar23 * iVar18;
    if (*(short *)(puVar22 + 3) <= *psVar2) {
      sVar7 = *(short *)((int)puVar22 + 10);
      GVar33 = (Global_sub_006C8EC0_param_3Enum)sVar7;
      iVar24 = (int)*(short *)(puVar22 + 3) + GVar33;
      if (iVar24 < local_48) {
        local_48 = iVar24;
      }
      sVar8 = *psVar2;
      iVar24 = (int)sVar8;
      puVar17 = local_4c;
      for (; local_4c = puVar17, param_9 < 0x1a; param_9 = param_9 + 1) {
        if (local_40 < 1) {
          local_4c = (undefined4 *)FUN_006bfb70(0x3e84);
          if (local_4c == (undefined4 *)0x0) goto LAB_006ce63a;
          *local_4c = puVar17;
          local_3c = local_4c + 1;
          local_40 = 1000;
        }
        *local_3c = puVar37;
        local_40 = local_40 + -1;
        puVar37 = local_3c;
        puVar17 = local_4c;
        local_3c = local_3c + 4;
      }
      local_10 = 0xff;
      param_3 = CASE_0;
      if (iVar36 < 0) {
        param_3 = CASE_1;
        local_10 = 0xfe;
        if (-(int)psVar15 < iVar36) {
          local_10 = 0xee;
        }
      }
      else {
        if (-(int)psVar15 < iVar36) {
          local_10 = 0xef;
        }
        if (iVar36 < (param_2 - (int)psVar15) + -1) {
          local_10 = local_10 & 0xfffffffe;
        }
      }
      if (iVar21 < 0) {
        uVar41 = local_10 & 0xfffffffd;
        if (iVar19 < iVar21) {
          uVar41 = local_10 & 0xffffffdd;
        }
      }
      else {
        param_3 = param_3 | CASE_2;
        if (iVar19 < iVar21) {
          local_10 = local_10 & 0xffffffdf;
        }
        uVar41 = local_10;
        if (iVar21 < iVar40 + -1) {
          uVar41 = local_10 & 0xfffffffd;
        }
      }
      local_10 = uVar41;
      bVar43 = iVar23 < iVar20;
      if (bVar43) {
        local_10 = local_10 & 0xfffffffb;
      }
      bVar12 = -param_10 < iVar23;
      if (bVar12) {
        local_10 = local_10 & 0xffffffbf;
      }
      if (iVar23 < 1) {
        if (iVar23 == 0) {
          param_5 = GVar33 + CASE_1;
        }
        else {
          param_5 = GVar33 - CASE_1;
        }
        param_1 = GVar33 + CASE_1;
      }
      else {
        param_5 = GVar33 + CASE_1;
        param_1 = GVar33 - CASE_1;
      }
      switch(param_3) {
      case CASE_0:
        uVar41 = local_10 & 0x10;
        puVar17 = puVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              iVar35 = GVar33 + CASE_3;
            }
            else {
              iVar35 = GVar33 + CASE_1;
            }
          }
          else if (-iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)((int)puVar37 + 6) = sVar5;
          *(short *)(puVar37 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 1;
        puVar37 = puVar17;
        if ((uVar28 == 0) && ((psVar2[1] == 0 || (iVar24 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < -iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        uVar29 = local_10 & 0x20;
        puVar17 = puVar37;
        if (uVar29 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (-iVar21 < iVar36) {
              iVar35 = GVar33 + CASE_1;
            }
            else {
              iVar35 = GVar33 + CASE_3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 3];
            param_4[iVar35 + iVar24 + 3] = puVar37;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (puVar37 = puVar17, iVar24 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (-iVar36 == iVar21 || -iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_1;
          }
          else {
            iVar35 = GVar33 - CASE_3;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        puVar17 = puVar37;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[param_1 + iVar24 + 3];
            param_4[param_1 + iVar24 + 3] = puVar37;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            *(short *)((int)puVar37 + 10) = (short)param_1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        puVar37 = puVar17;
        if ((bVar43) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[param_5 + iVar24 + 3];
          param_4[param_5 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 2) = sVar6 + 1;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)((int)puVar17 + 10) = (short)param_5;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar18])) {
          puVar17 = puVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_5 + 3;
              }
              else {
                iVar35 = param_5 + 1;
              }
            }
            else if (-iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if (((uVar28 == 0) &&
              ((psVar2[iVar18 + 1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < -iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar29 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (-iVar21 < iVar36) {
                iVar35 = param_5 + 1;
              }
              else {
                iVar35 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if (((psVar2[iVar18 + param_2] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (-iVar36 == iVar21 || -iVar21 < iVar36) {
              iVar35 = param_5 + -1;
            }
            else {
              iVar35 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          puVar17 = puVar37;
          if (((uVar41 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_1 + 3;
              }
              else {
                iVar35 = param_1 + 1;
              }
            }
            else if (-iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if ((uVar28 == 0) &&
             (((psVar30[1] == 0 || (iVar24 + 4 < (int)psVar30[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < -iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar29 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (-iVar21 < iVar36) {
                iVar35 = param_1 + 1;
              }
              else {
                iVar35 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if (((psVar30[param_2] == 0) || (iVar24 + 4 < (int)psVar30[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (-iVar36 == iVar21 || -iVar21 < iVar36) {
              iVar35 = param_1 + -1;
            }
            else {
              iVar35 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        puVar17 = puVar37;
        if (uVar41 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            if (iVar36 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (1 - iVar21 < iVar36) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar36 != 1 - iVar21) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[GVar31 + iVar24 + 4];
            param_4[GVar31 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)GVar31;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        puVar37 = puVar17;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            puVar37 = (undefined4 *)*puVar17;
            param_9 = param_9 + -1;
            *puVar17 = param_4[GVar33 + 4 + iVar24 + 4];
            param_4[GVar33 + 4 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + -1;
            *(short *)(puVar17 + 2) = sVar6;
            param_3._0_2_ = (undefined2)(GVar33 + 4);
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        puVar17 = puVar37;
        if ((((uVar29 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              param_3 = GVar33 + 4;
            }
            else {
              param_3 = GVar33;
              if (iVar21 != -1) {
                param_3 = GVar33 - CASE_2;
              }
            }
          }
          else {
            param_3 = GVar33 + ~CASE_3;
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[param_3 + iVar24 + 4];
          param_4[param_3 + iVar24 + 4] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)((int)puVar37 + 6) = sVar5 + 1;
          *(short *)(puVar37 + 2) = sVar6;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)(puVar37 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        puVar37 = puVar17;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar42 = -(iVar36 + 1) == iVar21;
          if (bVar42 || -iVar21 < iVar36 + 1) {
            if (!bVar42) {
              GVar33 = GVar33 + CASE_2;
            }
          }
          else {
            GVar33 = GVar33 - CASE_2;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[GVar33 + iVar24 + 4];
          param_4[GVar33 + iVar24 + 4] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)GVar33;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar39 = (ushort)iVar35;
        if ((bVar43) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar39;
              if (iVar36 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (1 - iVar21 < iVar36) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar36 != 1 - iVar21) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(ushort *)(puVar37 + 3) = uVar39;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            }
          }
          puVar37 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              param_9 = param_9 + -1;
              puVar37 = (undefined4 *)*puVar17;
              *puVar17 = param_4[param_5 + 4 + iVar35];
              param_4[param_5 + 4 + iVar35] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(ushort *)(puVar17 + 3) = uVar39;
              *(short *)(puVar17 + 2) = sVar6 + 1;
              *(short *)((int)puVar17 + 10) = (short)param_5 + 4;
            }
          }
          puVar17 = puVar37;
          if (((uVar29 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar39;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != -1) {
                  iVar27 = param_5 + -2;
                }
              }
            }
            else {
              iVar27 = param_5 + -4;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar27 + iVar35];
            param_4[iVar27 + iVar35] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + 1;
            *(ushort *)(puVar37 + 3) = uVar39;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar27;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          }
          puVar37 = puVar17;
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             ((((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar34[param_2 + 1] = uVar39;
            bVar43 = -(iVar36 + 1) == iVar21;
            if (bVar43 || -iVar21 < iVar36 + 1) {
              if (!bVar43) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[param_5 + iVar35];
            param_4[param_5 + iVar35] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(ushort *)(puVar17 + 3) = uVar39;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)param_5;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar39;
              if (iVar36 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (1 - iVar21 < iVar36) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar36 != 1 - iVar21) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(ushort *)(puVar37 + 3) = uVar39;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            }
          }
          puVar38 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              param_9 = param_9 + -1;
              puVar38 = (undefined4 *)*puVar17;
              *puVar17 = param_4[param_1 + 4 + iVar35];
              param_4[param_1 + 4 + iVar35] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(ushort *)(puVar17 + 3) = uVar39;
              *(short *)(puVar17 + 2) = sVar6 + -1;
              *(short *)((int)puVar17 + 10) = (short)param_1 + 4;
            }
          }
          puVar37 = puVar38;
          if ((((uVar29 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar39;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != -1) {
                  iVar27 = param_1 + -2;
                }
              }
            }
            else {
              iVar27 = param_1 + -4;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar38;
            *puVar38 = param_4[iVar27 + iVar35];
            param_4[iVar27 + iVar35] = puVar38;
            *(short *)(puVar38 + 1) = sVar4 + -1;
            *(short *)((int)puVar38 + 6) = sVar5 + 1;
            *(ushort *)(puVar38 + 3) = uVar39;
            *(short *)(puVar38 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar27;
            *(undefined2 *)((int)puVar38 + 10) = (undefined2)param_3;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar39;
            iVar27 = iVar21;
            iVar35 = iVar36;
LAB_006ce561:
            bVar43 = -(iVar35 + 1) == iVar27;
            puVar17 = puVar37;
            if (bVar43 || -iVar27 < iVar35 + 1) {
              if (!bVar43) {
                param_1 = param_1 + 2;
              }
            }
            else {
              param_1 = param_1 + -2;
            }
LAB_006ce57c:
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[param_1 + iVar24 + 5];
            param_4[param_1 + iVar24 + 5] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            param_3._0_2_ = (undefined2)param_1;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = (short)(iVar24 + 5);
          }
        }
        break;
      case CASE_1:
        uVar41 = local_10 & 0x10;
        puVar17 = puVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar21 < iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)((int)puVar37 + 6) = sVar5;
          *(short *)(puVar37 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (puVar37 = puVar17, iVar24 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < iVar21) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        puVar17 = puVar37;
        if (uVar28 == 0) {
          sVar9 = psVar2[-param_2];
          if ((sVar9 == 0) || (iVar24 + 3 < (int)sVar9)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar36 < iVar21) {
              iVar35 = GVar33 + CASE_1;
            }
            else {
              iVar35 = GVar33 + CASE_3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 3];
            param_4[iVar35 + iVar24 + 3] = puVar37;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (puVar37 = puVar17, iVar24 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        puVar17 = puVar37;
        if (bVar12) {
          sVar9 = psVar2[-iVar18];
          if ((sVar9 == 0) || (iVar24 + 3 < (int)sVar9)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[param_1 + iVar24 + 3];
            param_4[param_1 + iVar24 + 3] = puVar37;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            *(short *)((int)puVar37 + 10) = (short)param_1;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        puVar37 = puVar17;
        if ((bVar43) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[param_5 + iVar24 + 3];
          param_4[param_5 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 2) = sVar6 + 1;
          *(short *)((int)puVar17 + 10) = (short)param_5;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar18])) {
          puVar17 = puVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if (((psVar2[iVar18 + 1] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar28 == 0) {
            sVar9 = psVar2[iVar18 - param_2];
            if (((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar36 < iVar21) {
                iVar35 = param_5 + 1;
              }
              else {
                iVar35 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if (((psVar2[iVar18 + param_2] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          puVar17 = puVar37;
          if (((uVar41 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if (((psVar30[1] == 0) || (iVar24 + 4 < (int)psVar30[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar28 == 0) {
            sVar9 = psVar30[-param_2];
            if (((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar36 < iVar21) {
                iVar35 = param_1 + 1;
              }
              else {
                iVar35 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if (((psVar30[param_2] == 0) || (iVar24 + 4 < (int)psVar30[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        puVar17 = puVar37;
        if (uVar41 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar9 = *psVar30;
          if ((((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[GVar33 + iVar24 + 8];
            param_4[GVar33 + iVar24 + 8] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            *(short *)((int)puVar37 + 10) = sVar7 + 4;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        puVar37 = puVar17;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar36 < iVar21 + -1) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar36 != iVar21 + -1) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[GVar31 + iVar24 + 4];
            param_4[GVar31 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + -1;
            *(short *)(puVar17 + 2) = sVar6;
            param_3._0_2_ = (undefined2)GVar31;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        local_10 = local_10 & 0x12;
        puVar17 = puVar37;
        if (((local_10 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar21 < iVar36 + -1) {
            GVar31 = GVar33 - CASE_2;
          }
          else {
            GVar31 = GVar33;
            if (iVar21 != iVar36 + -1) {
              GVar31 = GVar33 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[GVar31 + iVar24 + 4];
          param_4[GVar31 + iVar24 + 4] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)((int)puVar37 + 6) = sVar5 + 1;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)GVar31;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)(puVar37 + 3) = sVar8 + 4;
        }
        iVar35 = param_2 * 2 + 2;
        puVar37 = puVar17;
        if ((((psVar2[param_2 + 1] == 0) || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          puVar37 = (undefined4 *)*puVar17;
          param_9 = param_9 + -1;
          *puVar17 = param_4[GVar33 + ~CASE_3 + iVar24 + 4];
          param_4[GVar33 + ~CASE_3 + iVar24 + 4] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)(GVar33 + ~CASE_3);
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 4;
        }
        iVar27 = iVar24 + 5;
        uVar39 = (ushort)iVar27;
        if ((bVar43) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            uVar10 = *(ushort *)((int)puVar34 - iVar35);
            if ((((uVar10 == 0) || (iVar27 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar35) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar34 - iVar35) = uVar39;
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[param_5 + 4 + iVar27];
              param_4[param_5 + 4 + iVar27] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              *(short *)((int)puVar37 + 10) = (short)param_5 + 4;
              *(ushort *)(puVar37 + 3) = uVar39;
            }
          }
          puVar37 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if (((puVar32[1] == 0) || (iVar27 < (short)puVar32[1])) &&
               (((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              if (iVar36 < iVar21 + -1) {
                iVar25 = param_5 + -2;
              }
              else {
                iVar25 = param_5;
                if (iVar36 != iVar21 + -1) {
                  iVar25 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar37 = (undefined4 *)*puVar17;
              *puVar17 = param_4[iVar25 + iVar27];
              param_4[iVar25 + iVar27] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(short *)(puVar17 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar25;
              *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
              *(ushort *)(puVar17 + 3) = uVar39;
            }
          }
          puVar17 = puVar37;
          if (((local_10 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar27 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar39;
            if (iVar21 < iVar36 + -1) {
              iVar25 = param_5 + -2;
            }
            else {
              iVar25 = param_5;
              if (iVar21 != iVar36 + -1) {
                iVar25 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar25 + iVar27];
            param_4[iVar25 + iVar27] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + 1;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar25;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(ushort *)(puVar37 + 3) = uVar39;
          }
          puVar37 = puVar17;
          if ((((puVar34[param_2 + 1] == 0) || (iVar27 < (short)puVar34[param_2 + 1])) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar39;
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[param_5 + -4 + iVar27];
            param_4[param_5 + -4 + iVar27] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)(param_5 + -4);
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(ushort *)(puVar17 + 3) = uVar39;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            uVar10 = *(ushort *)((int)puVar34 - iVar35);
            if ((((uVar10 == 0) || (iVar27 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar35) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar34 - iVar35) = uVar39;
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[param_1 + 4 + iVar27];
              param_4[param_1 + 4 + iVar27] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              *(short *)((int)puVar37 + 10) = (short)param_1 + 4;
              *(ushort *)(puVar37 + 3) = uVar39;
            }
          }
          puVar38 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar27 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              if (iVar36 < iVar21 + -1) {
                iVar35 = param_1 + -2;
              }
              else {
                iVar35 = param_1;
                if (iVar36 != iVar21 + -1) {
                  iVar35 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar38 = (undefined4 *)*puVar17;
              *puVar17 = param_4[iVar35 + iVar27];
              param_4[iVar35 + iVar27] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(short *)(puVar17 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
              *(ushort *)(puVar17 + 3) = uVar39;
            }
          }
          puVar37 = puVar38;
          if ((((local_10 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar27 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar39;
            if (iVar21 < iVar36 + -1) {
              iVar35 = param_1 + -2;
            }
            else {
              iVar35 = param_1;
              if (iVar21 != iVar36 + -1) {
                iVar35 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar38;
            *puVar38 = param_4[iVar35 + iVar27];
            param_4[iVar35 + iVar27] = puVar38;
            *(short *)(puVar38 + 1) = sVar4 + -1;
            *(short *)((int)puVar38 + 6) = sVar5 + 1;
            *(short *)(puVar38 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar38 + 10) = (undefined2)param_3;
            *(ushort *)(puVar38 + 3) = uVar39;
          }
          if ((((puVar34[param_2 + 1] == 0) || (iVar27 < (short)puVar34[param_2 + 1])) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar39;
            param_1 = param_1 + -4;
            puVar17 = puVar37;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_2:
        uVar41 = local_10 & 0x10;
        puVar17 = puVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              iVar35 = GVar33 + CASE_3;
            }
            else {
              iVar35 = GVar33 + CASE_1;
            }
          }
          else if (iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)((int)puVar37 + 6) = sVar5;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)(puVar37 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 1;
        puVar37 = puVar17;
        if ((uVar28 == 0) && ((psVar2[1] == 0 || (iVar24 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        uVar29 = local_10 & 0x20;
        puVar17 = puVar37;
        if (uVar29 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                iVar35 = GVar33 + CASE_3;
              }
              else {
                iVar35 = GVar33 + CASE_1;
              }
            }
            else if (iVar36 < iVar21) {
              iVar35 = GVar33 - CASE_3;
            }
            else {
              iVar35 = GVar33 - CASE_1;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 3];
            param_4[iVar35 + iVar24 + 3] = puVar37;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        uVar26 = local_10 & 2;
        puVar37 = puVar17;
        if ((uVar26 == 0) && ((psVar2[param_2] == 0 || (iVar24 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        puVar17 = puVar37;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[param_1 + iVar24 + 3];
            param_4[param_1 + iVar24 + 3] = puVar37;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            *(short *)((int)puVar37 + 10) = (short)param_1;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        puVar37 = puVar17;
        if ((bVar43) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[param_5 + iVar24 + 3];
          param_4[param_5 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 2) = sVar6 + 1;
          *(short *)((int)puVar17 + 10) = (short)param_5;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar18])) {
          puVar17 = puVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_5 + 3;
              }
              else {
                iVar35 = param_5 + 1;
              }
            }
            else if (iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if (((uVar28 == 0) &&
              ((psVar2[iVar18 + 1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar29 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_5 + 3;
                }
                else {
                  iVar35 = param_5 + 1;
                }
              }
              else if (iVar36 < iVar21) {
                iVar35 = param_5 + -3;
              }
              else {
                iVar35 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if ((uVar26 == 0) &&
             (((psVar2[iVar18 + param_2] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          puVar17 = puVar37;
          if (((uVar41 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_1 + 3;
              }
              else {
                iVar35 = param_1 + 1;
              }
            }
            else if (iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if ((uVar28 == 0) &&
             (((psVar30[1] == 0 || (iVar24 + 4 < (int)psVar30[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar29 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_1 + 3;
                }
                else {
                  iVar35 = param_1 + 1;
                }
              }
              else if (iVar36 < iVar21) {
                iVar35 = param_1 + -3;
              }
              else {
                iVar35 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if (((uVar26 == 0) && ((psVar30[param_2] == 0 || (iVar24 + 4 < (int)psVar30[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        puVar17 = puVar37;
        if (uVar41 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            GVar31 = GVar33;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                GVar31 = GVar33 + 4;
              }
              else if (iVar36 != 1) {
                GVar31 = GVar33 - CASE_2;
              }
            }
            else if (iVar36 == 0) {
              if (iVar21 != 1) {
                GVar31 = GVar33 - CASE_2;
              }
            }
            else {
              GVar31 = GVar33 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[GVar31 + iVar24 + 4];
            param_4[GVar31 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)GVar31;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        puVar37 = puVar17;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar21 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (iVar36 + 1 < iVar21) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar21 != iVar36 + 1) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[GVar31 + iVar24 + 4];
            param_4[GVar31 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + -1;
            *(short *)(puVar17 + 2) = sVar6;
            param_3._0_2_ = (undefined2)GVar31;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        puVar17 = puVar37;
        if (((uVar29 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar36 == 0) {
            GVar31 = GVar33 + 4;
          }
          else if (iVar21 + 1 < iVar36) {
            GVar31 = GVar33 - CASE_2;
          }
          else {
            GVar31 = GVar33;
            if (iVar36 != iVar21 + 1) {
              GVar31 = GVar33 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[GVar31 + iVar24 + 4];
          param_4[GVar31 + iVar24 + 4] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)((int)puVar37 + 6) = sVar5 + 1;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)GVar31;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)(puVar37 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        puVar37 = puVar17;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          puVar37 = (undefined4 *)*puVar17;
          param_9 = param_9 + -1;
          *puVar17 = param_4[GVar33 + 4 + iVar24 + 4];
          param_4[GVar33 + 4 + iVar24 + 4] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)(GVar33 + 4);
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar39 = (ushort)iVar35;
        if ((bVar43) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar39;
              iVar27 = param_5;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_5 + 4;
                }
                else if (iVar36 != 1) {
                  iVar27 = param_5 + -2;
                }
              }
              else if (iVar36 == 0) {
                if (iVar21 != 1) {
                  iVar27 = param_5 + -2;
                }
              }
              else {
                iVar27 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(ushort *)(puVar37 + 3) = uVar39;
            }
          }
          puVar37 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if (((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
               (((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (iVar36 + 1 < iVar21) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != iVar36 + 1) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar37 = (undefined4 *)*puVar17;
              *puVar17 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(short *)(puVar17 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
              *(ushort *)(puVar17 + 3) = uVar39;
            }
          }
          puVar17 = puVar37;
          if ((uVar29 == 0) &&
             ((((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))
             ) {
            puVar34[param_2 + -1] = uVar39;
            if (iVar36 == 0) {
              iVar27 = param_5 + 4;
            }
            else if (iVar21 + 1 < iVar36) {
              iVar27 = param_5 + -2;
            }
            else {
              iVar27 = param_5;
              if (iVar36 != iVar21 + 1) {
                iVar27 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar27 + iVar35];
            param_4[iVar27 + iVar35] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + 1;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar27;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(ushort *)(puVar37 + 3) = uVar39;
          }
          puVar37 = puVar17;
          if ((((local_10 == 0) &&
               ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar39;
            puVar37 = (undefined4 *)*puVar17;
            param_9 = param_9 + -1;
            *puVar17 = param_4[param_5 + 4 + iVar35];
            param_4[param_5 + 4 + iVar35] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)(param_5 + 4);
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(ushort *)(puVar17 + 3) = uVar39;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar39;
              iVar27 = param_1;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_1 + 4;
                }
                else if (iVar36 != 1) {
                  iVar27 = param_1 + -2;
                }
              }
              else if (iVar36 == 0) {
                if (iVar21 != 1) {
                  iVar27 = param_1 + -2;
                }
              }
              else {
                iVar27 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(ushort *)(puVar37 + 3) = uVar39;
            }
          }
          puVar38 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                ((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)))) &&
               (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)) {
              puVar32[1] = uVar39;
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (iVar36 + 1 < iVar21) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != iVar36 + 1) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar38 = (undefined4 *)*puVar17;
              *puVar17 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(short *)(puVar17 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
              *(ushort *)(puVar17 + 3) = uVar39;
            }
          }
          puVar37 = puVar38;
          if (((uVar29 == 0) &&
              ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                ((puVar34[param_2] & 0xc000) != 0xc000)) &&
               (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))))) &&
             (((psVar2[-1] & 0xc000U) != 0xc000 && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))) {
            puVar34[param_2 + -1] = uVar39;
            if (iVar36 == 0) {
              iVar27 = param_1 + 4;
            }
            else if (iVar21 + 1 < iVar36) {
              iVar27 = param_1 + -2;
            }
            else {
              iVar27 = param_1;
              if (iVar36 != iVar21 + 1) {
                iVar27 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar38;
            *puVar38 = param_4[iVar27 + iVar35];
            param_4[iVar27 + iVar35] = puVar38;
            *(short *)(puVar38 + 1) = sVar4 + -1;
            *(short *)((int)puVar38 + 6) = sVar5 + 1;
            *(short *)(puVar38 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar27;
            *(undefined2 *)((int)puVar38 + 10) = (undefined2)param_3;
            *(ushort *)(puVar38 + 3) = uVar39;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar39;
            param_1 = param_1 + 4;
            puVar17 = puVar37;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_3:
        uVar41 = local_10 & 0x10;
        puVar17 = puVar37;
        if ((uVar41 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (-iVar36 < iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)((int)puVar37 + 6) = sVar5;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)(puVar37 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (puVar37 = puVar17, iVar24 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar24 + 3);
          if (-iVar21 == iVar36 || -iVar36 < iVar21) {
            iVar35 = GVar33 - CASE_1;
          }
          else {
            iVar35 = GVar33 - CASE_3;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        puVar17 = puVar37;
        if (uVar28 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                iVar35 = GVar33 + CASE_3;
              }
              else {
                iVar35 = GVar33 + CASE_1;
              }
            }
            else if (-iVar36 < iVar21) {
              iVar35 = GVar33 - CASE_3;
            }
            else {
              iVar35 = GVar33 - CASE_1;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 3];
            param_4[iVar35 + iVar24 + 3] = puVar37;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        uVar29 = local_10 & 2;
        puVar37 = puVar17;
        if ((uVar29 == 0) && ((psVar2[param_2] == 0 || (iVar24 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < -iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[iVar35 + iVar24 + 3];
          param_4[iVar35 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)iVar35;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        puVar17 = puVar37;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[param_1 + iVar24 + 3];
            param_4[param_1 + iVar24 + 3] = puVar37;
            *(short *)(puVar37 + 1) = sVar4;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            *(short *)((int)puVar37 + 10) = (short)param_1;
            *(short *)(puVar37 + 3) = sVar8 + 3;
          }
        }
        puVar37 = puVar17;
        if ((bVar43) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[param_5 + iVar24 + 3];
          param_4[param_5 + iVar24 + 3] = puVar17;
          *(short *)(puVar17 + 1) = sVar4;
          *(short *)((int)puVar17 + 6) = sVar5;
          *(short *)(puVar17 + 2) = sVar6 + 1;
          *(short *)((int)puVar17 + 10) = (short)param_5;
          *(short *)(puVar17 + 3) = sVar8 + 3;
        }
        if ((bVar43) && (-1 < psVar2[iVar18])) {
          puVar17 = puVar37;
          if ((uVar41 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (-iVar36 < iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if (((psVar2[iVar18 + 1] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (-iVar21 == iVar36 || -iVar36 < iVar21) {
              iVar35 = param_5 + -1;
            }
            else {
              iVar35 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar28 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_5 + 3;
                }
                else {
                  iVar35 = param_5 + 1;
                }
              }
              else if (-iVar36 < iVar21) {
                iVar35 = param_5 + -3;
              }
              else {
                iVar35 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if ((uVar29 == 0) &&
             (((psVar2[iVar18 + param_2] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < -iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          puVar17 = puVar37;
          if (((uVar41 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (-iVar36 < iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5;
            *(short *)(puVar37 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
          puVar37 = puVar17;
          if (((psVar30[1] == 0) || (iVar24 + 4 < (int)psVar30[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar30[1] = sVar8 + 4;
            if (-iVar21 == iVar36 || -iVar36 < iVar21) {
              iVar35 = param_1 + -1;
            }
            else {
              iVar35 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
          puVar17 = puVar37;
          if (uVar28 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_1 + 3;
                }
                else {
                  iVar35 = param_1 + 1;
                }
              }
              else if (-iVar36 < iVar21) {
                iVar35 = param_1 + -3;
              }
              else {
                iVar35 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar35 + iVar24 + 4];
              param_4[iVar35 + iVar24 + 4] = puVar37;
              *(short *)(puVar37 + 1) = sVar4;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar35;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(short *)(puVar37 + 3) = sVar8 + 4;
            }
          }
          puVar37 = puVar17;
          if (((uVar29 == 0) && ((psVar30[param_2] == 0 || (iVar24 + 4 < (int)psVar30[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < -iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[iVar35 + iVar24 + 4];
            param_4[iVar35 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + -1;
            param_3._0_2_ = (undefined2)iVar35;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar41 = local_10 & 0x30;
        puVar17 = puVar37;
        if (uVar41 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            if (iVar21 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (1 - iVar36 < iVar21) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar21 != 1 - iVar36) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            puVar17 = (undefined4 *)*puVar37;
            *puVar37 = param_4[GVar31 + iVar24 + 4];
            param_4[GVar31 + iVar24 + 4] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + -1;
            *(short *)(puVar37 + 2) = sVar6;
            param_3._0_2_ = (undefined2)GVar31;
            *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
            *(short *)(puVar37 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        puVar37 = puVar17;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                GVar31 = GVar33 + 4;
              }
              else {
                GVar31 = GVar33;
                if (iVar36 != -1) {
                  GVar31 = GVar33 - CASE_2;
                }
              }
            }
            else {
              GVar31 = GVar33 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[GVar31 + iVar24 + 4];
            param_4[GVar31 + iVar24 + 4] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + -1;
            *(short *)(puVar17 + 2) = sVar6;
            param_3._0_2_ = (undefined2)GVar31;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(short *)(puVar17 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        puVar17 = puVar37;
        if ((((uVar29 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          param_9 = param_9 + -1;
          puVar17 = (undefined4 *)*puVar37;
          *puVar37 = param_4[GVar33 + 4 + iVar24 + 4];
          param_4[GVar33 + 4 + iVar24 + 4] = puVar37;
          *(short *)(puVar37 + 1) = sVar4 + -1;
          *(short *)((int)puVar37 + 6) = sVar5 + 1;
          *(short *)(puVar37 + 2) = sVar6;
          param_3._0_2_ = (undefined2)(GVar33 + 4);
          *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
          *(short *)(puVar37 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        puVar37 = puVar17;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar42 = -(iVar21 + 1) == iVar36;
          if (bVar42 || -iVar36 < iVar21 + 1) {
            if (!bVar42) {
              GVar33 = GVar33 + CASE_2;
            }
          }
          else {
            GVar33 = GVar33 - CASE_2;
          }
          param_9 = param_9 + -1;
          puVar37 = (undefined4 *)*puVar17;
          *puVar17 = param_4[GVar33 + iVar24 + 4];
          param_4[GVar33 + iVar24 + 4] = puVar17;
          *(short *)(puVar17 + 1) = sVar4 + 1;
          *(short *)((int)puVar17 + 6) = sVar5 + 1;
          *(short *)(puVar17 + 2) = sVar6;
          param_3._0_2_ = (undefined2)GVar33;
          *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
          *(short *)(puVar17 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar39 = (ushort)iVar35;
        if ((bVar43) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar39;
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (1 - iVar36 < iVar21) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != 1 - iVar36) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(ushort *)(puVar37 + 3) = uVar39;
            }
          }
          puVar37 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_5 + 4;
                }
                else {
                  iVar27 = param_5;
                  if (iVar36 != -1) {
                    iVar27 = param_5 + -2;
                  }
                }
              }
              else {
                iVar27 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              puVar37 = (undefined4 *)*puVar17;
              *puVar17 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(short *)(puVar17 + 2) = sVar6 + 1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
              *(ushort *)(puVar17 + 3) = uVar39;
            }
          }
          puVar17 = puVar37;
          if (((uVar29 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar39;
            puVar17 = (undefined4 *)*puVar37;
            param_9 = param_9 + -1;
            *puVar37 = param_4[param_5 + 4 + iVar35];
            param_4[param_5 + 4 + iVar35] = puVar37;
            *(short *)(puVar37 + 1) = sVar4 + -1;
            *(short *)((int)puVar37 + 6) = sVar5 + 1;
            *(short *)(puVar37 + 2) = sVar6 + 1;
            *(short *)((int)puVar37 + 10) = (short)param_5 + 4;
            *(ushort *)(puVar37 + 3) = uVar39;
          }
          puVar37 = puVar17;
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar39;
            bVar43 = -(iVar21 + 1) == iVar36;
            if (bVar43 || -iVar36 < iVar21 + 1) {
              if (!bVar43) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            puVar37 = (undefined4 *)*puVar17;
            *puVar17 = param_4[param_5 + iVar35];
            param_4[param_5 + iVar35] = puVar17;
            *(short *)(puVar17 + 1) = sVar4 + 1;
            *(short *)((int)puVar17 + 6) = sVar5 + 1;
            *(short *)(puVar17 + 2) = sVar6 + 1;
            param_3._0_2_ = (undefined2)param_5;
            *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
            *(ushort *)(puVar17 + 3) = uVar39;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          puVar17 = puVar37;
          if (uVar41 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar39;
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (1 - iVar36 < iVar21) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != 1 - iVar36) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              puVar17 = (undefined4 *)*puVar37;
              *puVar37 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar37;
              *(short *)(puVar37 + 1) = sVar4 + -1;
              *(short *)((int)puVar37 + 6) = sVar5 + -1;
              *(short *)(puVar37 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar37 + 10) = (undefined2)param_3;
              *(ushort *)(puVar37 + 3) = uVar39;
            }
          }
          puVar38 = puVar17;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar39;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_1 + 4;
                }
                else {
                  iVar27 = param_1;
                  if (iVar36 != -1) {
                    iVar27 = param_1 + -2;
                  }
                }
              }
              else {
                iVar27 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              puVar38 = (undefined4 *)*puVar17;
              *puVar17 = param_4[iVar27 + iVar35];
              param_4[iVar27 + iVar35] = puVar17;
              *(short *)(puVar17 + 1) = sVar4 + 1;
              *(short *)((int)puVar17 + 6) = sVar5 + -1;
              *(short *)(puVar17 + 2) = sVar6 + -1;
              param_3._0_2_ = (undefined2)iVar27;
              *(undefined2 *)((int)puVar17 + 10) = (undefined2)param_3;
              *(ushort *)(puVar17 + 3) = uVar39;
            }
          }
          puVar37 = puVar38;
          if ((((uVar29 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar39;
            puVar37 = (undefined4 *)*puVar38;
            param_9 = param_9 + -1;
            *puVar38 = param_4[param_1 + 4 + iVar35];
            param_4[param_1 + 4 + iVar35] = puVar38;
            *(short *)(puVar38 + 1) = sVar4 + -1;
            *(short *)((int)puVar38 + 6) = sVar5 + 1;
            *(short *)(puVar38 + 2) = sVar6 + -1;
            *(short *)((int)puVar38 + 10) = (short)param_1 + 4;
            *(ushort *)(puVar38 + 3) = uVar39;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             ((((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar34[param_2 + 1] = uVar39;
            iVar27 = iVar36;
            iVar35 = iVar21;
            goto LAB_006ce561;
          }
        }
      }
      if (0 < *psVar1) goto LAB_006ce641;
      if ((((bVar13) && (-2 < iVar36)) && ((iVar36 < 2 && ((-2 < iVar21 && (iVar21 < 2)))))) &&
         ((-2 < iVar23 && (iVar23 < 2)))) {
        bVar14 = true;
      }
    }
    local_54 = local_54 + 1;
    puVar17 = (undefined4 *)*puVar22;
  } while ((undefined4 *)*puVar22 != (undefined4 *)0x0);
  *puVar22 = puVar37;
  param_9 = param_9 + local_54;
  puVar37 = puVar11;
  if (bVar14) goto LAB_006ce641;
  goto LAB_006c9187;
LAB_006ce63a:
  local_4c = puVar17;
  local_38 = 0xfffffffe;
LAB_006ce641:
  if (sVar3 < 0) {
    *psVar1 = sVar3;
  }
  FUN_006a5e90(param_4);
  while (local_4c != (undefined4 *)0x0) {
    puVar17 = (undefined4 *)*local_4c;
    FUN_006a5e90(local_4c);
    local_4c = puVar17;
  }
  return local_38;
}

