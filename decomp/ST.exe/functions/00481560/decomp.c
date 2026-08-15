#include "../../pseudocode_runtime.h"


uint __thiscall
FUN_00481560(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  longlong lVar1;
  void *pvVar2;
  int uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  DArrayTy *pDVar8;
  int iVar10;
  int local_EAX_2975;
  int iVar9;
  int iVar11;
  int iVar12;
  longlong local_EDXEAX_506;
  longlong local_EDXEAX_521;
  longlong local_EDXEAX_595;
  longlong local_EDXEAX_626;
  longlong local_EDXEAX_706;
  longlong local_EDXEAX_725;
  longlong local_EDXEAX_751;
  longlong local_EDXEAX_776;
  longlong local_EDXEAX_791;
  longlong local_EDXEAX_810;
  longlong local_EDXEAX_821;
  longlong local_EDXEAX_840;
  longlong local_EDXEAX_897;
  undefined8 uVar13;
  longlong local_EDXEAX_939;
  longlong local_EDXEAX_1141;
  longlong local_EDXEAX_1168;
  longlong local_EDXEAX_1329;
  longlong local_EDXEAX_1351;
  longlong local_EDXEAX_1516;
  longlong local_EDXEAX_1540;
  longlong lVar13;
  longlong lVar14;
  longlong local_EDXEAX_1689;
  longlong local_EDXEAX_1743;
  longlong local_EDXEAX_1768;
  longlong local_EDXEAX_1787;
  longlong local_EDXEAX_1814;
  longlong local_EDXEAX_1851;
  longlong lVar15;
  longlong lVar12;
  longlong local_EDXEAX_1914;
  longlong local_EDXEAX_1925;
  longlong local_EDXEAX_1941;
  longlong local_EDXEAX_1998;
  longlong local_EDXEAX_2040;
  longlong local_EDXEAX_2081;
  longlong local_EDXEAX_2281;
  longlong local_EDXEAX_2311;
  longlong local_EDXEAX_2353;
  longlong local_EDXEAX_2517;
  longlong local_EDXEAX_2551;
  longlong local_EDXEAX_2595;
  undefined4 local_104 [2];
  int local_fc;
  int iStack_f8;
  longlong local_f4;
  int local_ec;
  int iStack_e8;
  longlong local_e4;
  uint local_dc;
  int local_d8;
  longlong local_d4;
  undefined8 local_cc;
  uint local_c4;
  int local_c0;
  undefined8 local_bc;
  uint local_b4;
  int local_b0;
  double local_ac;
  undefined2 *local_a4;
  undefined8 local_a0;
  double local_98;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_5c;
  undefined8 local_54;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  short local_2c;
  short sStack_2a;
  short local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  ushort local_8;

  local_90 = (uint)STField<short>(this,0x237);
  iVar11 = (int)local_90 >> 0x1f;
  STPiece<0,2>(local_c) = 0;
  STPiece<2,2>(local_c) = 0;
  local_8 = 0;
  if ((STField<int>(this,0x455) != 1) && (STField<int>(this,0x742) != 1)) {
    local_60 = this;
    uVar2 = FUN_006acf0d((int)STField<short>(this,0x41),(int)STField<short>(this,0x43),
                         (int)STField<short>(this,0x45),(int)param_1,(int)param_2,(int)param_3);
    if ((uVar2 >> 0x1f < iVar11) || ((uVar2 >> 0x1f <= iVar11 && ((uint)uVar2 <= local_90)))) {
      uVar3 = (int)param_4 - (int)param_1;
      iVar11 = 0;
      local_20 = (int)uVar3 >> 0x1f;
      local_14 = (int)param_5 - (int)param_2;
      local_10 = (int)local_14 >> 0x1f;
      uVar4 = (int)param_6 - (int)param_3;
      local_38 = (int)uVar4 >> 0x1f;
      local_1c = 1000000000;
      local_18 = 0;
      local_44 = 0xffffffff;
      local_3c = uVar4;
      local_24 = uVar3;
      local_70 = Library::MSVCRT::__allmul(uVar3,local_20,uVar3,local_20);
      local_68 = Library::MSVCRT::__allmul(local_14,local_10,local_14,local_10);
      local_80 = Library::MSVCRT::__allmul(uVar4,local_38,uVar4,local_38);
      if ((uVar3 == 0 && local_20 == 0) && (local_14 == 0 && local_10 == 0)) {
        param_4 = param_4 + 1;
        param_5 = param_5 + 1;
        local_68 = 1;
        local_14 = 1;
        local_10 = 0;
        local_70 = 1;
        local_24 = 1;
        local_20 = 0;
        uVar3 = 1;
      }
      local_40 = 0;
      if (STField<char>(local_60,0x281) != '\0') {
        local_a4 = (undefined2 *)((int)local_60 + 0x23b);
        do {
          local_28 = 0;
          local_90 = (uint)(short)local_a4[2];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_2c = CONCAT22(*local_a4,local_a4[-1]);
          local_8c = (int)local_90 >> 0x1f;
          puVar5 = thunk_FUN_0041dc40(local_104,local_a4[-1],0,STField<short>(local_60,0x6c));
          local_2c = (short)*puVar5;
          local_2c = local_2c + STField<short>(local_60,0x41);
          sStack_2a = (short)((uint)*puVar5 >> 0x10);
          local_28 = *(short *)(puVar5 + 1) + STField<short>(local_60,0x45);
          sStack_2a = STField<short>(local_60,0x43) - sStack_2a;
          if (uVar3 == 0 && local_20 == 0) {
            local_4c = (int)param_3 - (int)local_28;
            local_EDXEAX_506 =
                 Library::MSVCRT::__allmul(local_4c,(int)local_4c >> 0x1f,uVar4,local_38);
            local_EDXEAX_521 =
                 Library::MSVCRT::__allmul
                           ((uint)local_EDXEAX_506,(int)((ulonglong)local_EDXEAX_506 >> 0x20),
                            local_14,local_10);
            local_54 = local_68 + local_80;
            local_34 = (uint)sStack_2a;
            local_b4 = (uint)param_2;
            local_b0 = (int)local_b4 >> 0x1f;
            local_78 = local_EDXEAX_521;
            local_EDXEAX_595 =
                 Library::MSVCRT::__allmul
                           (local_34,(int)local_34 >> 0x1f,(uint)local_68,STPiece<4,4>(local_68));
            local_EDXEAX_626 =
                 Library::MSVCRT::__allmul
                           (local_b4,local_b0,(uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar1 = (local_EDXEAX_521 - local_EDXEAX_595) - local_EDXEAX_626;
            local_5c = Library::MSVCRT::__allmul((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),2,0);
            uVar4 = local_4c * local_4c +
                    ((int)param_1 - (int)local_2c) * ((int)param_1 - (int)local_2c) +
                    local_34 * local_34;
            local_EDXEAX_706 = Library::MSVCRT::__allmul(local_90,local_8c,local_90,local_8c);
            local_EDXEAX_725 =
                 Library::MSVCRT::__allmul
                           (uVar4 - (uint)local_EDXEAX_706,
                            (((int)uVar4 >> 0x1f) - (int)((ulonglong)local_EDXEAX_706 >> 0x20)) -
                            (uint)(uVar4 < (uint)local_EDXEAX_706),(uint)local_68,
                            (int)((ulonglong)local_68 >> 0x20));
            local_EDXEAX_751 =
                 Library::MSVCRT::__allmul
                           (param_2 * 2,param_2 * 2 >> 0x1f,(uint)local_78,
                            (int)((ulonglong)local_78 >> 0x20));
            local_EDXEAX_776 = Library::MSVCRT::__allmul(local_b4,local_b0,local_b4,local_b0);
            local_EDXEAX_791 =
                 Library::MSVCRT::__allmul
                           ((uint)local_EDXEAX_776,(int)((ulonglong)local_EDXEAX_776 >> 0x20),
                            (uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar1 = local_EDXEAX_791 + (local_EDXEAX_725 - local_EDXEAX_751);
            local_EDXEAX_810 =
                 Library::MSVCRT::__allmul
                           ((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),(uint)local_54,
                            STPiece<4,4>(local_54));
            local_EDXEAX_821 =
                 Library::MSVCRT::__allmul
                           ((uint)local_EDXEAX_810,(int)((ulonglong)local_EDXEAX_810 >> 0x20),4,0);
            local_EDXEAX_840 =
                 Library::MSVCRT::__allmul
                           ((uint)local_5c,STPiece<4,4>(local_5c),(uint)local_5c,STPiece<4,4>(local_5c));
            local_a0 = local_EDXEAX_840 - local_EDXEAX_821;
            uVar4 = local_3c;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                local_EDXEAX_897 =
                     Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_5c,(uint)((ulonglong)local_5c >> 0x20),
                                    (uint)local_EDXEAX_897,
                                    (uint)((ulonglong)local_EDXEAX_897 >> 0x20));
                uVar4 = local_3c;
                iVar6 = (int)uVar13;
                local_30 = iVar6;
                local_EDXEAX_939 =
                     Library::MSVCRT::__allmul
                               (iVar6 - param_2,iVar6 - param_2 >> 0x1f,local_3c,local_38);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_939,
                                    (uint)((ulonglong)local_EDXEAX_939 >> 0x20),local_14,local_10);
                local_34 = param_5 - iVar6;
                iVar9 = (int)uVar13 + (int)param_3;
                iVar6 = param_6 - iVar9;
                uVar3 = iVar6 * iVar6 +
                        ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1) +
                        local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (ushort)iVar9;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_e4 = Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_e4;
                local_EDXEAX_1141 = Library::MSVCRT::__ftol();
                uVar4 = local_3c;
                STPiece<0,4>(local_EDXEAX_1141) = (int)local_EDXEAX_1141;
                local_30 = (int)local_EDXEAX_1141;
                local_EDXEAX_1168 =
                     Library::MSVCRT::__allmul
                               ((int)local_EDXEAX_1141 - param_2,
                                (int)local_EDXEAX_1141 - param_2 >> 0x1f,local_3c,local_38);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_1168,
                                    (uint)((ulonglong)local_EDXEAX_1168 >> 0x20),local_14,local_10);
                local_4c = (int)uVar13 + (int)param_3;
                iVar9 = ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1);
                uVar3 = (param_5 - (int)local_EDXEAX_1141) * (param_5 - (int)local_EDXEAX_1141) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
                local_ec = -(uint)local_5c;
                iStack_e8 = -(STPiece<4,4>(local_5c) + (uint)((uint)local_5c != 0));
                local_EDXEAX_1329 = Library::MSVCRT::__ftol();
                local_30 = (int)local_EDXEAX_1329;
                local_EDXEAX_1351 =
                     Library::MSVCRT::__allmul
                               (local_30 - param_2,local_30 - param_2 >> 0x1f,uVar4,local_38);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_1351,
                                    (uint)((ulonglong)local_EDXEAX_1351 >> 0x20),local_14,local_10);
                local_4c = (int)uVar13 + (int)param_3;
                uVar3 = (param_5 - local_30) * (param_5 - local_30) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          else {
            local_78 = Library::MSVCRT::__allmul
                                 ((int)param_2 - (int)sStack_2a,
                                  (int)param_2 - (int)sStack_2a >> 0x1f,uVar3,local_20);
            local_EDXEAX_1516 =
                 Library::MSVCRT::__allmul
                           ((int)param_3 - (int)local_28,(int)param_3 - (int)local_28 >> 0x1f,uVar3,
                            local_20);
            local_cc = local_EDXEAX_1516;
            local_EDXEAX_1540 =
                 Library::MSVCRT::__allmul
                           ((uint)local_EDXEAX_1516,(int)((ulonglong)local_EDXEAX_1516 >> 0x20),
                            uVar4,local_38);
            lVar13 = Library::MSVCRT::__allmul
                               ((uint)local_78,(int)((ulonglong)local_78 >> 0x20),local_14,local_10);
            local_54 = local_70 + local_68 + local_80;
            local_dc = (uint)param_1;
            local_d8 = (int)local_dc >> 0x1f;
            local_d4 = lVar13 + local_EDXEAX_1540;
            lVar14 = Library::MSVCRT::__allmul
                               (local_dc,local_d8,(uint)(local_80 + local_68),
                                (int)((ulonglong)(local_80 + local_68) >> 0x20));
            local_c4 = (uint)local_2c;
            local_c0 = (int)local_c4 >> 0x1f;
            local_bc = lVar14;
            local_EDXEAX_1689 =
                 Library::MSVCRT::__allmul
                           (local_c4,local_c0,(uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            lVar1 = ((lVar13 + local_EDXEAX_1540) - local_EDXEAX_1689) -
                    CONCAT44(STPiece<4,4>(local_bc),(int)lVar14);
            local_5c = Library::MSVCRT::__allmul((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),2,0);
            uVar3 = (uint)((ulonglong)local_5c >> 0x20);
            local_EDXEAX_1743 = Library::MSVCRT::__allmul(local_c4,local_c0,local_c4,local_c0);
            local_EDXEAX_1768 = Library::MSVCRT::__allmul(local_90,local_8c,local_90,local_8c);
            local_EDXEAX_1787 =
                 Library::MSVCRT::__allmul
                           ((uint)(local_EDXEAX_1743 - local_EDXEAX_1768),
                            (int)((ulonglong)(local_EDXEAX_1743 - local_EDXEAX_1768) >> 0x20),
                            (uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            local_EDXEAX_1814 =
                 Library::MSVCRT::__allmul((uint)local_d4,(int)((ulonglong)local_d4 >> 0x20),2,0);
            local_EDXEAX_1851 =
                 Library::MSVCRT::__allmul
                           ((uint)(local_bc - local_EDXEAX_1814),
                            (int)((ulonglong)(local_bc - local_EDXEAX_1814) >> 0x20),local_dc,
                            local_d8);
            lVar15 = Library::MSVCRT::__allmul
                               ((uint)local_cc,STPiece<4,4>(local_cc),(uint)local_cc,STPiece<4,4>(local_cc));
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)local_78,STPiece<4,4>(local_78),(uint)local_78,STPiece<4,4>(local_78));
            lVar1 = local_EDXEAX_1851 + local_EDXEAX_1787 + lVar15 + lVar12;
            local_EDXEAX_1914 =
                 Library::MSVCRT::__allmul
                           ((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20),(uint)local_54,
                            (int)((ulonglong)local_54 >> 0x20));
            local_EDXEAX_1925 =
                 Library::MSVCRT::__allmul
                           ((uint)local_EDXEAX_1914,(int)((ulonglong)local_EDXEAX_1914 >> 0x20),4,0);
            local_EDXEAX_1941 = Library::MSVCRT::__allmul((uint)local_5c,uVar3,(uint)local_5c,uVar3);
            local_a0 = local_EDXEAX_1941 - local_EDXEAX_1925;
            uVar4 = local_3c;
            iVar11 = local_18;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                local_EDXEAX_1998 =
                     Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_5c,uVar3,(uint)local_EDXEAX_1998,
                                    (uint)((ulonglong)local_EDXEAX_1998 >> 0x20));
                local_48 = (int)uVar13;
                uVar3 = local_48 - param_1;
                local_84 = (int)uVar3 >> 0x1f;
                local_EDXEAX_2040 = Library::MSVCRT::__allmul(uVar3,local_84,local_14,local_10);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_2040,
                                    (uint)((ulonglong)local_EDXEAX_2040 >> 0x20),local_24,local_20);
                uVar4 = local_3c;
                iVar12 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2081 = Library::MSVCRT::__allmul(uVar3,local_84,local_3c,local_38);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_2081,
                                    (uint)((ulonglong)local_EDXEAX_2081 >> 0x20),local_24,local_20);
                local_34 = param_5 - iVar12;
                iVar6 = (int)uVar13 + (int)param_3;
                iVar11 = param_6 - iVar6;
                uVar3 = iVar11 * iVar11 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar9 = (int)uVar3 >> 0x1f;
                iVar11 = local_18;
                if ((iVar9 <= local_18) && ((iVar9 < local_18 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar12;
                  local_8 = (ushort)iVar6;
                  local_44 = local_40;
                  iVar11 = iVar9;
                  local_1c = uVar3;
                  local_18 = iVar9;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_f4 = Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_f4;
                local_EDXEAX_2281 = Library::MSVCRT::__ftol();
                local_48 = (int)local_EDXEAX_2281;
                uVar7 = local_48 - param_1;
                local_84 = (int)uVar7 >> 0x1f;
                local_EDXEAX_2311 = Library::MSVCRT::__allmul(uVar7,local_84,local_14,local_10);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_2311,
                                    (uint)((ulonglong)local_EDXEAX_2311 >> 0x20),local_24,local_20);
                uVar4 = local_3c;
                local_30 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2353 = Library::MSVCRT::__allmul(uVar7,local_84,local_3c,local_38);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_2353,
                                    (uint)((ulonglong)local_EDXEAX_2353 >> 0x20),local_24,local_20);
                local_34 = param_5 - local_30;
                iVar6 = (int)uVar13 + (int)param_3;
                iVar11 = param_6 - iVar6;
                uVar7 = iVar11 * iVar11 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar11 = (int)uVar7 >> 0x1f;
                if ((iVar11 <= local_18) && ((iVar11 < local_18 || (uVar7 < local_1c)))) {
                  local_8 = (ushort)iVar6;
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_44 = local_40;
                  local_1c = uVar7;
                  local_18 = iVar11;
                }
                iVar11 = local_18;
                local_fc = -(uint)local_5c;
                iStack_f8 = -(uVar3 + ((uint)local_5c != 0));
                local_EDXEAX_2517 = Library::MSVCRT::__ftol();
                local_88 = (int)local_EDXEAX_2517 - (int)param_1;
                local_84 = (int)local_88 >> 0x1f;
                local_48 = (int)local_EDXEAX_2517;
                local_EDXEAX_2551 = Library::MSVCRT::__allmul(local_88,local_84,local_14,local_10);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_2551,
                                    (uint)((ulonglong)local_EDXEAX_2551 >> 0x20),local_24,local_20);
                iVar9 = (int)uVar13 + (int)param_2;
                local_EDXEAX_2595 = Library::MSVCRT::__allmul(local_88,local_84,uVar4,local_38);
                uVar13 = Library::MSVCRT::__alldiv
                                   ((uint)local_EDXEAX_2595,
                                    (uint)((ulonglong)local_EDXEAX_2595 >> 0x20),local_24,local_20);
                local_4c = (int)uVar13 + (int)param_3;
                local_34 = param_5 - iVar9;
                uVar3 = ((int)param_6 - local_4c) * ((int)param_6 - local_4c) +
                        (param_4 - local_48) * (param_4 - local_48) + local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar11) && ((iVar6 < iVar11 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar9;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar11 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          pvVar2 = local_60;
          local_40 = local_40 + 1;
          local_a4 = local_a4 + 4;
          uVar3 = local_24;
        } while ((int)local_40 < (int)(uint)STField<byte>(local_60,0x281));
        if (local_44 != 0xffffffff) {
          STPiece<0,2>(local_c) = (short)local_c - STField<short>(local_60,0x41);
          local_8 = local_8 - STField<short>(local_60,0x45);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(STField<short>(local_60,0x43) - STPiece<2,2>(local_c),(short)local_c);
          puVar5 = thunk_FUN_0041dc40(local_104,(short)local_c,local_8,
                                      0x168 - STField<short>(local_60,0x6c));
          uVar4 = local_44;
          local_c = *puVar5;
          local_8 = *(ushort *)(puVar5 + 1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pDVar8 = *(DArrayTy **)((int)pvVar2 + local_44 * 4 + 0x282);
          if (pDVar8 == nullptr) {
            pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
            *(DArrayTy **)((int)pvVar2 + uVar4 * 4 + 0x282) = pDVar8;
            iVar10 = Library::DKW::TBL::DArrayAppend(pDVar8,&local_c);
            return iVar10 << 0x10 | uVar4 & 0xffff;
          }
          _param_1 = 0xffffffff;
          uVar3 = pDVar8->count - 1;
          if (-1 < (int)uVar3) {
            do {
              DArrayGetElement(pDVar8,uVar3,&local_2c);
              if (local_2c == 0x7fff) {
                _param_1 = uVar3;
              }
              uVar3 = uVar3 - 1;
            } while (-1 < (int)uVar3);
            if (_param_1 != 0xffffffff) {
              Library::DKW::TBL::DArrayPut(pDVar8,_param_1,&local_c);
              return _param_1 << 0x10 | uVar4 & 0xffff;
            }
          }
          local_EAX_2975 = Library::DKW::TBL::DArrayAppend(pDVar8,&local_c);
          return local_EAX_2975 << 0x10 | uVar4 & 0xffff;
        }
      }
    }
  }
  return 0xffffffff;
}

