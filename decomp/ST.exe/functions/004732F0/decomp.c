
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadObj */

int __thiscall STBoatC::LoadObj(STBoatC *this,int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 extraout_var_00;
  STBoatC *pSVar10;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar11;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_ECX;
  undefined2 uVar13;
  uint uVar12;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined8 uVar14;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_40 [2];
  undefined4 local_38;
  short local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  short local_8;
  short local_6;
  
  uVar3 = 0;
  local_c = (int *)0x0;
  if ((param_1 == 0) || (pSVar10 = this, param_1 == 1)) {
    puVar7 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07CA != 0) {
      return 0;
    }
    sVar16 = this->field_03BA;
    sVar17 = this->field_03BC;
    sVar18 = this->field_03BE;
    param_1 = this->field_03C0;
    puVar1 = &this->field_0x588;
    this->field_058A = sVar17;
    *(short *)puVar1 = sVar16;
    this->field_058C = sVar18;
    this->field_058E = param_1;
    if (((((sVar16 < 0) || (SHORT_007fb240 <= sVar16)) || (sVar17 < 0)) ||
        ((SHORT_007fb242 <= sVar17 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
      local_c = (int *)0x0;
    }
    else {
      local_c = *(int **)(DAT_007fb248 +
                         ((int)sVar17 * (int)SHORT_007fb240 + (int)SHORT_007fb246 * (int)sVar18 +
                         (int)sVar16) * 8);
    }
    if ((local_c == (int *)0x0) || (local_c[6] != param_1)) {
      iVar9 = FUN_006e62d0(PTR_00802a38,param_1,(int *)&local_c);
      if (iVar9 == -4) {
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)puVar1,&this->field_058A,&this->field_058C);
    }
    iVar9 = (**(code **)(*local_c + 0xf8))();
    if (iVar9 == 0) {
      return 0;
    }
    iVar9 = (**(code **)(*local_c + 0xa4))();
    if (iVar9 == 1) {
      return 0;
    }
    iVar9 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                              *(short *)puVar1,this->field_058A,this->field_058C,&local_6,&local_8,
                              (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                              (short *)&local_14,(undefined2 *)&local_10);
    if (iVar9 == -2) {
      return 0;
    }
    sub_00492390(this);
    pSVar10 = (STBoatC *)CONCAT22(extraout_var_00,param_1._2_2_);
    if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
       (this->field_005F != param_1._2_2_)) {
      this->field_0596 = 0;
      sVar16 = param_1._2_2_;
      if (iVar9 == -1) {
        local_6 = (short)local_18;
        local_8 = (short)local_14;
        sVar16 = (short)local_10;
      }
      sub_00481520(this,(int)local_6,(int)local_8,(int)sVar16);
      sub_00460260(this,0);
      goto cf_common_exit_0047405D;
    }
    this->field_0596 = 1;
    uVar3 = extraout_var_08;
  }
  uVar13 = (undefined2)((uint)pSVar10 >> 0x10);
  if (this->field_0596 == 0) {
    iVar9 = sub_00460260(this,2);
    uVar3 = extraout_var_09;
    uVar13 = extraout_var_01;
    switch(iVar9) {
    case 0:
    case 1:
    case 3:
      sub_004602B0(this);
      sVar16 = *(short *)&this->field_0x588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if ((((sVar16 < 0) || (SHORT_007fb240 <= sVar16)) ||
          ((sVar18 < 0 || ((SHORT_007fb242 <= sVar18 || (sVar17 < 0)))))) ||
         (SHORT_007fb244 <= sVar17)) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar17 * (int)SHORT_007fb246 + (int)sVar18 * (int)SHORT_007fb240 +
                           (int)sVar16) * 8);
      }
      if ((((local_c == (int *)0x0) || (local_c[6] != this->field_058E)) &&
          (iVar9 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_c), iVar9 == -4)) ||
         ((iVar9 = (**(code **)(*local_c + 0xa4))(), iVar9 == 1 ||
          (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 == 1)))) goto cf_common_exit_004743A5;
      thunk_FUN_004162f0(local_c,(undefined2 *)&this->field_0x588,&this->field_058A,
                         &this->field_058C);
      iVar9 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                                *(short *)&this->field_0x588,this->field_058A,this->field_058C,
                                &local_6,&local_8,(undefined2 *)((int)&param_1 + 2),
                                (short *)&local_18,(short *)&local_14,(undefined2 *)&local_10);
      if (iVar9 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != param_1._2_2_)) {
        if (iVar9 == -1) {
          iVar5 = (int)(short)local_10;
          iVar9 = (int)(short)local_14;
          iVar11 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)param_1._2_2_;
          iVar9 = (int)local_8;
          iVar11 = (int)local_6;
        }
        goto LAB_004736e2;
      }
      this->field_0596 = 1;
      this->field_0592 = 0;
      uVar3 = extraout_var_10;
      uVar13 = extraout_var_02;
      break;
    case 2:
      goto switchD_004734db_caseD_2;
    case -1:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03,0,0,&DAT_007a4ccc,
                                 s_STBoatC__LoadObj__LOADOBJ_MOVE_007aae48);
      if (iVar9 != 0) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03);
      return 0xffff;
    }
  }
  iVar9 = this->field_0596;
  if (iVar9 == 1) {
    iVar9 = (*this->vtable->vfunc_D8)();
    if (iVar9 != 0) {
      return -1;
    }
    uVar13 = 0;
    iVar9 = (int)this->field_0592 % 0x28;
    if (iVar9 == 0) {
      sVar16 = *(short *)&this->field_0x588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if (((((sVar16 < 0) || (SHORT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
          ((SHORT_007fb242 <= sVar18 || (sVar17 < 0)))) || (SHORT_007fb244 <= sVar17)) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar17 * (int)SHORT_007fb246 + (int)sVar18 * (int)SHORT_007fb240 +
                           (int)sVar16) * 8);
      }
      if (((local_c == (int *)0x0) || (local_c[6] != this->field_058E)) &&
         (iVar9 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_c), iVar9 == -4)) {
        return 0;
      }
      iVar9 = (**(code **)(*local_c + 0xa4))();
      if ((iVar9 == 1) || (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 == 1)) {
cf_common_exit_004743A5:
        sub_00492420(this);
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)&this->field_0x588,&this->field_058A,
                         &this->field_058C);
      iVar9 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                                *(short *)&this->field_0x588,this->field_058A,this->field_058C,
                                &local_6,&local_8,(undefined2 *)((int)&param_1 + 2),
                                (short *)&local_18,(short *)&local_14,(undefined2 *)&local_10);
      if (iVar9 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != param_1._2_2_)) {
        this->field_0596 = 0;
        if (iVar9 == -1) {
          iVar5 = (int)(short)local_10;
          iVar9 = (int)(short)local_14;
          iVar11 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)param_1._2_2_;
          iVar9 = (int)local_8;
          iVar11 = (int)local_6;
        }
