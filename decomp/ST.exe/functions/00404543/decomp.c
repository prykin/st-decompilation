
int __thiscall thunk_FUN_0046b100(void *this,uint param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  void *extraout_ECX;
  void *pvVar13;
  uint uVar14;
  int iVar15;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  bool bVar16;
  undefined8 uVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  char acStack_98 [14];
  undefined1 uStack_8a;
  undefined4 uStack_89;
  undefined4 uStack_85;
  undefined4 uStack_81;
  int iStack_6d;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [2];
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  short sStack_8;
  
  if ((param_1 == 0) || (pvVar13 = this, param_1 == 1)) {
    puVar10 = (undefined4 *)((int)this + 0x2cc);
    for (iVar12 = 0x17; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)((int)this + 0x2c4) = 0;
    sVar19 = *(short *)((int)this + 0x373);
    sVar20 = *(short *)((int)this + 0x377);
    sVar21 = *(short *)((int)this + 0x375);
    if ((((sVar19 < 0) || (DAT_007fb240 <= sVar19)) || (sVar21 < 0)) ||
       (((DAT_007fb242 <= sVar21 || (sVar20 < 0)) ||
        ((DAT_007fb244 <= sVar20 ||
         (*(short *)(DAT_007fb280 +
                    ((int)DAT_007fb278 * (int)sVar21 + (int)DAT_007fb27e * (int)sVar20 + (int)sVar19
                    ) * 2) != 0)))))) {
      return 0;
    }
    *(short *)((int)this + 0x4dd) = sVar19;
    *(undefined2 *)((int)this + 0x4fa) = *(undefined2 *)((int)this + 0x390);
    *(undefined2 *)((int)this + 0x4df) = *(undefined2 *)((int)this + 0x375);
    *(undefined2 *)((int)this + 0x4e1) = *(undefined2 *)((int)this + 0x377);
    *(int *)((int)this + 0x4e3) = *(int *)((int)this + 0x379);
    *(undefined4 *)((int)this + 0x502) =
         *(undefined4 *)(&DAT_00791d68 + *(int *)((int)this + 0x379) * 4);
    *(undefined4 *)((int)this + 0x4e7) = *(undefined4 *)((int)this + 0x37d);
    _strncpy((char *)((int)this + 0x4eb),(char *)((int)this + 0x381),0xe);
    *(undefined1 *)((int)this + 0x4f9) = 0;
    thunk_FUN_0048dcf0((int)this);
    *(undefined4 *)((int)this + 0x508) = 0;
    *(undefined4 *)((int)this + 0x50c) = 0;
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x4fc),(int)*(short *)((int)this + 0x4fe),
                       (int)*(short *)((int)this + 0x500));
    iVar12 = thunk_FUN_0045ff50(this,0);
    pvVar13 = extraout_ECX;
    if (iVar12 == -1) {
      return -1;
    }
  }
  iVar12 = *(int *)((int)this + 0x508);
  if (iVar12 == 0) {
    uVar6 = thunk_FUN_0045ff50(this,2);
    switch(uVar6) {
    case 0:
      if ((((*(short *)((int)this + 0x47) != *(short *)((int)this + 0x4fc)) ||
           (*(short *)((int)this + 0x49) != *(short *)((int)this + 0x4fe))) ||
          (*(short *)((int)this + 0x4b) != *(short *)((int)this + 0x500))) ||
         (iVar12 = thunk_FUN_004ae0b0((int)*(short *)((int)this + 0x4dd),
                                      (int)*(short *)((int)this + 0x4df),
                                      (int)*(short *)((int)this + 0x4e1),*(int *)((int)this + 0x4e3)
                                      ,*(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                      (int *)0x0,0,(int *)0x0), iVar12 == 0)) {
        return 0;
      }
      if (*(int *)((int)this + 0x6f7) == 0x19) {
        *(uint *)((int)this + 0x508) = 3 - (uint)(*(int *)((int)this + 0x502) != 0);
      }
      else {
        *(uint *)((int)this + 0x508) = (-(uint)(*(int *)((int)this + 0x502) != 0) & 0xfffffffd) + 5;
      }
      break;
    case 2:
      uStack_14 = *(uint *)(DAT_00802a38 + 0xe4);
      if (uStack_14 % 10 != 0) break;
      sVar19 = *(short *)((int)this + 0x4dd);
      uVar3 = *(ushort *)((int)this + 0x4df);
      uStack_18 = (uint)uVar3;
      sVar20 = *(short *)((int)this + 0x4e1);
      if ((((-1 < sVar19) && (sVar19 < DAT_007fb240)) && (-1 < (short)uVar3)) &&
         ((((short)uVar3 < DAT_007fb242 && (-1 < sVar20)) &&
          ((sVar20 < DAT_007fb244 &&
           (*(short *)(DAT_007fb280 +
                      ((int)DAT_007fb278 * (int)(short)uVar3 + (int)DAT_007fb27e * (int)sVar20 +
                      (int)sVar19) * 2) == 0)))))) break;
      if (((sVar19 < 0) || (DAT_007fb240 <= sVar19)) ||
         (((short)uVar3 < 0 ||
          ((((DAT_007fb242 <= (short)uVar3 || (sVar20 < 0)) || (DAT_007fb244 <= sVar20)) ||
           (iVar12 = *(int *)(DAT_007fb248 +
                             ((int)(short)uVar3 * (int)DAT_007fb240 +
                              (int)DAT_007fb246 * (int)sVar20 + (int)sVar19) * 8), iVar12 == 0))))))
      {
        iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23c0,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build_NULL_007aa704);
        if (iVar12 == 0) {
          return -1;
        }
        pcVar4 = (code *)swi(3);
        iVar12 = (*pcVar4)();
        return iVar12;
      }
      if ((*(uint *)(iVar12 + 0x24) < 8) &&
         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[*(uint *)(iVar12 + 0x24) * 0x51] < 8)))) {
        bVar26 = *(byte *)(iVar12 + 0x24);
        bVar1 = *(byte *)((int)this + 0x24);
        puStack_10 = (undefined4 *)CONCAT31(puStack_10._1_3_,bVar26);
        iStack_1c = CONCAT31(iStack_1c._1_3_,bVar1);
        if (DAT_00808a8f == '\0') {
          if (bVar26 == bVar1) {
LAB_0046b5ac:
            iVar12 = 0;
          }
          else {
            uVar9 = (uint)bVar26;
            uVar11 = (uint)bVar1;
            cVar2 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar11);
            if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar9) == '\0')) {
              iVar12 = -2;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar9) == '\0')) {
              iVar12 = -1;
            }
            else if ((cVar2 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar9) == '\x01')) {
              iVar12 = 1;
            }
            else {
              if ((cVar2 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar9) != '\x01')) goto LAB_0046b5ac;
              iVar12 = 2;
            }
          }
          bVar16 = iVar12 < 0;
        }
        else {
          bVar16 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar26 * 0x51];
        }
        if (bVar16) {
          param_1 = uStack_14;
          thunk_FUN_0045ef00(this,3,&param_1);
          break;
        }
      }
      *(undefined4 *)((int)this + 0x508) = 1;
      break;
    case 3:
      thunk_FUN_0048dcf0((int)this);
      thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x4fc),(int)*(short *)((int)this + 0x4fe),
                         (int)*(short *)((int)this + 0x500));
      goto LAB_0046c3be;
    case 0xffffffff:
      iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_MOVE_error_007aa71c);
      if (iVar12 == 0) {
        RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2395);
        return 0xffff;
      }
      pcVar4 = (code *)swi(3);
      iVar12 = (*pcVar4)();
      return iVar12;
    }
  }
  else {
    if (iVar12 == 1) {
      uVar17 = (**(code **)(*(int *)this + 0x20))();
      if ((int)uVar17 == -1) {
        return -1;
      }
      if ((int)uVar17 == 1) {
        *(undefined4 *)((int)this + 0x508) = 7;
        thunk_FUN_0048df40((int)this,(int)((ulonglong)uVar17 >> 0x20));
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x4fc),
                           (int)*(short *)((int)this + 0x4fe),(int)*(short *)((int)this + 0x500));
        iVar12 = thunk_FUN_0045ff50(this,0);
        if (iVar12 == -1) {
          return -1;
        }
      }
      goto switchD_0046b287_caseD_1;
    }
    if (iVar12 == 2) {
      if (*(int *)((int)this + 0x50c) == 0) {
        iVar7 = (ushort)(*(short *)((int)this + 0x500) * 200) + 100;
        iVar15 = CONCAT22((short)((uint)iVar7 >> 0x10),*(short *)((int)this + 0x4df) + 1) * 0xc9;
        iVar8 = CONCAT22((short)((uint)iVar15 >> 0x10),*(short *)((int)this + 0x4dd) + 1);
        iVar12 = iVar8 * 0xc9;
        uVar5 = (undefined2)((uint)(iVar8 * 0x19) >> 0x10);
        uVar5 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x41)),
                           CONCAT22((short)((uint)iVar12 >> 0x10),*(undefined2 *)((int)this + 0x43))
                           ,CONCAT22(uVar5,*(undefined2 *)((int)this + 0x45)),iVar12,iVar15,iVar7);
        *(undefined2 *)((int)this + 0x506) = uVar5;
        *(undefined4 *)((int)this + 0x50c) = 1;
      }
      if (*(int *)((int)this + 0x50c) == 1) {
        uVar9 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x506));
        uVar9 = thunk_FUN_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x23f3,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_007aa6e0);
          if (iVar12 != 0) {
            pcVar4 = (code *)swi(3);
            iVar12 = (*pcVar4)();
            return iVar12;
          }
          iVar12 = 0x23f4;
          goto LAB_0046c422;
        }
        if (uVar9 == 0) {
          *(undefined4 *)((int)this + 0x50c) = 2;
          goto LAB_0046b6e2;
        }
      }
      if (*(int *)((int)this + 0x50c) == 2) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),(*(short *)((int)this + 0x4dd) + 1) * 0xc9,
                           (*(short *)((int)this + 0x4df) + 1) * 0xc9,
                           *(short *)((int)this + 0x500) * 200 + 100,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x50c) = 3;
      }
      if (*(int *)((int)this + 0x50c) == 3) {
        iStack_1c = thunk_FUN_00415ed0(this,&uStack_18,&uStack_14);
        iStack_20 = 0;
        if (*(char *)((int)this + 0x2bf) != '\0') {
          puStack_10 = (undefined4 *)((int)this + 0x2b3);
          do {
            puVar10 = (undefined4 *)
                      thunk_FUN_0041dc40(auStack_4c,*puStack_10,*(undefined2 *)(puStack_10 + 1),
                                         *(short *)((int)this + 0x6c));
            uStack_c = *puVar10;
            sStack_8 = *(short *)(puVar10 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar9 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              *(uint *)((int)this + 0x1c) = uVar9;
              sVar24 = 0;
              sVar23 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              *(uint *)((int)this + 0x1c) = uVar11;
              sVar21 = 0;
              sVar20 = 0;
              uStack_24 = uVar11 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              *(uint *)((int)this + 0x1c) = uStack_24;
              lVar18 = __ftol();
              iVar12 = (int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45)
                       + -3 + (int)sStack_8;
              iVar15 = ((uVar11 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) -
                       (int)uStack_c._2_2_;
              uVar9 = uStack_24;
            }
            else {
              uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              sVar25 = 0;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              *(uint *)((int)this + 0x1c) = uVar11;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              *(uint *)((int)this + 0x1c) = uVar14;
              *(uint *)((int)this + 0x1c) = uVar9;
              iVar12 = (uVar11 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3 + (int)sStack_8
              ;
              uStack_c._2_2_ = (short)((uint)uStack_c >> 0x10);
              iVar15 = ((uVar14 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) -
                       (int)uStack_c._2_2_;
            }
            thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                               (uVar9 >> 0x10) % 7 + (int)*(short *)((int)this + 0x41) + -3 +
                               (int)(short)uStack_c,iVar15 + -3,iVar12,sVar19,sVar20,sVar21,sVar22,
                               sVar23,sVar24,iVar7,sVar25,bVar26);
            iStack_20 = iStack_20 + 1;
            puStack_10 = (undefined4 *)((int)puStack_10 + 6);
          } while (iStack_20 < (int)(uint)*(byte *)((int)this + 0x2bf));
        }
        if (iStack_1c == -1) {
          iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2419,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE_2_007aa6bc);
          if (iVar12 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x241a);
            return 0xffff;
          }
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        if (iStack_1c == 0) {
          *(undefined4 *)((int)this + 0x50c) = 0;
          *(uint *)((int)this + 0x508) = (-(uint)(*(int *)((int)this + 0x6f7) != 0x19) & 2) + 3;
        }
      }
      goto switchD_0046b287_caseD_1;
    }
    if (iVar12 == 3) {
      iVar12 = (int)*(short *)((int)this + 0x6c);
      if (0x2d < iVar12 % 0x5a) {
        iVar12 = iVar12 + 0x2d;
      }
      uVar9 = thunk_FUN_00417910(this,(short)(((iVar12 / 0x5a) * 0x5a) % 0x168));
      if (uVar9 == 0xffffffff) {
        iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2434,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__Build__BUILD_ROTATE_007aa698);
        if (iVar12 != 0) {
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        iVar12 = 0x2435;
        goto LAB_0046c422;
      }
      if (uVar9 == 0) {
        *(undefined4 *)((int)this + 0x508) = 4;
        *(undefined4 *)((int)this + 0x50c) = 2;
        iVar12 = (**(code **)(*(int *)this + 0xd8))();
        return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
      }
      goto switchD_0046b287_caseD_1;
    }
    if (iVar12 == 4) {
      if (*(int *)((int)this + 0x50c) == 2) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),*(short *)((int)this + 0x41),
                           *(short *)((int)this + 0x43),*(short *)((int)this + 0x45) + -200,
                           *(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x50c) = 3;
      }
      if (*(int *)((int)this + 0x50c) == 3) {
        iStack_1c = thunk_FUN_00415ed0(this,&uStack_14,&uStack_18);
        iStack_20 = 0;
        if (*(char *)((int)this + 0x2bf) != '\0') {
          puStack_10 = (undefined4 *)((int)this + 0x2b3);
          do {
            puVar10 = (undefined4 *)
                      thunk_FUN_0041dc40(auStack_4c,*puStack_10,*(undefined2 *)(puStack_10 + 1),
                                         *(short *)((int)this + 0x6c));
            uStack_c = *puVar10;
            sStack_8 = *(short *)(puVar10 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar9 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              *(uint *)((int)this + 0x1c) = uVar9;
              sVar24 = 0;
              sVar23 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              *(uint *)((int)this + 0x1c) = uVar11;
              sVar21 = 0;
              sVar20 = 0;
              uStack_24 = uVar11 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              *(uint *)((int)this + 0x1c) = uStack_24;
              lVar18 = __ftol();
              iVar12 = (int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45)
                       + -3 + (int)sStack_8;
              iVar15 = ((uVar11 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) -
                       (int)uStack_c._2_2_;
              uVar9 = uStack_24;
            }
            else {
              uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0x1c) = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              *(uint *)((int)this + 0x1c) = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0x1c) = uVar9;
              sVar25 = 0;
              iVar7 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              iVar12 = (uVar11 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3 + (int)sStack_8
              ;
              uStack_c._2_2_ = (short)((uint)uStack_c >> 0x10);
              iVar15 = ((uVar14 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) -
                       (int)uStack_c._2_2_;
            }
            thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                               (uVar9 >> 0x10) % 7 + (int)*(short *)((int)this + 0x41) + -3 +
                               (int)(short)uStack_c,iVar15 + -3,iVar12,sVar19,sVar20,sVar21,sVar22,
                               sVar23,sVar24,iVar7,sVar25,bVar26);
            iStack_20 = iStack_20 + 1;
            puStack_10 = (undefined4 *)((int)puStack_10 + 6);
          } while (iStack_20 < (int)(uint)*(byte *)((int)this + 0x2bf));
        }
        if (iStack_1c == -1) {
          iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x245f,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_PMOVE2_007aa674);
          if (iVar12 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2460);
            return 0xffff;
          }
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        if (iStack_1c == 0) {
          *(undefined4 *)((int)this + 0x508) = 5;
          *(undefined4 *)((int)this + 0x50c) = 0;
        }
      }
