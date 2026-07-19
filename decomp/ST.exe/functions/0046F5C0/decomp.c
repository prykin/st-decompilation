
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ToDok */

int __thiscall STBoatC::ToDok(STBoatC *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *this_00;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 uVar15;
  undefined2 extraout_var_01;
  uint uVar13;
  STBoatC *pSVar14;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  int iVar16;
  undefined2 extraout_var_08;
  int *piVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  short sVar26;
  byte bVar27;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  STBoatC *local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar14 = this + 0x2cc;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    if (*(int *)(this + 0x716) == *(int *)(this + 0x712)) {
      return 0;
    }
    sVar19 = *(short *)(this + 0x3a0);
    sVar20 = *(short *)(this + 0x3a4);
    sVar21 = *(short *)(this + 0x3a2);
    if (sVar19 < 0) {
      return 0;
    }
    if (DAT_007fb240 <= sVar19) {
      return 0;
    }
    if (sVar21 < 0) {
      return 0;
    }
    if (DAT_007fb242 <= sVar21) {
      return 0;
    }
    if (sVar20 < 0) {
      return 0;
    }
    if (DAT_007fb244 <= sVar20) {
      return 0;
    }
    piVar17 = *(int **)(DAT_007fb248 +
                       ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                       (int)sVar19) * 8);
    if (piVar17 == (int *)0x0) {
      return 0;
    }
    iVar6 = (**(code **)(*piVar17 + 0x2c))();
    if (iVar6 != 0x33) {
      return 0;
    }
    if (piVar17[9] != *(int *)(this + 0x24)) {
      return 0;
    }
    *(undefined4 *)(this + 0x580) = 0;
    *(undefined2 *)(this + 0x554) = *(undefined2 *)(this + 0x3a0);
    *(undefined2 *)(this + 0x556) = *(undefined2 *)(this + 0x3a2);
    *(undefined2 *)(this + 0x558) = *(undefined2 *)(this + 0x3a4);
    *(undefined4 *)(this + 0x57c) = 0;
    *(undefined4 *)(this + 0x578) = 0;
    *(undefined4 *)(this + 0x574) = 0;
    sVar19 = *(short *)(this + 0x558);
    sVar21 = *(short *)(this + 0x556);
    sVar20 = *(short *)(this + 0x554);
    *(undefined4 *)(this + 0xb7) = 3;
LAB_00470e23:
    thunk_FUN_00481520(this,(int)sVar20,(int)sVar21,sVar19 + 1);
LAB_00470e2b:
    thunk_FUN_00460260(this,0);
