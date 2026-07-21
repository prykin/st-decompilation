
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadObj */

int __thiscall STBoatC::LoadObj(STBoatC *this,int param_1)

{
  undefined1 *puVar1;
  STWorldObjectVTable *pSVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  STWorldObject *pSVar6;
  undefined2 extraout_var;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined2 extraout_var_00;
  STBoatC *pSVar12;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar13;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined4 extraout_ECX;
  undefined2 uVar15;
  uint uVar14;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined8 uVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  byte bVar25;
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
  STWorldObject *local_c;
  short local_8;
  short local_6;
  
  uVar4 = 0;
  local_c = (STWorldObject *)0x0;
  if ((param_1 == 0) || (pSVar12 = this, param_1 == 1)) {
    puVar9 = &this->field_02CC;
    for (iVar11 = 0x17; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07CA != 0) {
      return 0;
    }
    sVar18 = this->field_03BA;
    sVar19 = this->field_03BC;
    sVar20 = this->field_03BE;
    param_1 = this->field_03C0;
    puVar1 = &this->field_0x588;
    this->field_058A = sVar19;
    *(short *)puVar1 = sVar18;
    this->field_058C = sVar20;
    this->field_058E = param_1;
    if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar19 < 0)) ||
        ((g_worldGrid.sizeY <= sVar19 || (sVar20 < 0)))) || (g_worldGrid.sizeZ <= sVar20)) {
      local_c = (STWorldObject *)0x0;
    }
    else {
      local_c = g_worldGrid.cells
                [(int)sVar19 * (int)g_worldGrid.sizeX + (int)g_worldGrid.planeStride * (int)sVar20 +
                 (int)sVar18].objects[0];
    }
    if ((local_c == (STWorldObject *)0x0) || (*(int *)&local_c->field_0x18 != param_1)) {
      iVar11 = FUN_006e62d0(PTR_00802a38,param_1,(int *)&local_c);
      if (iVar11 == -4) {
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)puVar1,&this->field_058A,&this->field_058C);
    }
    iVar11 = (*local_c->vtable[5].slots_00_28[2])();
    if (iVar11 == 0) {
      return 0;
    }
    iVar11 = (*local_c->vtable[3].slots_00_28[5])();
    if (iVar11 == 1) {
      return 0;
    }
    iVar11 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                               *(short *)puVar1,this->field_058A,this->field_058C,&local_6,&local_8,
                               (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                               (short *)&local_14,(undefined2 *)&local_10);
    if (iVar11 == -2) {
      return 0;
    }
    sub_00492390(this);
    pSVar12 = (STBoatC *)CONCAT22(extraout_var_00,param_1._2_2_);
    if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
       (this->field_005F != param_1._2_2_)) {
      this->field_0596 = 0;
      sVar18 = param_1._2_2_;
      if (iVar11 == -1) {
        local_6 = (short)local_18;
        local_8 = (short)local_14;
        sVar18 = (short)local_10;
      }
      sub_00481520(this,(int)local_6,(int)local_8,(int)sVar18);
      sub_00460260(this,0);
      goto cf_common_exit_0047405D;
    }
    this->field_0596 = 1;
    uVar4 = extraout_var_08;
  }
  uVar15 = (undefined2)((uint)pSVar12 >> 0x10);
  if (this->field_0596 == 0) {
    iVar11 = sub_00460260(this,2);
    uVar4 = extraout_var_09;
    uVar15 = extraout_var_01;
    switch(iVar11) {
    case 0:
    case 1:
    case 3:
      sub_004602B0(this);
      sVar18 = *(short *)&this->field_0x588;
      sVar19 = this->field_058C;
      sVar20 = this->field_058A;
      if ((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) ||
          ((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar19)) {
        local_c = (STWorldObject *)0x0;
      }
      else {
        local_c = g_worldGrid.cells
                  [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar20 * (int)g_worldGrid.sizeX
                   + (int)sVar18].objects[0];
      }
      if ((((local_c == (STWorldObject *)0x0) || (*(int *)&local_c->field_0x18 != this->field_058E))
          && (iVar11 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_c), iVar11 == -4))
         || ((iVar11 = (*local_c->vtable[3].slots_00_28[5])(), iVar11 == 1 ||
             (iVar11 = (*local_c->vtable[4].slots_00_28[0])(), iVar11 == 1))))
      goto cf_common_exit_004743A5;
      thunk_FUN_004162f0(local_c,(undefined2 *)&this->field_0x588,&this->field_058A,
                         &this->field_058C);
      iVar11 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                                 *(short *)&this->field_0x588,this->field_058A,this->field_058C,
                                 &local_6,&local_8,(undefined2 *)((int)&param_1 + 2),
                                 (short *)&local_18,(short *)&local_14,(undefined2 *)&local_10);
      if (iVar11 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != param_1._2_2_)) {
        if (iVar11 == -1) {
          iVar7 = (int)(short)local_10;
          iVar11 = (int)(short)local_14;
          iVar13 = (int)(short)local_18;
        }
        else {
          iVar7 = (int)param_1._2_2_;
          iVar11 = (int)local_8;
          iVar13 = (int)local_6;
        }
        goto LAB_004736e2;
      }
      this->field_0596 = 1;
      this->field_0592 = 0;
      uVar4 = extraout_var_10;
      uVar15 = extraout_var_02;
      break;
    case 2:
      goto switchD_004734db_caseD_2;
    case -1:
      iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03,0,0,&DAT_007a4ccc,
                                  s_STBoatC__LoadObj__LOADOBJ_MOVE_007aae48);
      if (iVar11 != 0) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e03);
      return 0xffff;
    }
  }
  iVar11 = this->field_0596;
  if (iVar11 == 1) {
    iVar11 = (*this->vtable->vfunc_D8)();
    if (iVar11 != 0) {
      return -1;
    }
    uVar15 = 0;
    iVar11 = (int)this->field_0592 % 0x28;
    if (iVar11 == 0) {
      sVar18 = *(short *)&this->field_0x588;
      sVar19 = this->field_058C;
      sVar20 = this->field_058A;
      if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar20 < 0)) ||
          ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
        local_c = (STWorldObject *)0x0;
      }
      else {
        local_c = g_worldGrid.cells
                  [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar20 * (int)g_worldGrid.sizeX
                   + (int)sVar18].objects[0];
      }
      if (((local_c == (STWorldObject *)0x0) || (*(int *)&local_c->field_0x18 != this->field_058E))
         && (iVar11 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_c), iVar11 == -4)) {
        return 0;
      }
      iVar11 = (*local_c->vtable[3].slots_00_28[5])();
      if ((iVar11 == 1) || (iVar11 = (*local_c->vtable[4].slots_00_28[0])(), iVar11 == 1)) {
cf_common_exit_004743A5:
        sub_00492420(this);
        return 0;
      }
      thunk_FUN_004162f0(local_c,(undefined2 *)&this->field_0x588,&this->field_058A,
                         &this->field_058C);
      iVar11 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                                 *(short *)&this->field_0x588,this->field_058A,this->field_058C,
                                 &local_6,&local_8,(undefined2 *)((int)&param_1 + 2),
                                 (short *)&local_18,(short *)&local_14,(undefined2 *)&local_10);
      if (iVar11 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != param_1._2_2_)) {
        this->field_0596 = 0;
        if (iVar11 == -1) {
          iVar7 = (int)(short)local_10;
          iVar11 = (int)(short)local_14;
          iVar13 = (int)(short)local_18;
        }
        else {
          iVar7 = (int)param_1._2_2_;
          iVar11 = (int)local_8;
          iVar13 = (int)local_6;
        }
LAB_004736e2:
        sub_00481520(this,iVar13,iVar11,iVar7);
        sub_00460260(this,0);
        return 2;
      }
      uVar16 = (*local_c->vtable[3].slots_00_28[6])(this->field_0018);
      iVar11 = (int)((ulonglong)uVar16 >> 0x20);
      uVar15 = extraout_var_03;
      if ((int)uVar16 == 1) {
        this->field_0596 = 2;
        pSVar2 = local_c->vtable;
        iVar11 = local_18 * 0xc9 + 100;
        uVar4 = (undefined2)((uint)(local_18 * 0x19) >> 0x10);
        uVar5 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar4,this->field_0041),
                           CONCAT22((short)((uint)iVar11 >> 0x10),this->field_0043),
                           CONCAT22(uVar4,this->field_0045),iVar11,local_14 * 0xc9 + 100,
                           local_10 * 200 + 100);
        (*pSVar2[3].slots_00_28[8])(this->field_0018,local_18,local_14,local_10,uVar5);
        return 2;
      }
    }
    uVar4 = (undefined2)((uint)iVar11 >> 0x10);
    iVar11 = this->field_0596;
    if (iVar11 == 1) {
      this->field_0592 = this->field_0592 + 1;
      return 2;
    }
  }
  if (iVar11 == 2) {
    sVar18 = *(short *)&this->field_0x588;
    sVar19 = this->field_058C;
    sVar20 = this->field_058A;
    if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) || (sVar20 < 0)) ||
        ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
      local_c = (STWorldObject *)0x0;
    }
    else {
      local_c = g_worldGrid.cells
                [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar20 * (int)g_worldGrid.sizeX +
                 (int)sVar18].objects[0];
    }
    if (((local_c == (STWorldObject *)0x0) || (*(int *)&local_c->field_0x18 != this->field_058E)) &&
       (iVar11 = FUN_006e62d0(PTR_00802a38,this->field_058E,(int *)&local_c), iVar11 == -4)) {
      return 0;
    }
    iVar11 = (*local_c->vtable[3].slots_00_28[5])();
    if ((iVar11 == 1) || (iVar11 = (*local_c->vtable[4].slots_00_28[0])(), iVar11 == 1)) {
      sub_00492420(this);
      iVar11 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar11 != 0);
    }
