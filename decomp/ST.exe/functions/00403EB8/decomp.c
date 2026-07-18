
int __thiscall thunk_FUN_0046f5c0(void *this,int param_1)

{
  uint uVar1;
  void *this_00;
  code *pcVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar11;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 uVar13;
  undefined2 extraout_var_01;
  uint uVar12;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  int iVar14;
  undefined2 extraout_var_08;
  int *piVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int iVar23;
  short sVar24;
  byte bVar25;
  undefined4 uVar26;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  short sStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    puVar8 = (undefined4 *)((int)this + 0x2cc);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    if (*(int *)((int)this + 0x716) == *(int *)((int)this + 0x712)) {
      return 0;
    }
    sVar17 = *(short *)((int)this + 0x3a0);
    sVar18 = *(short *)((int)this + 0x3a4);
    sVar19 = *(short *)((int)this + 0x3a2);
    if (sVar17 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar17) {
      return 0;
    }
    if (sVar19 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar19) {
      return 0;
    }
    if (sVar18 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar18) {
      return 0;
    }
    piVar15 = *(int **)(DAT_007fb248 +
                       ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                       (int)sVar17) * 8);
    if (piVar15 == (int *)0x0) {
      return 0;
    }
    iVar5 = (**(code **)(*piVar15 + 0x2c))();
    if (iVar5 != 0x33) {
      return 0;
    }
    if (piVar15[9] != *(int *)((int)this + 0x24)) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x580) = 0;
    *(undefined2 *)((int)this + 0x554) = *(undefined2 *)((int)this + 0x3a0);
    *(undefined2 *)((int)this + 0x556) = *(undefined2 *)((int)this + 0x3a2);
    *(undefined2 *)((int)this + 0x558) = *(undefined2 *)((int)this + 0x3a4);
    *(undefined4 *)((int)this + 0x57c) = 0;
    *(undefined4 *)((int)this + 0x578) = 0;
    *(undefined4 *)((int)this + 0x574) = 0;
    sVar17 = *(short *)((int)this + 0x558);
    sVar19 = *(short *)((int)this + 0x556);
    sVar18 = *(short *)((int)this + 0x554);
    *(undefined4 *)((int)this + 0xb7) = 3;
LAB_00470e23:
    thunk_FUN_00481520(this,(int)sVar18,(int)sVar19,sVar17 + 1);
LAB_00470e2b:
    thunk_FUN_00460260(this,0);
