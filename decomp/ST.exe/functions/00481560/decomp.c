
uint __thiscall
FUN_00481560(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  DArrayTy *array;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
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
  undefined4 local_2c;
  short local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  short local_8;
  
  local_90 = (uint)*(short *)((int)this + 0x237);
  iVar9 = (int)local_90 >> 0x1f;
  local_c._0_2_ = 0;
  local_c._2_2_ = 0;
  local_8 = 0;
  if ((*(int *)((int)this + 0x455) != 1) && (*(int *)((int)this + 0x742) != 1)) {
    local_60 = this;
    uVar2 = FUN_006acf0d((int)*(short *)((int)this + 0x41),(int)*(short *)((int)this + 0x43),
                         (int)*(short *)((int)this + 0x45),(int)param_1,(int)param_2,(int)param_3);
    if (((int)uVar2 >> 0x1f < iVar9) || (((int)uVar2 >> 0x1f <= iVar9 && (uVar2 <= local_90)))) {
      uVar3 = (int)param_4 - (int)param_1;
      iVar9 = 0;
      local_20 = (int)uVar3 >> 0x1f;
      local_14 = (int)param_5 - (int)param_2;
      local_10 = (int)local_14 >> 0x1f;
      uVar2 = (int)param_6 - (int)param_3;
      local_38 = (int)uVar2 >> 0x1f;
      local_1c = 1000000000;
      local_18 = 0;
      local_44 = 0xffffffff;
      local_3c = uVar2;
      local_24 = uVar3;
      local_70 = Library::MSVCRT::__allmul(uVar3,local_20,uVar3,local_20);
      local_68 = Library::MSVCRT::__allmul(local_14,local_10,local_14,local_10);
      local_80 = Library::MSVCRT::__allmul(uVar2,local_38,uVar2,local_38);
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
      if (*(char *)((int)local_60 + 0x281) != '\0') {
        local_a4 = (undefined2 *)((int)local_60 + 0x23b);
        do {
          local_28 = 0;
          local_90 = (uint)(short)local_a4[2];
          local_2c = CONCAT22(*local_a4,local_a4[-1]);
          local_8c = (int)local_90 >> 0x1f;
          puVar4 = (undefined4 *)
                   thunk_FUN_0041dc40(local_104,local_2c,0,*(short *)((int)local_60 + 0x6c));
          local_2c._0_2_ = (short)*puVar4;
          local_2c._0_2_ = (short)local_2c + *(short *)((int)local_60 + 0x41);
          local_2c._2_2_ = (short)((uint)*puVar4 >> 0x10);
          local_28 = *(short *)(puVar4 + 1) + *(short *)((int)local_60 + 0x45);
          local_2c._2_2_ = *(short *)((int)local_60 + 0x43) - local_2c._2_2_;
          if (uVar3 == 0 && local_20 == 0) {
            local_4c = (int)param_3 - (int)local_28;
            lVar11 = Library::MSVCRT::__allmul(local_4c,(int)local_4c >> 0x1f,uVar2,local_38);
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),local_14,local_10);
            local_54 = local_68 + local_80;
            local_34 = (uint)local_2c._2_2_;
            local_b4 = (uint)param_2;
            local_b0 = (int)local_b4 >> 0x1f;
            local_78 = lVar12;
            lVar13 = Library::MSVCRT::__allmul
                               (local_34,(int)local_34 >> 0x1f,(uint)local_68,local_68._4_4_);
            lVar11 = Library::MSVCRT::__allmul
                               (local_b4,local_b0,(uint)local_80,(int)((ulonglong)local_80 >> 0x20))
            ;
            lVar11 = (lVar12 - lVar13) - lVar11;
            local_5c = Library::MSVCRT::__allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),2,0);
            uVar2 = local_4c * local_4c +
                    ((int)param_1 - (int)(short)local_2c) * ((int)param_1 - (int)(short)local_2c) +
                    local_34 * local_34;
            lVar11 = Library::MSVCRT::__allmul(local_90,local_8c,local_90,local_8c);
            lVar12 = Library::MSVCRT::__allmul
                               (uVar2 - (uint)lVar11,
                                (((int)uVar2 >> 0x1f) - (int)((ulonglong)lVar11 >> 0x20)) -
                                (uint)(uVar2 < (uint)lVar11),(uint)local_68,
                                (int)((ulonglong)local_68 >> 0x20));
            lVar13 = Library::MSVCRT::__allmul
                               (param_2 * 2,param_2 * 2 >> 0x1f,(uint)local_78,
                                (int)((ulonglong)local_78 >> 0x20));
            lVar11 = Library::MSVCRT::__allmul(local_b4,local_b0,local_b4,local_b0);
            lVar11 = Library::MSVCRT::__allmul
                               ((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),(uint)local_80,
                                (int)((ulonglong)local_80 >> 0x20));
            lVar11 = lVar11 + (lVar12 - lVar13);
            lVar11 = Library::MSVCRT::__allmul
                               ((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),(uint)local_54,
                                local_54._4_4_);
            lVar11 = Library::MSVCRT::__allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),4,0);
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)local_5c,local_5c._4_4_,(uint)local_5c,local_5c._4_4_);
            local_a0 = lVar12 - lVar11;
            uVar2 = local_3c;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                lVar11 = Library::MSVCRT::__allmul((uint)local_54,local_54._4_4_,0xfffffffe,-1);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)local_5c,(uint)((ulonglong)local_5c >> 0x20),(uint)lVar11,
                                    (uint)((ulonglong)lVar11 >> 0x20));
                uVar2 = local_3c;
                iVar5 = (int)uVar14;
                local_30 = iVar5;
                lVar11 = Library::MSVCRT::__allmul
                                   (iVar5 - param_2,iVar5 - param_2 >> 0x1f,local_3c,local_38);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_14,local_10
                                   );
                local_34 = param_5 - iVar5;
                iVar8 = (int)uVar14 + (int)param_3;
                iVar5 = param_6 - iVar8;
                uVar3 = iVar5 * iVar5 +
                        ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1) +
                        local_34 * local_34;
                iVar5 = (int)uVar3 >> 0x1f;
                if ((iVar5 <= iVar9) && ((iVar5 < iVar9 || (uVar3 < local_1c)))) {
                  local_c._0_2_ = param_1;
                  local_c._2_2_ = (short)local_30;
                  local_8 = (short)iVar8;
                  local_44 = local_40;
                  iVar9 = iVar5;
                  local_1c = uVar3;
                  local_18 = iVar5;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_e4 = Library::MSVCRT::__allmul((uint)local_54,local_54._4_4_,2,0);
                local_ac = (double)local_e4;
                lVar11 = Library::MSVCRT::__ftol();
                uVar2 = local_3c;
                iVar5 = (int)lVar11;
                local_30 = iVar5;
                lVar11 = Library::MSVCRT::__allmul
                                   (iVar5 - param_2,iVar5 - param_2 >> 0x1f,local_3c,local_38);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_14,local_10
                                   );
                local_4c = (int)uVar14 + (int)param_3;
                iVar8 = ((int)param_4 - (int)param_1) * ((int)param_4 - (int)param_1);
                uVar3 = (param_5 - iVar5) * (param_5 - iVar5) +
                        iVar8 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar5 = (int)uVar3 >> 0x1f;
                if ((iVar5 <= iVar9) && ((iVar5 < iVar9 || (uVar3 < local_1c)))) {
                  local_c._0_2_ = param_1;
                  local_c._2_2_ = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar9 = iVar5;
                  local_1c = uVar3;
                  local_18 = iVar5;
                }
                local_ec = -(uint)local_5c;
                iStack_e8 = -(local_5c._4_4_ + (uint)((uint)local_5c != 0));
                lVar11 = Library::MSVCRT::__ftol();
                local_30 = (int)lVar11;
                lVar11 = Library::MSVCRT::__allmul
                                   (local_30 - param_2,local_30 - param_2 >> 0x1f,uVar2,local_38);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_14,local_10
                                   );
                local_4c = (int)uVar14 + (int)param_3;
                uVar3 = (param_5 - local_30) * (param_5 - local_30) +
                        iVar8 + ((int)param_6 - local_4c) * ((int)param_6 - local_4c);
                iVar5 = (int)uVar3 >> 0x1f;
                if ((iVar5 <= iVar9) && ((iVar5 < iVar9 || (uVar3 < local_1c)))) {
                  local_c._0_2_ = param_1;
                  local_c._2_2_ = (short)local_30;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar9 = iVar5;
                  local_1c = uVar3;
                  local_18 = iVar5;
                }
              }
            }
          }
          else {
            local_78 = Library::MSVCRT::__allmul
                                 ((int)param_2 - (int)local_2c._2_2_,
                                  (int)param_2 - (int)local_2c._2_2_ >> 0x1f,uVar3,local_20);
            lVar11 = Library::MSVCRT::__allmul
                               ((int)param_3 - (int)local_28,(int)param_3 - (int)local_28 >> 0x1f,
                                uVar3,local_20);
            local_cc = lVar11;
            lVar11 = Library::MSVCRT::__allmul
                               ((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),uVar2,local_38);
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)local_78,(int)((ulonglong)local_78 >> 0x20),local_14,local_10)
            ;
            local_54 = local_70 + local_68 + local_80;
            local_dc = (uint)param_1;
            local_d8 = (int)local_dc >> 0x1f;
            local_d4 = lVar12 + lVar11;
            lVar13 = Library::MSVCRT::__allmul
                               (local_dc,local_d8,(uint)(local_80 + local_68),
                                (int)((ulonglong)(local_80 + local_68) >> 0x20));
            local_c4 = (uint)(short)local_2c;
            local_c0 = (int)local_c4 >> 0x1f;
            local_bc = lVar13;
            lVar15 = Library::MSVCRT::__allmul
                               (local_c4,local_c0,(uint)local_70,(int)((ulonglong)local_70 >> 0x20))
            ;
            lVar11 = ((lVar12 + lVar11) - lVar15) - CONCAT44(local_bc._4_4_,(int)lVar13);
            local_5c = Library::MSVCRT::__allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),2,0);
            uVar3 = (uint)((ulonglong)local_5c >> 0x20);
            lVar11 = Library::MSVCRT::__allmul(local_c4,local_c0,local_c4,local_c0);
            lVar12 = Library::MSVCRT::__allmul(local_90,local_8c,local_90,local_8c);
            lVar12 = Library::MSVCRT::__allmul
                               ((uint)(lVar11 - lVar12),(int)((ulonglong)(lVar11 - lVar12) >> 0x20),
                                (uint)local_70,(int)((ulonglong)local_70 >> 0x20));
            lVar11 = Library::MSVCRT::__allmul
                               ((uint)local_d4,(int)((ulonglong)local_d4 >> 0x20),2,0);
            lVar13 = Library::MSVCRT::__allmul
                               ((uint)(local_bc - lVar11),
                                (int)((ulonglong)(local_bc - lVar11) >> 0x20),local_dc,local_d8);
            lVar15 = Library::MSVCRT::__allmul
                               ((uint)local_cc,local_cc._4_4_,(uint)local_cc,local_cc._4_4_);
            lVar11 = Library::MSVCRT::__allmul
                               ((uint)local_78,local_78._4_4_,(uint)local_78,local_78._4_4_);
            lVar11 = lVar13 + lVar12 + lVar15 + lVar11;
            lVar11 = Library::MSVCRT::__allmul
                               ((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),(uint)local_54,
                                (int)((ulonglong)local_54 >> 0x20));
            lVar11 = Library::MSVCRT::__allmul((uint)lVar11,(int)((ulonglong)lVar11 >> 0x20),4,0);
            lVar12 = Library::MSVCRT::__allmul((uint)local_5c,uVar3,(uint)local_5c,uVar3);
            local_a0 = lVar12 - lVar11;
            uVar2 = local_3c;
            iVar9 = local_18;
            if (-1 < local_a0) {
              if (local_a0 == 0) {
                lVar11 = Library::MSVCRT::__allmul((uint)local_54,local_54._4_4_,0xfffffffe,-1);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)local_5c,uVar3,(uint)lVar11,
                                    (uint)((ulonglong)lVar11 >> 0x20));
                local_48 = (int)uVar14;
                uVar3 = local_48 - param_1;
                local_84 = (int)uVar3 >> 0x1f;
                lVar11 = Library::MSVCRT::__allmul(uVar3,local_84,local_14,local_10);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_24,local_20
                                   );
                uVar2 = local_3c;
                iVar10 = (int)uVar14 + (int)param_2;
                lVar11 = Library::MSVCRT::__allmul(uVar3,local_84,local_3c,local_38);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_24,local_20
                                   );
                local_34 = param_5 - iVar10;
                iVar5 = (int)uVar14 + (int)param_3;
                iVar9 = param_6 - iVar5;
                uVar3 = iVar9 * iVar9 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar8 = (int)uVar3 >> 0x1f;
                iVar9 = local_18;
                if ((iVar8 <= local_18) && ((iVar8 < local_18 || (uVar3 < local_1c)))) {
                  local_c._0_2_ = (short)local_48;
                  local_c._2_2_ = (short)iVar10;
                  local_8 = (short)iVar5;
                  local_44 = local_40;
                  iVar9 = iVar8;
                  local_1c = uVar3;
                  local_18 = iVar8;
                }
              }
              else {
                local_98 = SQRT((double)local_a0);
                local_f4 = Library::MSVCRT::__allmul((uint)local_54,local_54._4_4_,2,0);
                local_ac = (double)local_f4;
                lVar11 = Library::MSVCRT::__ftol();
                local_48 = (int)lVar11;
                uVar6 = local_48 - param_1;
                local_84 = (int)uVar6 >> 0x1f;
                lVar11 = Library::MSVCRT::__allmul(uVar6,local_84,local_14,local_10);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_24,local_20
                                   );
                uVar2 = local_3c;
                local_30 = (int)uVar14 + (int)param_2;
                lVar11 = Library::MSVCRT::__allmul(uVar6,local_84,local_3c,local_38);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_24,local_20
                                   );
                local_34 = param_5 - local_30;
                iVar5 = (int)uVar14 + (int)param_3;
                iVar9 = param_6 - iVar5;
                uVar6 = iVar9 * iVar9 + (param_4 - local_48) * (param_4 - local_48) +
                        local_34 * local_34;
                iVar9 = (int)uVar6 >> 0x1f;
                if ((iVar9 <= local_18) && ((iVar9 < local_18 || (uVar6 < local_1c)))) {
                  local_8 = (short)iVar5;
                  local_c._0_2_ = (short)local_48;
                  local_c._2_2_ = (short)local_30;
                  local_44 = local_40;
                  local_1c = uVar6;
                  local_18 = iVar9;
                }
                iVar9 = local_18;
                local_fc = -(uint)local_5c;
                iStack_f8 = -(uVar3 + ((uint)local_5c != 0));
                lVar11 = Library::MSVCRT::__ftol();
                local_48 = (int)lVar11;
                local_88 = local_48 - param_1;
                local_84 = (int)local_88 >> 0x1f;
                lVar11 = Library::MSVCRT::__allmul(local_88,local_84,local_14,local_10);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_24,local_20
                                   );
                iVar8 = (int)uVar14 + (int)param_2;
                lVar11 = Library::MSVCRT::__allmul(local_88,local_84,uVar2,local_38);
                uVar14 = Library::MSVCRT::__alldiv
                                   ((uint)lVar11,(uint)((ulonglong)lVar11 >> 0x20),local_24,local_20
                                   );
                local_4c = (int)uVar14 + (int)param_3;
                local_34 = param_5 - iVar8;
                uVar3 = ((int)param_6 - local_4c) * ((int)param_6 - local_4c) +
                        (param_4 - local_48) * (param_4 - local_48) + local_34 * local_34;
                iVar5 = (int)uVar3 >> 0x1f;
                if ((iVar5 <= iVar9) && ((iVar5 < iVar9 || (uVar3 < local_1c)))) {
                  local_c._0_2_ = (short)local_48;
                  local_c._2_2_ = (short)iVar8;
                  local_8 = (short)local_4c;
                  local_44 = local_40;
                  iVar9 = iVar5;
                  local_1c = uVar3;
                  local_18 = iVar5;
                }
              }
            }
          }
          pvVar1 = local_60;
          local_40 = local_40 + 1;
          local_a4 = local_a4 + 4;
          uVar3 = local_24;
        } while ((int)local_40 < (int)(uint)*(byte *)((int)local_60 + 0x281));
        if (local_44 != 0xffffffff) {
          local_8 = local_8 - *(short *)((int)local_60 + 0x45);
          local_c = CONCAT22(*(short *)((int)local_60 + 0x43) - local_c._2_2_,
                             (short)local_c - *(short *)((int)local_60 + 0x41));
          puVar4 = (undefined4 *)
                   thunk_FUN_0041dc40(local_104,local_c,local_8,
                                      0x168 - *(short *)((int)local_60 + 0x6c));
          uVar2 = local_44;
          local_c = *puVar4;
          local_8 = *(short *)(puVar4 + 1);
          array = *(DArrayTy **)((int)pvVar1 + local_44 * 4 + 0x282);
          if (array == (DArrayTy *)0x0) {
            puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
            *(uint **)((int)pvVar1 + uVar2 * 4 + 0x282) = puVar7;
            uVar3 = Library::DKW::TBL::FUN_006ae1c0(puVar7,&local_c);
            return uVar3 << 0x10 | uVar2 & 0xffff;
          }
          _param_1 = 0xffffffff;
          uVar3 = array->count - 1;
          if (-1 < (int)uVar3) {
            do {
              DArrayGetElement(array,uVar3,&local_2c);
              if ((short)local_2c == 0x7fff) {
                _param_1 = uVar3;
              }
              uVar3 = uVar3 - 1;
            } while (-1 < (int)uVar3);
            if (_param_1 != 0xffffffff) {
              Library::DKW::TBL::FUN_006ae140(&array->flags,_param_1,&local_c);
              return _param_1 << 0x10 | uVar2 & 0xffff;
            }
          }
          uVar3 = Library::DKW::TBL::FUN_006ae1c0(&array->flags,&local_c);
          return uVar3 << 0x10 | uVar2 & 0xffff;
        }
      }
    }
  }
  return 0xffffffff;
}

