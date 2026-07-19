
int __fastcall FUN_0047df00(int *param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var_02;
  short sVar16;
  undefined2 extraout_var_03;
  int *piVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if ((param_3 == (int *)0x0) || (param_3 == (int *)0x1)) {
    piVar17 = param_1 + 0xb3;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar17 = 0;
      piVar17 = piVar17 + 1;
    }
    param_1[0xb1] = 0;
    iVar5 = *(int *)((int)param_1 + 0x6f7);
    if (((iVar5 != 0xc) && (iVar5 != 0x18)) && (iVar5 != 0x1d)) {
      return 0;
    }
    sVar13 = *(short *)((int)param_1 + 0x42d);
    sVar16 = *(short *)((int)param_1 + 0x42f);
    sVar12 = *(short *)((int)param_1 + 0x431);
    local_1c = *(int *)((int)param_1 + 0x433);
    *(short *)((int)param_1 + 0x6a9) = sVar13;
    *(short *)((int)param_1 + 0x6ab) = sVar16;
    *(short *)((int)param_1 + 0x6ad) = sVar12;
    *(uint *)((int)param_1 + 0x6af) = local_1c;
    if (DAT_007fb244 + -2 < (int)sVar12) {
      return 0;
    }
    if ((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
        ((sVar16 < 0 || ((DAT_007fb242 <= sVar16 || (sVar12 < 0)))))) || (DAT_007fb244 <= sVar12)) {
      param_3 = (int *)0x0;
    }
    else {
      param_3 = *(int **)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar12 + (int)DAT_007fb240 * (int)sVar16 +
                         (int)sVar13) * 8);
    }
    if (param_3 == (int *)0x0) {
      return 0;
    }
    if (param_3[6] != local_1c) {
      return 0;
    }
    if (param_3[8] != 1000) {
      return 0;
    }
    if (param_3[9] != param_1[9]) {
      return 0;
    }
    iVar5 = thunk_FUN_004b9d90((int)param_3);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = (**(code **)(*param_3 + 0x2c))();
    iVar5 = *(int *)(&DAT_00791d68 + iVar5 * 4);
    *(int *)((int)param_1 + 0x6b9) = iVar5;
    if (iVar5 == 1) {
      sVar13 = *(short *)((int)param_1 + 0x6ab);
      local_c = (undefined4 *)CONCAT22(extraout_var_03,*(short *)((int)param_1 + 0x6ad));
      local_10 = CONCAT22(local_10._2_2_,sVar13);
      local_8 = 0;
      sVar16 = *(short *)((int)param_1 + 0x6ad) + 1;
      local_14 = CONCAT22(local_14._2_2_,*(short *)((int)param_1 + 0x6a9));
      do {
        local_18 = 0;
        sVar12 = (short)local_8 + *(short *)((int)param_1 + 0x6a9);
        do {
          sVar4 = sVar13 + (short)local_18;
          if (((((-1 < sVar12) && (sVar12 < DAT_007fb240)) && (-1 < sVar4)) &&
              ((sVar4 < DAT_007fb242 && (-1 < sVar16)))) &&
             ((sVar16 < DAT_007fb244 &&
              (uVar11 = local_14,
              *(short *)(DAT_007fb280 +
                        ((int)DAT_007fb278 * (int)sVar4 + (int)DAT_007fb27e * (int)sVar16 +
                        (int)sVar12) * 2) == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar3 = (undefined2)((uint)iVar5 >> 0x10);
    local_c = (undefined4 *)CONCAT22(uVar3,*(short *)((int)param_1 + 0x6ad));
    sVar13 = *(short *)((int)param_1 + 0x6ab);
    sVar12 = *(short *)((int)param_1 + 0x6ad) + 1;
    sVar16 = *(short *)((int)param_1 + 0x6a9);
    if (sVar16 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar16) {
      return 0;
    }
    if (sVar13 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar13) {
      return 0;
    }
    if (sVar12 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar12) {
      return 0;
    }
    uVar11 = CONCAT22(uVar3,sVar16);
    if (*(short *)(DAT_007fb280 +
                  ((int)sVar12 * (int)DAT_007fb27e + (int)sVar13 * (int)DAT_007fb278 + (int)sVar16)
                  * 2) != 0) {
      return 0;
    }
LAB_0047f4cd:
    *(undefined4 *)((int)param_1 + 0x6c3) = 0;
    *(undefined4 *)((int)param_1 + 0xb7) = 3;
    thunk_FUN_00481520(param_1,(int)(short)uVar11,(int)sVar13,(short)local_c + 1);
    thunk_FUN_00460260(param_1,0);
    return 2;
  }
  iVar5 = *(int *)((int)param_1 + 0x6c3);
  if (iVar5 == 0) {
    iVar5 = thunk_FUN_00460260(param_1,2);
    switch(iVar5) {
    case 0:
      sVar13 = *(short *)((int)param_1 + 0x6a9);
      sVar16 = *(short *)((int)param_1 + 0x6ad);
      sVar12 = *(short *)((int)param_1 + 0x6ab);
      *(undefined4 *)((int)param_1 + 0xb7) = 0;
      if (((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
         ((sVar12 < 0 || (((DAT_007fb242 <= sVar12 || (sVar16 < 0)) || (DAT_007fb244 <= sVar16))))))
      {
        param_3 = (int *)0x0;
      }
      else {
        param_3 = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                           (int)sVar13) * 8);
      }
      if (((param_3 == (int *)0x0) || (param_3[6] != *(int *)((int)param_1 + 0x6af))) ||
         ((param_3[9] != param_1[9] || (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
        return 0;
      }
      bVar2 = thunk_FUN_00495420(param_1,(short *)((int)param_1 + 0x6b3),
                                 (short *)((int)param_1 + 0x6b5),(short *)((int)param_1 + 0x6b7));
      if ((CONCAT31(extraout_var,bVar2) == 1) &&
         ((param_3[300] == 0 || (param_3[300] == param_1[6])))) {
        param_3[300] = param_1[6];
        *(undefined4 *)((int)param_1 + 0x6c3) = 2;
LAB_0047e4df:
        iVar5 = (int)*(short *)((int)param_1 + 0x6b7);
        sVar13 = *(short *)((int)param_1 + 0x6b5);
        sVar16 = *(short *)((int)param_1 + 0x6b3);
LAB_0047e4ee:
        thunk_FUN_00481520(param_1,(int)sVar16,(int)sVar13,iVar5);
        thunk_FUN_00460260(param_1,0);
        return 2;
      }
      *(undefined4 *)((int)param_1 + 0x6c3) = 1;
      *(undefined4 *)((int)param_1 + 0x6bf) = 0;
LAB_0047e0a4:
      iVar5 = thunk_FUN_004608b0(param_1,0);
      if (iVar5 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar13 = *(short *)((int)param_1 + 0x6a9);
      sVar16 = *(short *)((int)param_1 + 0x6ad);
      sVar12 = *(short *)((int)param_1 + 0x6ab);
      if (((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
         ((sVar12 < 0 || (((DAT_007fb242 <= sVar12 || (sVar16 < 0)) || (DAT_007fb244 <= sVar16))))))
      {
        param_3 = (int *)0x0;
      }
      else {
        param_3 = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                           (int)sVar13) * 8);
      }
      if (((param_3 == (int *)0x0) || (param_3[6] != *(int *)((int)param_1 + 0x6af))) ||
         ((param_3[9] != param_1[9] || (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
        thunk_FUN_004602b0(param_1);
        *(undefined4 *)((int)param_1 + 0xb7) = 0;
        return 0;
      }
      break;
    case 3:
      sVar13 = *(short *)((int)param_1 + 0x6ab);
      sVar16 = *(short *)((int)param_1 + 0x6a9);
      iVar5 = *(short *)((int)param_1 + 0x6ad) + 1;
      goto LAB_0047e4ee;
    case -1:
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant__DISMANT_MOVE_e_007ab804);
      if (iVar5 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987);
        return 0xffff;
      }
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
  }
  else {
    if (iVar5 == 1) {
      iVar5 = thunk_FUN_004608b0(param_1,2);
      if (iVar5 == -1) {
        return -1;
      }
      if (((*(int *)((int)param_1 + 0x82e) == 0) && (*(int *)((int)param_1 + 0x48b) == 0xffff)) &&
         (*(int *)((int)param_1 + 0x6bf) % 10 == 0)) {
        sVar13 = *(short *)((int)param_1 + 0x6a9);
        sVar16 = *(short *)((int)param_1 + 0x6ad);
        sVar12 = *(short *)((int)param_1 + 0x6ab);
        if ((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) ||
            ((sVar12 < 0 || ((DAT_007fb242 <= sVar12 || (sVar16 < 0)))))) ||
           (DAT_007fb244 <= sVar16)) {
          param_3 = (int *)0x0;
        }
        else {
          param_3 = *(int **)(DAT_007fb248 +
                             ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                             (int)sVar13) * 8);
        }
        if (param_3 == (int *)0x0) {
          return 0;
        }
        if (param_3[6] != *(int *)((int)param_1 + 0x6af)) {
          return 0;
        }
        if (param_3[9] != param_1[9]) {
          return 0;
        }
        iVar5 = thunk_FUN_004b9d90((int)param_3);
        if (iVar5 == 0) {
          return 0;
        }
        bVar2 = thunk_FUN_00495420(param_1,(short *)((int)param_1 + 0x6b3),
                                   (short *)((int)param_1 + 0x6b5),(short *)((int)param_1 + 0x6b7));
        if ((CONCAT31(extraout_var_00,bVar2) == 1) &&
           ((param_3[300] == 0 || (param_3[300] == param_1[6])))) {
          param_3[300] = param_1[6];
          *(undefined4 *)((int)param_1 + 0x6c3) = 2;
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x6b3),
                             (int)*(short *)((int)param_1 + 0x6b5),
                             (int)*(short *)((int)param_1 + 0x6b7));
          thunk_FUN_00460260(param_1,0);
        }
      }
      *(int *)((int)param_1 + 0x6bf) = *(int *)((int)param_1 + 0x6bf) + 1;
      return 2;
    }
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        if (*(int *)((int)param_1 + 0x6c7) == 0) {
          iVar6 = (ushort)(*(short *)((int)param_1 + 0x6b7) * 200) + 100;
          iVar15 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)param_1 + 0x6ab) + 1) *
                   0xc9;
          iVar7 = CONCAT22((short)((uint)iVar15 >> 0x10),*(short *)((int)param_1 + 0x6a9) + 1);
          iVar5 = iVar7 * 0xc9;
          uVar3 = (undefined2)((uint)(iVar7 * 0x19) >> 0x10);
          uVar3 = (**(code **)(*param_1 + 0x10))
                            (CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x41)),
                             CONCAT22((short)((uint)iVar5 >> 0x10),
                                      *(undefined2 *)((int)param_1 + 0x43)),
                             CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x45)),iVar5,iVar15,iVar6
                            );
          *(undefined2 *)((int)param_1 + 0x6bd) = uVar3;
          *(undefined4 *)((int)param_1 + 0x6c7) = 1;
        }
        if (*(int *)((int)param_1 + 0x6c7) == 1) {
          uVar8 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x6bd));
          uVar8 = thunk_FUN_00417910(param_1,(short)uVar8);
          if (uVar8 == 0xffffffff) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a2d,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_007ab7ac);
            if (iVar5 != 0) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
            iVar5 = 0x3a2e;
