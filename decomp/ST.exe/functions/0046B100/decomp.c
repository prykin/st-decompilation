
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Build */

int __thiscall STBoatC::Build(STBoatC *this,uint param_1)

{
  STBoatC SVar1;
  STBoatC SVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  STBoatC *extraout_ECX;
  STBoatC *pSVar14;
  uint uVar15;
  int iVar16;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  bool bVar17;
  undefined8 uVar18;
  longlong lVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  byte bVar27;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  char local_98 [14];
  undefined1 local_8a;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  int local_6d;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 *local_30;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  STBoatC *local_10;
  undefined4 local_c;
  short local_8;
  
  if ((param_1 == 0) || (pSVar14 = this, param_1 == 1)) {
    pSVar14 = this + 0x2cc;
    for (iVar13 = 0x17; iVar13 != 0; iVar13 = iVar13 + -1) {
      *(undefined4 *)pSVar14 = 0;
      pSVar14 = pSVar14 + 4;
    }
    *(undefined4 *)(this + 0x2c4) = 0;
    sVar20 = *(short *)(this + 0x373);
    sVar21 = *(short *)(this + 0x377);
    sVar22 = *(short *)(this + 0x375);
    if ((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) || (sVar22 < 0)) ||
       (((DAT_007fb242 <= sVar22 || (sVar21 < 0)) ||
        ((DAT_007fb244 <= sVar21 ||
         (*(short *)(DAT_007fb280 +
                    ((int)DAT_007fb278 * (int)sVar22 + (int)DAT_007fb27e * (int)sVar21 + (int)sVar20
                    ) * 2) != 0)))))) {
      return 0;
    }
    *(short *)(this + 0x4dd) = sVar20;
    *(undefined2 *)(this + 0x4fa) = *(undefined2 *)(this + 0x390);
    *(undefined2 *)(this + 0x4df) = *(undefined2 *)(this + 0x375);
    *(undefined2 *)(this + 0x4e1) = *(undefined2 *)(this + 0x377);
    *(int *)(this + 0x4e3) = *(int *)(this + 0x379);
    *(undefined4 *)(this + 0x502) = *(undefined4 *)(&DAT_00791d68 + *(int *)(this + 0x379) * 4);
    *(undefined4 *)(this + 0x4e7) = *(undefined4 *)(this + 0x37d);
    Library::MSVCRT::_strncpy((char *)(this + 0x4eb),(char *)(this + 0x381),0xe);
    this[0x4f9] = (STBoatC)0x0;
    thunk_FUN_0048dcf0((int)this);
    *(undefined4 *)(this + 0x508) = 0;
    *(undefined4 *)(this + 0x50c) = 0;
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x4fc),(int)*(short *)(this + 0x4fe),
                       (int)*(short *)(this + 0x500));
    iVar13 = thunk_FUN_0045ff50(this,0);
    pSVar14 = extraout_ECX;
    if (iVar13 == -1) {
      return -1;
    }
  }
  iVar13 = *(int *)(this + 0x508);
  if (iVar13 == 0) {
    uVar7 = thunk_FUN_0045ff50(this,2);
    switch(uVar7) {
    case 0:
      if ((((*(short *)(this + 0x47) != *(short *)(this + 0x4fc)) ||
           (*(short *)(this + 0x49) != *(short *)(this + 0x4fe))) ||
          (*(short *)(this + 0x4b) != *(short *)(this + 0x500))) ||
         (iVar13 = thunk_FUN_004ae0b0((int)*(short *)(this + 0x4dd),(int)*(short *)(this + 0x4df),
                                      (int)*(short *)(this + 0x4e1),*(int *)(this + 0x4e3),
                                      *(int *)(this + 0x24),(undefined4 *)0x0,(int *)0x0,(int *)0x0,
                                      0,(int *)0x0), iVar13 == 0)) {
        return 0;
      }
      if (*(int *)(this + 0x6f7) == 0x19) {
        *(uint *)(this + 0x508) = 3 - (uint)(*(int *)(this + 0x502) != 0);
      }
      else {
        *(uint *)(this + 0x508) = (-(uint)(*(int *)(this + 0x502) != 0) & 0xfffffffd) + 5;
      }
      break;
    case 2:
      local_14 = *(uint *)(DAT_00802a38 + 0xe4);
      if (local_14 % 10 != 0) break;
      sVar20 = *(short *)(this + 0x4dd);
      uVar4 = *(ushort *)(this + 0x4df);
      local_18 = (uint)uVar4;
      sVar21 = *(short *)(this + 0x4e1);
      if ((((-1 < sVar20) && (sVar20 < DAT_007fb240)) && (-1 < (short)uVar4)) &&
         ((((short)uVar4 < DAT_007fb242 && (-1 < sVar21)) &&
          ((sVar21 < DAT_007fb244 &&
           (*(short *)(DAT_007fb280 +
                      ((int)DAT_007fb278 * (int)(short)uVar4 + (int)DAT_007fb27e * (int)sVar21 +
                      (int)sVar20) * 2) == 0)))))) break;
      if (((sVar20 < 0) || (DAT_007fb240 <= sVar20)) ||
         (((short)uVar4 < 0 ||
          ((((DAT_007fb242 <= (short)uVar4 || (sVar21 < 0)) || (DAT_007fb244 <= sVar21)) ||
           (iVar13 = *(int *)(DAT_007fb248 +
                             ((int)(short)uVar4 * (int)DAT_007fb240 +
                              (int)DAT_007fb246 * (int)sVar21 + (int)sVar20) * 8), iVar13 == 0))))))
      {
        iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23c0,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build_NULL_007aa704);
        if (iVar13 == 0) {
          return -1;
        }
        pcVar5 = (code *)swi(3);
        iVar13 = (*pcVar5)();
        return iVar13;
      }
      if ((*(uint *)(iVar13 + 0x24) < 8) &&
         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[*(uint *)(iVar13 + 0x24) * 0x51] < 8)))) {
        SVar1 = *(STBoatC *)(iVar13 + 0x24);
        SVar2 = this[0x24];
        local_10 = (STBoatC *)CONCAT31(local_10._1_3_,SVar1);
        local_1c = CONCAT31(local_1c._1_3_,SVar2);
        if (DAT_00808a8f == '\0') {
          if (SVar1 == SVar2) {
LAB_0046b5ac:
            iVar13 = 0;
          }
          else {
            uVar10 = (uint)(byte)SVar1;
            uVar12 = (uint)(byte)SVar2;
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar12);
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) == '\0')) {
              iVar13 = -2;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) == '\0')) {
              iVar13 = -1;
            }
            else if ((cVar3 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) == '\x01')) {
              iVar13 = 1;
            }
            else {
              if ((cVar3 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10) != '\x01')) goto LAB_0046b5ac;
              iVar13 = 2;
            }
          }
          bVar17 = iVar13 < 0;
        }
        else {
          bVar17 = (&DAT_008087ea)[(uint)(byte)SVar2 * 0x51] !=
                   (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51];
        }
        if (bVar17) {
          param_1 = local_14;
          CmdToObj(this,3,&param_1);
          break;
        }
      }
      *(undefined4 *)(this + 0x508) = 1;
      break;
    case 3:
      thunk_FUN_0048dcf0((int)this);
      thunk_FUN_00481520(this,(int)*(short *)(this + 0x4fc),(int)*(short *)(this + 0x4fe),
                         (int)*(short *)(this + 0x500));
      goto LAB_0046c3be;
    case 0xffffffff:
      iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_MOVE_error_007aa71c);
      if (iVar13 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395);
        return 0xffff;
      }
      pcVar5 = (code *)swi(3);
      iVar13 = (*pcVar5)();
      return iVar13;
    }
  }
  else {
    if (iVar13 == 1) {
      uVar18 = (**(code **)(*(int *)this + 0x20))();
      if ((int)uVar18 == -1) {
        return -1;
      }
      if ((int)uVar18 == 1) {
        *(undefined4 *)(this + 0x508) = 7;
        thunk_FUN_0048df40((int)this,(int)((ulonglong)uVar18 >> 0x20));
        thunk_FUN_00481520(this,(int)*(short *)(this + 0x4fc),(int)*(short *)(this + 0x4fe),
                           (int)*(short *)(this + 0x500));
        iVar13 = thunk_FUN_0045ff50(this,0);
        if (iVar13 == -1) {
          return -1;
        }
      }
      goto switchD_0046b287_caseD_1;
    }
    if (iVar13 == 2) {
      if (*(int *)(this + 0x50c) == 0) {
        iVar8 = (ushort)(*(short *)(this + 0x500) * 200) + 100;
        iVar16 = CONCAT22((short)((uint)iVar8 >> 0x10),*(short *)(this + 0x4df) + 1) * 0xc9;
        iVar9 = CONCAT22((short)((uint)iVar16 >> 0x10),*(short *)(this + 0x4dd) + 1);
        iVar13 = iVar9 * 0xc9;
        uVar6 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
        uVar6 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar6,*(undefined2 *)(this + 0x41)),
                           CONCAT22((short)((uint)iVar13 >> 0x10),*(undefined2 *)(this + 0x43)),
                           CONCAT22(uVar6,*(undefined2 *)(this + 0x45)),iVar13,iVar16,iVar8);
        *(undefined2 *)(this + 0x506) = uVar6;
        *(undefined4 *)(this + 0x50c) = 1;
      }
      if (*(int *)(this + 0x50c) == 1) {
        uVar10 = thunk_FUN_004176c0(this,*(short *)(this + 0x506));
        uVar10 = thunk_FUN_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23f3,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_007aa6e0);
          if (iVar13 != 0) {
            pcVar5 = (code *)swi(3);
            iVar13 = (*pcVar5)();
            return iVar13;
          }
          iVar13 = 0x23f4;
          goto LAB_0046c422;
        }
        if (uVar10 == 0) {
          *(undefined4 *)(this + 0x50c) = 2;
          goto LAB_0046b6e2;
        }
      }
      if (*(int *)(this + 0x50c) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),(*(short *)(this + 0x4dd) + 1) * 0xc9,
                           (*(short *)(this + 0x4df) + 1) * 0xc9,
                           *(short *)(this + 0x500) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x50c) = 3;
      }
      if (*(int *)(this + 0x50c) == 3) {
        local_1c = thunk_FUN_00415ed0(this,&local_18,&local_14);
        local_20 = 0;
        if (this[0x2bf] != (STBoatC)0x0) {
          local_10 = this + 0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*(undefined4 *)local_10,
                                         *(undefined2 *)(local_10 + 4),*(short *)(this + 0x6c));
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              *(uint *)(this + 0x1c) = uVar10;
              sVar25 = 0;
              sVar24 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar23 = 0;
              *(uint *)(this + 0x1c) = uVar12;
              sVar22 = 0;
              sVar21 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              *(uint *)(this + 0x1c) = local_24;
              lVar19 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar19 + (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3
                       + (int)local_8;
              iVar16 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              sVar26 = 0;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              sVar25 = 0;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              *(uint *)(this + 0x1c) = uVar12;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              *(uint *)(this + 0x1c) = uVar15;
              *(uint *)(this + 0x1c) = uVar10;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar16 = ((uVar15 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                       (int)(short)local_c,iVar16 + -3,iVar13,sVar20,sVar21,sVar22,sVar23,sVar24,
                       sVar25,iVar8,sVar26,bVar27);
            local_20 = local_20 + 1;
            local_10 = local_10 + 6;
          } while (local_20 < (int)(uint)(byte)this[0x2bf]);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2419,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_2_007aa6bc);
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x241a);
            return 0xffff;
          }
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        if (local_1c == 0) {
          *(undefined4 *)(this + 0x50c) = 0;
          *(uint *)(this + 0x508) = (-(uint)(*(int *)(this + 0x6f7) != 0x19) & 2) + 3;
        }
      }
      goto switchD_0046b287_caseD_1;
    }
    if (iVar13 == 3) {
      iVar13 = (int)*(short *)(this + 0x6c);
      if (0x2d < iVar13 % 0x5a) {
        iVar13 = iVar13 + 0x2d;
      }
      uVar10 = thunk_FUN_00417910(this,(short)(((iVar13 / 0x5a) * 0x5a) % 0x168));
      if (uVar10 == 0xffffffff) {
        iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2434,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build__BUILD_ROTATE_007aa698);
        if (iVar13 != 0) {
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        iVar13 = 0x2435;
        goto LAB_0046c422;
      }
      if (uVar10 == 0) {
        *(undefined4 *)(this + 0x508) = 4;
        *(undefined4 *)(this + 0x50c) = 2;
        iVar13 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
      }
      goto switchD_0046b287_caseD_1;
    }
    if (iVar13 == 4) {
      if (*(int *)(this + 0x50c) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45) + -200,(byte)this[0x61]);
        *(undefined4 *)(this + 0x50c) = 3;
      }
      if (*(int *)(this + 0x50c) == 3) {
        local_1c = thunk_FUN_00415ed0(this,&local_14,&local_18);
        local_20 = 0;
        if (this[0x2bf] != (STBoatC)0x0) {
          local_10 = this + 0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*(undefined4 *)local_10,
                                         *(undefined2 *)(local_10 + 4),*(short *)(this + 0x6c));
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              *(uint *)(this + 0x1c) = uVar10;
              sVar25 = 0;
              sVar24 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar23 = 0;
              *(uint *)(this + 0x1c) = uVar12;
              sVar22 = 0;
              sVar21 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              *(uint *)(this + 0x1c) = local_24;
              lVar19 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar19 + (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3
                       + (int)local_8;
              iVar16 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar12;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              *(uint *)(this + 0x1c) = uVar15;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar10;
              sVar26 = 0;
              iVar8 = -1;
              sVar25 = 0;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar16 = ((uVar15 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                       (int)(short)local_c,iVar16 + -3,iVar13,sVar20,sVar21,sVar22,sVar23,sVar24,
                       sVar25,iVar8,sVar26,bVar27);
            local_20 = local_20 + 1;
            local_10 = local_10 + 6;
          } while (local_20 < (int)(uint)(byte)this[0x2bf]);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x245f,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE2_007aa674);
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2460);
            return 0xffff;
          }
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        if (local_1c == 0) {
          *(undefined4 *)(this + 0x508) = 5;
          *(undefined4 *)(this + 0x50c) = 0;
        }
      }