LAB_004736e2:
        sub_00481520(this,iVar11,iVar9,iVar5);
        sub_00460260(this,0);
        return 2;
      }
      uVar14 = (**(code **)(*local_c + 0xa8))(this->field_0018);
      iVar9 = (int)((ulonglong)uVar14 >> 0x20);
      uVar13 = extraout_var_03;
      if ((int)uVar14 == 1) {
        this->field_0596 = 2;
        iVar5 = *local_c;
        iVar9 = local_18 * 0xc9 + 100;
        uVar3 = (undefined2)((uint)(local_18 * 0x19) >> 0x10);
        uVar4 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar3,this->field_0041),
                           CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0043),
                           CONCAT22(uVar3,this->field_0045),iVar9,local_14 * 0xc9 + 100,
                           local_10 * 200 + 100);
        (**(code **)(iVar5 + 0xb0))(this->field_0018,local_18,local_14,local_10,uVar4);
        return 2;
      }
    }
    uVar3 = (undefined2)((uint)iVar9 >> 0x10);
    iVar9 = this->field_0596;
    if (iVar9 == 1) {
      this->field_0592 = this->field_0592 + 1;
      return 2;
    }
  }
  if (iVar9 == 2) {
    sVar16 = *(short *)&this->field_0x588;
    sVar17 = this->field_058C;
    sVar18 = this->field_058A;
    if (((((sVar16 < 0) || (SHORT_007fb240 <= sVar16)) || (sVar18 < 0)) ||
        ((SHORT_007fb242 <= sVar18 || (sVar17 < 0)))) || (SHORT_007fb244 <= sVar17)) {
      local_c = (int *)0x0;
    }
    else {
      local_c = *(int **)(DAT_007fb248 +
                         ((int)sVar17 * (int)SHORT_007fb246 + (int)sVar18 * (int)SHORT_007fb240 +
                         (int)sVar16) * 8);
    }
    if (((local_c == (int *)0x0) || (local_c[6] != this->field_058E)) &&
       (iVar9 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_c), iVar9 == -4)) {
      return 0;
    }
    iVar9 = (**(code **)(*local_c + 0xa4))();
    if ((iVar9 == 1) || (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 == 1)) {
      sub_00492420(this);
      iVar9 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar9 != 0);
    }
