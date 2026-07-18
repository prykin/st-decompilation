
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __thiscall
FUN_00728da0(void *this,int param_1,int param_2,short *param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  short *psVar5;
  undefined4 *puVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_EBX;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short local_b0;
  short local_ae;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_7c;
  int local_78;
  int local_6c;
  short *local_60;
  int local_54;
  int local_50;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_34;
  short *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079e2f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_78 = 0;
  local_98 = 0;
  DAT_0085710c = param_4;
  if (2 < (int)param_4) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_0072da40();
    FUN_0072da40();
    FUN_0072da40();
    local_8 = 0xffffffff;
    DAT_0085710c = 1;
    uVar2 = *(undefined4 *)param_3;
    psVar7 = (short *)&stack0xffffff48;
    if (1 < (int)param_4) {
      iVar11 = param_4 - 1;
      DAT_00857110 = psVar7;
      do {
        psVar5 = param_3 + 4;
        if ((*psVar5 != psVar7[-4]) || (param_3[5] != psVar7[-3])) {
          *(undefined4 *)psVar7 = *(undefined4 *)psVar5;
          *(undefined4 *)(DAT_00857110 + 2) = *(undefined4 *)(param_3 + 6);
          psVar7 = DAT_00857110 + 4;
          DAT_0085710c = DAT_0085710c + 1;
          DAT_00857110 = psVar7;
        }
        iVar11 = iVar11 + -1;
        param_3 = psVar5;
      } while (iVar11 != 0);
    }
    sVar14 = (short)uVar2;
    sVar15 = (short)((uint)uVar2 >> 0x10);
    if ((sVar14 == *(short *)(&stack0xffffff38 + DAT_0085710c * 8)) &&
       (sVar15 == *(short *)(&stack0xffffff3a + DAT_0085710c * 8))) {
      DAT_0085710c = DAT_0085710c - 1;
    }
    local_6c = -1;
    local_94 = 0;
LAB_00728ee6:
    while (uVar9 = DAT_0085710c, local_1c = (short *)&stack0xffffff40, DAT_00857110 = local_1c,
          3 < (int)DAT_0085710c) {
      iVar11 = (int)sVar14;
      local_a0 = (int)sVar15;
      DAT_00857114 = 0;
      DAT_00857104 = 0;
      puVar6 = (undefined4 *)&stack0xffffff40;
      for (uVar8 = DAT_0085710c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      local_40 = 0;
      local_9c = iVar11;
      local_44 = iVar11;
      do {
        iVar10 = (int)DAT_00857110[local_40 * 4];
        if (iVar10 < local_9c) {
          local_9c = iVar10;
        }
        if (iVar11 < iVar10) {
          iVar11 = iVar10;
          local_44 = iVar10;
        }
        if (DAT_00857110[local_40 * 4 + 1] != DAT_00857110[DAT_0085710c * 4 + -3])
        goto LAB_00728f70;
        local_40 = local_40 + 1;
      } while ((int)local_40 < (int)DAT_0085710c);
      local_40 = 0;
LAB_00728f70:
      local_60 = DAT_00857110 + local_40 * 4;
      local_90 = (int)local_60[1];
      uVar9 = local_40;
      iVar11 = local_90;
      do {
        uVar9 = uVar9 - 1;
        if ((int)uVar9 < 0) {
          uVar9 = DAT_0085710c - 1;
        }
      } while ((uVar9 != local_40) &&
              (iVar11 = (int)DAT_00857110[uVar9 * 4 + 1], iVar11 == local_90));
      local_54 = 0;
      local_88 = 0;
      local_48 = 0x7fffffff;
      bVar4 = false;
      uVar9 = local_40;
      iVar10 = (int)*local_60;
      iVar12 = local_90;
      local_50 = local_a0;
LAB_00728fcd:
      do {
        local_40 = local_40 + 1;
        if ((int)DAT_0085710c <= (int)local_40) {
          if (!bVar4) {
            bVar4 = true;
            local_40 = 0;
            local_60 = DAT_00857110;
            goto LAB_00729005;
          }
          break;
        }
        local_60 = local_60 + 4;
LAB_00729005:
        local_78 = (int)*local_60;
        local_98 = (int)local_60[1];
        if (local_78 < local_9c) {
          local_9c = local_78;
        }
        if (local_44 < local_78) {
          local_44 = local_78;
        }
      } while (local_98 == iVar12);
      if (((iVar11 < iVar12) && (local_98 < iVar12)) &&
         (bVar1 = (&stack0xffffff40)[uVar9], (bVar1 & 1) == 0)) {
        (&stack0xffffff40)[uVar9] = bVar1 | 1;
        iVar11 = uVar9 - 1;
        if (iVar11 < 0) {
          iVar11 = DAT_0085710c - 1;
        }
        if (((iVar12 - DAT_00857110[iVar11 * 4 + 1]) * (local_78 - DAT_00857110[iVar11 * 4]) -
             (iVar10 - DAT_00857110[iVar11 * 4]) * (local_98 - DAT_00857110[iVar11 * 4 + 1]) < 0) &&
           ((&stack0xffffff40)[uVar9] = bVar1 | 5, (int)uVar9 < (int)local_48)) {
          local_48 = uVar9;
        }
        local_54 = local_54 + 1;
        iVar11 = iVar12;
        if (local_50 < iVar12) {
          DAT_00857104 = uVar9;
          local_50 = iVar12;
        }
      }
      else {
        bVar3 = iVar12 < iVar11;
        iVar11 = iVar12;
        if (((bVar3) && (iVar12 < local_98)) &&
           (bVar1 = (&stack0xffffff40)[uVar9], (bVar1 & 2) == 0)) {
          (&stack0xffffff40)[uVar9] = bVar1 | 2;
          iVar11 = uVar9 - 1;
          if (iVar11 < 0) {
            iVar11 = DAT_0085710c - 1;
          }
          if (((local_90 - DAT_00857110[iVar11 * 4 + 1]) * (local_78 - DAT_00857110[iVar11 * 4]) -
               (iVar10 - DAT_00857110[iVar11 * 4]) * (local_98 - DAT_00857110[iVar11 * 4 + 1]) < 0)
             && ((&stack0xffffff40)[uVar9] = bVar1 | 6, (int)uVar9 < (int)local_48)) {
            local_48 = uVar9;
          }
          local_88 = local_88 + 1;
          iVar11 = local_90;
          if (local_90 < local_a0) {
            local_a0 = local_90;
            DAT_00857114 = uVar9;
          }
        }
      }
      if (!bVar4) {
        local_90 = local_98;
        uVar9 = local_40;
        iVar10 = local_78;
        iVar12 = local_98;
        goto LAB_00728fcd;
      }
      local_34 = DAT_0085710c;
      if (((1 < local_54) || (1 < local_88)) && ((int)local_48 < (int)DAT_0085710c)) {
        local_34 = local_48;
      }
      if ((int)DAT_0085710c <= (int)local_34) goto LAB_007294f8;
      sVar16 = DAT_00857110[local_34 * 4 + 1];
      if (((&stack0xffffff40)[local_34] & 1) == 0) {
        bVar4 = false;
        uVar9 = local_34;
        do {
          while( true ) {
            uVar9 = uVar9 + 1;
            if ((int)DAT_0085710c <= (int)uVar9) {
              uVar9 = 0;
            }
            uVar8 = DAT_0085710c;
            if (uVar9 == local_34) goto LAB_0072926d;
            uVar8 = uVar9;
            if (sVar16 != DAT_00857110[uVar9 * 4 + 1]) break;
            if (bVar4) goto LAB_0072926d;
            bVar4 = false;
          }
          bVar4 = true;
        } while (sVar16 < DAT_00857110[uVar9 * 4 + 1]);
LAB_0072926d:
        if ((int)DAT_0085710c <= (int)uVar8) goto LAB_007294f8;
        bVar4 = false;
        uVar9 = local_34;
        do {
          while( true ) {
            uVar9 = uVar9 - 1;
            if ((int)uVar9 < 0) {
              uVar9 = DAT_0085710c - 1;
            }
            if (uVar9 == local_34) goto LAB_007292a6;
            if (sVar16 == DAT_00857110[uVar8 * 4 + 1]) break;
            bVar4 = true;
            if (DAT_00857110[uVar8 * 4 + 1] <= sVar16) goto LAB_007292a6;
          }
        } while (!bVar4);
      }
      else {
        bVar4 = false;
        local_7c = 0;
        uVar9 = local_34;
        do {
          while( true ) {
            uVar9 = uVar9 + 1;
            if ((int)DAT_0085710c <= (int)uVar9) {
              uVar9 = 0;
            }
            uVar8 = DAT_0085710c;
            if (uVar9 == local_34) goto LAB_007291f7;
            local_7c = local_7c + 1;
            uVar8 = uVar9;
            if (sVar16 != DAT_00857110[uVar9 * 4 + 1]) break;
            if (bVar4) goto LAB_007291f7;
            bVar4 = false;
          }
          bVar4 = true;
        } while (DAT_00857110[uVar9 * 4 + 1] <= sVar16);
LAB_007291f7:
        if ((int)uVar8 < (int)DAT_0085710c) {
          iVar11 = 0;
          bVar4 = false;
          uVar9 = local_34;
          do {
            while( true ) {
              uVar9 = uVar9 - 1;
              if ((int)uVar9 < 0) {
                uVar9 = DAT_0085710c - 1;
              }
              if (uVar9 == local_34) goto LAB_00729231;
              iVar11 = iVar11 + 1;
              if (sVar16 == DAT_00857110[uVar9 * 4 + 1]) break;
              bVar4 = true;
              if (sVar16 < DAT_00857110[uVar9 * 4 + 1]) goto LAB_00729231;
            }
          } while (!bVar4);
LAB_00729231:
          if (iVar11 < local_7c) {
            uVar8 = uVar9;
          }
        }
      }
LAB_007292a6:
      if ((int)DAT_0085710c <= (int)uVar8) goto LAB_007294f8;
      if (local_94 < local_6c) {
        puVar6 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8);
      }
      else {
        local_8 = 1;
        FUN_0072da40();
        local_8 = 0xffffffff;
        *(undefined1 **)(&stack0xffffff44 + local_94 * 8) = &stack0xffffff40;
        local_6c = local_94;
        puVar6 = (undefined4 *)&stack0xffffff40;
      }
      iVar11 = 0;
      uVar9 = local_34;
      while( true ) {
        *puVar6 = *(undefined4 *)(DAT_00857110 + uVar9 * 4);
        puVar6[1] = *(undefined4 *)(DAT_00857110 + uVar9 * 4 + 2);
        puVar6 = puVar6 + 2;
        iVar11 = iVar11 + 1;
        if (uVar9 == uVar8) break;
        uVar9 = uVar9 + 1;
        if ((int)DAT_0085710c <= (int)uVar9) {
          uVar9 = 0;
        }
      }
      *(int *)(&stack0xffffff40 + local_94 * 8) = iVar11;
      local_94 = local_94 + 1;
      if (local_94 < local_6c) {
        puVar6 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8);
      }
      else {
        local_8 = 2;
        FUN_0072da40();
        local_8 = 0xffffffff;
        *(undefined1 **)(&stack0xffffff44 + local_94 * 8) = &stack0xffffff40;
        puVar6 = (undefined4 *)&stack0xffffff40;
        local_6c = local_94;
      }
      *puVar6 = *(undefined4 *)(DAT_00857110 + uVar8 * 4);
      puVar6[1] = *(undefined4 *)(DAT_00857110 + uVar8 * 4 + 2);
      uVar9 = 1;
      while (uVar8 != local_34) {
        uVar8 = uVar8 + 1;
        if ((int)DAT_0085710c <= (int)uVar8) {
          uVar8 = 0;
        }
        puVar6[2] = *(undefined4 *)(DAT_00857110 + uVar8 * 4);
        puVar6[3] = *(undefined4 *)(DAT_00857110 + uVar8 * 4 + 2);
        uVar9 = uVar9 + 1;
        puVar6 = puVar6 + 2;
      }
      puVar6 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8);
      puVar13 = (undefined4 *)&stack0xffffff40;
      DAT_0085710c = uVar9;
      for (iVar11 = (uVar9 & 0x1fffffff) << 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
    }
    local_44 = (int)sVar14;
    iVar10 = (int)sVar15;
    iVar11 = (int)(short)unaff_EBX;
    local_9c = local_44;
    if (iVar11 < local_44) {
      local_9c = iVar11;
    }
    if (local_44 < iVar11) {
      local_44 = iVar11;
    }
    sVar16 = (short)((uint)unaff_EBX >> 0x10);
    iVar11 = (int)sVar16;
    local_a0 = iVar10;
    if (iVar11 < iVar10) {
      local_a0 = iVar11;
    }
    DAT_00857114 = (uint)(iVar11 < iVar10);
    iVar11 = (int)sVar16;
    local_50 = iVar10;
    if (iVar10 < iVar11) {
      local_50 = iVar11;
    }
    DAT_00857104 = (uint)(iVar10 < iVar11);
    iVar11 = (int)local_b0;
    if (iVar11 < local_9c) {
      local_9c = iVar11;
    }
    if (local_44 < iVar11) {
      local_44 = iVar11;
    }
    if (local_ae < local_a0) {
      DAT_00857114 = 2;
      local_a0 = (int)local_ae;
    }
    if (local_50 < local_ae) {
      DAT_00857104 = 2;
      local_50 = (int)local_ae;
    }
LAB_007294f8:
    if (2 < (int)DAT_0085710c) {
      if (param_5 == 0) {
        FUN_00728a80(this,param_1,param_2,param_6);
      }
      else if (((local_9c < *(int *)((int)this + 0x30)) || (*(int *)((int)this + 0x38) <= local_44))
              || ((local_a0 < *(int *)((int)this + 0x34) || (*(int *)((int)this + 0x3c) <= local_50)
                  ))) {
        FUN_007288a0(this,param_1,param_2,param_6);
      }
      else {
        FUN_00728640(this,param_1,param_2,param_6);
      }
    }
    local_94 = local_94 + -1;
    if (-1 < local_94) {
      DAT_0085710c = *(uint *)(&stack0xffffff40 + local_94 * 8);
      puVar6 = *(undefined4 **)(&stack0xffffff44 + local_94 * 8);
      puVar13 = (undefined4 *)&stack0xffffff40;
      for (iVar11 = (DAT_0085710c & 0x1fffffff) << 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      goto LAB_00728ee6;
    }
  }
  ExceptionList = local_14;
  return 0;
}

