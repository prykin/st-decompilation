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
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  short sVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  int iVar13;
  STWorldObject *pSVar14;
  STFishC *pSVar15;
  longlong lVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int iVar23;
  short sVar24;
  byte bVar25;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  if ((param_1 == 0) || (param_1 == 1)) {
    puVar9 = &this->field_02CC;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_0716 == this->field_0712) {
      return 0;
    }
    sVar12 = *(short *)&this->field_0x3a0;
    sVar17 = *(short *)&this->field_0x3a4;
    sVar19 = *(short *)&this->field_0x3a2;
    if (sVar12 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar12) {
      return 0;
    }
    if (sVar19 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar19) {
      return 0;
    }
    if (sVar17 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar17) {
      return 0;
    }
    pSVar14 = g_worldGrid.cells
              [(int)sVar17 * (int)g_worldGrid.planeStride + (int)sVar19 * (int)g_worldGrid.sizeX +
               (int)sVar12].objects[0];
    if (pSVar14 == (STWorldObject *)0x0) {
      return 0;
    }
    iVar6 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
    if (iVar6 != 0x33) {
      return 0;
    }
    if (pSVar14[1].vtable != *(STWorldObjectVTable **)&this->field_0x24) {
      return 0;
    }
    this->field_0580 = CASE_0;
    this->field_0554 = *(short *)&this->field_0x3a0;
    this->field_0556 = *(short *)&this->field_0x3a2;
    this->field_0558 = *(short *)&this->field_0x3a4;
    *(undefined4 *)&this->field_0x57c = 0;
    *(undefined4 *)&this->field_0x578 = 0;
    *(undefined4 *)&this->field_0x574 = 0;
    sVar12 = this->field_0558;
    sVar19 = this->field_0556;
    sVar17 = this->field_0554;
    this->field_00B7 = 3;
LAB_00470e23:
    sub_00481520(this,(int)sVar17,(int)sVar19,sVar12 + 1);
cf_common_exit_00470E2B:
    sub_00460260(this,0);
