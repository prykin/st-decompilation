
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Capture */

int __thiscall STBoatC::Capture(STBoatC *this,int param_1)

{
  code *pcVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  uint uVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined3 uVar12;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar13;
  short sVar14;
  STBoatC *pSVar15;
  longlong lVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  byte bVar22;
  undefined4 uVar23;
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_24 [2];
  undefined4 local_1c;
  short local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    pSVar15 = this + 0x2cc;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar15 = 0;
      pSVar15 = pSVar15 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    *(undefined2 *)(this + 0x5fd) = *(undefined2 *)(this + 0x3ed);
    this[0x5fc] = this[0x3ec];
    *(undefined4 *)(this + 0x5ff) = *(undefined4 *)(this + 0x3ef);
    iVar4 = thunk_FUN_00492b20((int)this);
    if (iVar4 != 1) {
      return 0;
    }
    iVar6 = (int)*(short *)(this + 0x607);
    iVar13 = (int)*(short *)(this + 0x605);
    iVar4 = (int)*(short *)(this + 0x603);
    *(undefined4 *)(this + 0x611) = 0;
    goto LAB_00476dba;
  }
  iVar4 = *(int *)(this + 0x611);
  if (iVar4 == 0) {
    iVar4 = thunk_FUN_00460260(this,2);
    switch(iVar4) {
    case 0:
      iVar4 = thunk_FUN_00492b20((int)this);
      if (iVar4 != 0) {
        if (((*(short *)(this + 0x603) == *(short *)(this + 0x47)) &&
            (*(short *)(this + 0x605) == *(short *)(this + 0x49))) &&
           (*(short *)(this + 0x607) == *(short *)(this + 0x4b))) {
          *(undefined4 *)(this + 0x611) = 1;
          return 2;
        }
        iVar6 = (int)*(short *)(this + 0x607);
        iVar13 = (int)*(short *)(this + 0x605);
        iVar4 = (int)*(short *)(this + 0x603);
LAB_00476dba:
        thunk_FUN_00481520(this,iVar4,iVar13,iVar6);
        iVar4 = thunk_FUN_00460260(this,0);
        return (-(uint)(iVar4 != -1) & 3) - 1;
      }
      break;
    case 1:
      piVar5 = (int *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,CONCAT31((int3)((uint)extraout_EDX >> 8),this[0x5fc]),
                                 CONCAT22(extraout_var,*(undefined2 *)(this + 0x5fd)),1);
      if (((piVar5 != (int *)0x0) && (piVar5[6] == *(int *)(this + 0x5ff))) &&
         (iVar4 = (**(code **)(*piVar5 + 0x108))(*(undefined4 *)(this + 0x24)), iVar4 != 0)) {
        return 2;
      }
      thunk_FUN_004602b0((int *)this);
      break;
    default:
      return 2;
    case 3:
      iVar4 = thunk_FUN_00492b20((int)this);
      if (iVar4 == 1) {
        iVar6 = (int)*(short *)(this + 0x607);
        iVar13 = (int)*(short *)(this + 0x605);
        iVar4 = (int)*(short *)(this + 0x603);
        goto LAB_00476dba;
      }
      break;
    case -1:
      iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x31d2,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Capture__CAPTURE_MOVE_e_007ab234);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      return 0xffff;
    }
    return 0;
  }
  if (iVar4 == 1) {
    iVar4 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar4 != 0) {
      return -1;
    }
    piVar5 = (int *)STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),this[0x5fc]),
                               (uint)*(ushort *)(this + 0x5fd),1);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    if (piVar5[6] != *(int *)(this + 0x5ff)) {
      return 0;
    }
    iVar4 = (**(code **)(*piVar5 + 0x108))(*(undefined4 *)(this + 0x24));
    if (iVar4 != 0) {
      if (piVar5[0xb] == 0) {
        thunk_FUN_004cd3e0(piVar5,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x24));
        iVar4 = *(int *)(this + 0x6f7);
        *(undefined4 *)(this + 0x611) = 3;
        if (iVar4 == 6) {
          (**(code **)(*(int *)this + 0x90))(3,0xed);
          return 2;
        }
        if (iVar4 != 0x12) {
          if (iVar4 != 0x22) {
            return 2;
          }
          (**(code **)(*(int *)this + 0x90))(3,0x1d2);
          return 2;
        }
        (**(code **)(*(int *)this + 0x90))(3,0x151);
        return 2;
      }
      if (piVar5[0xb] != 1) {
        return 2;
      }
      sVar14 = *(short *)(this + 0x609);
      iVar13 = (int)sVar14;
      iVar4 = iVar13 + 1;
      if (iVar13 <= iVar4) {
        sVar17 = *(short *)(this + 0x60b);
        sVar18 = sVar17;
        do {
          for (; (int)sVar18 <= sVar17 + 1; sVar18 = sVar18 + 1) {
            if ((((((sVar14 != *(short *)(this + 0x47)) || (sVar18 != *(short *)(this + 0x49))) &&
                  (sVar2 = *(short *)(this + 0x60d) + 1, -1 < sVar14)) &&
                 ((sVar14 < DAT_007fb240 && (-1 < sVar18)))) && (sVar18 < DAT_007fb242)) &&
               (((-1 < sVar2 && (sVar2 < DAT_007fb244)) &&
                ((iVar6 = *(int *)(DAT_007fb248 +
                                  ((int)DAT_007fb240 * (int)sVar18 +
                                  iVar13 + (int)sVar2 * (int)DAT_007fb246) * 8), iVar6 != 0 &&
                 ((*(int *)(iVar6 + 0x20) == 0x14 && (*(int *)(iVar6 + 0x45d) == 9)))))))) {
              iVar6 = *(int *)(iVar6 + 0x611);
              if (iVar6 == 2) {
                return 2;
              }
              if (iVar6 == 3) {
                return 2;
              }
              if (iVar6 == 4) {
                return 2;
              }
            }
          }
          sVar14 = sVar14 + 1;
          iVar13 = (int)sVar14;
          sVar18 = sVar17;
        } while (iVar13 <= iVar4);
      }
      *(undefined4 *)(this + 0x611) = 2;
      *(undefined4 *)(this + 0x615) = 0;
      return 2;
    }
    return 0;
  }
  if (iVar4 == 2) {
    if (*(int *)(this + 0x615) == 0) {
      iVar6 = (ushort)(*(short *)(this + 0x60d) * 200) + 300;
      iVar13 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)(this + 0x60b) + 1) * 0xc9;
      iVar7 = CONCAT22((short)((uint)iVar13 >> 0x10),*(short *)(this + 0x609) + 1);
      iVar4 = iVar7 * 0xc9;
      uVar3 = (undefined2)((uint)(iVar7 * 0x19) >> 0x10);
      uVar3 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar3,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar3,*(undefined2 *)(this + 0x45)),iVar4,iVar13,iVar6);
      *(undefined2 *)(this + 0x60f) = uVar3;
      *(undefined4 *)(this + 0x615) = 1;
    }
    if (*(int *)(this + 0x615) == 1) {
      uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x60f));
      uVar8 = thunk_FUN_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3237,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Capture__CAPTURE_PMOVE_007ab20c);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return -1;
      }
      if (uVar8 == 0) {
        *(undefined4 *)(this + 0x615) = 2;
        goto LAB_00477b2e;
      }
    }
    if (*(int *)(this + 0x615) == 2) {
      thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                         *(short *)(this + 0x45),(*(short *)(this + 0x609) + 1) * 0xc9,
                         (*(short *)(this + 0x60b) + 1) * 0xc9,*(short *)(this + 0x60d) * 200 + 300,
                         (byte)this[0x61]);
      *(undefined4 *)(this + 0x615) = 3;
    }
    if (*(int *)(this + 0x615) == 3) {
      local_8 = thunk_FUN_00415ed0(this,&local_10,&local_c);
      uVar12 = (undefined3)((uint)extraout_EDX_00 >> 8);
      iVar4 = 0;
      param_1 = 0;
      if (this[0x2bf] != (STBoatC)0x0) {
        do {
          puVar9 = (undefined4 *)
                   thunk_FUN_0041dc40(local_24,*(undefined4 *)(this + (short)param_1 * 6 + 0x2b3),
                                      *(undefined2 *)(this + (short)param_1 * 6 + 0x2b7),
                                      *(short *)(this + 0x6c));
          uVar23 = *puVar9;
          local_18 = *(short *)(puVar9 + 1);
          local_1c = uVar23;
          if (DAT_0080732c == 1) {
            bVar22 = 0;
            sVar21 = 0;
            uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            iVar4 = -1;
            *(uint *)(this + 0x1c) = uVar8;
            sVar20 = 0;
            sVar19 = 0;
            uVar10 = uVar8 * 0x41c64e6d + 0x3039;
            sVar2 = 0;
            *(uint *)(this + 0x1c) = uVar10;
            sVar18 = 0;
            sVar17 = 0;
            local_14 = uVar10 * 0x41c64e6d + 0x3039;
            sVar14 = 0;
            *(uint *)(this + 0x1c) = local_14;
            lVar16 = Library::MSVCRT::__ftol();
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (local_14 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                       (int)(short)local_1c,
                       (((uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_1c._2_2_)
                       + -3,(int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x45)
                            + -3 + (int)local_18,sVar14,sVar17,sVar18,sVar2,sVar19,sVar20,iVar4,
                       sVar21,bVar22);
            uVar12 = extraout_var_00;
          }
          else {
            uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar10;
            uVar11 = uVar10 * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar11;
            uVar8 = uVar11 * 0x41c64e6d + 0x3039;
            *(uint *)(this + 0x1c) = uVar8;
            local_1c._2_2_ = (short)((uint)uVar23 >> 0x10);
            iVar4 = (int)local_1c._2_2_;
            local_1c._0_2_ = (short)uVar23;
            iVar13 = (int)(short)local_1c;
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 + iVar13,
                       (((uVar11 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - iVar4) + -3,
                       (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_18,0,0,
                       0,0,0,0,-1,0,0);
            uVar12 = extraout_var_01;
          }
          iVar4 = param_1 + 1;
          param_1 = iVar4;
        } while ((short)iVar4 < (short)(ushort)(byte)this[0x2bf]);
      }
      if (local_8 == -1) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x325c,0,0,&DAT_007a4ccc,
                                   s_STBoatC__Capture__CAPTURE_PMOVE_2_007ab1e4);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return -1;
      }
      if (local_8 == 0) {
        piVar5 = (int *)STAllPlayersC::GetObjPtr
                                  (DAT_007fa174,CONCAT31(uVar12,this[0x5fc]),
                                   CONCAT22((short)((uint)iVar4 >> 0x10),
                                            *(undefined2 *)(this + 0x5fd)),1);
        if (((piVar5 == (int *)0x0) || (piVar5[6] != *(int *)(this + 0x5ff))) ||
           (iVar4 = (**(code **)(*piVar5 + 0x108))(*(undefined4 *)(this + 0x24)), iVar4 == 0)) {
          *(undefined4 *)(this + 0x611) = 4;
          *(undefined4 *)(this + 0x615) = 0;
        }
        else {
          thunk_FUN_004cd3e0(piVar5,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x24));
          iVar4 = *(int *)(this + 0x6f7);
          *(undefined4 *)(this + 0x611) = 3;
          if (iVar4 == 6) {
            iVar4 = *(int *)this;
            uVar23 = 0xed;
          }
          else {
            if (iVar4 == 0x12) {
              (**(code **)(*(int *)this + 0x90))(3,0x151);
              goto LAB_0047746b;
            }
            if (iVar4 != 0x22) goto LAB_0047746b;
            iVar4 = *(int *)this;
            uVar23 = 0x1d2;
          }
          (**(code **)(iVar4 + 0x90))(3,uVar23);
        }
      }
    }
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 4) {
        if (iVar4 != 5) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x330e,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture___incorrect_ent_007ab138);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          return -1;
        }
        iVar4 = thunk_FUN_0045ff50(this,2);
        if (iVar4 == -1) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32fc,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_ESCMOV_007ab164);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          return -1;
        }
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*(int *)this + 0xd8))();
          return -(uint)(iVar4 != 0);
        }
        if (iVar4 == 3) {
          thunk_FUN_00492f30((int)this,extraout_EDX_04);
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x609),(int)*(short *)(this + 0x60b),
                             (int)*(short *)(this + 0x60d));
          thunk_FUN_0045ff50(this,0);
        }
