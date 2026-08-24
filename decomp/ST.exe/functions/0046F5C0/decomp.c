#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ToDok */

int __thiscall STBoatC::ToDok(STBoatC *this,int param_1)

{
  uint uVar1;
  STBoatC_field_0580State SVar2;
  uint uVar3;
  ushort uVar5;
  int local_EAX_53;
  int local_EAX_99;
  int iVar6;
  int local_EAX_764;
  int local_EAX_808;
  int local_EAX_977;
  int local_EAX_1390;
  int local_EAX_1414;
  int local_EAX_1543;
  dword dVar6;
  int local_EAX_1797;
  int local_EAX_1821;
  int local_EAX_1958;
  int local_EAX_2004;
  int iVar7;
  uint uVar8;
  int local_EAX_2998;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int local_EAX_3697;
  int local_EAX_4347;
  int iVar12;
  int local_EAX_4651;
  int local_EAX_5572;
  int local_EAX_5608;
  int *piVar13;
  int local_EAX_5748;
  int local_EAX_5810;
  int local_EAX_5910;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  short sVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  int iVar15;
  STWorldObject *pSVar16;
  STFishC *pSVar17;
  longlong lVar18;
  short sVar19;
  ushort uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 local_28 [2];
  uint local_20;
  short local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_0716 == this->field_0712) {
      return 0;
    }
    sVar14 = this->field_03A0;
    sVar19 = this->field_03A4;
    sVar21 = this->field_03A2;
    if (sVar14 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar14) {
      return 0;
    }
    if (sVar21 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar21) {
      return 0;
    }
    if (sVar19 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar19) {
      return 0;
    }
    pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0];
    if (pSVar16 == nullptr) {
      return 0;
    }
    /* ST_CALLSITE[00470DA4]: CALL dword ptr [EAX + 0x2c] */
    iVar12 = pSVar16->GetObjectTypeId();
    if (iVar12 != 0x33) {
      return 0;
    }
    if (pSVar16[1].vtable != (STWorldObjectVTable *)this->field_0024) {
      return 0;
    }
    this->field_0580 = CASE_0;
    this->field_0554 = this->field_03A0;
    this->field_0556 = this->field_03A2;
    this->field_0558 = this->field_03A4;
    this->field_057C = 0;
    this->field_0578 = 0;
    this->field_0574 = 0;
    sVar14 = this->field_0558;
    sVar19 = this->field_0556;
    sVar21 = this->field_0554;
    this->field_00B7 = 3;