cf_common_exit_0047405D:
    iVar11 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
  }
  if (iVar11 == 3) {
    if (this->field_059A == 0) {
      sVar18 = *(short *)&this->field_0x588;
      sVar19 = this->field_058C;
      sVar20 = this->field_058A;
      if ((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) ||
          ((sVar20 < 0 || ((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar19)) {
        pSVar6 = (STWorldObject *)0x0;
      }
      else {
        pSVar6 = g_worldGrid.cells
                 [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar20 * (int)g_worldGrid.sizeX
                  + (int)sVar18].objects[0];
      }
      FUN_006ea3e0((void *)this->field_0211,this->field_01ED,*(int *)&pSVar6[0xd].field_0x19);
      iVar11 = CONCAT22(extraout_var,this->field_058C * 200) + 100;
      iVar13 = CONCAT22(extraout_var_04,this->field_058A * 0xc9) + 100;
      iVar7 = CONCAT22((short)((uint)iVar11 >> 0x10),*(short *)&this->field_0x588 * 0xc9) + 100;
      uVar4 = (undefined2)((uint)iVar13 >> 0x10);
      uVar4 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar4,this->field_0041),
                         CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                         CONCAT22(uVar4,this->field_0045),iVar7,iVar13,iVar11);
      *(undefined2 *)&this->field_0x59e = uVar4;
      this->field_059A = 1;
      uVar4 = extraout_var_11;
      uVar15 = extraout_var_05;
    }
    if (this->field_059A == 1) {
      uVar8 = sub_004176C0(this,*(short *)&this->field_0x59e);
      uVar8 = sub_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2e7d,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aae10);
        if (iVar11 != 0) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        return -1;
      }
      uVar4 = extraout_var_12;
      uVar15 = extraout_var_06;
      if (uVar8 == 0) {
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
      uVar4 = extraout_var_13;
      uVar15 = extraout_var_07;
    }
    if (this->field_059A == 3) {
      local_24 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_2c,&local_28);
      uVar8 = CONCAT31((int3)((uint)extraout_ECX >> 8),this->field_0x2bf);
      local_1c = 0;
      uVar4 = extraout_var_14;
      if (this->field_0x2bf != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar9 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*local_20,*(undefined2 *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar9;
          local_34 = *(short *)(puVar9 + 1);
          if (DAT_0080732c == 1) {
            bVar25 = 0;
            sVar24 = 0;
            iVar13 = -1;
            uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
            sVar23 = 0;
            this->field_001C = uVar8;
            sVar22 = 0;
            sVar21 = 0;
            uVar10 = uVar8 * 0x41c64e6d + 0x3039;
            sVar20 = 0;
            this->field_001C = uVar10;
            local_30 = uVar10 * 0x41c64e6d + 0x3039;
            sVar19 = 0;
            this->field_001C = local_30;
            sVar18 = 0;
            lVar17 = Library::MSVCRT::__ftol();
            iVar11 = (int)(short)lVar17 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                     (int)local_34;
            iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
            uVar8 = local_30;
          }
          else {
            uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
            bVar25 = 0;
            this->field_001C = uVar10;
            uVar14 = uVar10 * 0x41c64e6d + 0x3039;
            sVar24 = 0;
            this->field_001C = uVar14;
            uVar8 = uVar14 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar8;
            iVar13 = -1;
            sVar23 = 0;
            sVar22 = 0;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            iVar11 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar7 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar7 + -3,iVar11,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar13,sVar24,
                     bVar25);
          uVar8 = (uint)(byte)this->field_0x2bf;
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
          uVar4 = extraout_var_15;
        } while (local_1c < (int)uVar8);
      }
      uVar15 = (undefined2)(uVar8 >> 0x10);
      if (local_24 == -1) {
        iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ea3,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aadd8);
        if (iVar11 != 0) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        return -1;
      }
      if (local_24 == 0) {
        this->field_059A = 4;
      }
    }
    if ((this->field_059A == 4) && (this->field_006E == 0x2f)) {
      sVar18 = *(short *)&this->field_0x588;
      sVar19 = this->field_058C;
      sVar20 = this->field_058A;
      if (((sVar18 < 0) ||
          (((g_worldGrid.sizeX <= sVar18 || (sVar20 < 0)) || (g_worldGrid.sizeY <= sVar20)))) ||
         ((sVar19 < 0 || (g_worldGrid.sizeZ <= sVar19)))) {
        local_c = (STWorldObject *)0x0;
      }
      else {
        local_c = g_worldGrid.cells
                  [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar20 * (int)g_worldGrid.sizeX
                   + (int)sVar18].objects[0];
      }
      if (((local_c != (STWorldObject *)0x0) && (*(int *)&local_c->field_0x18 == this->field_058E))
         && ((iVar11 = (*local_c->vtable[3].slots_00_28[5])(), iVar11 != 1 &&
             (iVar11 = (*local_c->vtable[4].slots_00_28[0])(), iVar11 != 1)))) {
        (*local_c->vtable[3].slots_00_28[9])();
        this->field_07CA = this->field_058E;
        *(undefined4 *)&this->field_0x7ce = 0;
        thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)this);
        thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        DumpClassC::WritePtr
                  (*(short *)&this->field_0x588,this->field_058A,this->field_058C,0,
                   (AnonShape_00495EC0_95A268C6 *)this);
        thunk_FUN_0041c3f0(this,(undefined *)this->field_070A);
        iVar11 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar11 != 0);
      }
      sub_00492420(this);
      local_30 = PTR_00802a38->field_00E4;
      CmdToObj(this,CASE_3,&local_30);