LAB_00477b2e:
        iVar4 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      if (*(int *)(this + 0x615) == 0) {
        iVar4 = (ushort)(*(short *)(this + 0x607) * 200) + 100;
        iVar6 = CONCAT22((short)((uint)this >> 0x10),*(short *)(this + 0x605) * 0xc9) + 100;
        iVar13 = CONCAT22((short)((uint)iVar4 >> 0x10),*(short *)(this + 0x603) * 0xc9) + 100;
        uVar3 = (undefined2)((uint)iVar6 >> 0x10);
        uVar3 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar3,*(undefined2 *)(this + 0x41)),
                           CONCAT22((short)((uint)iVar13 >> 0x10),*(undefined2 *)(this + 0x43)),
                           CONCAT22(uVar3,*(undefined2 *)(this + 0x45)),iVar13,iVar6,iVar4);
        *(undefined2 *)(this + 0x60f) = uVar3;
        *(undefined4 *)(this + 0x615) = 1;
      }
      if (*(int *)(this + 0x615) == 1) {
        uVar8 = thunk_FUN_004176c0(this,*(short *)(this + 0x60f));
        uVar8 = thunk_FUN_00417910(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32c1,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_OMOVE_007ab1bc);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          return -1;
        }
        if (uVar8 == 0) {
          *(undefined4 *)(this + 0x615) = 2;
          goto LAB_00477b2e;
        }
      }
      if (*(int *)(this + 0x615) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x603) * 0xc9 + 100,
                           *(short *)(this + 0x605) * 0xc9 + 100,
                           *(short *)(this + 0x607) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x615) = 3;
      }
      if (*(int *)(this + 0x615) == 3) {
        local_8 = thunk_FUN_00415ed0(this,&local_c,&local_10);
        uVar23 = CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this[0x2bf]);
        param_1 = 0;
        if (this[0x2bf] != (STBoatC)0x0) {
          do {
            puVar9 = (undefined4 *)
                     thunk_FUN_0041dc40(local_24,*(undefined4 *)(this + (short)param_1 * 6 + 0x2b3),
                                        *(undefined2 *)(this + (short)param_1 * 6 + 0x2b7),
                                        *(short *)(this + 0x6c));
            uVar23 = *puVar9;
            local_18 = *(short *)(puVar9 + 1);
            local_1c = uVar23;
            if (DAT_0080732c == 1) {
              bVar22 = 0;
              sVar21 = 0;
              uVar8 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar4 = -1;
              *(uint *)(this + 0x1c) = uVar8;
              sVar20 = 0;
              sVar19 = 0;
              uVar10 = uVar8 * 0x41c64e6d + 0x3039;
              sVar2 = 0;
              *(uint *)(this + 0x1c) = uVar10;
              sVar18 = 0;
              sVar17 = 0;
              local_14 = uVar10 * 0x41c64e6d + 0x3039;
              sVar14 = 0;
              *(uint *)(this + 0x1c) = local_14;
              lVar16 = Library::MSVCRT::__ftol();
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,
                         (local_14 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                         (int)(short)local_1c,
                         (((uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) -
                         (int)local_1c._2_2_) + -3,
                         (int)(short)lVar16 + (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x45) +
                         -3 + (int)local_18,sVar14,sVar17,sVar18,sVar2,sVar19,sVar20,iVar4,sVar21,
                         bVar22);
              uVar23 = extraout_EDX_02;
            }
            else {
              uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar10;
              uVar11 = uVar10 * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar11;
              uVar8 = uVar11 * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar8;
              local_1c._2_2_ = (short)((uint)uVar23 >> 0x10);
              iVar4 = (int)local_1c._2_2_;
              local_1c._0_2_ = (short)uVar23;
              iVar13 = (int)(short)local_1c;
              TraksClassTy::TraksCreate
                        (DAT_00802a7c,1,2,7,
                         (uVar8 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 + iVar13,
                         (((uVar11 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - iVar4) + -3,
                         (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_18,0,
                         0,0,0,0,0,-1,0,0);
              uVar23 = extraout_EDX_03;
            }
            param_1 = param_1 + 1;
          } while ((short)param_1 < (short)(ushort)(byte)this[0x2bf]);
        }
        if (local_8 == -1) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x32e6,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Capture__CAPTURE_OMOVE_2_007ab194);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          return -1;
        }
        if (local_8 == 0) {
          *(undefined4 *)(this + 0x611) = 5;
          thunk_FUN_00492f30((int)this,uVar23);
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x609),(int)*(short *)(this + 0x60b),
                             (int)*(short *)(this + 0x60d));
          iVar4 = thunk_FUN_0045ff50(this,0);
          if (iVar4 == -1) {
            return -1;
          }
        }
      }
      iVar4 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
    }
    piVar5 = (int *)STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)this >> 8),this[0x5fc]),
                               (uint)*(ushort *)(this + 0x5fd),1);
    if (((piVar5 == (int *)0x0) || (piVar5[6] != *(int *)(this + 0x5ff))) ||
       (iVar4 = (**(code **)(*piVar5 + 0x108))(*(undefined4 *)(this + 0x24)), iVar4 == 0)) {
      if (((int)*(short *)(this + 0x41) == (*(short *)(this + 0x609) + 1) * 0xc9) &&
         ((int)*(short *)(this + 0x43) == (*(short *)(this + 0x60b) + 1) * 0xc9)) {
        *(undefined4 *)(this + 0x611) = 4;
        *(undefined4 *)(this + 0x615) = 0;
        iVar4 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }
      iVar4 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar4 != 0);
    }
    iVar4 = thunk_FUN_004cd480(piVar5);
    if (iVar4 == 1) {
      if (DAT_008117bc != (undefined4 *)0x0) {
        local_2e = *(undefined2 *)((int)piVar5 + 0x32);
        local_30 = (undefined2)piVar5[9];
        local_34 = 0x5dd4;
        local_2c = CONCAT22(*(undefined2 *)(this + 0x32),*(undefined2 *)(this + 0x24));
        (**(code **)*DAT_008117bc)(local_44);
      }
      (**(code **)(*piVar5 + 0x10c))();
      (**(code **)(*piVar5 + 0x110))(*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x6f3));
    }
    else if (iVar4 != 2) goto LAB_0047746b;
    uVar8 = thunk_FUN_004406c0((char)piVar5[9]);
    iVar4 = (**(code **)(*piVar5 + 0x2c))();
    local_50 = &local_40;
    local_40 = *(undefined4 *)(&DAT_007e1374 + ((uVar8 & 0xff) + iVar4 * 3) * 4);
    local_38 = 0xff;
    local_3c = 0;
    local_2c = 1;
    local_54 = 0x110;
    (*(code *)**(undefined4 **)this)(local_64);
    iVar4 = (*(short *)(this + 0x609) + 1) * 0xc9;
    if ((*(short *)(this + 0x41) == iVar4) &&
       (iVar4 = (*(short *)(this + 0x60b) + 1) * 0xc9, *(short *)(this + 0x43) == iVar4)) {
      *(undefined4 *)(this + 0x611) = 4;
      *(undefined4 *)(this + 0x615) = 0;
    }
    else {
      *(undefined4 *)(this + 0x611) = 5;
      thunk_FUN_00492f30((int)this,iVar4);
      thunk_FUN_00481520(this,(int)*(short *)(this + 0x609),(int)*(short *)(this + 0x60b),
                         (int)*(short *)(this + 0x60d));
      iVar4 = thunk_FUN_0045ff50(this,0);
      if (iVar4 == -1) {
        return -1;
      }
    }
  }
LAB_0047746b:
  iVar4 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
}