switchD_0046fd75_caseD_2:
    iVar5 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
  }
  iVar5 = *(int *)((int)this + 0x580);
  if (iVar5 == 0) {
    iVar5 = thunk_FUN_00460260(this,2);
    switch(iVar5) {
    case 0:
      if (*(int *)((int)this + 0x564) == 1) {
        iVar23 = (int)*(short *)((int)this + 0x556);
        iVar5 = (int)*(short *)((int)this + 0x554);
        iVar6 = *(short *)((int)this + 0x558) + 1;
        *(undefined4 *)((int)this + 0x564) = 0;
        break;
      }
      sVar17 = *(short *)((int)this + 0x554);
      sVar18 = *(short *)((int)this + 0x558);
      sVar19 = *(short *)((int)this + 0x556);
      if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
         (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15 = *(int **)(DAT_007fb248 +
                           ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                           (int)sVar17) * 8);
      }
      iVar5 = thunk_FUN_00490570((int)this);
      if (iVar5 != 1) {
LAB_0046f794:
        if (((piVar15 != (int *)0x0) && (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 == 0x33))
           && (piVar15[9] == *(int *)((int)this + 0x24))) {
          *(undefined4 *)((int)this + 0x580) = 2;
LAB_0046f98f:
          iVar5 = thunk_FUN_004608b0(this,0);
          return (-(uint)(iVar5 != -1) & 3) - 1;
        }
LAB_0046f888:
        thunk_FUN_004602b0(this);
        *(undefined4 *)((int)this + 0xb7) = 0;
        iVar5 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = extraout_ECX;
      uVar4 = extraout_var_04;
      if (((piVar15 != (int *)0x0) &&
          (iVar23 = (**(code **)(*piVar15 + 0x2c))(), iVar5 = extraout_ECX_00,
          uVar4 = extraout_var_05, iVar23 == 0x33)) &&
         (iVar5 = piVar15[9], iVar5 == *(int *)((int)this + 0x24))) {
        iVar23 = thunk_FUN_004e1eb0(piVar15,(int)*(short *)((int)this + 0x41),
                                    (int)*(short *)((int)this + 0x43),
                                    (int)*(short *)((int)this + 0x45));
        *(int *)((int)this + 0x568) = iVar23;
        iVar5 = extraout_ECX_01;
        uVar4 = extraout_var_06;
        if (iVar23 != -1) goto LAB_0046f794;
      }
      uVar13 = (undefined2)((uint)iVar5 >> 0x10);
      uVar11 = (undefined2)((uint)((int)this + 0x55e) >> 0x10);
      thunk_FUN_0048dfd0(CONCAT22(uVar13,*(undefined2 *)((int)this + 0x47)),
                         CONCAT22(uVar11,*(undefined2 *)((int)this + 0x49)),
                         CONCAT22(uVar4,*(undefined2 *)((int)this + 0x4b)),
                         CONCAT22(uVar13,*(undefined2 *)((int)this + 0x554)),
                         CONCAT22(uVar11,*(undefined2 *)((int)this + 0x556)),
                         (int *)CONCAT22(uVar4,*(short *)((int)this + 0x558) + 1),1,
                         (short *)((int)this + 0x55e),(short *)((int)this + 0x560),
                         (short *)((int)this + 0x562));
      iVar6 = (int)*(short *)((int)this + 0x562);
      iVar23 = (int)*(short *)((int)this + 0x560);
      iVar5 = (int)*(short *)((int)this + 0x55e);
      *(undefined4 *)((int)this + 0x580) = 1;
      *(undefined4 *)((int)this + 0xb7) = 0;
      break;
    case 1:
      if (*(int *)((int)this + 0x564) != 1) {
        sVar17 = *(short *)((int)this + 0x554);
        sVar18 = *(short *)((int)this + 0x558);
        sVar19 = *(short *)((int)this + 0x556);
        if ((((((-1 < sVar17) && (sVar17 < DAT_007fb240)) && (-1 < sVar19)) &&
             ((sVar19 < DAT_007fb242 && (-1 < sVar18)))) &&
            ((sVar18 < DAT_007fb244 &&
             ((piVar15 = *(int **)(DAT_007fb248 +
                                  ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                  + (int)sVar17) * 8), piVar15 != (int *)0x0 &&
              (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 == 0x33)))))) &&
           (piVar15[9] == *(int *)((int)this + 0x24))) goto switchD_0046f604_caseD_2;
        goto LAB_0046f888;
      }
      *(undefined4 *)((int)this + 0x564) = 0;
      thunk_FUN_004602b0(this);
    case 3:
      iVar23 = (int)*(short *)((int)this + 0x556);
      iVar5 = (int)*(short *)((int)this + 0x554);
      iVar6 = *(short *)((int)this + 0x558) + 1;
      break;
    default:
      goto switchD_0046f604_caseD_2;
    case -1:
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x28ac,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar26 = 0x28ac;
LAB_00470c46:
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar26);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      *(int *)((int)this + 0x574) = *(int *)((int)this + 0x574) + 1;
      iVar5 = thunk_FUN_004608b0(this,2);
      if (iVar5 == -1) {
        return -1;
      }
      if (*(int *)((int)this + 0x82e) != 0) {
        return 2;
      }
      if (*(int *)((int)this + 0x48b) != 0xffff) {
        return 2;
      }
      if (*(int *)((int)this + 0x574) % 0x32 != 1) {
        return 2;
      }
      sVar17 = *(short *)((int)this + 0x554);
      sVar18 = *(short *)((int)this + 0x558);
      sVar19 = *(short *)((int)this + 0x556);
      if ((((-1 < sVar17) && (sVar17 < DAT_007fb240)) &&
          ((-1 < sVar19 && ((sVar19 < DAT_007fb242 && (-1 < sVar18)))))) &&
         ((sVar18 < DAT_007fb244 &&
          (((piVar15 = *(int **)(DAT_007fb248 +
                                ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                                (int)sVar17) * 8), piVar15 != (int *)0x0 &&
            (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 == 0x33)) &&
           (piVar15[9] == *(int *)((int)this + 0x24))))))) {
        iVar5 = thunk_FUN_004e1eb0(piVar15,(int)*(short *)((int)this + 0x41),
                                   (int)*(short *)((int)this + 0x43),
                                   (int)*(short *)((int)this + 0x45));
        *(int *)((int)this + 0x568) = iVar5;
        if (iVar5 == -1) {
          return 2;
        }
        bVar3 = thunk_FUN_004908a0(this,piVar15,iVar5);
        if (CONCAT31(extraout_var_00,bVar3) != 1) {
          return 2;
        }
        *(int *)((int)this + 0x55a) = piVar15[6];
        thunk_FUN_004e1fb0(piVar15,*(int *)((int)this + 0x568),*(undefined4 *)((int)this + 0x18));
        sVar19 = *(short *)((int)this + 0x570);
        sVar18 = *(short *)((int)this + 0x56e);
        sVar17 = *(short *)((int)this + 0x56c);
        *(undefined4 *)((int)this + 0x580) = 3;
        *(undefined4 *)((int)this + 0xb7) = 0;
LAB_00470bfe:
        thunk_FUN_00481520(this,(int)sVar17,(int)sVar18,(int)sVar19);
        thunk_FUN_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      thunk_FUN_004602b0(this);
LAB_0046fd3e:
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = thunk_FUN_00460260(this,2);
      switch(iVar5) {
      case 0:
        if (*(int *)((int)this + 0x564) != 1) {
          sVar17 = *(short *)((int)this + 0x554);
          sVar18 = *(short *)((int)this + 0x558);
          sVar19 = *(short *)((int)this + 0x556);
          if ((((-1 < sVar17) && (sVar17 < DAT_007fb240)) &&
              ((-1 < sVar19 && ((sVar19 < DAT_007fb242 && (-1 < sVar18)))))) &&
             ((sVar18 < DAT_007fb244 &&
              ((((piVar15 = *(int **)(DAT_007fb248 +
                                     ((int)sVar18 * (int)DAT_007fb246 +
                                      (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                 piVar15 != (int *)0x0 && (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 == 0x33))
                && (piVar15[0x12d] == 0)) &&
               ((*(int *)((int)piVar15 + 0x245) != 6 && (piVar15[9] == *(int *)((int)this + 0x24))))
               ))))) {
            if ((*(short *)((int)this + 0x47) == *(short *)((int)this + 0x56c)) &&
               ((*(short *)((int)this + 0x49) == *(short *)((int)this + 0x56e) &&
                (*(short *)((int)this + 0x4b) == *(short *)((int)this + 0x570))))) {
              *(undefined4 *)((int)this + 0x580) = 4;
              *(undefined4 *)((int)this + 0x584) = 0;
              iVar5 = (**(code **)(*(int *)this + 0xd8))();
              return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(piVar15,*(int *)((int)this + 0x568),*(int *)((int)this + 0x18));
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (*(int *)((int)this + 0x564) != 1) {
          thunk_FUN_004602b0(this);
          sVar17 = *(short *)((int)this + 0x554);
          sVar18 = *(short *)((int)this + 0x558);
          sVar19 = *(short *)((int)this + 0x556);
          if (((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             (((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) ||
              ((DAT_007fb244 <= sVar18 ||
               (((piVar15 = *(int **)(DAT_007fb248 +
                                     ((int)sVar18 * (int)DAT_007fb246 +
                                      (int)sVar19 * (int)DAT_007fb240 + (int)sVar17) * 8),
                 piVar15 == (int *)0x0 || (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 != 0x33))
                || (piVar15[9] != *(int *)((int)this + 0x24))))))))) goto LAB_004700a6;
          goto LAB_00470071;
        }
        thunk_FUN_004602b0(this);
        break;
      default:
        goto switchD_0046fd75_caseD_2;
      case 3:
        sVar17 = *(short *)((int)this + 0x554);
        sVar18 = *(short *)((int)this + 0x558);
        sVar19 = *(short *)((int)this + 0x556);
        if (((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) ||
             ((sVar19 < 0 || ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))))) ||
            (DAT_007fb244 <= sVar18)) ||
           (((piVar15 = *(int **)(DAT_007fb248 +
                                 ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                 + (int)sVar17) * 8), piVar15 == (int *)0x0 ||
             (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 != 0x33)) ||
            (piVar15[9] != *(int *)((int)this + 0x24))))) {
LAB_004700a6:
          iVar5 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar5 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,piVar15,*(int *)((int)this + 0x568));
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x56c),
                           (int)*(short *)((int)this + 0x56e),(int)*(short *)((int)this + 0x570));
        goto LAB_00470e2b;
      case -1:
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2977,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        uVar26 = 0x2977;
        goto LAB_00470c46;
      }
      sVar17 = *(short *)((int)this + 0x558);
      sVar19 = *(short *)((int)this + 0x556);
      sVar18 = *(short *)((int)this + 0x554);
      *(undefined4 *)((int)this + 0x564) = 0;
      *(undefined4 *)((int)this + 0x580) = 0;
      *(undefined4 *)((int)this + 0xb7) = 3;
      goto LAB_00470e23;
    }
    if (iVar5 == 4) {
      if (*(int *)((int)this + 0x584) == 0) {
        iVar6 = (ushort)(*(short *)((int)this + 0x558) * 200) + 300;
        iVar23 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)((int)this + 0x556) + 1) * 0xc9;
        iVar9 = CONCAT22((short)((uint)iVar23 >> 0x10),
                         *(short *)((int)this + 0x568) + *(short *)((int)this + 0x554));
        iVar5 = iVar9 * 0xc9 + 100;
        uVar4 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
        uVar4 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar4,*(undefined2 *)((int)this + 0x41)),
                           CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                           CONCAT22(uVar4,*(undefined2 *)((int)this + 0x45)),iVar5,iVar23,iVar6);
        *(undefined2 *)((int)this + 0x572) = uVar4;
        *(undefined4 *)((int)this + 0x584) = 1;
      }
      if (*(int *)((int)this + 0x584) == 1) {
        uVar7 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x572));
        uVar7 = thunk_FUN_00417910(this,(short)uVar7);
        if (uVar7 == 0xffffffff) {
          iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d3,0,0,&DAT_007a4ccc);
          if (iVar5 == 0) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x29d4);
            return 0xffff;
          }
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (uVar7 == 0) {
LAB_004707ad:
          *(undefined4 *)((int)this + 0x584) = 2;
          goto switchD_0046f604_caseD_2;
        }
      }
      if (*(int *)((int)this + 0x584) == 2) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),
                           (*(short *)((int)this + 0x568) + *(short *)((int)this + 0x554)) * 0xc9 +
                           100,(*(short *)((int)this + 0x556) + 1) * 0xc9,
                           *(short *)((int)this + 0x558) * 200 + 300,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x584) = 3;
      }
      if (*(int *)((int)this + 0x584) == 3) {
        iStack_c = thunk_FUN_00415ed0(this,&iStack_18,&uStack_14);
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        iVar5 = (uVar7 >> 0x10) % 7 - 3;
        uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar7;
        uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)((int)this + 0x1c) = uVar1;
        iStack_10 = (uVar1 >> 0x10) % 7 - 3;
        if ((*(int *)((int)this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (param_1 = 0, *(char *)((int)this + 0x2bf) != '\0')) {
          puStack_8 = (undefined4 *)((int)this + 0x2b3);
          do {
            puVar8 = (undefined4 *)
                     thunk_FUN_0041dc40(auStack_28,*puStack_8,*(undefined2 *)(puStack_8 + 1),
                                        *(short *)((int)this + 0x6c));
            uVar26 = *puVar8;
            bVar25 = 0;
            sVar24 = 0;
            iVar23 = -1;
            sStack_1c = *(short *)(puVar8 + 1);
            sVar22 = 0;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            uStack_20 = uVar26;
            if (DAT_0080732c == 1) {
              sVar17 = 0;
              sVar18 = 0;
              sVar19 = 0;
              sVar20 = 0;
              sVar21 = 0;
              sVar22 = 0;
              sVar24 = 0;
              bVar25 = 0;
              lVar16 = __ftol();
              iVar14 = (int)sStack_1c +
                       *(short *)((int)this + 0x45) + iStack_10 + (int)(short)lVar16;
              iVar6 = (int)*(short *)((int)this + 0x43) - (int)uStack_20._2_2_;
              iVar9 = (int)(short)uStack_20 + iVar5 + *(short *)((int)this + 0x41);
            }
            else {
              iVar14 = (int)sStack_1c + iStack_10 + *(short *)((int)this + 0x45);
              uStack_20._2_2_ = (short)((uint)uVar26 >> 0x10);
              iVar6 = (int)*(short *)((int)this + 0x43) - (int)uStack_20._2_2_;
              uStack_20._0_2_ = (short)uVar26;
              iVar9 = (int)(short)uStack_20 + iVar5 + *(short *)((int)this + 0x41);
            }
            thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar9,iVar6 + ((uVar7 >> 0x10) % 7 - 3),iVar14,
                               sVar17,sVar18,sVar19,sVar20,sVar21,sVar22,iVar23,sVar24,bVar25);
            puStack_8 = (undefined4 *)((int)puStack_8 + 6);
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)*(byte *)((int)this + 0x2bf));
        }
        if (iStack_c == -1) {
          iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29fe,0,0,&DAT_007a4ccc);
          if (iVar5 == 0) {
            FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x29ff);
            return 0xffff;
          }
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (iStack_c == 0) {
          *(undefined4 *)((int)this + 0x580) = 5;
          *(undefined4 *)((int)this + 0x574) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar7;
          *(undefined4 *)((int)this + 0x584) = 0;
          *(uint *)((int)this + 0x578) = (uVar7 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto switchD_0046f604_caseD_2;
    }
    if (iVar5 == 5) {
      sVar17 = *(short *)((int)this + 0x554);
      sVar18 = *(short *)((int)this + 0x558);
      sVar19 = *(short *)((int)this + 0x556);
      if ((((-1 < sVar17) && (sVar17 < DAT_007fb240)) && (-1 < sVar19)) &&
         (((sVar19 < DAT_007fb242 && (-1 < sVar18)) &&
          ((sVar18 < DAT_007fb244 &&
           ((this_00 = *(void **)(DAT_007fb248 +
                                 ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240
                                 + (int)sVar17) * 8), this_00 != (void *)0x0 &&
            (*(int *)((int)this_00 + 0x18) == *(int *)((int)this + 0x55a))))))))) {
        if (*(int *)(DAT_00802a38 + 0xe4) ==
            *(int *)((int)this + 0x574) + *(int *)((int)this + 0x578)) {
          (**(code **)(*(int *)this + 0x90))(3,0x363);
          iVar5 = (*(short *)((int)this + 0x237) * -7) / 10;
          uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar7;
          iVar23 = (*(short *)((int)this + 0x237) * -2) / 10;
          uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar1;
          uStack_20 = CONCAT22((short)((uVar1 >> 0x10) %
                                      (((*(short *)((int)this + 0x237) * 2) / 10 - iVar23) + 1U)) +
                               (short)iVar23,
                               (short)((uVar7 >> 0x10) %
                                      (((*(short *)((int)this + 0x237) * 7) / 10 - iVar5) + 1U)) +
                               (short)iVar5);
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(auStack_28,uStack_20,0,*(short *)((int)this + 0x6c));
          uVar26 = *puVar8;
          sStack_1c = *(short *)(puVar8 + 1);
          uStack_20._2_2_ = (short)((uint)uVar26 >> 0x10);
          iVar23 = (int)uStack_20._2_2_;
          uStack_20._0_2_ = (short)uVar26;
          iVar5 = (int)(short)uStack_20;
          uStack_20 = uVar26;
          thunk_FUN_00637930(*(uint *)((int)this + 0x1ed),0,*(short *)((int)this + 0x41) + iVar5,
                             *(short *)((int)this + 0x43) + iVar23,
                             *(short *)((int)this + 0x45) + -0x28,0,0);
          *(undefined4 *)((int)this + 0x574) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)this + 0x1c) = uVar7;
          *(uint *)((int)this + 0x578) = (uVar7 >> 0x10) % 0x33 + 0x28;
        }
        thunk_FUN_004e20d0(this_00,*(int *)((int)this + 0x568),*(int *)((int)this + 0x18),
                           *(int *)((int)this + 0x6f7),*(undefined4 *)((int)this + 0x716));
        iVar5 = thunk_FUN_004e2340(this_00,*(uint *)((int)this + 0x568),*(int *)((int)this + 0x18),
                                   (undefined4 *)0x0);
        *(int *)((int)this + 0x716) = iVar5;
        if (iVar5 != *(int *)((int)this + 0x712)) goto switchD_0046fd75_caseD_2;
      }
      thunk_FUN_0048dba0((int)this);
      *(undefined4 *)((int)this + 0x580) = 6;
      iVar5 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    if (iVar5 != 6) {
      if (iVar5 == 7) {
        iVar5 = thunk_FUN_00460260(this,2);
        if (iVar5 == -1) {
          iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a8c,0,0,&DAT_007a4ccc);
          if (iVar5 != 0) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          uVar26 = 0x2a8c;
          goto LAB_00470c46;
        }
        if (iVar5 == 0) {
          return 0;
        }
        if (iVar5 != 3) {
          return 2;
        }
        piVar10 = (int *)(uint)*(ushort *)((int)this + 0x4b);
        iVar6 = CONCAT22(extraout_var_02,*(undefined2 *)((int)this + 0x49));
        iVar9 = CONCAT22((short)((uint)((int)this + 0x55e) >> 0x10),
                         *(undefined2 *)((int)this + 0x47));
        iVar14 = 3;
        iVar5 = iVar9;
        iVar23 = iVar6;
        piVar15 = piVar10;
      }
      else {
        if (iVar5 != 8) {
          iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ab3,0,0,&DAT_007a4ccc);
          if (iVar5 == 0) {
            return -1;
          }
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = thunk_FUN_00460260(this,2);
        if (iVar5 == -1) {
          return -1;
        }
        if (iVar5 == 0) {
          return 0;
        }
        if (iVar5 != 3) {
          return 2;
        }
        piVar15 = (int *)CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x4b));
        iVar23 = CONCAT22(extraout_var_08,*(undefined2 *)((int)this + 0x49));
        iVar14 = 1;
        iVar5 = CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x47));
        piVar10 = (int *)CONCAT22(extraout_var_08,*(undefined2 *)((int)this + 0x562));
        iVar6 = CONCAT22(extraout_var_03,*(undefined2 *)((int)this + 0x560));
        iVar9 = CONCAT22(extraout_var_08,*(undefined2 *)((int)this + 0x55e));
      }
      thunk_FUN_0048dfd0(iVar9,iVar6,(uint)piVar10,iVar5,iVar23,piVar15,iVar14,
                         (short *)((int)this + 0x55e),(short *)((int)this + 0x560),
                         (short *)((int)this + 0x562));
      sVar19 = *(short *)((int)this + 0x562);
      sVar18 = *(short *)((int)this + 0x560);
      sVar17 = *(short *)((int)this + 0x55e);
      goto LAB_00470bfe;
    }
    iVar5 = *(int *)((int)this + 0x57c) + 1;
    *(int *)((int)this + 0x57c) = iVar5;
    if (iVar5 < 0x1e) goto switchD_0046f604_caseD_2;
    if (*(int *)((int)this + 0x584) == 0) {
      iVar23 = (ushort)(*(short *)((int)this + 0x570) * 200) + 100;
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)((int)this + 0x56e) * 0xc9) + 100;
      iVar5 = CONCAT22((short)((uint)iVar23 >> 0x10),*(short *)((int)this + 0x56c) * 0xc9) + 100;
      uVar4 = (undefined2)((uint)iVar6 >> 0x10);
      uVar4 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar4,*(undefined2 *)((int)this + 0x41)),
                         CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)this + 0x43)),
                         CONCAT22(uVar4,*(undefined2 *)((int)this + 0x45)),iVar5,iVar6,iVar23);
      *(undefined2 *)((int)this + 0x572) = uVar4;
      *(undefined4 *)((int)this + 0x584) = 1;
    }
    if (*(int *)((int)this + 0x584) == 1) {
      uVar7 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x572));
      uVar7 = thunk_FUN_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a42,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2a43);
          return 0xffff;
        }
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (uVar7 != 0) goto switchD_0046f604_caseD_2;
      goto LAB_004707ad;
    }
    if (*(int *)((int)this + 0x584) == 2) {
      thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                         *(short *)((int)this + 0x45),*(short *)((int)this + 0x56c) * 0xc9 + 100,
                         *(short *)((int)this + 0x56e) * 0xc9 + 100,
                         *(short *)((int)this + 0x570) * 200 + 100,*(byte *)((int)this + 0x61));
      *(undefined4 *)((int)this + 0x584) = 3;
    }
    if (*(int *)((int)this + 0x584) != 3) goto switchD_0046fd75_caseD_2;
    iStack_c = thunk_FUN_00415ed0(this,&iStack_10,&uStack_14);
    uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar7;
    iVar5 = (uVar7 >> 0x10) % 7 - 3;
    uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar7;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    uVar12 = *(uint *)((int)this + 0x74a);
    iStack_18 = (uVar1 >> 0x10) % 7 - 3;
    if (((int)uVar12 <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
       (param_1 = 0, *(char *)((int)this + 0x2bf) != '\0')) {
      puStack_8 = (undefined4 *)((int)this + 0x2b3);
      do {
        puVar8 = (undefined4 *)
                 thunk_FUN_0041dc40(auStack_28,*puStack_8,*(undefined2 *)(puStack_8 + 1),
                                    *(short *)((int)this + 0x6c));
        uVar26 = *puVar8;
        bVar25 = 0;
        sVar24 = 0;
        iVar23 = -1;
        sStack_1c = *(short *)(puVar8 + 1);
        sVar22 = 0;
        sVar21 = 0;
        sVar20 = 0;
        sVar19 = 0;
        sVar18 = 0;
        sVar17 = 0;
        uStack_20 = uVar26;
        if (DAT_0080732c == 1) {
          sVar17 = 0;
          sVar18 = 0;
          sVar19 = 0;
          sVar20 = 0;
          sVar21 = 0;
          sVar22 = 0;
          sVar24 = 0;
          bVar25 = 0;
          lVar16 = __ftol();
          iVar14 = (int)sStack_1c + *(short *)((int)this + 0x45) + iStack_18 + (int)(short)lVar16;
          iVar6 = (int)*(short *)((int)this + 0x43) - (int)uStack_20._2_2_;
          iVar9 = (int)(short)uStack_20 + iVar5 + *(short *)((int)this + 0x41);
        }
        else {
          iVar14 = (int)sStack_1c + iStack_18 + *(short *)((int)this + 0x45);
          uStack_20._2_2_ = (short)((uint)uVar26 >> 0x10);
          iVar6 = (int)*(short *)((int)this + 0x43) - (int)uStack_20._2_2_;
          uStack_20._0_2_ = (short)uVar26;
          iVar9 = (int)(short)uStack_20 + iVar5 + *(short *)((int)this + 0x41);
        }
        thunk_FUN_00556760(DAT_00802a7c,1,2,7,iVar9,iVar6 + ((uVar7 >> 0x10) % 7 - 3),iVar14,sVar17,
                           sVar18,sVar19,sVar20,sVar21,sVar22,iVar23,sVar24,bVar25);
        puStack_8 = (undefined4 *)((int)puStack_8 + 6);
        param_1 = param_1 + 1;
        uVar12 = (uint)*(byte *)((int)this + 0x2bf);
      } while (param_1 < (int)uVar12);
    }
    if (iStack_c == -1) {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6c,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar26 = 0x2a6d;
      goto LAB_00470c46;
    }
    if (iStack_c != 0) goto switchD_0046fd75_caseD_2;
    sVar17 = *(short *)((int)this + 0x554);
    iVar5 = 0;
    sVar18 = *(short *)((int)this + 0x558);
    puVar8 = (undefined4 *)CONCAT22((short)(uVar12 >> 0x10),sVar18);
    sVar19 = *(short *)((int)this + 0x556);
    if ((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
       (((DAT_007fb242 <= sVar19 || (sVar18 < 0)) || (DAT_007fb244 <= sVar18)))) {
LAB_00470b14:
      uVar7 = CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)((int)this + 0x4b));
      iVar5 = CONCAT22((short)((uint)puVar8 >> 0x10),*(undefined2 *)((int)this + 0x49));
      iVar23 = CONCAT22((short)((uint)((int)this + 0x55e) >> 0x10),*(undefined2 *)((int)this + 0x47)
                       );
      *(undefined4 *)((int)this + 0x580) = 7;
      thunk_FUN_0048dfd0(iVar23,iVar5,uVar7,iVar23,iVar5,(int *)uVar7,3,(short *)((int)this + 0x55e)
                         ,(short *)((int)this + 0x560),(short *)((int)this + 0x562));
    }
    else {
      puVar8 = (undefined4 *)
               ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 + (int)sVar17);
      iVar5 = *(int *)(DAT_007fb248 + (int)puVar8 * 8);
      if ((iVar5 == 0) ||
         (puVar8 = *(undefined4 **)(iVar5 + 0x18), puVar8 != *(undefined4 **)((int)this + 0x55a)))
      goto LAB_00470b14;
      puVar8 = (undefined4 *)((int)this + 0x55e);
      if (*(int *)(iVar5 + 0x42c) != 0) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(iVar5 + 0x430);
        }
        if ((int *)((int)this + 0x560) != (int *)0x0) {
          puVar8 = *(undefined4 **)(iVar5 + 0x434);
          *(int *)((int)this + 0x560) = (int)puVar8;
        }
        if ((undefined4 *)((int)this + 0x562) != (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x562) = *(undefined4 *)(iVar5 + 0x438);
        }
      }
      if (*(int *)(iVar5 + 0x42c) != 1) goto LAB_00470b14;
      *(undefined4 *)((int)this + 0x580) = 8;
    }
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x55e),(int)*(short *)((int)this + 0x560),
                       (int)*(short *)((int)this + 0x562));
    goto LAB_00470e2b;
  }
  iVar5 = thunk_FUN_00460260(this,2);
  switch(iVar5) {
  case 0:
    iVar5 = thunk_FUN_00490570((int)this);
    if (iVar5 != 1) {
      *(undefined4 *)((int)this + 0x580) = 2;
      goto LAB_0046f98f;
    }
    uVar4 = (undefined2)((uint)((int)this + 0x55e) >> 0x10);
    thunk_FUN_0048dfd0(CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x47)),
                       CONCAT22(uVar4,*(undefined2 *)((int)this + 0x49)),
                       CONCAT22(extraout_var_07,*(undefined2 *)((int)this + 0x4b)),
                       CONCAT22(extraout_var_01,*(undefined2 *)((int)this + 0x554)),
                       CONCAT22(uVar4,*(undefined2 *)((int)this + 0x556)),
                       (int *)CONCAT22(extraout_var_07,*(short *)((int)this + 0x558) + 1),1,
                       (short *)((int)this + 0x55e),(short *)((int)this + 0x560),
                       (short *)((int)this + 0x562));
    iVar6 = (int)*(short *)((int)this + 0x562);
    iVar23 = (int)*(short *)((int)this + 0x560);
    iVar5 = (int)*(short *)((int)this + 0x55e);
    break;
  case 1:
    if (*(int *)((int)this + 0x564) == 1) {
      *(undefined4 *)((int)this + 0x564) = 0;
      thunk_FUN_004602b0(this);
      *(undefined4 *)((int)this + 0x580) = 0;
      *(undefined4 *)((int)this + 0xb7) = 3;
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x554),(int)*(short *)((int)this + 0x556),
                         *(short *)((int)this + 0x558) + 1);
      thunk_FUN_00460260(this,0);
      goto switchD_0046f604_caseD_2;
    }
    sVar17 = *(short *)((int)this + 0x554);
    sVar18 = *(short *)((int)this + 0x558);
    sVar19 = *(short *)((int)this + 0x556);
    if (((((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar19 < 0)) ||
          ((DAT_007fb242 <= sVar19 || (sVar18 < 0)))) || (DAT_007fb244 <= sVar18)) ||
        ((piVar15 = *(int **)(DAT_007fb248 +
                             ((int)sVar18 * (int)DAT_007fb246 + (int)sVar19 * (int)DAT_007fb240 +
                             (int)sVar17) * 8), piVar15 == (int *)0x0 ||
         (iVar5 = (**(code **)(*piVar15 + 0x2c))(), iVar5 != 0x33)))) ||
       (piVar15[9] != *(int *)((int)this + 0x24))) goto LAB_0046fd37;
    iVar5 = thunk_FUN_004e1eb0(piVar15,(int)*(short *)((int)this + 0x41),
                               (int)*(short *)((int)this + 0x43),(int)*(short *)((int)this + 0x45));
    *(int *)((int)this + 0x568) = iVar5;
    if ((iVar5 == -1) ||
       (bVar3 = thunk_FUN_004908a0(this,piVar15,iVar5), CONCAT31(extraout_var,bVar3) != 1))
    goto switchD_0046f604_caseD_2;
    thunk_FUN_004602b0(this);
    *(int *)((int)this + 0x55a) = piVar15[6];
    thunk_FUN_004e1fb0(piVar15,*(int *)((int)this + 0x568),*(undefined4 *)((int)this + 0x18));
    iVar6 = (int)*(short *)((int)this + 0x570);
    iVar23 = (int)*(short *)((int)this + 0x56e);
    iVar5 = (int)*(short *)((int)this + 0x56c);
    *(undefined4 *)((int)this + 0x580) = 3;
    break;
  default:
    goto switchD_0046f604_caseD_2;
  case 3:
    iVar5 = thunk_FUN_00490570((int)this);
    if (iVar5 == 1) {
      uVar13 = (undefined2)((uint)((int)this + 0x562) >> 0x10);
      uVar4 = (undefined2)((uint)((int)this + 0x560) >> 0x10);
      uVar11 = (undefined2)((uint)((int)this + 0x55e) >> 0x10);
      thunk_FUN_0048dfd0(CONCAT22(uVar11,*(undefined2 *)((int)this + 0x47)),
                         CONCAT22(uVar4,*(undefined2 *)((int)this + 0x49)),
                         CONCAT22(uVar13,*(undefined2 *)((int)this + 0x4b)),
                         CONCAT22(uVar11,*(undefined2 *)((int)this + 0x554)),
                         CONCAT22(uVar4,*(undefined2 *)((int)this + 0x556)),
                         (int *)CONCAT22(uVar13,*(short *)((int)this + 0x558) + 1),1,
                         (short *)((int)this + 0x55e),(short *)((int)this + 0x560),
                         (short *)((int)this + 0x562));
    }
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x55e),(int)*(short *)((int)this + 0x560),
                       (int)*(short *)((int)this + 0x562));
    thunk_FUN_00460260(this,0);
    goto switchD_0046f604_caseD_2;
  case -1:
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907,0,0,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x2907);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
LAB_0046fb98:
  thunk_FUN_00481520(this,iVar5,iVar23,iVar6);
  thunk_FUN_00460260(this,0);
switchD_0046f604_caseD_2:
  iVar5 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
}