LAB_0047f1f7:
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar5);
            return 0xffff;
          }
          if (uVar8 == 0) {
            *(undefined4 *)((int)param_1 + 0x6c7) = 2;
            iVar5 = (**(code **)(*param_1 + 0xd8))();
            return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)((int)param_1 + 0x6c7) == 2) {
          thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43)
                             ,*(short *)((int)param_1 + 0x45),
                             (*(short *)((int)param_1 + 0x6a9) + 1) * 0xc9,
                             (*(short *)((int)param_1 + 0x6ab) + 1) * 0xc9,
                             *(short *)((int)param_1 + 0x6b7) * 200 + 100,
                             *(byte *)((int)param_1 + 0x61));
          *(undefined4 *)((int)param_1 + 0x6c7) = 3;
        }
        if (*(int *)((int)param_1 + 0x6c7) != 3) goto LAB_0047f19a;
        local_10 = thunk_FUN_00415ed0(param_1,&local_18,&local_14);
        local_8 = 0;
        if (*(char *)((int)param_1 + 0x2bf) != '\0') {
          local_c = (undefined4 *)((int)param_1 + 0x2b3);
          do {
            puVar9 = (undefined4 *)
                     thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                        (short)param_1[0x1b]);
            uVar11 = *puVar9;
            local_20 = *(short *)(puVar9 + 1);
            local_24 = uVar11;
            if (DAT_0080732c == 1) {
              bVar22 = 0;
              sVar21 = 0;
              uVar8 = param_1[7] * 0x41c64e6d + 0x3039;
              iVar5 = -1;
              param_1[7] = uVar8;
              sVar20 = 0;
              sVar19 = 0;
              uVar10 = uVar8 * 0x41c64e6d + 0x3039;
              sVar4 = 0;
              param_1[7] = uVar10;
              sVar12 = 0;
              sVar16 = 0;
              local_1c = uVar10 * 0x41c64e6d + 0x3039;
              sVar13 = 0;
              param_1[7] = local_1c;
              lVar18 = __ftol();
              thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                                 (local_1c >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x41) + -3
                                 + (int)(short)local_24,
                                 (((uVar10 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                                 (int)local_24._2_2_) + -3,
                                 (int)(short)lVar18 + (uVar8 >> 0x10) % 7 +
                                 (int)*(short *)((int)param_1 + 0x45) + -3 + (int)local_20,sVar13,
                                 sVar16,sVar12,sVar4,sVar19,sVar20,iVar5,sVar21,bVar22);
            }
            else {
              uVar10 = param_1[7] * 0x41c64e6d + 0x3039;
              param_1[7] = uVar10;
              uVar14 = uVar10 * 0x41c64e6d + 0x3039;
              param_1[7] = uVar14;
              uVar8 = uVar14 * 0x41c64e6d + 0x3039;
              param_1[7] = uVar8;
              local_24._2_2_ = (short)((uint)uVar11 >> 0x10);
              iVar5 = (int)local_24._2_2_;
              local_24._0_2_ = (short)uVar11;
              iVar15 = (int)(short)local_24;
              thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                                 (uVar8 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x41) + -3 +
                                 iVar15,(((uVar14 >> 0x10) % 7 +
                                         (int)*(short *)((int)param_1 + 0x43)) - iVar5) + -3,
                                 (uVar10 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x45) + -3 +
                                 (int)local_20,0,0,0,0,0,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)*(byte *)((int)param_1 + 0x2bf));
        }
        if (local_10 == -1) {
          iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a53,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_2_007ab784);
          if (iVar5 != 0) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
          iVar5 = 0x3a54;