LAB_00470e23:
    /* ST_CALLSITE[00470E25]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)sVar21,(int)sVar19,sVar14 + 1);
cf_common_exit_00470E2B:
    /* ST_CALLSITE[00470E2D]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    sub_00460260(this,0);
cf_common_exit_00470E32:
    /* ST_CALLSITE[00470E36]: CALL dword ptr [EDX + 0xd8] */
    iVar12 = this->vfunc_D8();
    return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
  }
  SVar2 = this->field_0580;
  if (SVar2 == CASE_0) {
    /* ST_CALLSITE[0046F5F5]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    local_EAX_53 = sub_00460260(this,2);
    switch(local_EAX_53) {
    case 0:
      if (this->field_0564 == 1) {
        iVar7 = (int)this->field_0556;
        iVar12 = (int)this->field_0554;
        iVar10 = this->field_0558 + 1;
        this->field_0564 = 0;
        break;
      }
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
         (((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
        pSVar16 = nullptr;
      }
      else {
        pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0];
      }
      /* ST_CALLSITE[0046F6DD]: CALL 0x004049cb; direct=004049CB STBoatC::sub_00490570 */
      iVar12 = sub_00490570(this);
      if (iVar12 != 1) {
LAB_0046f794:
        if (((pSVar16 != nullptr) &&
            /* ST_CALLSITE[0046F7A0]: CALL dword ptr [EDX + 0x2c] */
            (iVar12 = pSVar16->GetObjectTypeId(), iVar12 == 0x33)) &&
           (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)) {
          this->field_0580 = CASE_2;
LAB_0046f98f:
          /* ST_CALLSITE[0046F991]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
          local_EAX_977 = Defence(this,0);
          return (-(uint)(local_EAX_977 != -1) & 3) - 1;
        }
LAB_0046f888:
        /* ST_CALLSITE[0046F88A]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
        sub_004602B0(this);
        this->field_00B7 = 0;
        /* ST_CALLSITE[0046F89D]: CALL dword ptr [EDX + 0xd8] */
        iVar12 = this->vfunc_D8();
        return -(uint)(iVar12 != 0);
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar5 = extraout_var_00;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((pSVar16 != nullptr) &&
          /* ST_CALLSITE[0046F6F2]: CALL dword ptr [EAX + 0x2c] */
          (iVar12 = pSVar16->GetObjectTypeId(), uVar5 = extraout_var_01,
          iVar12 == 0x33)) && (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)) {
        iVar6 = thunk_FUN_004e1eb0(pSVar16,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar5 = extraout_var_02;
        if (iVar6 != -1) goto LAB_0046f794;
      }
      /* ST_CALLSITE[0046F767]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                   this->field_0556,(int *)CONCAT22(uVar5,this->field_0558 + 1),1,&this->field_055E,
                   (short *)&this->field_0x560,(short *)&this->field_0x562);
      iVar10 = (int)*(short *)&this->field_0x562;
      iVar7 = (int)*(short *)&this->field_0x560;
      iVar12 = (int)this->field_055E;
      this->field_0580 = CASE_1;
      this->field_00B7 = 0;
      break;
    case 1:
      if (this->field_0564 != 1) {
        sVar14 = this->field_0554;
        sVar19 = this->field_0558;
        sVar21 = this->field_0556;
        if ((((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
             ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))) &&
            ((sVar19 < g_worldGrid.sizeZ &&
             ((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
              pSVar16 != nullptr &&
              /* ST_CALLSITE[0046F872]: CALL dword ptr [EAX + 0x2c] */
              (iVar12 = pSVar16->GetObjectTypeId(), iVar12 == 0x33)))))) &&
           (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024))
        goto cf_common_exit_004707B7;
        goto LAB_0046f888;
      }
      this->field_0564 = 0;
      /* ST_CALLSITE[0046F7DF]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
      sub_004602B0(this);
    case 3:
      iVar7 = (int)this->field_0556;
      iVar12 = (int)this->field_0554;
      iVar10 = this->field_0558 + 1;
      break;
    default:
      goto cf_common_exit_004707B7;
    case -1:
      local_EAX_99 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x28ac,0,0,
                                        "%s","STBoatC::ToDok, move to dock error");
      if (local_EAX_99 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar12 = 0x28ac;
cf_error_exit_00470C46:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar12);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (SVar2 != CASE_1) {
    if (SVar2 == CASE_2) {
      this->field_0574 = this->field_0574 + 1;
      /* ST_CALLSITE[0046FBC7]: CALL 0x00403a2b; direct=00403A2B STBoatC::Defence */
      local_EAX_1543 = Defence(this,2);
      if (local_EAX_1543 == -1) {
        return -1;
      }
      if (this->field_082E != ~CASE_FFFFFFFF) {
        return 2;
      }
      if (this->field_048B != 0xffff) {
        return 2;
      }
      if (this->field_0574 % 0x32 != 1) {
        return 2;
      }
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
          ((-1 < sVar21 && ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))))) &&
         ((sVar19 < g_worldGrid.sizeZ &&
          (((pSVar17 = (STFishC *)
                       STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
            pSVar17 != nullptr &&
            /* ST_CALLSITE[0046FC9A]: CALL dword ptr [EAX + 0x2c] */
            (dVar6 = pSVar17->slot_2C(), dVar6 == 0x33)) &&
           (pSVar17->field_0024 == this->field_0024)))))) {
        local_EAX_1797 =
             thunk_FUN_004e1eb0(pSVar17,(int)this->field_0041,(int)this->field_0043,
                                (int)this->field_0045);
        this->field_0568 = local_EAX_1797;
        if (local_EAX_1797 == -1) {
          return 2;
        }
        local_EAX_1821 = thunk_FUN_004908a0(this,pSVar17,local_EAX_1797);
        if (local_EAX_1821 != 1) {
          return 2;
        }
        this->field_055A = pSVar17->field_0018;
        thunk_FUN_004e1fb0(pSVar17,this->field_0568,this->field_0018);
        sVar19 = this->field_0570;
        sVar21 = this->field_056E;
        sVar14 = this->field_056C;
        this->field_0580 = CASE_3;
        this->field_00B7 = 0;
LAB_00470bfe:
        /* ST_CALLSITE[00470C00]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)sVar14,(int)sVar21,(int)sVar19);
        /* ST_CALLSITE[00470C09]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
        sub_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      /* ST_CALLSITE[0046FD39]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
      sub_004602B0(this);
LAB_0046fd3e:
      /* ST_CALLSITE[0046FD42]: CALL dword ptr [EDX + 0xd8] */
      iVar12 = this->vfunc_D8();
      return -(uint)(iVar12 != 0);
    }
    if (SVar2 == CASE_3) {
      /* ST_CALLSITE[0046FD66]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
      local_EAX_1958 = sub_00460260(this,2);
      switch(local_EAX_1958) {
      case 0:
        if (this->field_0564 != 1) {
          sVar14 = this->field_0554;
          sVar19 = this->field_0558;
          sVar21 = this->field_0556;
          if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
              ((-1 < sVar21 && ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))))) &&
             ((sVar19 < g_worldGrid.sizeZ &&
              ((((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
                 pSVar16 != nullptr &&
                 /* ST_CALLSITE[0046FE43]: CALL dword ptr [EAX + 0x2c] */
                 (iVar12 = pSVar16->GetObjectTypeId(), iVar12 == 0x33)) &&
                (*(int *)&pSVar16[0x21].field_0x10 == 0)) &&
               ((*(int *)&pSVar16[0x10].field_0x5 != 6 &&
                (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)))))))) {
            if ((this->field_0047 == this->field_056C) &&
               ((this->field_0049 == this->field_056E && (this->field_004B == this->field_0570)))) {
              this->field_0580 = CASE_4;
              *(undefined4 *)&this->field_0x584 = 0;
              /* ST_CALLSITE[0046FEB7]: CALL dword ptr [EDX + 0xd8] */
              iVar12 = this->vfunc_D8();
              return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(pSVar16,this->field_0568,this->field_0018);
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (this->field_0564 != 1) {
          /* ST_CALLSITE[0046FFDA]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
          sub_004602B0(this);
          sVar14 = this->field_0554;
          sVar19 = this->field_0558;
          sVar21 = this->field_0556;
          if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             (((sVar21 < 0 || ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar19 ||
               (((pSVar17 = (STFishC *)
                            STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
                 pSVar17 == nullptr ||
                 /* ST_CALLSITE[0047005F]: CALL dword ptr [EAX + 0x2c] */
                 (dVar6 = pSVar17->slot_2C(), dVar6 != 0x33)) ||
                (pSVar17->field_0024 != this->field_0024)))))))) goto LAB_004700a6;
          goto LAB_00470071;
        }
        /* ST_CALLSITE[0046FFA3]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
        sub_004602B0(this);
        break;
      default:
        goto cf_common_exit_00470E32;
      case 3:
        sVar14 = this->field_0554;
        sVar19 = this->field_0558;
        sVar21 = this->field_0556;
        if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             ((sVar21 < 0 || ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))))) ||
            (g_worldGrid.sizeZ <= sVar19)) ||
           (((pSVar17 = (STFishC *)
                        STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
             pSVar17 == nullptr ||
             /* ST_CALLSITE[0046FF78]: CALL dword ptr [EAX + 0x2c] */
             (dVar6 = pSVar17->slot_2C(), dVar6 != 0x33)) ||
            (pSVar17->field_0024 != this->field_0024)))) {
LAB_004700a6:
          /* ST_CALLSITE[004700AA]: CALL dword ptr [EAX + 0xd8] */
          iVar12 = this->vfunc_D8();
          return -(uint)(iVar12 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,pSVar17,this->field_0568);
        /* ST_CALLSITE[0047009A]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
        sub_00481520(this,(int)this->field_056C,(int)this->field_056E,(int)this->field_0570);
        goto cf_common_exit_00470E2B;
      case -1:
        local_EAX_2004 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2977,0,0,"%s",
                                "STBoatC::ToDok, move to depot 2 error");
        if (local_EAX_2004 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar12 = 0x2977;
        goto cf_error_exit_00470C46;
      }
      sVar14 = this->field_0558;
      sVar19 = this->field_0556;
      sVar21 = this->field_0554;
      this->field_0564 = 0;
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      goto LAB_00470e23;
    }
    if (SVar2 == CASE_4) {
      if (*(int *)&this->field_0x584 == 0) {
        iVar7 = (ushort)(this->field_0558 * 200) + 300;
        iVar12 = STReplaceLowWord((uint32_t)(iVar7), (uint16_t)(this->field_0556 + 1)) * 0xc9;
        iVar10 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)((short)this->field_0568 + this->field_0554));
        /* ST_CALLSITE[00470121]: CALL dword ptr [EDX + 0x10] */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(iVar10 * 0x19) >> 0x10),this->field_0045),
                           (short)(iVar10 * 0xc9 + 100),(short)iVar12,iVar7);
        this->field_0572 = uVar5;
        *(undefined4 *)&this->field_0x584 = 1;
      }
      if (*(int *)&this->field_0x584 == 1) {
        /* ST_CALLSITE[00470143]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
        uVar8 = sub_004176C0(this,this->field_0572);
        /* ST_CALLSITE[0047014B]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
        uVar8 = sub_00417910(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          local_EAX_2998 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x29d3,0,0,"%s",
                                  "STBoatC::ToDok, TODOK_PDOCK");
          if (local_EAX_2998 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x29d4);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (uVar8 == 0) {
LAB_004707ad:
          *(undefined4 *)&this->field_0x584 = 2;
          goto cf_common_exit_004707B7;
        }
      }
      if (*(int *)&this->field_0x584 == 2) {
        /* ST_CALLSITE[00470208]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     ((short)this->field_0568 + this->field_0554) * 0xc9 + 100,
                     (this->field_0556 + 1) * 0xc9,this->field_0558 * 200 + 300,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 == 3) {
        /* ST_CALLSITE[00470229]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
        local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        iVar12 = (uVar8 >> 0x10) % 7 - 3;
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_10 = (uVar1 >> 0x10) % 7 - 3;
        if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
           (param_1 = 0, this->field_02BF != '\0')) {
          local_8 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar9 = thunk_FUN_0041dc40(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                        this->field_006C);
            uVar3 = *puVar9;
            bVar26 = 0;
            sVar25 = 0;
            iVar7 = -1;
            local_1c = *(short *)(puVar9 + 1);
            sVar24 = 0;
            sVar23 = 0;
            sVar22 = 0;
            sVar21 = 0;
            sVar19 = 0;
            sVar14 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar14 = 0;
              sVar19 = 0;
              sVar21 = 0;
              sVar22 = 0;
              sVar23 = 0;
              sVar24 = 0;
              sVar25 = 0;
              bVar26 = 0;
              lVar18 = Library::MSVCRT::__ftol();
              iVar15 = (int)local_1c + this->field_0045 + local_10 + (int)(short)lVar18;
              iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
              iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
            }
            else {
              iVar15 = (int)local_1c + local_10 + this->field_0045;
              STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
              iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
              STPiece<0,2>(local_20) = (short)uVar3;
              iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
            }
            /* ST_CALLSITE[00470392]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,iVar11,iVar10 + ((uVar8 >> 0x10) % 7 - 3),iVar15,
                       sVar14,sVar19,sVar21,sVar22,sVar23,sVar24,iVar7,sVar25,bVar26);
            local_8 = (undefined4 *)((int)local_8 + 6);
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_c == -1) {
          local_EAX_3697 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x29fe,0,0,"%s",
                                  "STBoatC::UnLoadRC, TODOK_PDOCK 2");
          if (local_EAX_3697 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x29ff);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_c == 0) {
          this->field_0580 = CASE_5;
          this->field_0574 = g_playSystem_00802A38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          *(undefined4 *)&this->field_0x584 = 0;
          this->field_0578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto cf_common_exit_004707B7;
    }
    if (SVar2 == CASE_5) {
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
         (((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)) &&
          ((sVar19 < g_worldGrid.sizeZ &&
           ((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
            pSVar16 != nullptr && (*(int *)&pSVar16->field_0x18 == this->field_055A))))
          )))) {
        if (g_playSystem_00802A38->field_00E4 == this->field_0574 + this->field_0578) {
          /* ST_CALLSITE[00470534]: CALL dword ptr [EAX + 0x90] */
          this->vfunc_90(3,0x363);
          iVar12 = (*(short *)&this->field_0x237 * -7) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          sVar14 = (short)((uVar8 >> 0x10) %
                          (((*(short *)&this->field_0x237 * 7) / 10 - iVar12) + 1U)) + (short)iVar12
          ;
          iVar12 = (*(short *)&this->field_0x237 * -2) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22((short)((uVar8 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 2) / 10 - iVar12) + 1U)) +
                              (short)iVar12,sVar14);
          puVar9 = thunk_FUN_0041dc40(local_28,sVar14,0,this->field_006C);
          uVar3 = *puVar9;
          local_1c = *(short *)(puVar9 + 1);
          STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
          iVar7 = (int)STPiece<2,2>(local_20);
          STPiece<0,2>(local_20) = (short)uVar3;
          iVar12 = (int)(short)local_20;
          local_20 = uVar3;
          thunk_FUN_00637930(this->field_01ED,0,this->field_0041 + iVar12,this->field_0043 + iVar7,
                             this->field_0045 + -0x28,0,0);
          this->field_0574 = g_playSystem_00802A38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          this->field_0578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
        thunk_FUN_004e20d0(pSVar16,this->field_0568,this->field_0018,this->field_06F7,
                           this->field_0716);
        local_EAX_4347 =
             thunk_FUN_004e2340(pSVar16,this->field_0568,this->field_0018,nullptr);
        this->field_0716 = local_EAX_4347;
        if (local_EAX_4347 != this->field_0712) goto cf_common_exit_00470E32;
      }
      /* ST_CALLSITE[004706D6]: CALL 0x004023ce; direct=004023CE STBoatC::sub_0048DBA0 */
      sub_0048DBA0(this);
      this->field_0580 = CASE_6;
      /* ST_CALLSITE[004706E9]: CALL dword ptr [EDX + 0xd8] */
      iVar12 = this->vfunc_D8();
      return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
    }
    if (SVar2 != CASE_6) {
      if (SVar2 == CASE_7) {
        /* ST_CALLSITE[00470BA8]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
        local_EAX_5608 = sub_00460260(this,2);
        if (local_EAX_5608 == -1) {
          local_EAX_5748 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2a8c,0,0,"%s",
                                  "STBoatC::ToDok, TODOK_MOVEWAIT error");
          if (local_EAX_5748 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar12 = 0x2a8c;
          goto cf_error_exit_00470C46;
        }
        if (local_EAX_5608 == 0) {
          return 0;
        }
        if (local_EAX_5608 != 3) {
          return 2;
        }
        uVar20 = this->field_004B;
        piVar13 = (int *)(uint)uVar20;
        sVar14 = this->field_0049;
        sVar19 = this->field_0047;
        iVar12 = 3;
        sVar21 = sVar14;
        sVar22 = sVar19;
      }
      else {
        if (SVar2 != CASE_8) {
          local_EAX_5910 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2ab3,0,0,"%s",
                                  "STBoatC::ToDok - incorrect entry");
          if (local_EAX_5910 == 0) {
            return -1;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        /* ST_CALLSITE[00470C72]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
        local_EAX_5810 = sub_00460260(this,2);
        if (local_EAX_5810 == -1) {
          return -1;
        }
        if (local_EAX_5810 == 0) {
          return 0;
        }
        if (local_EAX_5810 != 3) {
          return 2;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar13 = (int *)CONCAT22(extraout_var,this->field_004B);
        sVar21 = this->field_0049;
        iVar12 = 1;
        sVar22 = this->field_0047;
        uVar20 = *(ushort *)&this->field_0x562;
        sVar14 = *(short *)&this->field_0x560;
        sVar19 = this->field_055E;
      }
      /* ST_CALLSITE[00470BE9]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
      sub_0048DFD0(this,sVar19,sVar14,uVar20,sVar22,sVar21,piVar13,iVar12,&this->field_055E,
                   (short *)&this->field_0x560,(short *)&this->field_0x562);
      sVar19 = *(short *)&this->field_0x562;
      sVar21 = *(short *)&this->field_0x560;
      sVar14 = this->field_055E;
      goto LAB_00470bfe;
    }
    iVar12 = this->field_057C + 1;
    this->field_057C = iVar12;
    if (iVar12 < 0x1e) goto cf_common_exit_004707B7;
    if (*(int *)&this->field_0x584 == 0) {
      iVar12 = STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_056E * 0xc9)) + 100;
      /* ST_CALLSITE[0047076F]: CALL dword ptr [EDX + 0x10] */
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar12), (uint16_t)(this->field_0045)),
                         this->field_056C * 0xc9 + 100,(short)iVar12,
                         (ushort)(this->field_0570 * 200) + 100);
      this->field_0572 = uVar5;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      /* ST_CALLSITE[00470797]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar8 = sub_004176C0(this,this->field_0572);
      /* ST_CALLSITE[0047079F]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar8 = sub_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        local_EAX_4651 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2a42,0,0,"%s",
                                "STBoatC::ToDok, TODOK_ODOCK");
        if (local_EAX_4651 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x2a43);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar8 != 0) goto cf_common_exit_004707B7;
      goto LAB_004707ad;
    }
    if (*(int *)&this->field_0x584 == 2) {
      /* ST_CALLSITE[0047086B]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                   this->field_0570 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x584 = 3;
    }
    if (*(int *)&this->field_0x584 != 3) goto cf_common_exit_00470E32;
    /* ST_CALLSITE[0047088C]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    iVar12 = (uVar8 >> 0x10) % 7 - 3;
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    local_18 = (uVar1 >> 0x10) % 7 - 3;
    if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
       (param_1 = 0, this->field_02BF != '\0')) {
      local_8 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar9 = thunk_FUN_0041dc40(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                    this->field_006C);
        uVar3 = *puVar9;
        bVar26 = 0;
        sVar25 = 0;
        iVar7 = -1;
        local_1c = *(short *)(puVar9 + 1);
        sVar24 = 0;
        sVar23 = 0;
        sVar22 = 0;
        sVar21 = 0;
        sVar19 = 0;
        sVar14 = 0;
        local_20 = uVar3;
        if (DAT_0080732c == 1) {
          sVar14 = 0;
          sVar19 = 0;
          sVar21 = 0;
          sVar22 = 0;
          sVar23 = 0;
          sVar24 = 0;
          sVar25 = 0;
          bVar26 = 0;
          lVar18 = Library::MSVCRT::__ftol();
          iVar15 = (int)local_1c + this->field_0045 + local_18 + (int)(short)lVar18;
          iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
          iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
        }
        else {
          iVar15 = (int)local_1c + local_18 + this->field_0045;
          STPiece<2,2>(local_20) = (short)((uint)uVar3 >> 0x10);
          iVar10 = (int)this->field_0043 - (int)STPiece<2,2>(local_20);
          STPiece<0,2>(local_20) = (short)uVar3;
          iVar11 = (int)(short)local_20 + iVar12 + this->field_0041;
        }
        /* ST_CALLSITE[004709F5]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,iVar11,iVar10 + ((uVar8 >> 0x10) % 7 - 3),iVar15,
                   sVar14,sVar19,sVar21,sVar22,sVar23,sVar24,iVar7,sVar25,bVar26);
        local_8 = (undefined4 *)((int)local_8 + 6);
        param_1 = param_1 + 1;
      } while (param_1 < (int)(uint)(byte)this->field_02BF);
    }
    if (local_c == -1) {
      local_EAX_5572 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2a6c,0,0,"%s",
                              "STBoatC::ToDok, TODOK_ODOCK 2");
      if (local_EAX_5572 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar12 = 0x2a6d;
      goto cf_error_exit_00470C46;
    }
    if (local_c != 0) goto cf_common_exit_00470E32;
    sVar14 = this->field_0554;
    pSVar16 = nullptr;
    sVar19 = this->field_0558;
    sVar21 = this->field_0556;
    if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
       (((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar19 ||
         ((pSVar16 = STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
          pSVar16 == nullptr || (*(int *)&pSVar16->field_0x18 != this->field_055A))))))
       )) {
cf_common_exit_00470B14:
      this->field_0580 = CASE_7;
      /* ST_CALLSITE[00470B49]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0047,
                   this->field_0049,(int *)STReplaceLowWord((uint32_t)(pSVar16), (uint16_t)(this->field_004B))
                   ,3,&this->field_055E,(short *)&this->field_0x560,(short *)&this->field_0x562);
    }
    else {
      if (*(int *)&pSVar16[0x1d].field_0x18 != 0) {
        if (&this->field_055E != nullptr) {
          uVar5 = *(undefined2 *)&pSVar16[0x1d].field_0x1e;
          this->field_055E = *(undefined2 *)&pSVar16[0x1d].field_0x1c;
          *(undefined2 *)&this->field_0x560 = uVar5;
        }
        if (&this->field_0x560 != nullptr) {
          *(int *)&this->field_0x560 = pSVar16[0x1d].value_20;
        }
        if (&this->field_0x562 != nullptr) {
          *(STWorldObjectVTable **)&this->field_0x562 = pSVar16[0x1e].vtable;
        }
      }
      if (*(int *)&pSVar16[0x1d].field_0x18 != 1) goto cf_common_exit_00470B14;
      this->field_0580 = CASE_8;
    }
    /* ST_CALLSITE[00470B60]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_055E,(int)*(short *)&this->field_0x560,
                 (int)*(short *)&this->field_0x562);
    goto cf_common_exit_00470E2B;
  }
  /* ST_CALLSITE[0046F8BC]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
  local_EAX_764 = sub_00460260(this,2);
  switch(local_EAX_764) {
  case 0:
    /* ST_CALLSITE[0046F920]: CALL 0x004049cb; direct=004049CB STBoatC::sub_00490570 */
    iVar12 = sub_00490570(this);
    if (iVar12 != 1) {
      this->field_0580 = CASE_2;
      goto LAB_0046f98f;
    }
    /* ST_CALLSITE[0046F96B]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                 this->field_0556,(int *)CONCAT22(extraout_var_03,this->field_0558 + 1),1,
                 &this->field_055E,(short *)&this->field_0x560,(short *)&this->field_0x562);
    iVar10 = (int)*(short *)&this->field_0x562;
    iVar7 = (int)*(short *)&this->field_0x560;
    iVar12 = (int)this->field_055E;
    break;
  case 1:
    if (this->field_0564 == 1) {
      this->field_0564 = 0;
      /* ST_CALLSITE[0046FA35]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
      sub_004602B0(this);
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      /* ST_CALLSITE[0046FA65]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
      sub_00481520(this,(int)this->field_0554,(int)this->field_0556,this->field_0558 + 1);
      /* ST_CALLSITE[0046FA6D]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
      sub_00460260(this,0);
      goto cf_common_exit_004707B7;
    }
    sVar14 = this->field_0554;
    sVar19 = this->field_0558;
    sVar21 = this->field_0556;
    if (((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
          ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) ||
        ((pSVar17 = (STFishC *)
                    STGridAt3D(g_worldGrid, sVar14, sVar21, sVar19).objects[0],
         /* ST_CALLSITE[0046FB03]: CALL dword ptr [EAX + 0x2c] */
         pSVar17 == nullptr || (dVar6 = pSVar17->slot_2C(), dVar6 != 0x33))
        )) || (pSVar17->field_0024 != this->field_0024)) goto LAB_0046fd37;
    local_EAX_1390 =
         thunk_FUN_004e1eb0(pSVar17,(int)this->field_0041,(int)this->field_0043,
                            (int)this->field_0045);
    this->field_0568 = local_EAX_1390;
    if ((local_EAX_1390 == -1) ||
       (local_EAX_1414 = thunk_FUN_004908a0(this,pSVar17,local_EAX_1390), local_EAX_1414 != 1))
    goto cf_common_exit_004707B7;
    /* ST_CALLSITE[0046FB56]: CALL 0x00403855; direct=00403855 STBoatC::sub_004602B0 */
    sub_004602B0(this);
    this->field_055A = pSVar17->field_0018;
    thunk_FUN_004e1fb0(pSVar17,this->field_0568,this->field_0018);
    iVar10 = (int)this->field_0570;
    iVar7 = (int)this->field_056E;
    iVar12 = (int)this->field_056C;
    this->field_0580 = CASE_3;
    break;
  default:
    goto cf_common_exit_004707B7;
  case 3:
    /* ST_CALLSITE[0046F9AA]: CALL 0x004049cb; direct=004049CB STBoatC::sub_00490570 */
    iVar12 = sub_00490570(this);
    if (iVar12 == 1) {
      /* ST_CALLSITE[0046F9F4]: CALL 0x00404908; direct=00404908 STBoatC::sub_0048DFD0 */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                   this->field_0556,
                   (int *)CONCAT22((short)((uint)&this->field_0x562 >> 0x10),this->field_0558 + 1),1
                   ,&this->field_055E,(short *)&this->field_0x560,(short *)&this->field_0x562);
    }
    /* ST_CALLSITE[0046FA13]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
    sub_00481520(this,(int)this->field_055E,(int)*(short *)&this->field_0x560,
                 (int)*(short *)&this->field_0x562);
    /* ST_CALLSITE[0046FA1B]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
    sub_00460260(this,0);
    goto cf_common_exit_004707B7;
  case -1:
    local_EAX_808 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2907,0,0,"%s",
                            "STBoatC::ToDok, correct move to dock error");
    if (local_EAX_808 == 0) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2907);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0046fb98:
  /* ST_CALLSITE[0046FB9A]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
  sub_00481520(this,iVar12,iVar7,iVar10);
  /* ST_CALLSITE[0046FBA3]: CALL 0x004031de; direct=004031DE STBoatC::sub_00460260 */
  sub_00460260(this,0);
cf_common_exit_004707B7:
  /* ST_CALLSITE[004707BB]: CALL dword ptr [EAX + 0xd8] */
  iVar12 = this->vfunc_D8();
  return (-(uint)(iVar12 != 0) & 0xfffffffd) + 2;
}

