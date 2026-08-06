#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::LoadObj

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004732F0 -> 006E62D0 @ 004733E4 */

int __thiscall STBoatC::LoadObj(STBoatC *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  undefined2 *puVar1;
  STFishCVTable *pSVar2;
  undefined2 uVar4;
  int iVar10;
  int local_EAX_522;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STWorldObject *pSVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  uint uVar7;
  int local_EAX_2224;
  undefined4 *puVar8;
  int local_EAX_3016;
  int local_EAX_3489;
  uint uVar9;
  int local_EAX_4152;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  STBoatC *pSVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  undefined2 uVar14;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_16;
  longlong lVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  short sVar23;
  byte bVar24;
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
  undefined4 local_14;
  int local_10;
  STFishC *local_c;
  short local_8;
  short local_6;

  uVar4 = 0;
  local_c = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) ||
     (pSVar12 = this, param_1 == (AnonShape_005EFAE0_B406B78B *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07CA != nullptr) {
      return 0;
    }
    sVar16 = *(short *)&this->field_0x3ba;
    sVar17 = *(short *)&this->field_0x3bc;
    sVar18 = *(short *)&this->field_0x3be;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = *(AnonShape_005EFAE0_B406B78B **)&this->field_0x3c0;
    puVar1 = &this->field_0588;
    this->field_058A = sVar17;
    *puVar1 = sVar16;
    this->field_058C = sVar18;
    this->field_058E = param_1;
    if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar17 < 0)) ||
        ((g_worldGrid.sizeY <= sVar17 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
      local_c = nullptr;
    }
    else {
      local_c = (STFishC *)
                STGridAt3D(g_worldGrid, sVar16, sVar17, sVar18).objects[0];
    }
    if ((local_c == nullptr) ||
       ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != param_1)) {
      iVar11 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,param_1,(int *)&local_c);
      if (iVar11 == -4) {
        return 0;
      }
      STFishC::sub_004162F0(local_c,puVar1,&this->field_058A,&this->field_058C);
    }
    iVar11 = (*local_c->vtable->vfunc_F8)();
    if (iVar11 == 0) {
      return 0;
    }
    iVar11 = (*local_c->vtable->vfunc_A4)();
    if (iVar11 == 1) {
      return 0;
    }
    iVar11 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,*puVar1,
                               this->field_058A,this->field_058C,&local_6,&local_8,
                               (undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                               (short *)&local_14,(undefined2 *)&local_10);
    if (iVar11 == -2) {
      return 0;
    }
    sub_00492390(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    pSVar12 = (STBoatC *)CONCAT22(extraout_var_01,STPiece<2,2>(param_1));
    if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
       (this->field_005F != STPiece<2,2>(param_1))) {
      this->field_0596 = 0;
      sVar16 = STPiece<2,2>(param_1);
      if (iVar11 == -1) {
        local_6 = (short)local_18;
        local_8 = (short)local_14;
        sVar16 = (short)local_10;
      }
      sub_00481520(this,(int)local_6,(int)local_8,(int)sVar16);
      sub_00460260(this,0);
      goto cf_common_exit_0047405D;
    }
    this->field_0596 = 1;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar4 = extraout_var_09;
  }
  uVar14 = (undefined2)((uint)pSVar12 >> 0x10);
  if (this->field_0596 == 0) {
    iVar10 = sub_00460260(this,2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar4 = extraout_var_10;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar14 = extraout_var_02;
    switch(iVar10) {
    case 0:
    case 1:
    case 3:
      sub_004602B0(this);
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
          ((sVar18 < 0 || ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar17)) {
        local_c = nullptr;
      }
      else {
        local_c = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      if ((((local_c == nullptr) ||
           ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != this->field_058E)) &&
          (iVar11 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,this->field_058E,(int *)&local_c), iVar11 == -4
          )) || ((iVar11 = (*local_c->vtable->vfunc_A4)(), iVar11 == 1 ||
                 (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 == 1))))
      goto cf_common_exit_004743A5;
      STFishC::sub_004162F0(local_c,&this->field_0588,&this->field_058A,&this->field_058C);
      iVar11 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                                 this->field_0588,this->field_058A,this->field_058C,&local_6,
                                 &local_8,(undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                                 (short *)&local_14,(undefined2 *)&local_10);
      if (iVar11 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != STPiece<2,2>(param_1))) {
        if (iVar11 == -1) {
          iVar5 = (int)(short)local_10;
          iVar11 = (int)(short)local_14;
          iVar22 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)STPiece<2,2>(param_1);
          iVar11 = (int)local_8;
          iVar22 = (int)local_6;
        }
        goto LAB_004736e2;
      }
      this->field_0596 = 1;
      this->field_0592 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_11;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_03;
      break;
    case 2:
      goto switchD_004734db_caseD_2;
    case -1:
      local_EAX_522 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2e03,0,0,"%s",
                              "STBoatC::LoadObj, LOADOBJ_MOVE");
      if (local_EAX_522 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2e03);
      return 0xffff;
    }
  }
  iVar11 = this->field_0596;
  if (iVar11 == 1) {
    iVar11 = this->vfunc_D8();
    if (iVar11 != 0) {
      return -1;
    }
    uVar14 = 0;
    iVar11 = this->field_0592 % 0x28;
    if (iVar11 == 0) {
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar18 < 0)) ||
          ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
        local_c = nullptr;
      }
      else {
        local_c = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      if (((local_c == nullptr) ||
          ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != this->field_058E)) &&
         (iVar11 = STPlaySystemC::sub_006E62D0
                             (g_playSystem_00802A38,this->field_058E,(int *)&local_c), iVar11 == -4)
         ) {
        return 0;
      }
      iVar11 = (*local_c->vtable->vfunc_A4)();
      if ((iVar11 == 1) || (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 == 1)) {
cf_common_exit_004743A5:
        sub_00492420(this);
        return 0;
      }
      STFishC::sub_004162F0(local_c,&this->field_0588,&this->field_058A,&this->field_058C);
      iVar11 = GetCellForLoading(this,this->field_005B,this->field_005D,this->field_005F,
                                 this->field_0588,this->field_058A,this->field_058C,&local_6,
                                 &local_8,(undefined2 *)((int)&param_1 + 2),(short *)&local_18,
                                 (short *)&local_14,(undefined2 *)&local_10);
      if (iVar11 == -2) goto cf_common_exit_004743A5;
      if (((this->field_005B != local_6) || (this->field_005D != local_8)) ||
         (this->field_005F != STPiece<2,2>(param_1))) {
        this->field_0596 = 0;
        if (iVar11 == -1) {
          iVar5 = (int)(short)local_10;
          iVar11 = (int)(short)local_14;
          iVar22 = (int)(short)local_18;
        }
        else {
          iVar5 = (int)STPiece<2,2>(param_1);
          iVar11 = (int)local_8;
          iVar22 = (int)local_6;
        }
LAB_004736e2:
        sub_00481520(this,iVar22,iVar11,iVar5);
        sub_00460260(this,0);
        return 2;
      }
      iVar5 = (*local_c->vtable->vfunc_A8)(this->field_0018);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar11 = extraout_EDX;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_04;
      if (iVar5 == 1) {
        this->field_0596 = 2;
        pSVar2 = local_c->vtable;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar4 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(local_18 * 0x19) >> 0x10),this->field_0045),
                           (short)(local_18 * 0xc9 + 100),(short)local_14 * 0xc9 + 100,
                           local_10 * 200 + 100);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        (*pSVar2->vfunc_B0)(this->field_0018,local_18,local_14,local_10,CONCAT22(extraout_var,uVar4)
                           );
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
    sVar16 = this->field_0588;
    sVar17 = this->field_058C;
    sVar18 = this->field_058A;
    if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar18 < 0)) ||
        ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
      local_c = nullptr;
    }
    else {
      local_c = (STFishC *)
                STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
    }
    if (((local_c == nullptr) ||
        ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 != this->field_058E)) &&
       (iVar11 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_058E,(int *)&local_c)
       , iVar11 == -4)) {
      return 0;
    }
    iVar11 = (*local_c->vtable->vfunc_A4)();
    if ((iVar11 == 1) || (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 == 1)) {
      sub_00492420(this);
      iVar11 = this->vfunc_D8();
      return -(uint)(iVar11 != 0);
    }