LAB_0046b6e2:
      iVar12 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (iVar12 == 5) {
      puVar10 = &uStack_d8;
      for (iVar12 = 0x1b; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      uVar6 = *(undefined4 *)((int)this + 0x502);
      *(undefined2 *)puVar10 = 0;
      sVar19 = *(short *)((int)this + 0x4dd);
      *(undefined1 *)((int)puVar10 + 2) = 0;
      uStack_d4 = *(undefined4 *)((int)this + 0x24);
      uStack_b0 = *(undefined4 *)((int)this + 0x4e3);
      iStack_a8 = (int)*(short *)((int)this + 0x4df);
      iStack_a4 = (int)*(short *)((int)this + 0x4e1);
      uStack_9c = *(undefined4 *)((int)this + 0x4e7);
      iStack_6d = (int)*(short *)((int)this + 0x6c);
      uStack_a0 = (uint)*(ushort *)((int)this + 0x4fa);
      uStack_85 = 100;
      uStack_81 = 100;
      uStack_89 = *(undefined4 *)((int)this + 0x18);
      uStack_cc = 1;
      uStack_d0 = 1;
      uStack_d8 = 0x3e9;
      uStack_b8 = 1;
      uStack_bc = 1;
      uStack_c4 = 1000;
      uStack_c8 = uVar6;
      uStack_c0 = uStack_d4;
      uStack_b4 = uVar6;
      iStack_ac = (int)sVar19;
      _strncpy(acStack_98,(char *)((int)this + 0x4eb),0xe);
      uStack_8a = 0;
      if (*(int *)((int)this + 0x502) == 0) {
        iVar12 = thunk_FUN_004ae0b0((int)*(short *)((int)this + 0x4dd),
                                    (int)*(short *)((int)this + 0x4df),
                                    (int)*(short *)((int)this + 0x4e1),*(int *)((int)this + 0x4e3),
                                    *(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                    (int *)0x0,0,(int *)0x0);
        uVar6 = extraout_EDX;
        if ((iVar12 != 0) &&
           (thunk_FUN_0054cc20(0x3e9,0,0,&uStack_d8,0), uVar6 = extraout_EDX_00,
           *(int *)((int)this + 0x6f7) == 0x19)) {
          puStack_30 = &uStack_68;
          uStack_68 = 10000;
          uStack_64 = 0;
          uStack_60 = 0xfe;
          uStack_54 = 1;
          uStack_50 = 1;
          uStack_34 = 0x128;
          (*(code *)**(undefined4 **)this)(auStack_44);
          goto switchD_0046b287_caseD_1;
        }
      }
      else {
        iVar12 = thunk_FUN_004ae0b0((int)*(short *)((int)this + 0x4dd),
                                    (int)*(short *)((int)this + 0x4df),
                                    (int)*(short *)((int)this + 0x4e1),*(int *)((int)this + 0x4e3),
                                    *(int *)((int)this + 0x24),(undefined4 *)0x0,(int *)0x0,
                                    (int *)0x0,0,(int *)0x0);
        uVar6 = extraout_EDX_01;
        if ((iVar12 != 0) &&
           (thunk_FUN_0054cc20(0x3e9,0,0,&uStack_d8,0), uVar6 = extraout_EDX_02,
           *(int *)((int)this + 0x6f7) == 0x19)) {
          puStack_30 = &uStack_68;
          uStack_68 = 10000;
          uStack_64 = 0;
          uStack_60 = 0xfe;
          uStack_54 = 1;
          uStack_50 = 1;
          uStack_34 = 0x128;
          (*(code *)**(undefined4 **)this)(auStack_44);
          goto switchD_0046b287_caseD_1;
        }
      }
      if (*(int *)((int)this + 0x502) == 1) {
        *(undefined4 *)((int)this + 0x508) = 6;
      }
      else {
        *(undefined4 *)((int)this + 0x508) = 7;
        thunk_FUN_0048df40((int)this,uVar6);
        thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x4fc),
                           (int)*(short *)((int)this + 0x4fe),(int)*(short *)((int)this + 0x500));
        iVar12 = thunk_FUN_0045ff50(this,0);
        if (iVar12 == -1) {
          return -1;
        }
      }
LAB_0046c04e:
      iVar12 = (**(code **)(*(int *)this + 0xd8))();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (iVar12 == 6) {
      if (*(int *)((int)this + 0x50c) == 0) {
        iVar12 = (ushort)(*(short *)((int)this + 0x500) * 200) + 100;
        iVar7 = CONCAT22((short)((uint)pvVar13 >> 0x10),*(short *)((int)this + 0x4fe) * 0xc9) + 100;
        iVar15 = CONCAT22((short)((uint)iVar12 >> 0x10),*(short *)((int)this + 0x4fc) * 0xc9) + 100;
        uVar5 = (undefined2)((uint)iVar7 >> 0x10);
        uVar5 = (**(code **)(*(int *)this + 0x10))
                          (CONCAT22(uVar5,*(undefined2 *)((int)this + 0x41)),
                           CONCAT22((short)((uint)iVar15 >> 0x10),*(undefined2 *)((int)this + 0x43))
                           ,CONCAT22(uVar5,*(undefined2 *)((int)this + 0x45)),iVar15,iVar7,iVar12);
        *(undefined2 *)((int)this + 0x506) = uVar5;
        *(undefined4 *)((int)this + 0x50c) = 1;
      }
      if (*(int *)((int)this + 0x50c) == 1) {
        uVar9 = thunk_FUN_004176c0(this,*(short *)((int)this + 0x506));
        uVar9 = thunk_FUN_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24c1,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_007aa650);
          if (iVar12 != 0) {
            pcVar4 = (code *)swi(3);
            iVar12 = (*pcVar4)();
            return iVar12;
          }
          iVar12 = 0x24c2;
          goto LAB_0046c422;
        }
        if (uVar9 == 0) {
          *(undefined4 *)((int)this + 0x50c) = 2;
          goto LAB_0046c04e;
        }
      }
      if (*(int *)((int)this + 0x50c) == 2) {
        thunk_FUN_00415b30(this,*(short *)((int)this + 0x41),*(short *)((int)this + 0x43),
                           *(short *)((int)this + 0x45),*(short *)((int)this + 0x4fc) * 0xc9 + 100,
                           *(short *)((int)this + 0x4fe) * 0xc9 + 100,
                           *(short *)((int)this + 0x500) * 200 + 100,*(byte *)((int)this + 0x61));
        *(undefined4 *)((int)this + 0x50c) = 3;
      }
      if (*(int *)((int)this + 0x50c) == 3) {
        iStack_1c = thunk_FUN_00415ed0(this,&uStack_14,&uStack_18);
        iStack_20 = 0;
        uVar6 = extraout_EDX_03;
        if (*(char *)((int)this + 0x2bf) != '\0') {
          puStack_10 = (undefined4 *)((int)this + 0x2b3);
          do {
            puVar10 = (undefined4 *)
                      thunk_FUN_0041dc40(auStack_4c,*puStack_10,*(undefined2 *)(puStack_10 + 1),
                                         *(short *)((int)this + 0x6c));
            uStack_c = *puVar10;
            sStack_8 = *(short *)(puVar10 + 1);
            if (DAT_0080732c == 1) {
              bVar26 = 0;
              sVar25 = 0;
              uVar9 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              iVar7 = -1;
              *(uint *)((int)this + 0x1c) = uVar9;
              sVar24 = 0;
              sVar23 = 0;
              uVar11 = uVar9 * 0x41c64e6d + 0x3039;
              sVar22 = 0;
              *(uint *)((int)this + 0x1c) = uVar11;
              sVar21 = 0;
              sVar20 = 0;
              uStack_24 = uVar11 * 0x41c64e6d + 0x3039;
              sVar19 = 0;
              *(uint *)((int)this + 0x1c) = uStack_24;
              lVar18 = __ftol();
              iVar12 = (int)(short)lVar18 + (uVar9 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45)
                       + -3 + (int)sStack_8;
              iVar15 = ((uVar11 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) -
                       (int)uStack_c._2_2_;
              uVar9 = uStack_24;
            }
            else {
              uVar11 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0x1c) = uVar11;
              uVar14 = uVar11 * 0x41c64e6d + 0x3039;
              bVar26 = 0;
              *(uint *)((int)this + 0x1c) = uVar14;
              uVar9 = uVar14 * 0x41c64e6d + 0x3039;
              *(uint *)((int)this + 0x1c) = uVar9;
              sVar25 = 0;
              iVar7 = -1;
              sVar24 = 0;
              sVar23 = 0;
              sVar22 = 0;
              sVar21 = 0;
              sVar20 = 0;
              sVar19 = 0;
              iVar12 = (uVar11 >> 0x10) % 7 + (int)*(short *)((int)this + 0x45) + -3 + (int)sStack_8
              ;
              uStack_c._2_2_ = (short)((uint)uStack_c >> 0x10);
              iVar15 = ((uVar14 >> 0x10) % 7 + (int)*(short *)((int)this + 0x43)) -
                       (int)uStack_c._2_2_;
            }
            thunk_FUN_00556760(DAT_00802a7c,1,2,7,
                               (uVar9 >> 0x10) % 7 + (int)*(short *)((int)this + 0x41) + -3 +
                               (int)(short)uStack_c,iVar15 + -3,iVar12,sVar19,sVar20,sVar21,sVar22,
                               sVar23,sVar24,iVar7,sVar25,bVar26);
            iStack_20 = iStack_20 + 1;
            puStack_10 = (undefined4 *)((int)puStack_10 + 6);
            uVar6 = extraout_EDX_04;
          } while (iStack_20 < (int)(uint)*(byte *)((int)this + 0x2bf));
        }
        if (iStack_1c == -1) {
          iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e7,0,0,
                                      &DAT_007a4ccc,s_STBoatC__Build__BUILD_OMOVE_2_007aa62c);
          if (iVar12 == 0) {
            RaiseInternalException
                      (0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24e8);
            return 0xffff;
          }
          pcVar4 = (code *)swi(3);
          iVar12 = (*pcVar4)();
          return iVar12;
        }
        if (iStack_1c == 0) {
          *(undefined4 *)((int)this + 0x508) = 7;
          thunk_FUN_0048df40((int)this,uVar6);
          thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x4fc),
                             (int)*(short *)((int)this + 0x4fe),(int)*(short *)((int)this + 0x500));
          iVar12 = thunk_FUN_0045ff50(this,0);
          if (iVar12 == -1) {
            return -1;
          }
        }
      }
      goto LAB_0046c04e;
    }
    if (iVar12 != 7) {
      iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2510,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build___incorrect_entry_007aa5d8);
      if (iVar12 == 0) {
        return -1;
      }
      pcVar4 = (code *)swi(3);
      iVar12 = (*pcVar4)();
      return iVar12;
    }
    iVar12 = thunk_FUN_0045ff50(this,2);
    if (iVar12 == -1) {
      iVar12 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x24fe,0,0,&DAT_007a4ccc,
                                  s_STBoatC__Build__BUILD_ESCMOVE_er_007aa600);
      if (iVar12 != 0) {
        pcVar4 = (code *)swi(3);
        iVar12 = (*pcVar4)();
        return iVar12;
      }
      iVar12 = 0x24fe;
LAB_0046c422:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar12);
      return 0xffff;
    }
    if (iVar12 == 0) {
      iVar12 = (**(code **)(*(int *)this + 0xd8))();
      return -(uint)(iVar12 != 0);
    }
    if (iVar12 != 3) goto switchD_0046b287_caseD_1;
    thunk_FUN_0048df40((int)this,extraout_EDX_05);
    thunk_FUN_00481520(this,(int)*(short *)((int)this + 0x4fc),(int)*(short *)((int)this + 0x4fe),
                       (int)*(short *)((int)this + 0x500));
LAB_0046c3be:
    thunk_FUN_0045ff50(this,0);
  }
switchD_0046b287_caseD_1:
  iVar12 = (**(code **)(*(int *)this + 0xd8))();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
}