cf_common_exit_00470E32:
    iVar6 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
  }
  SVar2 = this->field_0580;
  if (SVar2 == CASE_0) {
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      if (this->field_0564 == 1) {
        iVar23 = (int)this->field_0556;
        iVar6 = (int)this->field_0554;
        iVar7 = this->field_0558 + 1;
        this->field_0564 = 0;
        break;
      }
      sVar12 = this->field_0554;
      sVar17 = this->field_0558;
      sVar19 = this->field_0556;
      if ((((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) || (sVar19 < 0)) ||
         (((g_worldGrid.sizeY <= sVar19 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
        pSVar14 = (STWorldObject *)0x0;
      }
      else {
        pSVar14 = g_worldGrid.cells
                  [(int)sVar17 * (int)g_worldGrid.planeStride + (int)sVar19 * (int)g_worldGrid.sizeX
                   + (int)sVar12].objects[0];
      }
      iVar6 = sub_00490570(this);
      if (iVar6 != 1) {
LAB_0046f794:
        if (((pSVar14 != (STWorldObject *)0x0) &&
            (iVar6 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14), iVar6 == 0x33)) &&
           (pSVar14[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) {
          this->field_0580 = CASE_2;
LAB_0046f98f:
          iVar6 = Defence(this,0);
          return (-(uint)(iVar6 != -1) & 3) - 1;
        }
LAB_0046f888:
        sub_004602B0(this);
        this->field_00B7 = 0;
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar5 = extraout_var_00;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((pSVar14 != (STWorldObject *)0x0) &&
          (iVar6 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14), uVar5 = extraout_var_01,
          iVar6 == 0x33)) && (pSVar14[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) {
        iVar6 = thunk_FUN_004e1eb0(pSVar14,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar5 = extraout_var_02;
        if (iVar6 != -1) goto LAB_0046f794;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                 this->field_0554,this->field_0556,(int *)CONCAT22(uVar5,this->field_0558 + 1),1,
                 &this->field_055E,&this->field_0560,(short *)&this->field_0x562);
      iVar7 = (int)*(short *)&this->field_0x562;
      iVar23 = (int)this->field_0560;
      iVar6 = (int)this->field_055E;
      this->field_0580 = CASE_1;
      this->field_00B7 = 0;
      break;
    case 1:
      if (this->field_0564 != 1) {
        sVar12 = this->field_0554;
        sVar17 = this->field_0558;
        sVar19 = this->field_0556;
        if ((((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) && (-1 < sVar19)) &&
             ((sVar19 < g_worldGrid.sizeY && (-1 < sVar17)))) &&
            ((sVar17 < g_worldGrid.sizeZ &&
             ((pSVar14 = g_worldGrid.cells
                         [(int)sVar17 * (int)g_worldGrid.planeStride +
                          (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
              pSVar14 != (STWorldObject *)0x0 &&
              (iVar6 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14), iVar6 == 0x33)))))) &&
           (pSVar14[1].vtable == *(STWorldObjectVTable **)&this->field_0x24))
        goto cf_common_exit_004707B7;
        goto LAB_0046f888;
      }
      this->field_0564 = 0;
      sub_004602B0(this);
    case 3:
      iVar23 = (int)this->field_0556;
      iVar6 = (int)this->field_0554;
      iVar7 = this->field_0558 + 1;
      break;
    default:
      goto cf_common_exit_004707B7;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x28ac,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__move_to_dock_err_007aac3c);
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x28ac;
cf_error_exit_00470C46:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
      return 0xffff;
    }
    goto LAB_0046fb98;
  }
  if (SVar2 != CASE_1) {
    if (SVar2 == CASE_2) {
      *(int *)&this->field_0x574 = *(int *)&this->field_0x574 + 1;
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
      if (*(int *)&this->field_0x574 % 0x32 != 1) {
        return 2;
      }
      sVar12 = this->field_0554;
      sVar17 = this->field_0558;
      sVar19 = this->field_0556;
      if ((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) &&
          ((-1 < sVar19 && ((sVar19 < g_worldGrid.sizeY && (-1 < sVar17)))))) &&
         ((sVar17 < g_worldGrid.sizeZ &&
          (((pSVar15 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar17 * (int)g_worldGrid.planeStride +
                        (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
            pSVar15 != (STFishC *)0x0 && (iVar6 = (*pSVar15->vtable->vfunc_2C)(), iVar6 == 0x33)) &&
           (*(int *)&pSVar15->field_0x24 == *(int *)&this->field_0x24)))))) {
        iVar6 = thunk_FUN_004e1eb0(pSVar15,(int)this->field_0041,(int)this->field_0043,
                                   (int)this->field_0045);
        this->field_0568 = iVar6;
        if (iVar6 == -1) {
          return 2;
        }
        iVar6 = thunk_FUN_004908a0(this,pSVar15,iVar6);
        if (iVar6 != 1) {
          return 2;
        }
        this->field_055A = pSVar15->field_0018;
        thunk_FUN_004e1fb0(pSVar15,this->field_0568,this->field_0018);
        sVar19 = *(short *)&this->field_0x570;
        sVar17 = *(short *)&this->field_0x56e;
        sVar12 = *(short *)&this->field_0x56c;
        this->field_0580 = CASE_3;
        this->field_00B7 = 0;
LAB_00470bfe:
        sub_00481520(this,(int)sVar12,(int)sVar17,(int)sVar19);
        sub_00460260(this,0);
        return 2;
      }
LAB_0046fd37:
      sub_004602B0(this);
LAB_0046fd3e:
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    if (SVar2 == CASE_3) {
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 0:
        if (this->field_0564 != 1) {
          sVar12 = this->field_0554;
          sVar17 = this->field_0558;
          sVar19 = this->field_0556;
          if ((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) &&
              ((-1 < sVar19 && ((sVar19 < g_worldGrid.sizeY && (-1 < sVar17)))))) &&
             ((sVar17 < g_worldGrid.sizeZ &&
              ((((pSVar14 = g_worldGrid.cells
                            [(int)sVar17 * (int)g_worldGrid.planeStride +
                             (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
                 pSVar14 != (STWorldObject *)0x0 &&
                 (iVar6 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14), iVar6 == 0x33)) &&
                (*(int *)&pSVar14[0x21].field_0x10 == 0)) &&
               ((*(int *)&pSVar14[0x10].field_0x5 != 6 &&
                (pSVar14[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)))))))) {
            if ((this->field_0047 == *(short *)&this->field_0x56c) &&
               ((this->field_0049 == *(short *)&this->field_0x56e &&
                (this->field_004B == *(short *)&this->field_0x570)))) {
              this->field_0580 = CASE_4;
              *(undefined4 *)&this->field_0x584 = 0;
              iVar6 = (*this->vtable->vfunc_D8)();
              return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
            }
            thunk_FUN_004e2000(pSVar14,this->field_0568,this->field_0018);
            return 0;
          }
          goto LAB_0046fd3e;
        }
        break;
      case 1:
        if (this->field_0564 != 1) {
          sub_004602B0(this);
          sVar12 = this->field_0554;
          sVar17 = this->field_0558;
          sVar19 = this->field_0556;
          if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
             (((sVar19 < 0 || ((g_worldGrid.sizeY <= sVar19 || (sVar17 < 0)))) ||
              ((g_worldGrid.sizeZ <= sVar17 ||
               (((pSVar15 = (STFishC *)
                            g_worldGrid.cells
                            [(int)sVar17 * (int)g_worldGrid.planeStride +
                             (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
                 pSVar15 == (STFishC *)0x0 ||
                 (iVar6 = (*pSVar15->vtable->vfunc_2C)((STWorldObject *)pSVar15), iVar6 != 0x33)) ||
                (*(int *)&pSVar15->field_0x24 != *(int *)&this->field_0x24))))))))
          goto LAB_004700a6;
          goto LAB_00470071;
        }
        sub_004602B0(this);
        break;
      default:
        goto cf_common_exit_00470E32;
      case 3:
        sVar12 = this->field_0554;
        sVar17 = this->field_0558;
        sVar19 = this->field_0556;
        if (((((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
             ((sVar19 < 0 || ((g_worldGrid.sizeY <= sVar19 || (sVar17 < 0)))))) ||
            (g_worldGrid.sizeZ <= sVar17)) ||
           (((pSVar15 = (STFishC *)
                        g_worldGrid.cells
                        [(int)sVar17 * (int)g_worldGrid.planeStride +
                         (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
             pSVar15 == (STFishC *)0x0 ||
             (iVar6 = (*pSVar15->vtable->vfunc_2C)((STWorldObject *)pSVar15), iVar6 != 0x33)) ||
            (*(int *)&pSVar15->field_0x24 != *(int *)&this->field_0x24)))) {
LAB_004700a6:
          iVar6 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar6 != 0);
        }
LAB_00470071:
        thunk_FUN_004908a0(this,pSVar15,this->field_0568);
        sub_00481520(this,(int)*(short *)&this->field_0x56c,(int)*(short *)&this->field_0x56e,
                     (int)*(short *)&this->field_0x570);
        goto cf_common_exit_00470E2B;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2977,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__move_to_depot_2_e_007aabd8);
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x2977;
        goto cf_error_exit_00470C46;
      }
      sVar12 = this->field_0558;
      sVar19 = this->field_0556;
      sVar17 = this->field_0554;
      this->field_0564 = 0;
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      goto LAB_00470e23;
    }
    if (SVar2 == CASE_4) {
      if (*(int *)&this->field_0x584 == 0) {
        iVar7 = (ushort)(this->field_0558 * 200) + 300;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar23 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_0556 + 1) * 0xc9;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar10 = CONCAT22((short)((uint)iVar23 >> 0x10),
                          *(short *)&this->field_0568 + this->field_0554);
        iVar6 = iVar10 * 0xc9 + 100;
        uVar5 = (undefined2)((uint)(iVar10 * 0x19) >> 0x10);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar5 = (*this->vtable->vfunc_10)
                          (CONCAT22(uVar5,this->field_0041),
                           CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                           CONCAT22(uVar5,this->field_0045),iVar6,iVar23,iVar7);
        *(undefined2 *)&this->field_0x572 = uVar5;
        *(undefined4 *)&this->field_0x584 = 1;
      }
      if (*(int *)&this->field_0x584 == 1) {
        uVar8 = sub_004176C0(this,*(short *)&this->field_0x572);
        uVar8 = sub_00417910(this,(short)uVar8);
        if (uVar8 == 0xffffffff) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29d3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_PDOCK_007aabb4);
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
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
        STJellyGunC::sub_00415B30
                  ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                   (*(short *)&this->field_0568 + this->field_0554) * 0xc9 + 100,
                   (this->field_0556 + 1) * 0xc9,this->field_0558 * 200 + 300,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 == 3) {
        local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        iVar6 = (uVar8 >> 0x10) % 7 - 3;
        uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar8;
        uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar1;
        local_10 = (uVar1 >> 0x10) % 7 - 3;
        if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
           (param_1 = 0, this->field_0x2bf != '\0')) {
          local_8 = (undefined4 *)&this->field_0x2b3;
          do {
            puVar9 = (undefined4 *)
                     thunk_FUN_0041dc40(local_28,(short)*local_8,*(undefined2 *)(local_8 + 1),
                                        this->field_006C);
            uVar3 = *puVar9;
            bVar25 = 0;
            sVar24 = 0;
            iVar23 = -1;
            local_1c = *(short *)(puVar9 + 1);
            sVar22 = 0;
            sVar21 = 0;
            sVar20 = 0;
            sVar19 = 0;
            sVar17 = 0;
            sVar12 = 0;
            local_20 = uVar3;
            if (DAT_0080732c == 1) {
              sVar12 = 0;
              sVar17 = 0;
              sVar19 = 0;
              sVar20 = 0;
              sVar21 = 0;
              sVar22 = 0;
              sVar24 = 0;
              bVar25 = 0;
              lVar16 = Library::MSVCRT::__ftol();
              iVar13 = (int)local_1c + this->field_0045 + local_10 + (int)(short)lVar16;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
              iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
            }
            else {
              iVar13 = (int)local_1c + local_10 + this->field_0045;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_20._0_2_ = (short)uVar3;
              iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
            }
            TraksClassTy::TraksCreate
                      (g_traksClass_00802A7C,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar13,
                       sVar12,sVar17,sVar19,sVar20,sVar21,sVar22,iVar23,sVar24,bVar25);
            local_8 = (undefined4 *)((int)local_8 + 6);
            param_1 = param_1 + 1;
          } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_c == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x29fe,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__TODOK_PDOCK_2_007aab8c);
          if (iVar6 == 0) {
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x29ff);
            return 0xffff;
          }
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (local_c == 0) {
          this->field_0580 = CASE_5;
          *(undefined4 *)&this->field_0x574 = PTR_00802a38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          *(undefined4 *)&this->field_0x584 = 0;
          *(uint *)&this->field_0x578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
      }
      goto cf_common_exit_004707B7;
    }
    if (SVar2 == CASE_5) {
      sVar12 = this->field_0554;
      sVar17 = this->field_0558;
      sVar19 = this->field_0556;
      if ((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) && (-1 < sVar19)) &&
         (((sVar19 < g_worldGrid.sizeY && (-1 < sVar17)) &&
          ((sVar17 < g_worldGrid.sizeZ &&
           ((pSVar14 = g_worldGrid.cells
                       [(int)sVar17 * (int)g_worldGrid.planeStride +
                        (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
            pSVar14 != (STWorldObject *)0x0 && (*(int *)&pSVar14->field_0x18 == this->field_055A))))
          )))) {
        if (PTR_00802a38->field_00E4 == *(int *)&this->field_0x574 + *(int *)&this->field_0x578) {
          (*this->vtable->vfunc_90)(3,0x363);
          iVar6 = (*(short *)&this->field_0x237 * -7) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          sVar12 = (short)((uVar8 >> 0x10) %
                          (((*(short *)&this->field_0x237 * 7) / 10 - iVar6) + 1U)) + (short)iVar6;
          iVar6 = (*(short *)&this->field_0x237 * -2) / 10;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20 = CONCAT22((short)((uVar8 >> 0x10) %
                                     (((*(short *)&this->field_0x237 * 2) / 10 - iVar6) + 1U)) +
                              (short)iVar6,sVar12);
          puVar9 = (undefined4 *)thunk_FUN_0041dc40(local_28,sVar12,0,this->field_006C);
          uVar3 = *puVar9;
          local_1c = *(short *)(puVar9 + 1);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar23 = (int)local_20._2_2_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._0_2_ = (short)uVar3;
          iVar6 = (int)(short)local_20;
          local_20 = uVar3;
          thunk_FUN_00637930(this->field_01ED,0,this->field_0041 + iVar6,this->field_0043 + iVar23,
                             this->field_0045 + -0x28,0,0);
          *(undefined4 *)&this->field_0x574 = PTR_00802a38->field_00E4;
          uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
          this->field_001C = uVar8;
          *(uint *)&this->field_0x578 = (uVar8 >> 0x10) % 0x33 + 0x28;
        }
        thunk_FUN_004e20d0(pSVar14,this->field_0568,this->field_0018,this->field_06F7,
                           this->field_0716);
        iVar6 = thunk_FUN_004e2340(pSVar14,this->field_0568,this->field_0018,(undefined4 *)0x0);
        this->field_0716 = iVar6;
        if (iVar6 != this->field_0712) goto cf_common_exit_00470E32;
      }
      sub_0048DBA0(this);
      this->field_0580 = CASE_6;
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (SVar2 != CASE_6) {
      if (SVar2 == CASE_7) {
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a8c,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok__TODOK_MOVEWAIT_e_007aab18);
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
        uVar18 = this->field_004B;
        piVar11 = (int *)(uint)uVar18;
        sVar12 = this->field_0049;
        sVar17 = this->field_0047;
        iVar6 = 3;
        sVar19 = sVar12;
        sVar20 = sVar17;
      }
      else {
        if (SVar2 != CASE_8) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2ab3,0,0,
                                     &DAT_007a4ccc,s_STBoatC__ToDok___incorrect_entry_007aaaf0);
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
        piVar11 = (int *)CONCAT22(extraout_var,this->field_004B);
        sVar19 = this->field_0049;
        iVar6 = 1;
        sVar20 = this->field_0047;
        uVar18 = *(ushort *)&this->field_0x562;
        sVar12 = this->field_0560;
        sVar17 = this->field_055E;
      }
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                ((AnonReceiver_0048DFD0 *)this,sVar17,sVar12,uVar18,sVar20,sVar19,piVar11,iVar6,
                 &this->field_055E,&this->field_0560,(short *)&this->field_0x562);
      sVar19 = *(short *)&this->field_0x562;
      sVar17 = this->field_0560;
      sVar12 = this->field_055E;
      goto LAB_00470bfe;
    }
    iVar6 = *(int *)&this->field_0x57c + 1;
    *(int *)&this->field_0x57c = iVar6;
    if (iVar6 < 0x1e) goto cf_common_exit_004707B7;
    if (*(int *)&this->field_0x584 == 0) {
      iVar23 = (ushort)(*(short *)&this->field_0x570 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&this->field_0x56e * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22((short)((uint)iVar23 >> 0x10),*(short *)&this->field_0x56c * 0xc9) + 100;
      uVar5 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar5 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar5,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar5,this->field_0045),iVar6,iVar7,iVar23);
      *(undefined2 *)&this->field_0x572 = uVar5;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar8 = sub_004176C0(this,*(short *)&this->field_0x572);
      uVar8 = sub_00417910(this,(short)uVar8);
      if (uVar8 == 0xffffffff) {
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a42,0,0,&DAT_007a4ccc,
                                   s_STBoatC__ToDok__TODOK_ODOCK_007aab68);
        if (iVar6 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     0x2a43);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar8 != 0) goto cf_common_exit_004707B7;
      goto LAB_004707ad;
    }
    if (*(int *)&this->field_0x584 == 2) {
      STJellyGunC::sub_00415B30
                ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                 *(short *)&this->field_0x56c * 0xc9 + 100,*(short *)&this->field_0x56e * 0xc9 + 100
                 ,*(short *)&this->field_0x570 * 200 + 100,this->field_0061);
      *(undefined4 *)&this->field_0x584 = 3;
    }
    if (*(int *)&this->field_0x584 != 3) goto cf_common_exit_00470E32;
    local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    iVar6 = (uVar8 >> 0x10) % 7 - 3;
    uVar8 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar8;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    local_18 = (uVar1 >> 0x10) % 7 - 3;
    if (((int)this->field_074A <= (int)*(short *)(DAT_00806724 + 0x23) / 2) &&
       (param_1 = 0, this->field_0x2bf != '\0')) {
      local_8 = (undefined4 *)&this->field_0x2b3;
      do {
        puVar9 = (undefined4 *)
                 thunk_FUN_0041dc40(local_28,(short)*local_8,*(undefined2 *)(local_8 + 1),
                                    this->field_006C);
        uVar3 = *puVar9;
        bVar25 = 0;
        sVar24 = 0;
        iVar23 = -1;
        local_1c = *(short *)(puVar9 + 1);
        sVar22 = 0;
        sVar21 = 0;
        sVar20 = 0;
        sVar19 = 0;
        sVar17 = 0;
        sVar12 = 0;
        local_20 = uVar3;
        if (DAT_0080732c == 1) {
          sVar12 = 0;
          sVar17 = 0;
          sVar19 = 0;
          sVar20 = 0;
          sVar21 = 0;
          sVar22 = 0;
          sVar24 = 0;
          bVar25 = 0;
          lVar16 = Library::MSVCRT::__ftol();
          iVar13 = (int)local_1c + this->field_0045 + local_18 + (int)(short)lVar16;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
          iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
        }
        else {
          iVar13 = (int)local_1c + local_18 + this->field_0045;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._2_2_ = (short)((uint)uVar3 >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar7 = (int)this->field_0043 - (int)local_20._2_2_;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_20._0_2_ = (short)uVar3;
          iVar10 = (int)(short)local_20 + iVar6 + this->field_0041;
        }
        TraksClassTy::TraksCreate
                  (g_traksClass_00802A7C,1,2,7,iVar10,iVar7 + ((uVar8 >> 0x10) % 7 - 3),iVar13,
                   sVar12,sVar17,sVar19,sVar20,sVar21,sVar22,iVar23,sVar24,bVar25);
        local_8 = (undefined4 *)((int)local_8 + 6);
        param_1 = param_1 + 1;
      } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
    }
    if (local_c == -1) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2a6c,0,0,&DAT_007a4ccc,
                                 s_STBoatC__ToDok__TODOK_ODOCK_2_007aab44);
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x2a6d;
      goto cf_error_exit_00470C46;
    }
    if (local_c != 0) goto cf_common_exit_00470E32;
    sVar12 = this->field_0554;
    pSVar14 = (STWorldObject *)0x0;
    sVar17 = this->field_0558;
    sVar19 = this->field_0556;
    if ((((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) || (sVar19 < 0)) ||
       (((g_worldGrid.sizeY <= sVar19 || (sVar17 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar17 ||
         ((pSVar14 = g_worldGrid.cells
                     [(int)sVar17 * (int)g_worldGrid.planeStride +
                      (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
          pSVar14 == (STWorldObject *)0x0 || (*(int *)&pSVar14->field_0x18 != this->field_055A))))))
       )) {
cf_common_exit_00470B14:
      this->field_0580 = CASE_7;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                 this->field_0047,this->field_0049,
                 (int *)CONCAT22((short)((uint)pSVar14 >> 0x10),this->field_004B),3,
                 &this->field_055E,&this->field_0560,(short *)&this->field_0x562);
    }
    else {
      if (*(int *)&pSVar14[0x1d].field_0x18 != 0) {
        if (&this->field_055E != (short *)0x0) {
          uVar5 = *(undefined2 *)&pSVar14[0x1d].field_0x1e;
          this->field_055E = *(undefined2 *)&pSVar14[0x1d].field_0x1c;
          this->field_0560 = uVar5;
        }
        if (&this->field_0560 != (short *)0x0) {
          *(int *)&this->field_0560 = pSVar14[0x1d].value_20;
        }
        if (&this->field_0x562 != (undefined1 *)0x0) {
          *(STWorldObjectVTable **)&this->field_0x562 = pSVar14[0x1e].vtable;
        }
      }
      if (*(int *)&pSVar14[0x1d].field_0x18 != 1) goto cf_common_exit_00470B14;
      this->field_0580 = CASE_8;
    }
    sub_00481520(this,(int)this->field_055E,(int)this->field_0560,(int)*(short *)&this->field_0x562)
    ;
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
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
              ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
               this->field_0554,this->field_0556,
               (int *)CONCAT22(extraout_var_03,this->field_0558 + 1),1,&this->field_055E,
               &this->field_0560,(short *)&this->field_0x562);
    iVar7 = (int)*(short *)&this->field_0x562;
    iVar23 = (int)this->field_0560;
    iVar6 = (int)this->field_055E;
    break;
  case 1:
    if (this->field_0564 == 1) {
      this->field_0564 = 0;
      sub_004602B0(this);
      this->field_0580 = CASE_0;
      this->field_00B7 = 3;
      sub_00481520(this,(int)this->field_0554,(int)this->field_0556,this->field_0558 + 1);
      sub_00460260(this,0);
      goto cf_common_exit_004707B7;
    }
    sVar12 = this->field_0554;
    sVar17 = this->field_0558;
    sVar19 = this->field_0556;
    if (((((((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) || (sVar19 < 0)) ||
          ((g_worldGrid.sizeY <= sVar19 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) ||
        ((pSVar15 = (STFishC *)
                    g_worldGrid.cells
                    [(int)sVar17 * (int)g_worldGrid.planeStride +
                     (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0],
         pSVar15 == (STFishC *)0x0 || (iVar6 = (*pSVar15->vtable->vfunc_2C)(), iVar6 != 0x33)))) ||
       (*(int *)&pSVar15->field_0x24 != *(int *)&this->field_0x24)) goto LAB_0046fd37;
    iVar6 = thunk_FUN_004e1eb0(pSVar15,(int)this->field_0041,(int)this->field_0043,
                               (int)this->field_0045);
    this->field_0568 = iVar6;
    if ((iVar6 == -1) || (iVar6 = thunk_FUN_004908a0(this,pSVar15,iVar6), iVar6 != 1))
    goto cf_common_exit_004707B7;
    sub_004602B0(this);
    this->field_055A = pSVar15->field_0018;
    thunk_FUN_004e1fb0(pSVar15,this->field_0568,this->field_0018);
    iVar7 = (int)*(short *)&this->field_0x570;
    iVar23 = (int)*(short *)&this->field_0x56e;
    iVar6 = (int)*(short *)&this->field_0x56c;
    this->field_0580 = CASE_3;
    break;
  default:
    goto cf_common_exit_004707B7;
  case 3:
    iVar6 = sub_00490570(this);
    if (iVar6 == 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                 this->field_0554,this->field_0556,
                 (int *)CONCAT22((short)((uint)&this->field_0x562 >> 0x10),this->field_0558 + 1),1,
                 &this->field_055E,&this->field_0560,(short *)&this->field_0x562);
    }
    sub_00481520(this,(int)this->field_055E,(int)this->field_0560,(int)*(short *)&this->field_0x562)
    ;
    sub_00460260(this,0);
    goto cf_common_exit_004707B7;
  case -1:
    iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907,0,0,&DAT_007a4ccc,
                               s_STBoatC__ToDok__correct_move_to_d_007aac08);
    if (iVar6 == 0) {
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2907);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
LAB_0046fb98:
  sub_00481520(this,iVar6,iVar23,iVar7);
  sub_00460260(this,0);
cf_common_exit_004707B7:
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}