LAB_0047edd5:
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar5);
          return 0xffff;
        }
        if (local_10 != 0) goto LAB_0047f19a;
        sVar13 = *(short *)((int)param_1 + 0x6a9);
        sVar16 = *(short *)((int)param_1 + 0x6ad);
        sVar12 = *(short *)((int)param_1 + 0x6ab);
        if ((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar12 < 0)) ||
           (((DAT_007fb242 <= sVar12 || (sVar16 < 0)) || (DAT_007fb244 <= sVar16)))) {
          param_3 = (int *)0x0;
        }
        else {
          param_3 = *(int **)(DAT_007fb248 +
                             ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                             (int)sVar13) * 8);
        }
        if (((param_3 != (int *)0x0) && (param_3[6] == *(int *)((int)param_1 + 0x6af))) &&
           ((param_3[9] == param_1[9] && (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 != 0)))) {
          thunk_FUN_004b9cf0(param_3);
          *(undefined4 *)((int)param_1 + 0x6c3) = 4;
          goto LAB_0047f19a;
        }
        FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
        if ((param_3 != (int *)0x0) && (param_3[300] == param_1[6])) {
          param_3[300] = 0;
        }
      }
      else {
        if (iVar5 != 4) {
          if (iVar5 == 5) {
            if (*(int *)((int)param_1 + 0x6c7) == 0) {
              iVar5 = CONCAT22((short)((uint)param_1 >> 0x10),*(short *)((int)param_1 + 0x6b7) * 200
                              ) + 100;
              iVar6 = CONCAT22((short)((uint)param_2 >> 0x10),
                               *(short *)((int)param_1 + 0x6b5) * 0xc9) + 100;
              iVar15 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)((int)param_1 + 0x6b3) * 0xc9
                               ) + 100;
              uVar3 = (undefined2)((uint)iVar6 >> 0x10);
              uVar3 = (**(code **)(*param_1 + 0x10))
                                (CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x41)),
                                 CONCAT22((short)((uint)iVar15 >> 0x10),
                                          *(undefined2 *)((int)param_1 + 0x43)),
                                 CONCAT22(uVar3,*(undefined2 *)((int)param_1 + 0x45)),iVar15,iVar6,
                                 iVar5);
              *(undefined2 *)((int)param_1 + 0x6bd) = uVar3;
              *(undefined4 *)((int)param_1 + 0x6c7) = 1;
            }
            if (*(int *)((int)param_1 + 0x6c7) == 1) {
              uVar8 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x6bd));
              uVar8 = thunk_FUN_00417910(param_1,(short)uVar8);
              if (uVar8 == 0xffffffff) {
                iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3aa0,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_OMOVE_007ab75c)
                ;
                if (iVar5 != 0) {
                  pcVar1 = (code *)swi(3);
                  iVar5 = (*pcVar1)();
                  return iVar5;
                }
                iVar5 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar8 == 0) {
                *(undefined4 *)((int)param_1 + 0x6c7) = 2;
                goto LAB_0047f19a;
              }
            }
            if (*(int *)((int)param_1 + 0x6c7) == 2) {
              thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),
                                 *(short *)((int)param_1 + 0x43),*(short *)((int)param_1 + 0x45),
                                 *(short *)((int)param_1 + 0x6b3) * 0xc9 + 100,
                                 *(short *)((int)param_1 + 0x6b5) * 0xc9 + 100,
                                 *(short *)((int)param_1 + 0x6b7) * 200 + 100,
                                 *(byte *)((int)param_1 + 0x61));
              *(undefined4 *)((int)param_1 + 0x6c7) = 3;
            }
            if (*(int *)((int)param_1 + 0x6c7) == 3) {
              local_10 = thunk_FUN_00415ed0(param_1,&local_14,&local_18);
              uVar8 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(char *)((int)param_1 + 0x2bf));
              local_8 = 0;
              if (*(char *)((int)param_1 + 0x2bf) != '\0') {
                local_c = (undefined4 *)((int)param_1 + 0x2b3);
                do {
                  puVar9 = (undefined4 *)
                           thunk_FUN_0041dc40(local_2c,*local_c,*(undefined2 *)(local_c + 1),
                                              (short)param_1[0x1b]);
                  local_24 = *puVar9;
                  local_20 = *(short *)(puVar9 + 1);
                  if (DAT_0080732c == 1) {
                    bVar22 = 0;
                    sVar21 = 0;
                    iVar6 = -1;
                    uVar8 = param_1[7] * 0x41c64e6d + 0x3039;
                    sVar20 = 0;
                    param_1[7] = uVar8;
                    sVar19 = 0;
                    sVar4 = 0;
                    uVar10 = uVar8 * 0x41c64e6d + 0x3039;
                    sVar12 = 0;
                    param_1[7] = uVar10;
                    local_1c = uVar10 * 0x41c64e6d + 0x3039;
                    sVar16 = 0;
                    param_1[7] = local_1c;
                    sVar13 = 0;
                    lVar18 = __ftol();
                    iVar5 = (int)(short)lVar18 + (uVar8 >> 0x10) % 7 +
                            (int)*(short *)((int)param_1 + 0x45) + -3 + (int)local_20;
                    iVar15 = ((uVar10 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                             (int)local_24._2_2_;
                    uVar8 = local_1c;
                  }
                  else {
                    uVar10 = param_1[7] * 0x41c64e6d + 0x3039;
                    bVar22 = 0;
                    param_1[7] = uVar10;
                    uVar14 = uVar10 * 0x41c64e6d + 0x3039;
                    sVar21 = 0;
                    param_1[7] = uVar14;
                    uVar8 = uVar14 * 0x41c64e6d + 0x3039;
                    param_1[7] = uVar8;
                    iVar6 = -1;
                    sVar20 = 0;
                    sVar19 = 0;
                    sVar4 = 0;
                    sVar12 = 0;
                    sVar16 = 0;
                    sVar13 = 0;
                    iVar5 = (uVar10 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x45) + -3 +
                            (int)local_20;
                    local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                    iVar15 = ((uVar14 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x43)) -
                             (int)local_24._2_2_;
                  }
                  thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                                     (uVar8 >> 0x10) % 7 + (int)*(short *)((int)param_1 + 0x41) + -3
                                     + (int)(short)local_24,iVar15 + -3,iVar5,sVar13,sVar16,sVar12,
                                     sVar4,sVar19,sVar20,iVar6,sVar21,bVar22);
                  local_8 = local_8 + 1;
                  uVar8 = (uint)*(byte *)((int)param_1 + 0x2bf);
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)uVar8);
              }
              if (local_10 == -1) {
                iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac6,0,0,
                                           &DAT_007a4ccc,
                                           s_STBoatC__Dismant__DISMANT_OMOVE_2_007ab734);
                if (iVar5 == 0) {
                  RaiseInternalException
                            (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac7);
                  return 0xffff;
                }
                pcVar1 = (code *)swi(3);
                iVar5 = (*pcVar1)();
                return iVar5;
              }
              if (local_10 == 0) {
                iVar5 = CONCAT22((short)(uVar8 >> 0x10),*(undefined2 *)((int)param_1 + 0x6ab));
                uVar8 = (uint)(ushort)(*(short *)((int)param_1 + 0x6ad) + 1);
                iVar15 = CONCAT22((short)((uint)((int)param_1 + 0x6b3) >> 0x10),
                                  *(undefined2 *)((int)param_1 + 0x6a9));
                *(undefined4 *)((int)param_1 + 0x6c3) = 6;
                thunk_FUN_0048dfd0(iVar15,iVar5,uVar8,iVar15,iVar5,(int *)uVar8,1,
                                   (short *)((int)param_1 + 0x6b3),(short *)((int)param_1 + 0x6b5),
                                   (short *)((int)param_1 + 0x6b7));
                thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x6b3),
                                   (int)*(short *)((int)param_1 + 0x6b5),
                                   (int)*(short *)((int)param_1 + 0x6b7));
                iVar5 = thunk_FUN_0045ff50(param_1,0);
                if (iVar5 == -1) {
                  return -1;
                }
              }
            }
            iVar5 = (**(code **)(*param_1 + 0xd8))();
            return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
          }
          if (iVar5 != 6) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3af1,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant___incorrect_ent_007ab6d8);
            if (iVar5 == 0) {
              return -1;
            }
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
          iVar5 = thunk_FUN_0045ff50(param_1,2);
          if (iVar5 == -1) {
            iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ade,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_ESCMOV_007ab704);
            if (iVar5 != 0) {
              pcVar1 = (code *)swi(3);
              iVar5 = (*pcVar1)();
              return iVar5;
            }
            iVar5 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*param_1 + 0xd8))();
            return -(uint)(iVar5 != 0);
          }
          if (iVar5 == 3) {
            iVar5 = CONCAT22(extraout_var_02,*(undefined2 *)((int)param_1 + 0x6ab));
            uVar8 = (uint)(ushort)(*(short *)((int)param_1 + 0x6ad) + 1);
            iVar15 = CONCAT22((short)((uint)((int)param_1 + 0x6b3) >> 0x10),
                              *(undefined2 *)((int)param_1 + 0x6a9));
            thunk_FUN_0048dfd0(iVar15,iVar5,uVar8,iVar15,iVar5,(int *)uVar8,1,
                               (short *)((int)param_1 + 0x6b3),(short *)((int)param_1 + 0x6b5),
                               (short *)((int)param_1 + 0x6b7));
            thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x6b3),
                               (int)*(short *)((int)param_1 + 0x6b5),
                               (int)*(short *)((int)param_1 + 0x6b7));
            thunk_FUN_0045ff50(param_1,0);
          }
          goto LAB_0047f19a;
        }
        sVar13 = *(short *)((int)param_1 + 0x6a9);
        sVar16 = *(short *)((int)param_1 + 0x6ad);
        sVar12 = *(short *)((int)param_1 + 0x6ab);
        if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar12 < 0)) ||
            ((DAT_007fb242 <= sVar12 || (sVar16 < 0)))) || (DAT_007fb244 <= sVar16)) {
          param_3 = (int *)0x0;
        }
        else {
          param_3 = *(int **)(DAT_007fb248 +
                             ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                             (int)sVar13) * 8);
        }
        if (((param_3 != (int *)0x0) && (param_3[6] == *(int *)((int)param_1 + 0x6af))) &&
           ((param_3[9] == param_1[9] && (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 != 0)))) {
          if (*(int *)((int)param_3 + 0x245) == 6) {
            if (*(int *)((int)param_1 + 0x6b9) == 1) {
              *(undefined4 *)((int)param_1 + 0x6c3) = 5;
              *(undefined4 *)((int)param_1 + 0x6c7) = 0;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x6c3) = 6;
            }
          }
          goto LAB_0047f19a;
        }
        FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
        iVar5 = extraout_ECX;
        if ((param_3 != (int *)0x0) && (iVar5 = param_3[300], iVar5 == param_1[6])) {
          param_3[300] = 0;
        }
        if (*(int *)((int)param_1 + 0x6b9) != 1) {
          iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)param_1 + 0x6ab));
          uVar8 = CONCAT22((short)((uint)param_3 >> 0x10),*(short *)((int)param_1 + 0x6ad) + 1);
          iVar15 = CONCAT22((short)((uint)((int)param_1 + 0x6b3) >> 0x10),
                            *(undefined2 *)((int)param_1 + 0x6a9));
          *(undefined4 *)((int)param_1 + 0x6c3) = 6;
          thunk_FUN_0048dfd0(iVar15,iVar5,uVar8,iVar15,iVar5,(int *)uVar8,1,
                             (short *)((int)param_1 + 0x6b3),(short *)((int)param_1 + 0x6b5),
                             (short *)((int)param_1 + 0x6b7));
          thunk_FUN_00481520(param_1,(int)*(short *)((int)param_1 + 0x6b3),
                             (int)*(short *)((int)param_1 + 0x6b5),
                             (int)*(short *)((int)param_1 + 0x6b7));
          iVar5 = thunk_FUN_0045ff50(param_1,0);
          if (iVar5 == -1) {
            return -1;
          }
          goto LAB_0047f19a;
        }
      }
      *(undefined4 *)((int)param_1 + 0x6c3) = 5;
      *(undefined4 *)((int)param_1 + 0x6c7) = 0;