cf_common_exit_0047405D:
    iVar11 = this->vfunc_D8();
    return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
  }
  if (iVar11 == 3) {
    if (this->field_059A == 0) {
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
          ((sVar18 < 0 || ((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar17)) {
        pSVar6 = nullptr;
      }
      else {
        pSVar6 = STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      Library::Ourlib::ST3DSMAP::SprSetLevAfter
                (this->field_0211,this->field_01ED,*(int *)&pSVar6[0xd].field_0x19);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      iVar11 = CONCAT22(extraout_var_05,this->field_058A * 0xc9) + 100;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0045)),
                         this->field_0588 * 0xc9 + 100,(short)iVar11,
                         CONCAT22(extraout_var_00,this->field_058C * 200) + 100);
      this->field_059E = uVar4;
      this->field_059A = 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_12;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_06;
    }
    if (this->field_059A == 1) {
      uVar7 = sub_004176C0(this,this->field_059E);
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        local_EAX_2224 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2e7d,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=1");
        if (local_EAX_2224 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_13;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_07;
      if (uVar7 == 0) {
        this->field_059A = 2;
        goto LAB_00473b6c;
      }
    }
    if (this->field_059A == 2) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0588 * 0xc9 + 100,this->field_058A * 0xc9 + 100,
                   this->field_058C * 200 + 100,this->field_0061);
      this->field_059A = 3;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_14;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar14 = extraout_var_08;
    }
    if (this->field_059A == 3) {
      local_24 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_2c,&local_28);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar7 = STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(this->field_02BF));
      local_1c = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar4 = extraout_var_15;
      if (this->field_02BF != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,(short)*local_20,*(ushort *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar8;
          local_34 = *(short *)(puVar8 + 1);
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            iVar22 = -1;
            uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
            sVar21 = 0;
            this->field_001C = uVar7;
            sVar20 = 0;
            sVar19 = 0;
            uVar9 = uVar7 * 0x41c64e6d + 0x3039;
            sVar18 = 0;
            this->field_001C = uVar9;
            local_30 = uVar9 * 0x41c64e6d + 0x3039;
            sVar17 = 0;
            this->field_001C = local_30;
            sVar16 = 0;
            lVar15 = Library::MSVCRT::__ftol();
            iVar11 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                     (int)local_34;
            iVar5 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
            uVar7 = local_30;
          }
          else {
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            bVar24 = 0;
            this->field_001C = uVar9;
            uVar13 = uVar9 * 0x41c64e6d + 0x3039;
            sVar23 = 0;
            this->field_001C = uVar13;
            uVar7 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar7;
            iVar22 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar11 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            STPiece<2,2>(local_38) = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar5 + -3,iVar11,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar22,sVar23,
                     bVar24);
          uVar7 = (uint)(byte)this->field_02BF;
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar4 = extraout_var_16;
        } while (local_1c < (int)uVar7);
      }
      uVar14 = (undefined2)(uVar7 >> 0x10);
      if (local_24 == -1) {
        local_EAX_3016 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2ea3,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=3");
        if (local_EAX_3016 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_24 == 0) {
        this->field_059A = 4;
      }
    }
    if ((this->field_059A == 4) && (this->field_006E == 0x2f)) {
      sVar16 = this->field_0588;
      sVar17 = this->field_058C;
      sVar18 = this->field_058A;
      if (((sVar16 < 0) ||
          (((g_worldGrid.sizeX <= sVar16 || (sVar18 < 0)) || (g_worldGrid.sizeY <= sVar18)))) ||
         ((sVar17 < 0 || (g_worldGrid.sizeZ <= sVar17)))) {
        local_c = nullptr;
      }
      else {
        local_c = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar16, sVar18, sVar17).objects[0];
      }
      if (((local_c != nullptr) &&
          ((AnonShape_005EFAE0_B406B78B *)local_c->field_0018 == this->field_058E)) &&
         ((iVar11 = (*local_c->vtable->vfunc_A4)(), iVar11 != 1 &&
          (iVar11 = (*local_c->vtable->vfunc_C0)(), iVar11 != 1)))) {
        local_c->vfunc_B4();
        this->field_07CA = this->field_058E;
        this->field_07CE = 0;
        sub_0041C5A0(this);
        thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,0,
                           (AnonShape_00495FF0_59081BDD *)this);
        DumpClassC::WritePtr
                  (this->field_0588,this->field_058A,this->field_058C,0,
                   (RecoveredRecord_DumpClassC_00495EC0 *)this);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,*(undefined **)((int)this->field_06CB + 0x3f));
        iVar11 = this->vfunc_D8();
        return -(uint)(iVar11 != 0);
      }
      sub_00492420(this);
      local_30 = g_playSystem_00802A38->field_00E4;
      CmdToObj(this,CASE_3,&local_30);