LAB_0046b6e2:
      iVar13 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (iVar13 == 5) {
      puVar11 = &local_d8;
      for (iVar13 = 0x1b; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      uVar7 = *(undefined4 *)(this + 0x502);
      *(undefined2 *)puVar11 = 0;
      sVar20 = *(short *)(this + 0x4dd);
      *(undefined1 *)((int)puVar11 + 2) = 0;
      local_d4 = *(undefined4 *)(this + 0x24);
      local_b0 = *(undefined4 *)(this + 0x4e3);
      local_a8 = (int)*(short *)(this + 0x4df);
      local_a4 = (int)*(short *)(this + 0x4e1);
      local_9c = *(undefined4 *)(this + 0x4e7);
      local_6d = (int)*(short *)(this + 0x6c);
      local_a0 = (uint)*(ushort *)(this + 0x4fa);
      local_85 = 100;
      local_81 = 100;
      local_89 = *(undefined4 *)(this + 0x18);
      local_cc = 1;
      local_d0 = 1;
      local_d8 = 0x3e9;
      local_b8 = 1;
      local_bc = 1;
      local_c4 = 1000;
      local_c8 = uVar7;
      local_c0 = local_d4;
      local_b4 = uVar7;
      local_ac = (int)sVar20;
      Library::MSVCRT::_strncpy(local_98,(char *)(this + 0x4eb),0xe);
      local_8a = 0;
      if (*(int *)(this + 0x502) == 0) {
        iVar13 = thunk_FUN_004ae0b0((int)*(short *)(this + 0x4dd),(int)*(short *)(this + 0x4df),
                                    (int)*(short *)(this + 0x4e1),*(int *)(this + 0x4e3),
                                    *(int *)(this + 0x24),(undefined4 *)0x0,(int *)0x0,(int *)0x0,0,
                                    (int *)0x0);
        uVar7 = extraout_EDX;
        if ((iVar13 != 0) &&
           (STPlaySystemC::CreateGameObject(*(STPlaySystemC **)(this + 0xc),0x3e9,0,0,&local_d8,0),
           uVar7 = extraout_EDX_00, *(int *)(this + 0x6f7) == 0x19)) {
          local_30 = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_34 = 0x128;
          (*(code *)**(undefined4 **)this)(local_44);
          goto switchD_0046b287_caseD_1;
        }
      }
      else {
        iVar13 = thunk_FUN_004ae0b0((int)*(short *)(this + 0x4dd),(int)*(short *)(this + 0x4df),
                                    (int)*(short *)(this + 0x4e1),*(int *)(this + 0x4e3),
                                    *(int *)(this + 0x24),(undefined4 *)0x0,(int *)0x0,(int *)0x0,0,
                                    (int *)0x0);
        uVar7 = extraout_EDX_01;
        if ((iVar13 != 0) &&
           (STPlaySystemC::CreateGameObject(*(STPlaySystemC **)(this + 0xc),0x3e9,0,0,&local_d8,0),
           uVar7 = extraout_EDX_02, *(int *)(this + 0x6f7) == 0x19)) {
          local_30 = &local_68;
          local_68 = 10000;
          local_64 = 0;
          local_60 = 0xfe;
          local_54 = 1;
          local_50 = 1;
          local_34 = 0x128;
          (*(code *)**(undefined4 **)this)(local_44);
          goto switchD_0046b287_caseD_1;
        }
      }
      if (*(int *)(this + 0x502) == 1) {
        *(undefined4 *)(this + 0x508) = 6;
      }
      else {
        *(undefined4 *)(this + 0x508) = 7;
        thunk_FUN_0048df40((int)this,uVar7);
        thunk_FUN_00481520(this,(int)*(short *)(this + 0x4fc),(int)*(short *)(this + 0x4fe),
                           (int)*(short *)(this + 0x500));
        iVar13 = thunk_FUN_0045ff50(this,0);
        if (iVar13 == -1) {
          return -1;
        }
      }
LAB_0046c04e:
      iVar13 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (iVar13 == 6) {
      if (*(int *)(this + 0x50c) == 0) {
        iVar13 = (ushort)(*(short *)(this + 0x500) * 200) + 100;
        iVar8 = CONCAT22((short)((uint)pSVar14 >> 0x10),*(short *)(this + 0x4fe) * 0xc9) + 100;
        iVar16 = CONCAT22((short)((uint)iVar13 >> 0x10),*(short *)(this + 0x4fc) * 0xc9) + 100;
        uVar6 = (undefined2)((uint)iVar8 >> 0x10);
        uVar6 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar6,*(undefined2 *)(this + 0x41)),
                           CONCAT22((short)((uint)iVar16 >> 0x10),*(undefined2 *)(this + 0x43)),
                           CONCAT22(uVar6,*(undefined2 *)(this + 0x45)),iVar16,iVar8,iVar13);
        *(undefined2 *)(this + 0x506) = uVar6;
        *(undefined4 *)(this + 0x50c) = 1;
      }
      if (*(int *)(this + 0x50c) == 1) {
        uVar10 = thunk_FUN_004176c0(this,*(short *)(this + 0x506));
        uVar10 = thunk_FUN_00417910(this,(short)uVar10);
        if (uVar10 == 0xffffffff) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24c1,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_007aa650);
          if (iVar13 != 0) {
            pcVar5 = (code *)swi(3);
            iVar13 = (*pcVar5)();
            return iVar13;
          }
          iVar13 = 0x24c2;
          goto LAB_0046c422;
        }
        if (uVar10 == 0) {
          *(undefined4 *)(this + 0x50c) = 2;
          goto LAB_0046c04e;
        }
      }
      if (*(int *)(this + 0x50c) == 2) {
        thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                           *(short *)(this + 0x45),*(short *)(this + 0x4fc) * 0xc9 + 100,
                           *(short *)(this + 0x4fe) * 0xc9 + 100,
                           *(short *)(this + 0x500) * 200 + 100,(byte)this[0x61]);
        *(undefined4 *)(this + 0x50c) = 3;
      }
      if (*(int *)(this + 0x50c) == 3) {
        local_1c = thunk_FUN_00415ed0(this,&local_14,&local_18);
        local_20 = 0;
        uVar7 = extraout_EDX_03;
        if (this[0x2bf] != (STBoatC)0x0) {
          local_10 = this + 0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_4c,*(undefined4 *)local_10,
                                         *(undefined2 *)(local_10 + 4),*(short *)(this + 0x6c));
            local_c = *puVar11;
            local_8 = *(short *)(puVar11 + 1);
            if (DAT_0080732c == 1) {
              bVar27 = 0;
              sVar26 = 0;
              uVar10 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              *(uint *)(this + 0x1c) = uVar10;
              sVar25 = 0;
              sVar24 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar23 = 0;
              *(uint *)(this + 0x1c) = uVar12;
              sVar22 = 0;
              sVar21 = 0;
              local_24 = uVar12 * 0x41c64e6d + 0x3039;
              sVar20 = 0;
              *(uint *)(this + 0x1c) = local_24;
              lVar19 = Library::MSVCRT::__ftol();
              iVar13 = (int)(short)lVar19 + (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3
                       + (int)local_8;
              iVar16 = ((uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_c._2_2_;
              uVar10 = local_24;
            }
            else {
              uVar12 = *(int *)(this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar12;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              bVar27 = 0;
              *(uint *)(this + 0x1c) = uVar15;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              *(uint *)(this + 0x1c) = uVar10;
              sVar26 = 0;
              iVar8 = -1;
              sVar25 = 0;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              iVar13 = (uVar12 >> 0x10) % 7 + (int)*(short *)(this + 0x45) + -3 + (int)local_8;
              local_c._2_2_ = (short)((uint)local_c >> 0x10);
              iVar16 = ((uVar15 >> 0x10) % 7 + (int)*(short *)(this + 0x43)) - (int)local_c._2_2_;
            }
            TraksClassTy::TraksCreate
                      (DAT_00802a7c,1,2,7,
                       (uVar10 >> 0x10) % 7 + (int)*(short *)(this + 0x41) + -3 +
                       (int)(short)local_c,iVar16 + -3,iVar13,sVar20,sVar21,sVar22,sVar23,sVar24,
                       sVar25,iVar8,sVar26,bVar27);
            local_20 = local_20 + 1;
            local_10 = local_10 + 6;
            uVar7 = extraout_EDX_04;
          } while (local_20 < (int)(uint)(byte)this[0x2bf]);
        }
        if (local_1c == -1) {
          iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_2_007aa62c);
          if (iVar13 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e8);
            return 0xffff;
          }
          pcVar5 = (code *)swi(3);
          iVar13 = (*pcVar5)();
          return iVar13;
        }
        if (local_1c == 0) {
          *(undefined4 *)(this + 0x508) = 7;
          thunk_FUN_0048df40((int)this,uVar7);
          thunk_FUN_00481520(this,(int)*(short *)(this + 0x4fc),(int)*(short *)(this + 0x4fe),
                             (int)*(short *)(this + 0x500));
          iVar13 = thunk_FUN_0045ff50(this,0);
          if (iVar13 == -1) {
            return -1;
          }
        }
      }
      goto LAB_0046c04e;
    }
    if (iVar13 != 7) {
      iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2510,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build___incorrect_entry_007aa5d8);
      if (iVar13 == 0) {
        return -1;
      }
      pcVar5 = (code *)swi(3);
      iVar13 = (*pcVar5)();
      return iVar13;
    }
    iVar13 = thunk_FUN_0045ff50(this,2);
    if (iVar13 == -1) {
      iVar13 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24fe,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_ESCMOVE_er_007aa600);
      if (iVar13 != 0) {
        pcVar5 = (code *)swi(3);
        iVar13 = (*pcVar5)();
        return iVar13;
      }
      iVar13 = 0x24fe;
LAB_0046c422:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar13);
      return 0xffff;
    }
    if (iVar13 == 0) {
      iVar13 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar13 != 0);
    }
    if (iVar13 != 3) goto switchD_0046b287_caseD_1;
    thunk_FUN_0048df40((int)this,extraout_EDX_05);
    thunk_FUN_00481520(this,(int)*(short *)(this + 0x4fc),(int)*(short *)(this + 0x4fe),
                       (int)*(short *)(this + 0x500));
LAB_0046c3be:
    thunk_FUN_0045ff50(this,0);
  }
switchD_0046b287_caseD_1:
  iVar13 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
}