LAB_0047f19a:
      iVar5 = (**(code **)(*param_1 + 0xd8))();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    iVar5 = thunk_FUN_00460260(param_1,2);
    switch(iVar5) {
    case 0:
      sVar13 = *(short *)((int)param_1 + 0x6a9);
      sVar16 = *(short *)((int)param_1 + 0x6ad);
      sVar12 = *(short *)((int)param_1 + 0x6ab);
      if ((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar12 < 0)) ||
         (((DAT_007fb242 <= sVar12 || (sVar16 < 0)) || (DAT_007fb244 <= sVar16)))) {
        param_3 = (int *)0x0;
      }
      else {
        param_3 = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                           (int)sVar13) * 8);
      }
      if (((param_3 == (int *)0x0) || (param_3[6] != *(int *)((int)param_1 + 0x6af))) ||
         ((param_3[9] != param_1[9] || (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
        FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
        if (param_3 == (int *)0x0) {
          return 0;
        }
      }
      else {
        if (*(int *)((int)param_1 + 0x6b9) != 1) {
          thunk_FUN_004b9cf0(param_3);
          *(undefined4 *)((int)param_1 + 0x6c3) = 4;
          return 2;
        }
        if (((*(short *)((int)param_1 + 0x47) == *(short *)((int)param_1 + 0x6b3)) &&
            (*(short *)((int)param_1 + 0x49) == *(short *)((int)param_1 + 0x6b5))) &&
           (*(short *)((int)param_1 + 0x4b) == *(short *)((int)param_1 + 0x6b7))) {
          *(undefined4 *)((int)param_1 + 0x6c3) = 3;
          *(undefined4 *)((int)param_1 + 0x6c7) = 0;
          return 2;
        }
      }
      if (param_3[300] != param_1[6]) {
        return 0;
      }
      param_3[300] = 0;
      return 0;
    case 1:
      sVar13 = *(short *)((int)param_1 + 0x6a9);
      sVar16 = *(short *)((int)param_1 + 0x6ad);
      sVar12 = *(short *)((int)param_1 + 0x6ab);
      if (((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar12 < 0)) ||
          ((DAT_007fb242 <= sVar12 || (sVar16 < 0)))) || (DAT_007fb244 <= sVar16)) {
        param_3 = (int *)0x0;
      }
      else {
        param_3 = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                           (int)sVar13) * 8);
      }
      if (((param_3 == (int *)0x0) || (param_3[6] != *(int *)((int)param_1 + 0x6af))) ||
         ((param_3[9] != param_1[9] || (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
        FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
        if ((param_3 != (int *)0x0) && (param_3[300] == param_1[6])) {
          param_3[300] = 0;
        }
        thunk_FUN_004602b0(param_1);
        return 0;
      }
      break;
    case 3:
      bVar2 = thunk_FUN_00495420(param_1,(short *)((int)param_1 + 0x6b3),
                                 (short *)((int)param_1 + 0x6b5),(short *)((int)param_1 + 0x6b7));
      if (CONCAT31(extraout_var_01,bVar2) == 1) goto LAB_0047e4df;
      sVar13 = *(short *)((int)param_1 + 0x6a9);
      sVar16 = *(short *)((int)param_1 + 0x6ad);
      sVar12 = *(short *)((int)param_1 + 0x6ab);
      if ((((sVar13 < 0) || (DAT_007fb240 <= sVar13)) || (sVar12 < 0)) ||
         (((DAT_007fb242 <= sVar12 || (sVar16 < 0)) || (DAT_007fb244 <= sVar16)))) {
        param_3 = (int *)0x0;
      }
      else {
        param_3 = *(int **)(DAT_007fb248 +
                           ((int)sVar16 * (int)DAT_007fb246 + (int)sVar12 * (int)DAT_007fb240 +
                           (int)sVar13) * 8);
      }
      if (((param_3 == (int *)0x0) || (param_3[6] != *(int *)((int)param_1 + 0x6af))) ||
         ((param_3[9] != param_1[9] || (iVar5 = thunk_FUN_004b9d90((int)param_3), iVar5 == 0)))) {
        FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x6af),(int *)&param_3);
        if (param_3 == (int *)0x0) {
          return 0;
        }
        if (param_3[300] != param_1[6]) {
          return 0;
        }
        param_3[300] = 0;
        return 0;
      }
      if (param_3[300] == param_1[6]) {
        param_3[300] = 0;
      }
      *(undefined4 *)((int)param_1 + 0x6c3) = 1;
      *(undefined4 *)((int)param_1 + 0x6bf) = 0;
      goto LAB_0047e0a4;
    case -1:
      iVar5 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant_DISMANT_MOVEOBJ_007ab7d4);
      if (iVar5 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9);
        return 0xffff;
      }
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
  }
  return 2;
}