switchD_0046fd75_caseD_2:
    iVar6 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  }
  iVar6 = *(int *)(this + 0x580);
  if (iVar6 == 0) {
    iVar6 = thunk_FUN_00460260(this,2);
    switch(iVar6) {
    case 0:
      if (*(int *)(this + 0x564) == 1) {
        iVar25 = (int)*(short *)(this + 0x556);
        iVar6 = (int)*(short *)(this + 0x554);
        iVar7 = *(short *)(this + 0x558) + 1;
        *(undefined4 *)(this + 0x564) = 0;
        break;
      }
      sVar19 = *(short *)(this + 0x554);
      sVar20 = *(short *)(this + 0x558);
      sVar21 = *(short *)(this + 0x556);
      if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
         (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))) {
        piVar17 = (int *)0x0;
      }
      else {
        piVar17 = *(int **)(DAT_007fb248 +
                           ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                           (int)sVar19) * 8);
      }
      iVar6 = thunk_FUN_00490570((int)this);
      if (iVar6 != 1) {
LAB_0046f794:
        if (((piVar17 != (int *)0x0) && (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 == 0x33))
           && (piVar17[9] == *(int *)(this + 0x24))) {
          *(undefined4 *)(this + 0x580) = 2;
LAB_0046f98f:
          iVar6 = Defence(this,0);
          return (-(uint)(iVar6 != -1) & 3) - 1;
        }
LAB_0046f888:
        thunk_FUN_004602b0((int *)this);
        *(undefined4 *)(this + 0xb7) = 0;
        iVar6 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar6 != 0);
      }
      iVar6 = extraout_ECX;
      uVar5 = extraout_var_04;
      if (((piVar17 != (int *)0x0) &&
          (iVar25 = (**(code **)(*piVar17 + 0x2c))(), iVar6 = extraout_ECX_00,
          uVar5 = extraout_var_05, iVar25 == 0x33)) &&
         (iVar6 = piVar17[9], iVar6 == *(int *)(this + 0x24))) {
        iVar25 = thunk_FUN_004e1eb0(piVar17,(int)*(short *)(this + 0x41),
                                    (int)*(short *)(this + 0x43),(int)*(short *)(this + 0x45));
        *(int *)(this + 0x568) = iVar25;
        iVar6 = extraout_ECX_01;
        uVar5 = extraout_var_06;
        if (iVar25 != -1) goto LAB_0046f794;
      }
      uVar15 = (undefined2)((uint)iVar6 >> 0x10);
      uVar12 = (undefined2)((uint)(this + 0x55e) >> 0x10);
      thunk_FUN_0048dfd0(CONCAT22(uVar15,*(undefined2 *)(this + 0x47)),
                         CONCAT22(uVar12,*(undefined2 *)(this + 0x49)),
                         CONCAT22(uVar5,*(undefined2 *)(this + 0x4b)),
                         CONCAT22(uVar15,*(undefined2 *)(this + 0x554)),
                         CONCAT22(uVar12,*(undefined2 *)(this + 0x556)),
                         (int *)CONCAT22(uVar5,*(short *)(this + 0x558) + 1),1,
                         (short *)(this + 0x55e),(short *)(this + 0x560),(short *)(this + 0x562));
      iVar7 = (int)*(short *)(this + 0x562);
      iVar25 = (int)*(short *)(this + 0x560);
      iVar6 = (int)*(short *)(this + 0x55e);
      *(undefined4 *)(this + 0x580) = 1;
      *(undefined4 *)(this + 0xb7) = 0;
      break;
    case 1:
      if (*(int *)(this + 0x564) != 1) {
        sVar19 = *(short *)(this + 0x554);
        sVar20 = *(short *)(this + 0x558);
        sVar21 = *(short *)(this + 0x556);
        if ((((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
             ((sVar21 < DAT_007fb242 && (-1 < sVar20)))) &&
            ((sVar20 < DAT_007fb244 &&
             ((piVar17 = *(int **)(DAT_007fb248 +
                                  ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                  + (int)sVar19) * 8), piVar17 != (int *)0x0 &&
              (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 == 0x33)))))) &&
           (piVar17[9] == *(int *)(this + 0x24))) goto switchD_0046f604_caseD_2;
        goto LAB_0046f888;
      }
      *(undefined4 *)(this + 0x564) = 0;
      thunk_FUN_004602b0((int *)this);
    case 3:
      iVar25 = (int)*(short *)(this + 0x556);
      iVar6 = (int)*(short *)(this + 0x554);
      iVar7 = *(short *)(this + 0x558) + 1;
      break;
    default:
      goto switchD_0046f604_caseD_2;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x28ac,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__move_to_dock_err_007aac3c);
      if (iVar6 != 0) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = 0x28ac;
