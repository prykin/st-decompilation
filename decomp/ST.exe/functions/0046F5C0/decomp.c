#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ToDok */

int __thiscall STBoatC::ToDok(STBoatC *this,int param_1)

{
  uint uVar1;
  STBoatC_field_0580State SVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  dword dVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
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
  undefined4 local_20;
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
    pSVar16 = g_worldGrid.cells
              [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar21 * (int)g_worldGrid.sizeX +
               (int)sVar14].objects[0];
    if (pSVar16 == (STWorldObject *)0x0) {
      return 0;
    }
    iVar6 = pSVar16->GetObjectTypeId();
    if (iVar6 != 0x33) {
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
    sVar21 = this->field_0556;
    sVar19 = this->field_0554;
    this->field_00B7 = 3;
LAB_00470e23:
    sub_00481520(this,(int)sVar19,(int)sVar21,sVar14 + 1);
cf_common_exit_00470E2B:
    sub_00460260(this,0);
cf_common_exit_00470E32:
    iVar6 = this->vfunc_D8();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  }
  SVar2 = this->field_0580;
  if (SVar2 == CASE_0) {
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      if (*(int *)&this->field_0x564 == 1) {
        iVar8 = (int)this->field_0556;
        iVar6 = (int)this->field_0554;
        iVar11 = this->field_0558 + 1;
        *(undefined4 *)&this->field_0x564 = 0;
        break;
      }
      sVar14 = this->field_0554;
      sVar19 = this->field_0558;
      sVar21 = this->field_0556;
      if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
         (((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))) {
        pSVar16 = (STWorldObject *)0x0;
      }
      else {
        pSVar16 = g_worldGrid.cells
                  [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar21 * (int)g_worldGrid.sizeX
                   + (int)sVar14].objects[0];
      }
      iVar6 = sub_00490570(this);
      if (iVar6 != 1) {
LAB_0046f794:
        if (((pSVar16 != (STWorldObject *)0x0) &&
            (iVar6 = pSVar16->GetObjectTypeId(), iVar6 == 0x33)) &&
           (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)) {
          this->field_0580 = CASE_2;
LAB_0046f98f:
          iVar6 = Defence(this,0);
          return (-(uint)(iVar6 != -1) & 3) - 1;
        }
LAB_0046f888:
        sub_004602B0(this);
        this->field_00B7 = 0;
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar5 = extraout_var_00;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((pSVar16 != (STWorldObject *)0x0) &&
          (iVar6 = pSVar16->GetObjectTypeId(), uVar5 = extraout_var_01,
          iVar6 == 0x33)) && (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)) {
        iVar6 = thunk_FUN_004e1eb0(pSVar16,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar5 = extraout_var_02;
        if (iVar6 != -1) goto LAB_0046f794;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                   this->field_0556,(int *)CONCAT22(uVar5,this->field_0558 + 1),1,
                   (short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
      iVar11 = (int)*(short *)&this->field_0x562;
      iVar8 = (int)*(short *)&this->field_0x560;
      iVar6 = (int)*(short *)&this->field_0x55e;
      this->field_0580 = CASE_1;
      this->field_00B7 = 0;
      break;
    case 1:
      if (*(int *)&this->field_0x564 != 1) {
        sVar14 = this->field_0554;
        sVar19 = this->field_0558;
        sVar21 = this->field_0556;
        if ((((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar21)) &&
             ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))) &&
            ((sVar19 < g_worldGrid.sizeZ &&
             ((pSVar16 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
              pSVar16 != (STWorldObject *)0x0 &&
              (iVar6 = pSVar16->GetObjectTypeId(), iVar6 == 0x33)))))) &&
           (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024))
        goto cf_common_exit_004707B7;
        goto LAB_0046f888;
      }
      *(undefined4 *)&this->field_0x564 = 0;
      sub_004602B0(this);
    case 3:
      iVar8 = (int)this->field_0556;
      iVar6 = (int)this->field_0554;
      iVar11 = this->field_0558 + 1;
      break;
    default:
      goto cf_common_exit_004707B7;
    case -1:
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x28ac,0,0,"%s",
                                 "STBoatC::ToDok, move to dock error");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x28ac;
cf_error_exit_00470C46:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (SVar2 != CASE_1) {
    if (SVar2 == CASE_2) {
      this->field_0574 = this->field_0574 + 1;
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if (this->field_082E != 0) {
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
                       g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
            pSVar17 != (STFishC *)0x0 &&
            (dVar7 = pSVar17->slot_2C(), dVar7 == 0x33)) &&
           (pSVar17->field_0024 == this->field_0024)))))) {
        iVar6 = thunk_FUN_004e1eb0(pSVar17,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        if (iVar6 == -1) {
          return 2;
        }
        iVar6 = thunk_FUN_004908a0(this,pSVar17,iVar6);
        if (iVar6 != 1) {
          return 2;
        }
        this->field_055A = pSVar17->field_0018;
        thunk_FUN_004e1fb0(pSVar17,this->field_0568,this->field_0018);
        sVar21 = this->field_0570;
        sVar19 = this->field_056E;
        sVar14 = this->field_056C;
        this->field_0580 = CASE_3;
        this->field_00B7 = 0;
LAB_00470bfe:
        sub_00481520(this,(int)sVar14,(int)sVar19,(int)sVar21);
        sub_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      sub_004602B0(this);
LAB_0046fd3e:
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    if (SVar2 == CASE_3) {
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 0:
        if (*(int *)&this->field_0x564 != 1) {
          sVar14 = this->field_0554;
          sVar19 = this->field_0558;
          sVar21 = this->field_0556;
          if ((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) &&
              ((-1 < sVar21 && ((sVar21 < g_worldGrid.sizeY && (-1 < sVar19)))))) &&
             ((sVar19 < g_worldGrid.sizeZ &&
              ((((pSVar16 = g_worldGrid.cells
                            [(int)sVar19 * (int)g_worldGrid.planeStride +
                             (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
                 pSVar16 != (STWorldObject *)0x0 &&
                 (iVar6 = pSVar16->GetObjectTypeId(), iVar6 == 0x33)) &&
                (*(int *)&pSVar16[0x21].field_0x10 == 0)) &&
               ((*(int *)&pSVar16[0x10].field_0x5 != 6 &&
                (pSVar16[1].vtable == (STWorldObjectVTable *)this->field_0024)))))))) {
            if ((this->field_0047 == this->field_056C) &&
               ((this->field_0049 == this->field_056E && (this->field_004B == this->field_0570)))) {
              this->field_0580 = CASE_4;
              *(undefined4 *)&this->field_0x584 = 0;
              iVar6 = this->vfunc_D8();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(pSVar16,this->field_0568,this->field_0018);
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (*(int *)&this->field_0x564 != 1) {
          sub_004602B0(this);
          sVar14 = this->field_0554;
          sVar19 = this->field_0558;
          sVar21 = this->field_0556;
          if (((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
             (((sVar21 < 0 || ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar19 ||
               (((pSVar17 = (STFishC *)
                            g_worldGrid.cells
                            [(int)sVar19 * (int)g_worldGrid.planeStride +
                             (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
                 pSVar17 == (STFishC *)0x0 ||
                 (dVar7 = pSVar17->slot_2C(), dVar7 != 0x33)) ||
                (pSVar17->field_0024 != this->field_0024)))))))) goto LAB_004700a6;
          goto LAB_00470071;
        }
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
                        g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
             pSVar17 == (STFishC *)0x0 ||
             (dVar7 = pSVar17->slot_2C(), dVar7 != 0x33)) ||
            (pSVar17->field_0024 != this->field_0024)))) {
LAB_004700a6:
          iVar6 = this->vfunc_D8();
          return -(uint)(iVar6 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,pSVar17,this->field_0568);
        sub_00481520(this,(int)this->field_056C,(int)this->field_056E,(int)this->field_0570);
        goto cf_common_exit_00470E2B;
      case -1:
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2977,0,0,"%s",
                                   "STBoatC::ToDok, move to depot 2 error");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x2977;
        goto cf_error_exit_00470C46;
      }
      sVar14 = this->field_0558;
      sVar21 = this->field_0556;
      sVar19 = this->field_0554;
      *(undefined4 *)&this->field_0x564 = 0;
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      goto LAB_00470e23;
    }
    if (SVar2 == CASE_4) {
      if (*(int *)&this->field_0x584 == 0) {
        iVar8 = (ushort)(this->field_0558 * 200) + 300;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar6 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_0556 + 1) * 0xc9;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar11 = CONCAT22((short)((uint)iVar6 >> 0x10),(short)this->field_0568 + this->field_0554);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = (*this->vtable->vfunc_10)
                          (this->field_0041,this->field_0043,
                           CONCAT22((short)((uint)(iVar11 * 0x19) >> 0x10),this->field_0045),
                           (short)(iVar11 * 0xc9 + 100),(short)iVar6,iVar8);
        this->field_0572 = uVar5;
        *(undefined4 *)&this->field_0x584 = 1;
      }
      if (*(int *)&this->field_0x584 == 1) {
        uVar9 = sub_004176C0(this,this->field_0572);
        uVar9 = sub_00417910(this,(short)uVar9);
        if (uVar9 == 0xffffffff) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x29d3,0,0,
                                     "%s","STBoatC::ToDok, TODOK_PDOCK");
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x29d4);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (uVar9 == 0) {
LAB_004707ad:
          *(undefined4 *)&this->field_0x584 = 2;
          goto cf_common_exit_004707B7;
        }
      }
      if (*(int *)&this->field_0x584 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     ((short)this->field_0568 + this->field_0554) * 0xc9 + 100,
                     (this->field_0556 + 1) * 0xc9,this->field_0558 * 200 + 300,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 == 3) {
        local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar9;
        iVar6 = (uVar9 >> 0x10) % 7 - 3;
        uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar9;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_10 = (uVar1 >> 0x10) % 7 - 3;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
           (param_1 = 0, this->field_02BF != '\0')) {
          local_8 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar10 = (undefined4 *)
                      thunk_FUN_0041dc40(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                         this->field_006C);
            uVar3 = *puVar10;
            bVar26 = 0;
            sVar25 = 0;
            iVar8 = -1;
            local_1c = *(short *)(puVar10 + 1);
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
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar11 = (int)this->field_0043 - (int)local_20._2_2_;
              iVar12 = (int)(short)local_20 + iVar6 + this->field_0041;
            }
            else {
              iVar15 = (int)local_1c + local_10 + this->field_0045;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar11 = (int)this->field_0043 - (int)local_20._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20._0_2_ = (short)uVar3;
              iVar12 = (int)(short)local_20 + iVar6 + this->field_0041;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,iVar12,iVar11 + ((uVar9 >> 0x10) % 7 - 3),iVar15,
                       sVar14,sVar19,sVar21,sVar22,sVar23,sVar24,iVar8,sVar25,bVar26);
            local_8 = (undefined4 *)((int)local_8 + 6);
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_c == -1) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x29fe,0,0,
                                     "%s","STBoatC::UnLoadRC, TODOK_PDOCK 2");
          if (iVar6 == 0) {
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
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          *(undefined4 *)&this->field_0x584 = 0;
          this->field_0578 = (uVar9 >> 0x10) % 0x33 + 0x28;
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
           ((pSVar16 = g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
            pSVar16 != (STWorldObject *)0x0 && (*(int *)&pSVar16->field_0x18 == this->field_055A))))
          )))) {
        if (g_playSystem_00802A38->field_00E4 == this->field_0574 + this->field_0578) {
          this->vfunc_90(3,0x363);
          iVar6 = (*(short *)&this->field_0x237 * -7) / 10;
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          sVar14 = (short)((uVar9 >> 0x10) %
                          (((*(short *)&this->field_0x237 * 7) / 10 - iVar6) + 1U)) + (short)iVar6;
          iVar6 = (*(short *)&this->field_0x237 * -2) / 10;
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22((short)((uVar9 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 2) / 10 - iVar6) + 1U)) +
                              (short)iVar6,sVar14);
          puVar10 = (undefined4 *)thunk_FUN_0041dc40(local_28,sVar14,0,this->field_006C);
          uVar3 = *puVar10;
          local_1c = *(short *)(puVar10 + 1);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar8 = (int)local_20._2_2_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._0_2_ = (short)uVar3;
          iVar6 = (int)(short)local_20;
          local_20 = uVar3;
          thunk_FUN_00637930(this->field_01ED,0,this->field_0041 + iVar6,this->field_0043 + iVar8,
                             this->field_0045 + -0x28,0,0);
          this->field_0574 = g_playSystem_00802A38->field_00E4;
          uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar9;
          this->field_0578 = (uVar9 >> 0x10) % 0x33 + 0x28;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_004e20d0(pSVar16,this->field_0568,this->field_0018,
                           *(int *)((int)this->field_06CB + 0x2c),this->field_0716);
        iVar6 = thunk_FUN_004e2340(pSVar16,this->field_0568,this->field_0018,(undefined4 *)0x0);
        this->field_0716 = iVar6;
        if (iVar6 != this->field_0712) goto cf_common_exit_00470E32;
      }
      sub_0048DBA0(this);
      this->field_0580 = CASE_6;
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (SVar2 != CASE_6) {
      if (SVar2 == CASE_7) {
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2a8c,0,0,
                                     "%s","STBoatC::ToDok, TODOK_MOVEWAIT error");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar6 = 0x2a8c;
          goto cf_error_exit_00470C46;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 != 3) {
          return 2;
        }
        uVar20 = this->field_004B;
        piVar13 = (int *)(uint)uVar20;
        sVar14 = this->field_0049;
        sVar19 = this->field_0047;
        iVar6 = 3;
        sVar21 = sVar14;
        sVar22 = sVar19;
      }
      else {
        if (SVar2 != CASE_8) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2ab3,0,0,
                                     "%s","STBoatC::ToDok - incorrect entry");
          if (iVar6 == 0) {
            return -1;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          return -1;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 != 3) {
          return 2;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar13 = (int *)CONCAT22(extraout_var,this->field_004B);
        sVar21 = this->field_0049;
        iVar6 = 1;
        sVar22 = this->field_0047;
        uVar20 = *(ushort *)&this->field_0x562;
        sVar14 = *(short *)&this->field_0x560;
        sVar19 = *(short *)&this->field_0x55e;
      }
      sub_0048DFD0(this,sVar19,sVar14,uVar20,sVar22,sVar21,piVar13,iVar6,(short *)&this->field_0x55e
                   ,(short *)&this->field_0x560,(short *)&this->field_0x562);
      sVar21 = *(short *)&this->field_0x562;
      sVar19 = *(short *)&this->field_0x560;
      sVar14 = *(short *)&this->field_0x55e;
      goto LAB_00470bfe;
    }
    iVar6 = this->field_057C + 1;
    this->field_057C = iVar6;
    if (iVar6 < 0x1e) goto cf_common_exit_004707B7;
    if (*(int *)&this->field_0x584 == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_056E * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0045),
                         this->field_056C * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0570 * 200) + 100);
      this->field_0572 = uVar5;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar9 = sub_004176C0(this,this->field_0572);
      uVar9 = sub_00417910(this,(short)uVar9);
      if (uVar9 == 0xffffffff) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2a42,0,0,"%s",
                                   "STBoatC::ToDok, TODOK_ODOCK");
        if (iVar6 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x2a43);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar9 != 0) goto cf_common_exit_004707B7;
      goto LAB_004707ad;
    }
    if (*(int *)&this->field_0x584 == 2) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                   this->field_0570 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x584 = 3;
    }
    if (*(int *)&this->field_0x584 != 3) goto cf_common_exit_00470E32;
    local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    iVar6 = (uVar9 >> 0x10) % 7 - 3;
    uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar9;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    local_18 = (uVar1 >> 0x10) % 7 - 3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((this->field_074A <= (int)PTR_00806724->entryCount / 2) &&
       (param_1 = 0, this->field_02BF != '\0')) {
      local_8 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar10 = (undefined4 *)
                  thunk_FUN_0041dc40(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                     this->field_006C);
        uVar3 = *puVar10;
        bVar26 = 0;
        sVar25 = 0;
        iVar8 = -1;
        local_1c = *(short *)(puVar10 + 1);
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
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11 = (int)this->field_0043 - (int)local_20._2_2_;
          iVar12 = (int)(short)local_20 + iVar6 + this->field_0041;
        }
        else {
          iVar15 = (int)local_1c + local_18 + this->field_0045;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11 = (int)this->field_0043 - (int)local_20._2_2_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._0_2_ = (short)uVar3;
          iVar12 = (int)(short)local_20 + iVar6 + this->field_0041;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,iVar12,iVar11 + ((uVar9 >> 0x10) % 7 - 3),iVar15,
                   sVar14,sVar19,sVar21,sVar22,sVar23,sVar24,iVar8,sVar25,bVar26);
        local_8 = (undefined4 *)((int)local_8 + 6);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (param_1 < (int)(uint)(byte)this->field_02BF);
    }
    if (local_c == -1) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2a6c,0,0,"%s",
                                 "STBoatC::ToDok, TODOK_ODOCK 2");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x2a6d;
      goto cf_error_exit_00470C46;
    }
    if (local_c != 0) goto cf_common_exit_00470E32;
    sVar14 = this->field_0554;
    pSVar16 = (STWorldObject *)0x0;
    sVar19 = this->field_0558;
    sVar21 = this->field_0556;
    if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
       (((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar19 ||
         ((pSVar16 = g_worldGrid.cells
                     [(int)sVar19 * (int)g_worldGrid.planeStride +
                      (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
          pSVar16 == (STWorldObject *)0x0 || (*(int *)&pSVar16->field_0x18 != this->field_055A))))))
       )) {
cf_common_exit_00470B14:
      this->field_0580 = CASE_7;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0047,
                   this->field_0049,(int *)CONCAT22((short)((uint)pSVar16 >> 0x10),this->field_004B)
                   ,3,(short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
    }
    else {
      if (*(int *)&pSVar16[0x1d].field_0x18 != 0) {
        if (&this->field_0x55e != (undefined1 *)0x0) {
          *(undefined4 *)&this->field_0x55e = *(undefined4 *)&pSVar16[0x1d].field_0x1c;
        }
        if (&this->field_0x560 != (undefined1 *)0x0) {
          *(int *)&this->field_0x560 = pSVar16[0x1d].value_20;
        }
        if (&this->field_0x562 != (undefined1 *)0x0) {
          *(STWorldObjectVTable **)&this->field_0x562 = pSVar16[0x1e].vtable;
        }
      }
      if (*(int *)&pSVar16[0x1d].field_0x18 != 1) goto cf_common_exit_00470B14;
      this->field_0580 = CASE_8;
    }
    sub_00481520(this,(int)*(short *)&this->field_0x55e,(int)*(short *)&this->field_0x560,
                 (int)*(short *)&this->field_0x562);
    goto cf_common_exit_00470E2B;
  }
  iVar6 = sub_00460260(this,2);
  switch(iVar6) {
  case 0:
    iVar6 = sub_00490570(this);
    if (iVar6 != 1) {
      this->field_0580 = CASE_2;
      goto LAB_0046f98f;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                 this->field_0556,(int *)CONCAT22(extraout_var_03,this->field_0558 + 1),1,
                 (short *)&this->field_0x55e,(short *)&this->field_0x560,(short *)&this->field_0x562
                );
    iVar11 = (int)*(short *)&this->field_0x562;
    iVar8 = (int)*(short *)&this->field_0x560;
    iVar6 = (int)*(short *)&this->field_0x55e;
    break;
  case 1:
    if (*(int *)&this->field_0x564 == 1) {
      *(undefined4 *)&this->field_0x564 = 0;
      sub_004602B0(this);
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      sub_00481520(this,(int)this->field_0554,(int)this->field_0556,this->field_0558 + 1);
      sub_00460260(this,0);
      goto cf_common_exit_004707B7;
    }
    sVar14 = this->field_0554;
    sVar19 = this->field_0558;
    sVar21 = this->field_0556;
    if (((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar21 < 0)) ||
          ((g_worldGrid.sizeY <= sVar21 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) ||
        ((pSVar17 = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar19 * (int)g_worldGrid.planeStride +
                     (int)sVar21 * (int)g_worldGrid.sizeX + (int)sVar14].objects[0],
         pSVar17 == (STFishC *)0x0 || (dVar7 = pSVar17->slot_2C(), dVar7 != 0x33))
        )) || (pSVar17->field_0024 != this->field_0024)) goto LAB_0046fd37;
    iVar6 = thunk_FUN_004e1eb0(pSVar17,(int)this->field_0041,(int)this->field_0043,
                               (int)this->field_0045);
    this->field_0568 = iVar6;
    if ((iVar6 == -1) || (iVar6 = thunk_FUN_004908a0(this,pSVar17,iVar6), iVar6 != 1))
    goto cf_common_exit_004707B7;
    sub_004602B0(this);
    this->field_055A = pSVar17->field_0018;
    thunk_FUN_004e1fb0(pSVar17,this->field_0568,this->field_0018);
    iVar11 = (int)this->field_0570;
    iVar8 = (int)this->field_056E;
    iVar6 = (int)this->field_056C;
    this->field_0580 = CASE_3;
    break;
  default:
    goto cf_common_exit_004707B7;
  case 3:
    iVar6 = sub_00490570(this);
    if (iVar6 == 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_0554,
                   this->field_0556,
                   (int *)CONCAT22((short)((uint)&this->field_0x562 >> 0x10),this->field_0558 + 1),1
                   ,(short *)&this->field_0x55e,(short *)&this->field_0x560,
                   (short *)&this->field_0x562);
    }
    sub_00481520(this,(int)*(short *)&this->field_0x55e,(int)*(short *)&this->field_0x560,
                 (int)*(short *)&this->field_0x562);
    sub_00460260(this,0);
    goto cf_common_exit_004707B7;
  case -1:
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2907,0,0,"%s",
                               "STBoatC::ToDok, correct move to dock error");
    if (iVar6 == 0) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2907);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0046fb98:
  sub_00481520(this,iVar6,iVar8,iVar11);
  sub_00460260(this,0);
cf_common_exit_004707B7:
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