switchD_004734db_caseD_2:
      return 2;
    }
    if (this->field_059A == 5) {
      iVar11 = CONCAT22(uVar15,this->field_005F * 200) + 100;
      iVar13 = CONCAT22(uVar4,this->field_005D * 0xc9) + 100;
      iVar7 = CONCAT22((short)((uint)iVar11 >> 0x10),this->field_005B * 0xc9) + 100;
      uVar4 = (undefined2)((uint)iVar13 >> 0x10);
      uVar4 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar4,this->field_0041),
                         CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0043),
                         CONCAT22(uVar4,this->field_0045),iVar7,iVar13,iVar11);
      *(undefined2 *)&this->field_0x59e = uVar4;
      this->field_059A = 6;
    }
    if (this->field_059A == 6) {
      uVar8 = sub_004176C0(this,*(short *)&this->field_0x59e);
      uVar8 = sub_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ed4,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aada0);
        if (iVar11 != 0) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        return -1;
      }
      if (uVar8 == 0) {
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
          puVar9 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,*local_20,*(undefined2 *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar9;
          local_34 = *(short *)(puVar9 + 1);
          if (DAT_0080732c == 1) {
            bVar25 = 0;
            sVar24 = 0;
            uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar13 = -1;
            this->field_001C = uVar8;
            sVar23 = 0;
            sVar22 = 0;
            uVar10 = uVar8 * 0x41c64e6d + 0x3039;
            sVar21 = 0;
            this->field_001C = uVar10;
            sVar20 = 0;
            sVar19 = 0;
            local_30 = uVar10 * 0x41c64e6d + 0x3039;
            sVar18 = 0;
            this->field_001C = local_30;
            lVar17 = Library::MSVCRT::__ftol();
            iVar11 = (int)(short)lVar17 + (uVar8 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                     (int)local_34;
            iVar7 = ((uVar10 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
            uVar8 = local_30;
          }
          else {
            uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar10;
            uVar14 = uVar10 * 0x41c64e6d + 0x3039;
            bVar25 = 0;
            this->field_001C = uVar14;
            uVar8 = uVar14 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar8;
            sVar24 = 0;
            iVar13 = -1;
            sVar23 = 0;
            sVar22 = 0;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            iVar11 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            local_38._2_2_ = (short)((uint)local_38 >> 0x10);
            iVar7 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_38._2_2_;
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar8 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar7 + -3,iVar11,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,iVar13,sVar24,
                     bVar25);
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
        } while (local_1c < (int)(uint)(byte)this->field_0x2bf);
      }
      if (local_24 == -1) {
        iVar11 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2efa,0,0,&DAT_007a4ccc
                                    ,s_STBoatC__LoadObj_LOADOBJ_LOAD_sl_007aad68);
        if (iVar11 != 0) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return iVar11;
        }
        return -1;
      }
      if (local_24 == 0) {
        FUN_006ea2f0((void *)this->field_0211,this->field_01ED);
        iVar11 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar11 != 0);
      }
    }
    if (this->field_059A == 9) {
      iVar11 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar11 != 0);
    }
  }
LAB_00473b6c:
  iVar11 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
}