switchD_004734db_caseD_2:
      return 2;
    }
    if (this->field_059A == 5) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar11 = CONCAT22(uVar4,this->field_005D * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar4 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(this->field_0045)),
                         this->field_005B * 0xc9 + 100,(short)iVar11,
                         CONCAT22(uVar14,this->field_005F * 200) + 100);
      this->field_059E = uVar4;
      this->field_059A = 6;
    }
    if (this->field_059A == 6) {
      uVar7 = sub_004176C0(this,this->field_059E);
      uVar7 = sub_00417910(this,(short)uVar7);
      if (uVar7 == 0xffffffff) {
        local_EAX_3489 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2ed4,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=6");
        if (local_EAX_3489 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (uVar7 == 0) {
        this->field_059A = 7;
        goto cf_common_exit_0047405D;
      }
    }
    if (this->field_059A == 7) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_005B * 0xc9 + 100,this->field_005D * 0xc9 + 100,
                   this->field_005F * 200 + 100,this->field_0061);
      this->field_059A = 8;
    }
    if (this->field_059A == 8) {
      local_24 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_28,&local_2c);
      local_1c = 0;
      if (this->field_02BF != '\0') {
        local_20 = (undefined4 *)&this->field_0x2b3;
        do {
          puVar8 = (undefined4 *)
                   thunk_FUN_0041dc40(local_40,(short)*local_20,*(ushort *)(local_20 + 1),
                                      this->field_006C);
          local_38 = *puVar8;
          local_34 = *(short *)(puVar8 + 1);
          if (DAT_0080732c == 1) {
            bVar24 = 0;
            sVar23 = 0;
            uVar7 = this->field_001C * 0x41c64e6d + 0x3039;
            iVar22 = -1;
            this->field_001C = uVar7;
            sVar21 = 0;
            sVar20 = 0;
            uVar9 = uVar7 * 0x41c64e6d + 0x3039;
            sVar19 = 0;
            this->field_001C = uVar9;
            sVar18 = 0;
            sVar17 = 0;
            local_30 = uVar9 * 0x41c64e6d + 0x3039;
            sVar16 = 0;
            this->field_001C = local_30;
            lVar15 = Library::MSVCRT::__ftol();
            iVar11 = (int)(short)lVar15 + (uVar7 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                     (int)local_34;
            iVar5 = ((uVar9 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
            uVar7 = local_30;
          }
          else {
            uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
            this->field_001C = uVar9;
            uVar13 = uVar9 * 0x41c64e6d + 0x3039;
            bVar24 = 0;
            this->field_001C = uVar13;
            uVar7 = uVar13 * 0x41c64e6d + 0x3039;
            this->field_001C = uVar7;
            sVar23 = 0;
            iVar22 = -1;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar18 = 0;
            sVar17 = 0;
            sVar16 = 0;
            iVar11 = (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_34;
            STPiece<2,2>(local_38) = (short)((uint)local_38 >> 0x10);
            iVar5 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_38);
          }
          TraksClassTy::TraksCreate
                    (g_traksClass_00802A7C,1,2,7,
                     (uVar7 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_38,
                     iVar5 + -3,iVar11,sVar16,sVar17,sVar18,sVar19,sVar20,sVar21,iVar22,sVar23,
                     bVar24);
          local_1c = local_1c + 1;
          local_20 = (undefined4 *)((int)local_20 + 6);
        } while (local_1c < (int)(uint)(byte)this->field_02BF);
      }
      if (local_24 == -1) {
        local_EAX_4152 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2efa,0,0,"%s",
                                "STBoatC::LoadObj LOADOBJ_LOAD sloi.regime2=8");
        if (local_EAX_4152 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return -1;
      }
      if (local_24 == 0) {
        Library::Ourlib::ST3DSMAP::SprRstLev(this->field_0211,this->field_01ED);
        iVar11 = this->vfunc_D8();
        return -(uint)(iVar11 != 0);
      }
    }
    if (this->field_059A == 9) {
      iVar11 = this->vfunc_D8();
      return -(uint)(iVar11 != 0);
    }
  }
LAB_00473b6c:
  iVar11 = this->vfunc_D8();
  return (-(uint)(iVar11 != 0) & 0xfffffffd) + 2;
}

