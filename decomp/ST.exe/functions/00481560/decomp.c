#include "../../pseudocode_runtime.h"


uint __thiscall
FUN_00481560(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  void *pvVar1;
  int uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  DArrayTy *pDVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
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
  iVar10 = (int)local_90 >> 0x1f;
  STPiece<0,2>(local_c) = 0;
  STPiece<2,2>(local_c) = 0;
  local_8 = 0;
  if ((STField<int>(this,0x455) != 1) && (STField<int>(this,0x742) != 1)) {
    local_60 = this;
    uVar2 = FUN_006acf0d((int)STField<short>(this,0x41),(int)STField<short>(this,0x43),
                         (int)STField<short>(this,0x45),(int)param_1,(int)param_2,(int)param_3);
    if ((uVar2 >> 0x1f < iVar10) || ((uVar2 >> 0x1f <= iVar10 && ((uint)uVar2 <= local_90)))) {
      uVar3 = (int)param_4 - (int)param_1;
      iVar10 = 0;
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
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
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
          puVar5 = (undefined4 *)
                   thunk_FUN_0041dc40(local_104,local_a4[-1],0,STField<short>(local_60,0x6c));
          local_2c = (short)*puVar5;
          local_2c = local_2c + STField<short>(local_60,0x41);
          sStack_2a = (short)((uint)*puVar5 >> 0x10);
          local_28 = *(short *)(puVar5 + 1) + STField<short>(local_60,0x45);
          sStack_2a = STField<short>(local_60,0x43) - sStack_2a;
          if (uVar3 == 0 && local_20 == 0) {
            local_4c = (int)param_3 - (int)local_28;
            lVar12 = Library::MSVCRT::__allmul(local_4c,(int)local_4c >> 0x1f,uVar4,local_38);
            lVar13 = Library::MSVCRT::__allmul
                               ((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),local_14,local_10);
            local_54 = local_68 + local_80;
            local_34 = (uint)sStack_2a;
            local_b4 = (uint)param_2;
            local_b0 = (int)local_b4 >> 0x1f;
            local_78 = lVar13;
            lVar14 = Library::MSVCRT::__allmul
                               (local_34,(int)local_34 >> 0x1f,(uint)local_68,STPiece<4,4>(local_68));
            lVar12 = Library::MSVCRT::__allmul
                               (local_b4,local_b0,(uint)local_80,(int)((ulonglong)local_80 >> 0x20));
            lVar12 = (lVar13 - lVar14) - lVar12;
            local_5c = Library::MSVCRT::__allmul((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),2,0);
            uVar4 = local_4c * local_4c +
                    ((int)param_1 - (int)local_2c) * ((int)param_1 - (int)local_2c) +
                    local_34 * local_34;
            lVar12 = Library::MSVCRT::__allmul(local_90,local_8c,local_90,local_8c);
            lVar13 = Library::MSVCRT::__allmul
                               (uVar4 - (uint)lVar12,
                                (((int)uVar4 >> 0x1f) - (int)((ulonglong)lVar12 >> 0x20)) -
                                (uint)(uVar4 < (uint)lVar12),(uint)local_68,
                                (int)((ulonglong)local_68 >> 0x20));
            lVar14 = Library::MSVCRT::__allmul
                               (param_2 * 2,param_2 * 2 >> 0x1f,(uint)local_78,
                                (int)((ulonglong)local_78 >> 0x20));
            lVar12 = Library::MSVCRT::__allmul(local_b4,local_b0,local_b4,local_b0);
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),(uint)local_80,
                                (int)((ulonglong)local_80 >> 0x20));
            lVar12 = lVar12 + (lVar13 - lVar14);
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),(uint)local_54,
                                STPiece<4,4>(local_54));
            lVar12 = Library::MSVCRT::__allmul((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),4,0);
            lVar13 = Library::MSVCRT::__allmul
                               ((uint)local_5c,STPiece<4,4>(local_5c),(uint)local_5c,STPiece<4,4>(local_5c));
            local_a0 = lVar13 - lVar12;
            uVar4 = local_3c;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                lVar12 = Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)local_5c,(uint)((ulonglong)local_5c >> 0x20),(uint)lVar12,
                                    (uint)((ulonglong)lVar12 >> 0x20));
                uVar4 = local_3c;
                iVar6 = (int)uVar15;
                local_30 = iVar6;
                lVar12 = Library::MSVCRT::__allmul
                                   (iVar6 - param_2,iVar6 - param_2 >> 0x1f,local_3c,local_38);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_14,local_10
                                   );
                local_34 = param_5 - iVar6;
                iVar9 = (int)uVar15 + (int)param_3;
                iVar6 = param_6 - iVar9;
                uVar3 = iVar6 * iVar6 +
                        ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1) +
                        local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar10) && ((iVar6 < iVar10 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (ushort)iVar9;
                  local_44 = local_40;
                  iVar10 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_e4 = Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_e4;
                lVar12 = Library::MSVCRT::__ftol();
                uVar4 = local_3c;
                iVar6 = (int)lVar12;
                local_30 = iVar6;
                lVar12 = Library::MSVCRT::__allmul
                                   (iVar6 - param_2,iVar6 - param_2 >> 0x1f,local_3c,local_38);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_14,local_10
                                   );
                local_4c = (int)uVar15 + (int)param_3;
                iVar9 = ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1);
                uVar3 = (param_5 - iVar6) * (param_5 - iVar6) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar10) && ((iVar6 < iVar10 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar10 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
                local_ec = -(uint)local_5c;
                iStack_e8 = -(STPiece<4,4>(local_5c) + (uint)((uint)local_5c != 0));
                lVar12 = Library::MSVCRT::__ftol();
                local_30 = (int)lVar12;
                lVar12 = Library::MSVCRT::__allmul
                                   (local_30 - param_2,local_30 - param_2 >> 0x1f,uVar4,local_38);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_14,local_10
                                   );
                local_4c = (int)uVar15 + (int)param_3;
                uVar3 = (param_5 - local_30) * (param_5 - local_30) +
                        iVar9 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar10) && ((iVar6 < iVar10 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = param_1;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar10 = iVar6;
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
            lVar12 = Library::MSVCRT::__allmul
                               ((int)param_3 - (int)local_28,(int)param_3 - (int)local_28 >> 0x1f,
                                uVar3,local_20);
            local_cc = lVar12;
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),uVar4,local_38);
            lVar13 = Library::MSVCRT::__allmul
                               ((uint)local_78,(int)((ulonglong)local_78 >> 0x20),local_14,local_10);
            local_54 = local_70 + local_68 + local_80;
            local_dc = (uint)param_1;
            local_d8 = (int)local_dc >> 0x1f;
            local_d4 = lVar13 + lVar12;
            lVar14 = Library::MSVCRT::__allmul
                               (local_dc,local_d8,(uint)(local_80 + local_68),
                                (int)((ulonglong)(local_80 + local_68) >> 0x20));
            local_c4 = (uint)local_2c;
            local_c0 = (int)local_c4 >> 0x1f;
            local_bc = lVar14;
            lVar16 = Library::MSVCRT::__allmul
                               (local_c4,local_c0,(uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            lVar12 = ((lVar13 + lVar12) - lVar16) - CONCAT44(STPiece<4,4>(local_bc),(int)lVar14);
            local_5c = Library::MSVCRT::__allmul((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),2,0);
            uVar3 = (uint)((ulonglong)local_5c >> 0x20);
            lVar12 = Library::MSVCRT::__allmul(local_c4,local_c0,local_c4,local_c0);
            lVar13 = Library::MSVCRT::__allmul(local_90,local_8c,local_90,local_8c);
            lVar13 = Library::MSVCRT::__allmul
                               ((uint)(lVar12 - lVar13),(int)((ulonglong)(lVar12 - lVar13) >> 0x20),
                                (uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)local_d4,(int)((ulonglong)local_d4 >> 0x20),2,0);
            lVar14 = Library::MSVCRT::__allmul
                               ((uint)(local_bc - lVar12),
                                (int)((ulonglong)(local_bc - lVar12) >> 0x20),local_dc,local_d8);
            lVar16 = Library::MSVCRT::__allmul
                               ((uint)local_cc,STPiece<4,4>(local_cc),(uint)local_cc,STPiece<4,4>(local_cc));
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)local_78,STPiece<4,4>(local_78),(uint)local_78,STPiece<4,4>(local_78));
            lVar12 = lVar14 + lVar13 + lVar16 + lVar12;
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),(uint)local_54,
                                (int)((ulonglong)local_54 >> 0x20));
            lVar12 = Library::MSVCRT::__allmul((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),4,0);
            lVar13 = Library::MSVCRT::__allmul((uint)local_5c,uVar3,(uint)local_5c,uVar3);
            local_a0 = lVar13 - lVar12;
            uVar4 = local_3c;
            iVar10 = local_18;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                lVar12 = Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),0xfffffffe,-1);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)local_5c,uVar3,(uint)lVar12,
                                    (uint)((ulonglong)lVar12 >> 0x20));
                local_48 = (int)uVar15;
                uVar3 = local_48 - param_1;
                local_84 = (int)uVar3 >> 0x1f;
                lVar12 = Library::MSVCRT::__allmul(uVar3,local_84,local_14,local_10);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_24,local_20
                                   );
                uVar4 = local_3c;
                iVar11 = (int)uVar15 + (int)param_2;
                lVar12 = Library::MSVCRT::__allmul(uVar3,local_84,local_3c,local_38);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_24,local_20
                                   );
                local_34 = param_5 - iVar11;
                iVar6 = (int)uVar15 + (int)param_3;
                iVar10 = param_6 - iVar6;
                uVar3 = iVar10 * iVar10 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar9 = (int)uVar3 >> 0x1f;
                iVar10 = local_18;
                if ((iVar9 <= local_18) && ((iVar9 < local_18 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar11;
                  local_8 = (ushort)iVar6;
                  local_44 = local_40;
                  iVar10 = iVar9;
                  local_1c = uVar3;
                  local_18 = iVar9;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_f4 = Library::MSVCRT::__allmul((uint)local_54,STPiece<4,4>(local_54),2,0);
                local_ac = (double)local_f4;
                lVar12 = Library::MSVCRT::__ftol();
                local_48 = (int)lVar12;
                uVar7 = local_48 - param_1;
                local_84 = (int)uVar7 >> 0x1f;
                lVar12 = Library::MSVCRT::__allmul(uVar7,local_84,local_14,local_10);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_24,local_20
                                   );
                uVar4 = local_3c;
                local_30 = (int)uVar15 + (int)param_2;
                lVar12 = Library::MSVCRT::__allmul(uVar7,local_84,local_3c,local_38);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_24,local_20
                                   );
                local_34 = param_5 - local_30;
                iVar6 = (int)uVar15 + (int)param_3;
                iVar10 = param_6 - iVar6;
                uVar7 = iVar10 * iVar10 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar10 = (int)uVar7 >> 0x1f;
                if ((iVar10 <= local_18) && ((iVar10 < local_18 || (uVar7 < local_1c)))) {
                  local_8 = (ushort)iVar6;
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)local_30;
                  local_44 = local_40;
                  local_1c = uVar7;
                  local_18 = iVar10;
                }
                iVar10 = local_18;
                local_fc = -(uint)local_5c;
                iStack_f8 = -(uVar3 + ((uint)local_5c != 0));
                lVar12 = Library::MSVCRT::__ftol();
                local_48 = (int)lVar12;
                local_88 = local_48 - param_1;
                local_84 = (int)local_88 >> 0x1f;
                lVar12 = Library::MSVCRT::__allmul(local_88,local_84,local_14,local_10);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_24,local_20
                                   );
                iVar9 = (int)uVar15 + (int)param_2;
                lVar12 = Library::MSVCRT::__allmul(local_88,local_84,uVar4,local_38);
                uVar15 = Library::MSVCRT::__alldiv
                                   ((uint)lVar12,(uint)((ulonglong)lVar12 >> 0x20),local_24,local_20
                                   );
                local_4c = (int)uVar15 + (int)param_3;
                local_34 = param_5 - iVar9;
                uVar3 = ((int)param_6 - local_4c) * ((int)param_6 - local_4c) +
                        (param_4 - local_48) * (param_4 - local_48) + local_34 * local_34;
                iVar6 = (int)uVar3 >> 0x1f;
                if ((iVar6 <= iVar10) && ((iVar6 < iVar10 || (uVar3 < local_1c)))) {
                  STPiece<0,2>(local_c) = (short)local_48;
                  STPiece<2,2>(local_c) = (short)iVar9;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar10 = iVar6;
                  local_1c = uVar3;
                  local_18 = iVar6;
                }
              }
            }
          }
          pvVar1 = local_60;
          local_40 = local_40 + 1;
          local_a4 = local_a4 + 4;
          uVar3 = local_24;
        } while ((int)local_40 < (int)(uint)STField<byte>(local_60,0x281));
        if (local_44 != 0xffffffff) {
          STPiece<0,2>(local_c) = (short)local_c - STField<short>(local_60,0x41);
          local_8 = local_8 - STField<short>(local_60,0x45);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT22(STField<short>(local_60,0x43) - STPiece<2,2>(local_c),(short)local_c);
          puVar5 = (undefined4 *)
                   thunk_FUN_0041dc40(local_104,(short)local_c,local_8,
                                      0x168 - STField<short>(local_60,0x6c));
          uVar4 = local_44;
          local_c = *puVar5;
          local_8 = *(ushort *)(puVar5 + 1);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pDVar8 = *(DArrayTy **)((int)pvVar1 + local_44 * 4 + 0x282);
          if (pDVar8 == nullptr) {
            pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
            *(DArrayTy **)((int)pvVar1 + uVar4 * 4 + 0x282) = pDVar8;
            iVar10 = Library::DKW::TBL::DArrayAppend(pDVar8,&local_c);
            return iVar10 << 0x10 | uVar4 & 0xffff;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_1 = 0xffffffff;
          uVar3 = pDVar8->count - 1;
          if (-1 < (int)uVar3) {
            do {
              DArrayGetElement(pDVar8,uVar3,&local_2c);
              if (local_2c == 0x7fff) {
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                _param_1 = uVar3;
              }
              uVar3 = uVar3 - 1;
            } while (-1 < (int)uVar3);
            if (_param_1 != 0xffffffff) {
              Library::DKW::TBL::DArrayPut(pDVar8,_param_1,&local_c);
              return _param_1 << 0x10 | uVar4 & 0xffff;
            }
          }
          iVar10 = Library::DKW::TBL::DArrayAppend(pDVar8,&local_c);
          return iVar10 << 0x10 | uVar4 & 0xffff;
        }
      }
    }
  }
  return 0xffffffff;
}

