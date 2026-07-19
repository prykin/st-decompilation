
int * __cdecl
FUN_006a41e0(undefined4 *param_1,uint param_2,uint param_3,char *param_4,int param_5,int param_6)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  undefined *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  
  bVar3 = false;
  if (param_1 == (undefined4 *)0x0) {
    piVar5 = (int *)thunk_FUN_006a3c10(param_2,param_3,param_4,param_5);
    return piVar5;
  }
  if ((param_6 != 0) && (param_2 == 0)) {
    thunk_FUN_006a49c0(param_1,param_3);
    return (int *)0x0;
  }
  if ((((DAT_007ec178 & 4) != 0) && (iVar6 = thunk_FUN_006a5210(), iVar6 == 0)) &&
     (iVar6 = FUN_00730fa0(2,0x7ec1d0,0x27a,0,(byte *)s__CrtCheckMemory___007ec2bc), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    piVar5 = (int *)(*pcVar2)();
    return piVar5;
  }
  iVar6 = DAT_007ec17c;
  if (DAT_007ec17c == DAT_007ec180) {
    pcVar2 = (code *)swi(3);
    piVar5 = (int *)(*pcVar2)();
    return piVar5;
  }
  iVar7 = (*(code *)PTR_FUN_007f1498)(2,param_1,param_2,param_3,DAT_007ec17c,param_4,param_5);
  if (iVar7 != 0) {
    if (0xffffffdb < param_2) {
      if (param_4 == (char *)0x0) {
        iVar6 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x294,0,0,
                                   s_Invalid_allocation_size___u_byte_007ec3f4,param_2);
        if (iVar6 != 0) {
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
      }
      else {
        iVar6 = ReportDebugMessage(param_4,param_5,0,0,s_Invalid_allocation_size___u_byte_007ec3f4,
                                   param_2);
        if (iVar6 != 0) {
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
      }
      return (int *)0x0;
    }
    if (((param_3 != 1) && ((param_3 & 0xffff) != 4)) &&
       (((param_3 & 0xffff) != 2 && (iVar7 = FUN_00730fa0(1,0,0,0,&DAT_007a4ccc), iVar7 == 1)))) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
    BVar8 = thunk_FUN_006a5620((int)param_1);
    if (BVar8 == 0) {
      if (param_4 == (char *)0x0) {
        iVar7 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x2a9,0,0,
                                   s_Realloc__pointer_invalid_0x_08X_007ec3cc,param_1);
        if (iVar7 != 0) {
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
      }
      else {
        iVar7 = ReportDebugMessage(param_4,param_5,0,0,s_Realloc__pointer_invalid_0x_08X_007ec3cc,
                                   param_1);
        if (iVar7 != 0) {
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
      }
      DAT_00854a4c = 1;
    }
    uVar12 = param_1[-3];
    piVar5 = param_1 + -8;
    if (uVar12 == 3) {
      bVar3 = true;
      if (((param_1[-5] != -0x1234544) || (param_1[-2] != 0)) &&
         (iVar7 = FUN_00730fa0(2,0x7ec1d0,0x2b5,0,
                               (byte *)s_pOldBlock_>nLine____IGNORE_LINE___007ec378), iVar7 == 1)) {
        pcVar2 = (code *)swi(3);
        piVar5 = (int *)(*pcVar2)();
        return piVar5;
      }
    }
    else {
      if (((uVar12 & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
        param_3 = 2;
      }
      if (((uVar12 ^ param_3) & 0xffff) != 0) {
        if (param_4 == (char *)0x0) {
          uVar15 = param_1[-5];
          puVar9 = FUN_006a47f0((int)piVar5);
          iVar7 = ReportDebugMessage(s_E____titans_Crt__Dbgheap_c_007ec1d0,0x2c0,0,0,
                                     s_incorrect_old_block_type__s___d__007ec350,puVar9,uVar15);
          if (iVar7 != 0) {
            pcVar2 = (code *)swi(3);
            piVar5 = (int *)(*pcVar2)();
            return piVar5;
          }
        }
        else {
          uVar15 = param_1[-5];
          puVar9 = FUN_006a47f0((int)piVar5);
          iVar7 = ReportDebugMessage(param_4,param_5,0,0,s_incorrect_old_block_type__s___d__007ec350
                                     ,puVar9,uVar15);
          if (iVar7 != 0) {
            pcVar2 = (code *)swi(3);
            piVar5 = (int *)(*pcVar2)();
            return piVar5;
          }
        }
        DAT_00854a4c = 1;
      }
    }
    if (param_6 == 0) {
      piVar10 = FUN_00731640(piVar5,param_2 + 0x24);
      if (piVar10 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    else {
      piVar10 = FUN_007316d0(piVar5,param_2 + 0x24);
      if (piVar10 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    DAT_007ec17c = DAT_007ec17c + 1;
    if (!bVar3) {
      DAT_00854968 = DAT_00854968 + (param_2 - piVar10[4]);
      DAT_00854a44 = DAT_00854a44 + (param_2 - piVar10[4]);
      if (DAT_00854a48 < DAT_00854a44) {
        DAT_00854a48 = DAT_00854a44;
      }
    }
    uVar12 = piVar10[4];
    if (uVar12 < param_2) {
      uVar4 = DAT_007ec184._2_1_;
      uVar13 = CONCAT11(DAT_007ec184._2_1_,DAT_007ec184._2_1_);
      puVar14 = (undefined4 *)(uVar12 + 0x20 + (int)piVar10);
      for (uVar11 = param_2 - uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar14 = CONCAT22(uVar13,uVar13);
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = param_2 - uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = uVar4;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
    }
    piVar1 = piVar10 + 8;
    uVar13 = CONCAT11((char)DAT_007ec184,(char)DAT_007ec184);
    *(uint *)((int)piVar1 + param_2) = CONCAT22(uVar13,uVar13);
    if (!bVar3) {
      piVar10[2] = (int)param_4;
      piVar10[3] = param_5;
      piVar10[6] = iVar6;
    }
    piVar10[4] = param_2;
    if (param_6 == 0) {
      if (piVar10 == piVar5) {
        return piVar1;
      }
      iVar6 = FUN_00730fa0(2,0x7ec1d0,0x2f8,0,(byte *)s_fRealloc______fRealloc____pNewBl_007ec314);
      if (iVar6 == 1) {
        pcVar2 = (code *)swi(3);
        piVar5 = (int *)(*pcVar2)();
        return piVar5;
      }
    }
    if ((piVar10 != piVar5) && (!bVar3)) {
      if (*piVar10 == 0) {
        if ((DAT_00854964 != piVar5) &&
           (iVar6 = FUN_00730fa0(2,0x7ec1d0,0x307,0,(byte *)s__pLastBlock____pOldBlock_007ec2f4),
           iVar6 == 1)) {
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
        DAT_00854964 = (int *)piVar10[1];
      }
      else {
        *(int *)(*piVar10 + 4) = piVar10[1];
      }
      if ((int *)piVar10[1] == (int *)0x0) {
        if ((DAT_0085496c != piVar5) &&
           (iVar6 = FUN_00730fa0(2,0x7ec1d0,0x312,0,(byte *)s__pFirstBlock____pOldBlock_007ec2d4),
           iVar6 == 1)) {
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
        DAT_0085496c = (int *)*piVar10;
      }
      else {
        *(int *)piVar10[1] = *piVar10;
      }
      piVar5 = piVar10;
      if (DAT_0085496c != (int *)0x0) {
        DAT_0085496c[1] = (int)piVar10;
        piVar5 = DAT_00854964;
      }
      DAT_00854964 = piVar5;
      *piVar10 = (int)DAT_0085496c;
      piVar10[1] = 0;
      DAT_0085496c = piVar10;
    }
    return piVar1;
  }
  if (param_4 == (char *)0x0) {
    iVar6 = FUN_00730fa0(0,0,0,0,&DAT_007a4ccc);
    if (iVar6 == 1) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  else {
    iVar6 = FUN_00730fa0(0,0,0,0,(byte *)s_Client_hook_re_allocation_failur_007ec44c);
    if (iVar6 == 1) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  return (int *)0x0;
}