cf_common_exit_0047405D:
    iVar9 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
  }
  if (iVar9 == 3) {
    if (this->field_059A == 0) {
      sVar16 = *(short *)&this->field_0x588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if ((((sVar16 < 0) || (SHORT_007fb240 <= sVar16)) ||
          ((sVar18 < 0 || ((SHORT_007fb242 <= sVar18 || (sVar17 < 0)))))) ||
         (SHORT_007fb244 <= sVar17)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(DAT_007fb248 +
                        ((int)sVar17 * (int)SHORT_007fb246 + (int)sVar18 * (int)SHORT_007fb240 +
                        (int)sVar16) * 8);
      }
      FUN_006ea3e0((void *)this->field_0211,this->field_01ED,*(int *)(iVar9 + 0x1ed));
      iVar9 = CONCAT22(extraout_var,this->field_058C * 200) + 100;
      iVar11 = CONCAT22(extraout_var_04,this->field_058A * 0xc9) + 100;
      iVar5 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)&this->field_0x588 * 0xc9) + 100;
      uVar3 = (undefined2)((uint)iVar11 >> 0x10);
      uVar3 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar3,this->field_0041),
                         CONCAT22((short)((uint)iVar5 >> 0x10),this->field_0043),
                         CONCAT22(uVar3,this->field_0045),iVar5,iVar11,iVar9);
      *(undefined2 *)&this->field_0x59e = uVar3;
      this->field_059A = 1;
      uVar3 = extraout_var_11;
      uVar13 = extraout_var_05;
    }
    if (this->field_059A == 1) {
      uVar6 = sub_004176C0(this,*(short *)&this->field_0x59e);
      uVar6 = sub_00417910(this,(short)uVar6);
      if (uVar6 == 0xffffffff) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e7d,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aae10);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      uVar3 = extraout_var_12;
      uVar13 = extraout_var_06;
      if (uVar6 == 0) {
        this->field_059A = 2;
        goto LAB_00473b6c;
      }
    }
    if (this->field_059A == 2) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x588 * 0xc9 + 100,this->field_058A * 0xc9 + 100,
                 this->field_058C * 200 + 100,this->field_0061);
      this->field_059A = 3;
      uVar3 = extraout_var_13;
      uVar13 = extraout_var_07;
    }
    if (this->field_059A == 3) {
      local_24 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_2c,&local_28);
      uVar6 = CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x2bf);
      local_1c = 0;
      uVar3 = extraout_var_14;
      if (this->field_0x2bf != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar7 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*local_20,*(undefined2 *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar7;
          local_34 = *(short *)(puVar7 + 1);
          if (DAT_0080732c == 1) {
            bVar23 = 0;
            sVar22 = 0;
            iVar11 = -1;
            uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
            sVar21 = 0;
            this->field_001C = uVar6;
            sVar20 = 0;
            sVar19 = 0;
            uVar8 = uVar6 * 0x41c64e6d + 0x3039;
            sVar18 = 0;
            this->field_001C = uVar8;
            local_30 = uVar8 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_30;
            sVar16 = 0;
            lVar15 = Library::MSVCRT::__ftol();
            iVar9 = (int)(short)lVar15 + (uVar6 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                    (int)local_34;
            iVar5 = ((uVar8 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
            uVar6 = local_30;
          }
          else {
            uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
            bVar23 = 0;
            this->field_001C = uVar8;
            uVar12 = uVar8 * 0x41c64e6d + 0x3039;
            sVar22 = 0;
            this->field_001C = uVar12;
            uVar6 = uVar12 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar6;
            iVar11 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar9 = (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar6 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar5 + -3,iVar9,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar11,sVar22,bVar23
                    );
          uVar6 = (uint)(byte)this->field_0x2bf;
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
          uVar3 = extraout_var_15;
        } while (local_1c < (int)uVar6);
      }
      uVar13 = (undefined2)(uVar6 >> 0x10);
      if (local_24 == -1) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ea3,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aadd8);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      if (local_24 == 0) {
        this->field_059A = 4;
      }
    }
    if ((this->field_059A == 4) && (this->field_006E == 0x2f)) {
      sVar16 = *(short *)&this->field_0x588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if (((sVar16 < 0) ||
          (((SHORT_007fb240 <= sVar16 || (sVar18 < 0)) || (SHORT_007fb242 <= sVar18)))) ||
         ((sVar17 < 0 || (SHORT_007fb244 <= sVar17)))) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(DAT_007fb248 +
                           ((int)sVar17 * (int)SHORT_007fb246 + (int)sVar18 * (int)SHORT_007fb240 +
                           (int)sVar16) * 8);
      }
      if (((local_c != (int *)0x0) && (local_c[6] == this->field_058E)) &&
         ((iVar9 = (**(code **)(*local_c + 0xa4))(), iVar9 != 1 &&
          (iVar9 = (**(code **)(*local_c + 0xc0))(), iVar9 != 1)))) {
        (**(code **)(*local_c + 0xb4))();
        this->field_07CA = this->field_058E;
        *(undefined4 *)&this->field_0x7ce = 0;
        thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
        thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        DumpClassC::WritePtr
                  (*(short *)&this->field_0x588,this->field_058A,this->field_058C,0,
                   (AnonShape_00495EC0_95A268C6 *)this);
        thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
        iVar9 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar9 != 0);
      }
      sub_00492420(this);
      local_30 = PTR_00802a38->field_00E4;
      CmdToObj(this,CASE_3,&local_30);
switchD_004734db_caseD_2:
      return 2;
    }
    if (this->field_059A == 5) {
      iVar9 = CONCAT22(uVar13,this->field_005F * 200) + 100;
      iVar11 = CONCAT22(uVar3,this->field_005D * 0xc9) + 100;
      iVar5 = CONCAT22((short)((uint)iVar9 >> 0x10),this->field_005B * 0xc9) + 100;
      uVar3 = (undefined2)((uint)iVar11 >> 0x10);
      uVar3 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar3,this->field_0041),
                         CONCAT22((short)((uint)iVar5 >> 0x10),this->field_0043),
                         CONCAT22(uVar3,this->field_0045),iVar5,iVar11,iVar9);
      *(undefined2 *)&this->field_0x59e = uVar3;
      this->field_059A = 6;
    }
    if (this->field_059A == 6) {
      uVar6 = sub_004176C0(this,*(short *)&this->field_0x59e);
      uVar6 = sub_00417910(this,(short)uVar6);
      if (uVar6 == 0xffffffff) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ed4,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aada0);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      if (uVar6 == 0) {
        this->field_059A = 7;
        goto cf_common_exit_0047405D;
      }
    }
    if (this->field_059A == 7) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 this->field_005B * 0xc9 + 100,this->field_005D * 0xc9 + 100,
                 this->field_005F * 200 + 100,this->field_0061);
      this->field_059A = 8;
    }
    if (this->field_059A == 8) {
      local_24 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_28,&local_2c);
      local_1c = 0;
      if (this->field_0x2bf != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar7 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*local_20,*(undefined2 *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar7;
          local_34 = *(short *)(puVar7 + 1);
          if (DAT_0080732c == 1) {
            bVar23 = 0;
            sVar22 = 0;
            uVar6 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar11 = -1;
            this->field_001C = uVar6;
            sVar21 = 0;
            sVar20 = 0;
            uVar8 = uVar6 * 0x41c64e6d + 0x3039;
            sVar19 = 0;
            this->field_001C = uVar8;
            sVar18 = 0;
            sVar17 = 0;
            local_30 = uVar8 * 0x41c64e6d + 0x3039;
            sVar16 = 0;
            this->field_001C = local_30;
            lVar15 = Library::MSVCRT::__ftol();
            iVar9 = (int)(short)lVar15 + (uVar6 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                    (int)local_34;
            iVar5 = ((uVar8 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
            uVar6 = local_30;
          }
          else {
            uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar8;
            uVar12 = uVar8 * 0x41c64e6d + 0x3039;
            bVar23 = 0;
            this->field_001C = uVar12;
            uVar6 = uVar12 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar6;
            sVar22 = 0;
            iVar11 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar9 = (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar6 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar5 + -3,iVar9,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar11,sVar22,bVar23
                    );
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
        } while (local_1c < (int)(uint)(byte)this->field_0x2bf);
      }
      if (local_24 == -1) {
        iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2efa,0,0,&DAT_007a4ccc,
                                   s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aad68);
        if (iVar9 != 0) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        return -1;
      }
      if (local_24 == 0) {
        FUN_006ea2f0((void *)this->field_0211,this->field_01ED);
        iVar9 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar9 != 0);
      }
    }
    if (this->field_059A == 9) {
      iVar9 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar9 != 0);
    }
  }
LAB_00473b6c:
  iVar9 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
}