LAB_00470c46:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      *(int *)(this + 0x574) = *(int *)(this + 0x574) + 1;
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (*(int *)(this + 0x82e) != 0) {
        return 2;
      }
      if (*(int *)(this + 0x48b) != 0xffff) {
        return 2;
      }
      if (*(int *)(this + 0x574) % 0x32 != 1) {
        return 2;
      }
      sVar19 = *(short *)(this + 0x554);
      sVar20 = *(short *)(this + 0x558);
      sVar21 = *(short *)(this + 0x556);
      if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
          ((-1 < sVar21 && ((sVar21 < DAT_007fb242 && (-1 < sVar20)))))) &&
         ((sVar20 < DAT_007fb244 &&
          (((piVar17 = *(int **)(DAT_007fb248 +
                                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                                (int)sVar19) * 8), piVar17 != (int *)0x0 &&
            (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 == 0x33)) &&
           (piVar17[9] == *(int *)(this + 0x24))))))) {
        iVar6 = thunk_FUN_004e1eb0(piVar17,(int)*(short *)(this + 0x41),(int)*(short *)(this + 0x43)
                                   ,(int)*(short *)(this + 0x45));
        *(int *)(this + 0x568) = iVar6;
        if (iVar6 == -1) {
          return 2;
        }
        bVar4 = thunk_FUN_004908a0(this,piVar17,iVar6);
        if (CONCAT31(extraout_var_00,bVar4) != 1) {
          return 2;
        }
        *(int *)(this + 0x55a) = piVar17[6];
        thunk_FUN_004e1fb0(piVar17,*(int *)(this + 0x568),*(undefined4 *)(this + 0x18));
        sVar21 = *(short *)(this + 0x570);
        sVar20 = *(short *)(this + 0x56e);
        sVar19 = *(short *)(this + 0x56c);
        *(undefined4 *)(this + 0x580) = 3;
        *(undefined4 *)(this + 0xb7) = 0;
LAB_00470bfe:
        thunk_FUN_00481520(this,(int)sVar19,(int)sVar20,(int)sVar21);
        thunk_FUN_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      thunk_FUN_004602b0((int *)this);
LAB_0046fd3e:
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar6 != 0);
    }
    if (iVar6 == 3) {
      iVar6 = thunk_FUN_00460260(this,2);
      switch(iVar6) {
      case 0:
        if (*(int *)(this + 0x564) != 1) {
          sVar19 = *(short *)(this + 0x554);
          sVar20 = *(short *)(this + 0x558);
          sVar21 = *(short *)(this + 0x556);
          if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) &&
              ((-1 < sVar21 && ((sVar21 < DAT_007fb242 && (-1 < sVar20)))))) &&
             ((sVar20 < DAT_007fb244 &&
              ((((piVar17 = *(int **)(DAT_007fb248 +
                                     ((int)sVar20 * (int)DAT_007fb246 +
                                      (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                 piVar17 != (int *)0x0 && (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 == 0x33))
                && (piVar17[0x12d] == 0)) &&
               ((*(int *)((int)piVar17 + 0x245) != 6 && (piVar17[9] == *(int *)(this + 0x24)))))))))
          {
            if ((*(short *)(this + 0x47) == *(short *)(this + 0x56c)) &&
               ((*(short *)(this + 0x49) == *(short *)(this + 0x56e) &&
                (*(short *)(this + 0x4b) == *(short *)(this + 0x570))))) {
              *(undefined4 *)(this + 0x580) = 4;
              *(undefined4 *)(this + 0x584) = 0;
              iVar6 = (**(code **)(*(int *)this + 0xd8))();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(piVar17,*(int *)(this + 0x568),*(int *)(this + 0x18));
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (*(int *)(this + 0x564) != 1) {
          thunk_FUN_004602b0((int *)this);
          sVar19 = *(short *)(this + 0x554);
          sVar20 = *(short *)(this + 0x558);
          sVar21 = *(short *)(this + 0x556);
          if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
             (((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) ||
              ((DAT_007fb244 <= sVar20 ||
               (((piVar17 = *(int **)(DAT_007fb248 +
                                     ((int)sVar20 * (int)DAT_007fb246 +
                                      (int)sVar21 * (int)DAT_007fb240 + (int)sVar19) * 8),
                 piVar17 == (int *)0x0 || (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 != 0x33))
                || (piVar17[9] != *(int *)(this + 0x24))))))))) goto LAB_004700a6;
          goto LAB_00470071;
        }
        thunk_FUN_004602b0((int *)this);
        break;
      default:
        goto switchD_0046fd75_caseD_2;
      case 3:
        sVar19 = *(short *)(this + 0x554);
        sVar20 = *(short *)(this + 0x558);
        sVar21 = *(short *)(this + 0x556);
        if (((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
             ((sVar21 < 0 || ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))))) ||
            (DAT_007fb244 <= sVar20)) ||
           (((piVar17 = *(int **)(DAT_007fb248 +
                                 ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                 + (int)sVar19) * 8), piVar17 == (int *)0x0 ||
             (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 != 0x33)) ||
            (piVar17[9] != *(int *)(this + 0x24))))) {
LAB_004700a6:
          iVar6 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar6 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,piVar17,*(int *)(this + 0x568));
        thunk_FUN_00481520(this,(int)*(short *)(this + 0x56c),(int)*(short *)(this + 0x56e),
                           (int)*(short *)(this + 0x570));
        goto LAB_00470e2b;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2977,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__move_to_depot_2_e_007aabd8);
        if (iVar6 != 0) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = 0x2977;
        goto LAB_00470c46;
      }
      sVar19 = *(short *)(this + 0x558);
      sVar21 = *(short *)(this + 0x556);
      sVar20 = *(short *)(this + 0x554);
      *(undefined4 *)(this + 0x564) = 0;
      *(undefined4 *)(this + 0x580) = 0;
      *(undefined4 *)(this + 0xb7) = 3;
      goto LAB_00470e23;
    }
    if (iVar6 == 4) {
      if (*(int *)(this + 0x584) == 0) {
        iVar7 = (ushort)(*(short *)(this + 0x558) * 200) + 300;
        iVar25 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)(this + 0x556) + 1) * 0xc9;
        iVar10 = CONCAT22((short)((uint)iVar25 >> 0x10),
                          *(short *)(this + 0x568) + *(short *)(this + 0x554));
        iVar6 = iVar10 * 0xc9 + 100;
        uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
        uVar5 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                           CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x43)),
                           CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar6,iVar25,iVar7);
        *(undefined2 *)(this + 0x572) = uVar5;
        *(undefined4 *)(this + 0x584) = 1;
      }
      if (*(int *)(this + 0x584) == 1) {
        uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x572));
        uVar8 = thunk_FUN_00417910(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_PDOCK_007aabb4);
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d4);
            return 0xffff;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar8 == 0) {
LAB_004707ad:
          *(undefined4 *)(this + 0x584) = 2;
          goto switchD_0046f604_caseD_2;
        }
      }
      if (*(int *)(this + 0x584) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),
                           (*(short *)(this + 0x568) + *(short *)(this + 0x554)) * 0xc9 + 100,
                           (*(short *)(this + 0x556) + 1) * 0xc9,
                           *(short *)(this + 0x558) * 200 + 300,(byte)this[0x61]);
        *(undefined4 *)(this + 0x584) = 3;
      }
      if (*(int *)(this + 0x584) == 3) {
        local_c = thunk_FUN_00415ed0(this,&local_18,&local_14);
        uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this + 0x1c) = uVar8;
        iVar6 = (uVar8 >> 0x10) % 7 - 3;
        uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this + 0x1c) = uVar8;
        uVar1 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
        *(uint *)(this + 0x1c) = uVar1;
        local_10 = (uVar1 >> 0x10) % 7 - 3;
        if ((*(int *)(this + 0x74a) <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (param_1 = 0, this[0x2bf] != (STBoatC)0x0)) {
          local_8 = this + 0x2b3;
          do {
            puVar9 = (undefined4 *)
                     thunk_FUN_0041dc40(local_28,*(undefined4 *)local_8,*(undefined2 *)(local_8 + 4)
                                        ,*(short *)(this + 0x6c));
            uVar2 = *puVar9;
            bVar27 = 0;
            sVar26 = 0;
            iVar25 = -1;
            local_1c = *(short *)(puVar9 + 1);
            sVar24 = 0;
            sVar23 = 0;
            sVar22 = 0;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            local_20 = uVar2;
            if (DAT_0080732c == 1) {
              sVar19 = 0;
              sVar20 = 0;
              sVar21 = 0;
              sVar22 = 0;
              sVar23 = 0;
              sVar24 = 0;
              sVar26 = 0;
              bVar27 = 0;
              lVar18 = Library::MSVCRT::__ftol();
              iVar16 = (int)local_1c + *(short *)(this + 0x45) + local_10 + (int)(short)lVar18;
              iVar7 = (int)*(short *)(this + 0x43) - (int)local_20._2_2_;
              iVar10 = (int)(short)local_20 + iVar6 + *(short *)(this + 0x41);
            }
            else {
              iVar16 = (int)local_1c + local_10 + *(short *)(this + 0x45);
              local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
              iVar7 = (int)*(short *)(this + 0x43) - (int)local_20._2_2_;
              local_20._0_2_ = (short)uVar2;
              iVar10 = (int)(short)local_20 + iVar6 + *(short *)(this + 0x41);
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar16,sVar19,
                       sVar20,sVar21,sVar22,sVar23,sVar24,iVar25,sVar26,bVar27);
            local_8 = local_8 + 6;
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this[0x2bf]);
        }
        if (local_c == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29fe,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__TODOK_PDOCK_2_007aab8c);
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29ff);
            return 0xffff;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (local_c == 0) {
          *(undefined4 *)(this + 0x580) = 5;
          *(undefined4 *)(this + 0x574) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar8;
          *(undefined4 *)(this + 0x584) = 0;
          *(uint *)(this + 0x578) = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto switchD_0046f604_caseD_2;
    }
    if (iVar6 == 5) {
      sVar19 = *(short *)(this + 0x554);
      sVar20 = *(short *)(this + 0x558);
      sVar21 = *(short *)(this + 0x556);
      if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < sVar21)) &&
         (((sVar21 < DAT_007fb242 && (-1 < sVar20)) &&
          ((sVar20 < DAT_007fb244 &&
           ((this_00 = *(void **)(DAT_007fb248 +
                                 ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240
                                 + (int)sVar19) * 8), this_00 != (void *)0x0 &&
            (*(int *)((int)this_00 + 0x18) == *(int *)(this + 0x55a))))))))) {
        if (*(int *)(DAT_00802a38 + 0xe4) == *(int *)(this + 0x574) + *(int *)(this + 0x578)) {
          (**(code **)(*(int *)this + 0x90))(3,0x363);
          iVar6 = (*(short *)(this + 0x237) * -7) / 10;
          uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar8;
          iVar25 = (*(short *)(this + 0x237) * -2) / 10;
          uVar1 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar1;
          local_20 = CONCAT22((short)((uVar1 >> 0x10) %
                                     (((*(short *)(this + 0x237) * 2) / 10 - iVar25) + 1U)) +
                              (short)iVar25,
                              (short)((uVar8 >> 0x10) %
                                     (((*(short *)(this + 0x237) * 7) / 10 - iVar6) + 1U)) +
                              (short)iVar6);
          puVar9 = (undefined4 *)thunk_FUN_0041dc40(local_28,local_20,0,*(short *)(this + 0x6c));
          uVar2 = *puVar9;
          local_1c = *(short *)(puVar9 + 1);
          local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
          iVar25 = (int)local_20._2_2_;
          local_20._0_2_ = (short)uVar2;
          iVar6 = (int)(short)local_20;
          local_20 = uVar2;
          thunk_FUN_00637930(*(uint *)(this + 0x1ed),0,*(short *)(this + 0x41) + iVar6,
                             *(short *)(this + 0x43) + iVar25,*(short *)(this + 0x45) + -0x28,0,0);
          *(undefined4 *)(this + 0x574) = *(undefined4 *)(DAT_00802a38 + 0xe4);
          uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(this + 0x1c) = uVar8;
          *(uint *)(this + 0x578) = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
        thunk_FUN_004e20d0(this_00,*(int *)(this + 0x568),*(int *)(this + 0x18),
                           *(int *)(this + 0x6f7),*(undefined4 *)(this + 0x716));
        iVar6 = thunk_FUN_004e2340(this_00,*(uint *)(this + 0x568),*(int *)(this + 0x18),
                                   (undefined4 *)0x0);
        *(int *)(this + 0x716) = iVar6;
        if (iVar6 != *(int *)(this + 0x712)) goto switchD_0046fd75_caseD_2;
      }
      thunk_FUN_0048dba0((int)this);
      *(undefined4 *)(this + 0x580) = 6;
      iVar6 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (iVar6 != 6) {
      if (iVar6 == 7) {
        iVar6 = thunk_FUN_00460260(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a8c,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_MOVEWAIT_e_007aab18);
          if (iVar6 != 0) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar6 = 0x2a8c;
          goto LAB_00470c46;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 != 3) {
          return 2;
        }
        piVar11 = (int *)(uint)*(ushort *)(this + 0x4b);
        iVar7 = CONCAT22(extraout_var_02,*(undefined2 *)(this + 0x49));
        iVar10 = CONCAT22((short)((uint)(this + 0x55e) >> 0x10),*(undefined2 *)(this + 0x47));
        iVar16 = 3;
        iVar6 = iVar10;
        iVar25 = iVar7;
        piVar17 = piVar11;
      }
      else {
        if (iVar6 != 8) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ab3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok___incorrect_entry_007aaaf0);
          if (iVar6 == 0) {
            return -1;
          }
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar6 = thunk_FUN_00460260(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 != 3) {
          return 2;
        }
        piVar17 = (int *)CONCAT22(extraout_var_03,*(undefined2 *)(this + 0x4b));
        iVar25 = CONCAT22(extraout_var_08,*(undefined2 *)(this + 0x49));
        iVar16 = 1;
        iVar6 = CONCAT22(extraout_var_03,*(undefined2 *)(this + 0x47));
        piVar11 = (int *)CONCAT22(extraout_var_08,*(undefined2 *)(this + 0x562));
        iVar7 = CONCAT22(extraout_var_03,*(undefined2 *)(this + 0x560));
        iVar10 = CONCAT22(extraout_var_08,*(undefined2 *)(this + 0x55e));
      }
      thunk_FUN_0048dfd0(iVar10,iVar7,(uint)piVar11,iVar6,iVar25,piVar17,iVar16,
                         (short *)(this + 0x55e),(short *)(this + 0x560),(short *)(this + 0x562));
      sVar21 = *(short *)(this + 0x562);
      sVar20 = *(short *)(this + 0x560);
      sVar19 = *(short *)(this + 0x55e);
      goto LAB_00470bfe;
    }
    iVar6 = *(int *)(this + 0x57c) + 1;
    *(int *)(this + 0x57c) = iVar6;
    if (iVar6 < 0x1e) goto switchD_0046f604_caseD_2;
    if (*(int *)(this + 0x584) == 0) {
      iVar25 = (ushort)(*(short *)(this + 0x570) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x56e) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar25 >> 0x10),*(short *)(this + 0x56c) * 0xc9) + 100;
      uVar5 = (undefined2)((uint)iVar7 >> 0x10);
      uVar5 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar5,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar5,*(undefined2 *)(this + 0x45)),iVar6,iVar7,iVar25);
      *(undefined2 *)(this + 0x572) = uVar5;
      *(undefined4 *)(this + 0x584) = 1;
    }
    if (*(int *)(this + 0x584) == 1) {
      uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x572));
      uVar8 = thunk_FUN_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a42,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__TODOK_ODOCK_007aab68);
        if (iVar6 == 0) {
          RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a43)
          ;
          return 0xffff;
        }
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      if (uVar8 != 0) goto switchD_0046f604_caseD_2;
      goto LAB_004707ad;
    }
    if (*(int *)(this + 0x584) == 2) {
      thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                         *(short *)(this + 0x45),*(short *)(this + 0x56c) * 0xc9 + 100,
                         *(short *)(this + 0x56e) * 0xc9 + 100,*(short *)(this + 0x570) * 200 + 100,
                         (byte)this[0x61]);
      *(undefined4 *)(this + 0x584) = 3;
    }
    if (*(int *)(this + 0x584) != 3) goto switchD_0046fd75_caseD_2;
    local_c = thunk_FUN_00415ed0(this,&local_10,&local_14);
    uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(this + 0x1c) = uVar8;
    iVar6 = (uVar8 >> 0x10) % 7 - 3;
    uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(this + 0x1c) = uVar8;
    uVar1 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)(this + 0x1c) = uVar1;
    uVar13 = *(uint *)(this + 0x74a);
    local_18 = (uVar1 >> 0x10) % 7 - 3;
    if (((int)uVar13 <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
       (param_1 = 0, this[0x2bf] != (STBoatC)0x0)) {
      local_8 = this + 0x2b3;
      do {
        puVar9 = (undefined4 *)
                 thunk_FUN_0041dc40(local_28,*(undefined4 *)local_8,*(undefined2 *)(local_8 + 4),
                                    *(short *)(this + 0x6c));
        uVar2 = *puVar9;
        bVar27 = 0;
        sVar26 = 0;
        iVar25 = -1;
        local_1c = *(short *)(puVar9 + 1);
        sVar24 = 0;
        sVar23 = 0;
        sVar22 = 0;
        sVar21 = 0;
        sVar20 = 0;
        sVar19 = 0;
        local_20 = uVar2;
        if (DAT_0080732c == 1) {
          sVar19 = 0;
          sVar20 = 0;
          sVar21 = 0;
          sVar22 = 0;
          sVar23 = 0;
          sVar24 = 0;
          sVar26 = 0;
          bVar27 = 0;
          lVar18 = Library::MSVCRT::__ftol();
          iVar16 = (int)local_1c + *(short *)(this + 0x45) + local_18 + (int)(short)lVar18;
          iVar7 = (int)*(short *)(this + 0x43) - (int)local_20._2_2_;
          iVar10 = (int)(short)local_20 + iVar6 + *(short *)(this + 0x41);
        }
        else {
          iVar16 = (int)local_1c + local_18 + *(short *)(this + 0x45);
          local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
          iVar7 = (int)*(short *)(this + 0x43) - (int)local_20._2_2_;
          local_20._0_2_ = (short)uVar2;
          iVar10 = (int)(short)local_20 + iVar6 + *(short *)(this + 0x41);
        }
        TraksClassTy::TraksCreate
                  (DAT_00802a7c,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar16,sVar19,sVar20,
                   sVar21,sVar22,sVar23,sVar24,iVar25,sVar26,bVar27);
        local_8 = local_8 + 6;
        param_1 = param_1 + 1;
        uVar13 = (uint)(byte)this[0x2bf];
      } while (param_1 < (int)uVar13);
    }
    if (local_c == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6c,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__TODOK_ODOCK_2_007aab44);
      if (iVar6 != 0) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      iVar6 = 0x2a6d;
      goto LAB_00470c46;
    }
    if (local_c != 0) goto switchD_0046fd75_caseD_2;
    sVar19 = *(short *)(this + 0x554);
    iVar6 = 0;
    sVar20 = *(short *)(this + 0x558);
    pSVar14 = (STBoatC *)CONCAT22((short)(uVar13 >> 0x10),sVar20);
    sVar21 = *(short *)(this + 0x556);
    if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
       (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)))) {
LAB_00470b14:
      uVar8 = CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x4b));
      iVar6 = CONCAT22((short)((uint)pSVar14 >> 0x10),*(undefined2 *)(this + 0x49));
      iVar25 = CONCAT22((short)((uint)(this + 0x55e) >> 0x10),*(undefined2 *)(this + 0x47));
      *(undefined4 *)(this + 0x580) = 7;
      thunk_FUN_0048dfd0(iVar25,iVar6,uVar8,iVar25,iVar6,(int *)uVar8,3,(short *)(this + 0x55e),
                         (short *)(this + 0x560),(short *)(this + 0x562));
    }
    else {
      pSVar14 = (STBoatC *)
                ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 + (int)sVar19);
      iVar6 = *(int *)(DAT_007fb248 + (int)pSVar14 * 8);
      if ((iVar6 == 0) ||
         (pSVar14 = *(STBoatC **)(iVar6 + 0x18), pSVar14 != *(STBoatC **)(this + 0x55a)))
      goto LAB_00470b14;
      pSVar14 = this + 0x55e;
      if (*(int *)(iVar6 + 0x42c) != 0) {
        if (pSVar14 != (STBoatC *)0x0) {
          *(undefined4 *)pSVar14 = *(undefined4 *)(iVar6 + 0x430);
        }
        if (this + 0x560 != (STBoatC *)0x0) {
          pSVar14 = *(STBoatC **)(iVar6 + 0x434);
          *(STBoatC **)(this + 0x560) = pSVar14;
        }
        if (this + 0x562 != (STBoatC *)0x0) {
          *(undefined4 *)(this + 0x562) = *(undefined4 *)(iVar6 + 0x438);
        }
      }
      if (*(int *)(iVar6 + 0x42c) != 1) goto LAB_00470b14;
      *(undefined4 *)(this + 0x580) = 8;
    }
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x55e),(int)*(short *)(this + 0x560),
                       (int)*(short *)(this + 0x562));
    goto LAB_00470e2b;
  }
  iVar6 = thunk_FUN_00460260(this,2);
  switch(iVar6) {
  case 0:
    iVar6 = thunk_FUN_00490570((int)this);
    if (iVar6 != 1) {
      *(undefined4 *)(this + 0x580) = 2;
      goto LAB_0046f98f;
    }
    uVar5 = (undefined2)((uint)(this + 0x55e) >> 0x10);
    thunk_FUN_0048dfd0(CONCAT22(extraout_var_01,*(undefined2 *)(this + 0x47)),
                       CONCAT22(uVar5,*(undefined2 *)(this + 0x49)),
                       CONCAT22(extraout_var_07,*(undefined2 *)(this + 0x4b)),
                       CONCAT22(extraout_var_01,*(undefined2 *)(this + 0x554)),
                       CONCAT22(uVar5,*(undefined2 *)(this + 0x556)),
                       (int *)CONCAT22(extraout_var_07,*(short *)(this + 0x558) + 1),1,
                       (short *)(this + 0x55e),(short *)(this + 0x560),(short *)(this + 0x562));
    iVar7 = (int)*(short *)(this + 0x562);
    iVar25 = (int)*(short *)(this + 0x560);
    iVar6 = (int)*(short *)(this + 0x55e);
    break;
  case 1:
    if (*(int *)(this + 0x564) == 1) {
      *(undefined4 *)(this + 0x564) = 0;
      thunk_FUN_004602b0((int *)this);
      *(undefined4 *)(this + 0x580) = 0;
      *(undefined4 *)(this + 0xb7) = 3;
      thunk_FUN_00481520(this,(int)*(short *)(this + 0x554),(int)*(short *)(this + 0x556),
                         *(short *)(this + 0x558) + 1);
      thunk_FUN_00460260(this,0);
      goto switchD_0046f604_caseD_2;
    }
    sVar19 = *(short *)(this + 0x554);
    sVar20 = *(short *)(this + 0x558);
    sVar21 = *(short *)(this + 0x556);
    if (((((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
          ((DAT_007fb242 <= sVar21 || (sVar20 < 0)))) || (DAT_007fb244 <= sVar20)) ||
        ((piVar17 = *(int **)(DAT_007fb248 +
                             ((int)sVar20 * (int)DAT_007fb246 + (int)sVar21 * (int)DAT_007fb240 +
                             (int)sVar19) * 8), piVar17 == (int *)0x0 ||
         (iVar6 = (**(code **)(*piVar17 + 0x2c))(), iVar6 != 0x33)))) ||
       (piVar17[9] != *(int *)(this + 0x24))) goto LAB_0046fd37;
    iVar6 = thunk_FUN_004e1eb0(piVar17,(int)*(short *)(this + 0x41),(int)*(short *)(this + 0x43),
                               (int)*(short *)(this + 0x45));
    *(int *)(this + 0x568) = iVar6;
    if ((iVar6 == -1) ||
       (bVar4 = thunk_FUN_004908a0(this,piVar17,iVar6), CONCAT31(extraout_var,bVar4) != 1))
    goto switchD_0046f604_caseD_2;
    thunk_FUN_004602b0((int *)this);
    *(int *)(this + 0x55a) = piVar17[6];
    thunk_FUN_004e1fb0(piVar17,*(int *)(this + 0x568),*(undefined4 *)(this + 0x18));
    iVar7 = (int)*(short *)(this + 0x570);
    iVar25 = (int)*(short *)(this + 0x56e);
    iVar6 = (int)*(short *)(this + 0x56c);
    *(undefined4 *)(this + 0x580) = 3;
    break;
  default:
    goto switchD_0046f604_caseD_2;
  case 3:
    iVar6 = thunk_FUN_00490570((int)this);
    if (iVar6 == 1) {
      uVar15 = (undefined2)((uint)(this + 0x562) >> 0x10);
      uVar5 = (undefined2)((uint)(this + 0x560) >> 0x10);
      uVar12 = (undefined2)((uint)(this + 0x55e) >> 0x10);
      thunk_FUN_0048dfd0(CONCAT22(uVar12,*(undefined2 *)(this + 0x47)),
                         CONCAT22(uVar5,*(undefined2 *)(this + 0x49)),
                         CONCAT22(uVar15,*(undefined2 *)(this + 0x4b)),
                         CONCAT22(uVar12,*(undefined2 *)(this + 0x554)),
                         CONCAT22(uVar5,*(undefined2 *)(this + 0x556)),
                         (int *)CONCAT22(uVar15,*(short *)(this + 0x558) + 1),1,
                         (short *)(this + 0x55e),(short *)(this + 0x560),(short *)(this + 0x562));
    }
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x55e),(int)*(short *)(this + 0x560),
                       (int)*(short *)(this + 0x562));
    thunk_FUN_00460260(this,0);
    goto switchD_0046f604_caseD_2;
  case -1:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907,0,0,&DAT_007a4ccc,
                               s_STBoatC__ToDok__correct_move_to_d_007aac08);
    if (iVar6 == 0) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
LAB_0046fb98:
  thunk_FUN_00481520(this,iVar6,iVar25,iVar7);
  thunk_FUN_00460260(this,0);
switchD_0046f604_caseD_2:
  iVar6 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

