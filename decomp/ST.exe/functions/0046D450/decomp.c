#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadRC */

int __thiscall STBoatC::UnLoadRC(STBoatC *this,int param_1)

{
  STBoatC_field_054CState SVar1;
  STFishC *pSVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  dword dVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar14;
  int iVar15;
  STBoatCVTable *pSVar16;
  STWorldObject *pSVar17;
  longlong lVar18;
  short sVar19;
  short sVar20;
  ushort uVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  byte bVar27;
  undefined4 uVar28;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  if ((param_1 == 0) || (param_1 == 1)) {
    puVar11 = &this->field_02CC;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07DA + this->field_07D6 + this->field_07D2 == 0) {
      return 0;
    }
    sVar20 = this->field_0396;
    sVar19 = this->field_039A;
    sVar23 = this->field_0398;
    if (sVar20 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar20) {
      return 0;
    }
    if (sVar23 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar23) {
      return 0;
    }
    if (sVar19 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar19) {
      return 0;
    }
    pSVar17 = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar19 + (int)g_worldGrid.sizeX * (int)sVar23 +
               (int)sVar20].objects[0];
    if (pSVar17 == (STWorldObject *)0x0) {
      return 0;
    }
    if (pSVar17[1].vtable != (STWorldObjectVTable *)this->field_0024) {
      return 0;
    }
    iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17);
    if ((iVar6 != 0x3b) && (iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 != 0x60)) {
      return 0;
    }
    this->field_0530 = this->field_039A;
    this->field_052E = this->field_0398;
    this->field_052C = this->field_0396;
    this->field_0548 = 0;
    this->field_0544 = 0;
    this->field_054C = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)(short)this->field_0396,(int)(short)this->field_0398,
                 (short)this->field_039A + 1);
  }
  else {
    SVar1 = this->field_054C;
    if (SVar1 == CASE_0) {
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar20 = this->field_052C;
        sVar19 = this->field_0530;
        sVar23 = this->field_052E;
        if (((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar23)) &&
            (((sVar23 < g_worldGrid.sizeY && (-1 < sVar19)) &&
             ((sVar19 < g_worldGrid.sizeZ &&
              ((pSVar17 = g_worldGrid.cells
                          [(int)sVar23 * (int)g_worldGrid.sizeX +
                           (int)g_worldGrid.planeStride * (int)sVar19 + (int)sVar20].objects[0],
               pSVar17 != (STWorldObject *)0x0 &&
               (pSVar17[1].vtable == (STWorldObjectVTable *)this->field_0024)))))))) &&
           ((iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x3b ||
            (iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x60))))
        goto cf_common_exit_0046E811;
LAB_0046d71d:
        sub_004602B0(this);
        this->field_00B7 = 0;
LAB_0046d72e:
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar8 = (int)this->field_052E;
        iVar15 = (int)this->field_052C;
        iVar6 = this->field_0530 + 1;
        goto cf_common_exit_0046E801;
      case -1:
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2638,0,0,"%s",
                                   "STBoatC::UnLoadRC, move to depot error");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2638
                  );
        return 0xffff;
      }
    }
    if (SVar1 == CASE_1) {
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 0:
        iVar6 = sub_00490570(this);
        if (iVar6 != 1) {
          this->field_054C = CASE_2;
          this->field_00B7 = 3;
          goto LAB_0046d818;
        }
        sVar23 = this->field_052E;
        sVar22 = this->field_052C;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar13 = (int *)CONCAT22(extraout_var,this->field_0530 + 1);
        iVar6 = 1;
        uVar21 = this->field_004B;
        sVar20 = this->field_0049;
        sVar19 = this->field_0047;
LAB_0046e7ea:
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,sVar19,sVar20,uVar21,sVar22,sVar23,piVar13,iVar6,
                   &this->field_0536,&this->field_0538,&this->field_053A);
        sVar20 = this->field_053A;
        sVar19 = this->field_0538;
        break;
      case 1:
        sVar20 = this->field_052C;
        sVar19 = this->field_0530;
        sVar23 = this->field_052E;
        if ((((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar23 < 0)) ||
             ((g_worldGrid.sizeY <= sVar23 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) ||
           (((pSVar2 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar23 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
             pSVar2 == (STFishC *)0x0 || (pSVar2->field_0024 != this->field_0024)) ||
            ((dVar7 = (*pSVar2->vtable->slot_2C)(pSVar2), dVar7 != 0x3b &&
             (dVar7 = (*pSVar2->vtable->slot_2C)(pSVar2), dVar7 != 0x60)))))) {
          sub_004602B0(this);
          iVar6 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar6 != 0);
        }
        iVar6 = thunk_FUN_004e1490((int)pSVar2);
        if ((iVar6 != 1) || (iVar6 = thunk_FUN_0048d7c0(this,pSVar2), iVar6 != 1))
        goto cf_common_exit_0046E811;
        sub_004602B0(this);
        this->field_0532 = pSVar2->field_0018;
        thunk_FUN_004e15f0(pSVar2,this->field_0018);
        iVar6 = (int)this->field_0540;
        iVar8 = (int)this->field_053E;
        iVar15 = (int)this->field_053C;
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        goto cf_common_exit_0046E801;
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar6 = sub_00490570(this);
        if (iVar6 == 1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                    ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,
                     this->field_004B,this->field_052C,this->field_052E,
                     (int *)CONCAT22((short)((uint)&this->field_053A >> 0x10),this->field_0530 + 1),
                     1,&this->field_0536,&this->field_0538,&this->field_053A);
        }
        sVar20 = this->field_053A;
        sVar19 = this->field_0538;
        break;
      case -1:
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2678,0,0,"%s",
                                   "STBoatC::UnLoadRC, correct move to depot error");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2678
                  );
        return 0xffff;
      }
      iVar6 = (int)sVar20;
      iVar8 = (int)sVar19;
      iVar15 = (int)this->field_0536;
cf_common_exit_0046E801:
      sub_00481520(this,iVar15,iVar8,iVar6);
      sub_00460260(this,0);
cf_common_exit_0046E811:
      iVar6 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    if (SVar1 == CASE_2) {
      this->field_0544 = this->field_0544 + 1;
      iVar6 = Defence(this,2);
      if (iVar6 == -1) {
        return -1;
      }
      if ((this->field_082E != 0) || (this->field_0544 % 0x32 != 1)) {
        return 2;
      }
      sVar20 = this->field_052C;
      sVar19 = this->field_0530;
      sVar23 = this->field_052E;
      if ((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar23)) &&
         ((((sVar23 < g_worldGrid.sizeY && (-1 < sVar19)) &&
           ((sVar19 < g_worldGrid.sizeZ &&
            ((pSVar2 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar19 * (int)g_worldGrid.planeStride +
                        (int)sVar23 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
             pSVar2 != (STFishC *)0x0 && (pSVar2->field_0024 == this->field_0024)))))) &&
          ((dVar7 = (*pSVar2->vtable->slot_2C)(pSVar2), dVar7 == 0x3b ||
           (dVar7 = (*pSVar2->vtable->slot_2C)(pSVar2), dVar7 == 0x60)))))) {
        iVar6 = thunk_FUN_004e1490((int)pSVar2);
        if (iVar6 != 1) {
          return 2;
        }
        iVar6 = thunk_FUN_0048d7c0(this,pSVar2);
        if (iVar6 != 1) {
          return 2;
        }
        this->field_0532 = pSVar2->field_0018;
        thunk_FUN_004e15f0(pSVar2,this->field_0018);
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        this->field_00B7 = 0;
        sub_00481520(this,(int)this->field_053C,(int)this->field_053E,(int)this->field_0540);
        sub_00460260(this,0);
        return 2;
      }
      goto LAB_0046d71d;
    }
    if (SVar1 != CASE_3) {
      if (SVar1 == CASE_4) {
        if (this->field_0550 == 0) {
          iVar8 = (ushort)(this->field_0530 * 200) + 300;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar15 = CONCAT22((short)((uint)iVar8 >> 0x10),this->field_052E + 1) * 0xc9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar9 = CONCAT22((short)((uint)iVar15 >> 0x10),this->field_052C + 1);
          iVar6 = iVar9 * 0xc9;
          uVar5 = (undefined2)((uint)(iVar9 * 0x19) >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar5 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar5,this->field_0041),
                             CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                             CONCAT22(uVar5,this->field_0045),iVar6,iVar15,iVar8);
          this->field_0542 = uVar5;
          this->field_0550 = 1;
        }
        if (this->field_0550 == 1) {
          uVar10 = sub_004176C0(this,this->field_0542);
          uVar10 = sub_00417910(this,(short)uVar10);
          if (uVar10 == 0xffffffff) {
            iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2712,0,0,
                                       "%s","STBoatC::UnLoadRC, UNLOADRC_PDEPOT");
            if (iVar6 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x2713;
            goto cf_error_exit_0046E857;
          }
          if (uVar10 == 0) {
            this->field_0550 = 2;
            iVar6 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          }
        }
        if (this->field_0550 == 2) {
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                       (this->field_052C + 1) * 0xc9,(this->field_052E + 1) * 0xc9,
                       this->field_0530 * 200 + 300,this->field_0061);
          this->field_0550 = 3;
        }
        if (this->field_0550 == 3) {
          local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_10);
          param_1 = 0;
          if (this->field_02BF != '\0') {
            local_8 = &this->field_02B3;
            do {
              puVar11 = (undefined4 *)
                        thunk_FUN_0041dc40(local_28,(short)*local_8,*(undefined2 *)(local_8 + 1),
                                           this->field_006C);
              local_20 = *puVar11;
              local_1c = *(short *)(puVar11 + 1);
              if (DAT_0080732c == 1) {
                bVar27 = 0;
                sVar26 = 0;
                uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                iVar8 = -1;
                this->field_001C = uVar10;
                sVar25 = 0;
                sVar24 = 0;
                uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                sVar22 = 0;
                this->field_001C = uVar12;
                sVar23 = 0;
                sVar19 = 0;
                local_18 = uVar12 * 0x41c64e6d + 0x3039;
                sVar20 = 0;
                this->field_001C = local_18;
                lVar18 = Library::MSVCRT::__ftol();
                iVar6 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                        (int)local_1c;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar15 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                uVar10 = local_18;
              }
              else {
                uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                this->field_001C = uVar12;
                uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                bVar27 = 0;
                this->field_001C = uVar14;
                uVar10 = uVar14 * 0x41c64e6d + 0x3039;
                this->field_001C = uVar10;
                sVar26 = 0;
                iVar8 = -1;
                sVar25 = 0;
                sVar24 = 0;
                sVar22 = 0;
                sVar23 = 0;
                sVar19 = 0;
                sVar20 = 0;
                iVar6 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar15 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_20,
                         iVar15 + -3,iVar6,sVar20,sVar19,sVar23,sVar22,sVar24,sVar25,iVar8,sVar26,
                         bVar27);
              param_1 = param_1 + 1;
              local_8 = (undefined4 *)((int)local_8 + 6);
            } while (param_1 < (int)(uint)(byte)this->field_02BF);
          }
          if (local_c == -1) {
            iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2738,0,0,
                                       "%s","STBoatC::UnLoadRC, UNLOADRC_PDEPOT 2");
            if (iVar6 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x2739);
            return 0xffff;
          }
          if (local_c == 0) {
            this->field_0550 = 0;
            this->field_054C = CASE_5;
            iVar6 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          }
        }
        goto cf_common_exit_0046E9F3;
      }
      if (SVar1 != CASE_5) {
        if (SVar1 == CASE_6) {
          iVar6 = this->field_0548 + 1;
          this->field_0548 = iVar6;
          if (0x45 < iVar6) {
            if (this->field_0550 == 0) {
              iVar15 = (ushort)(this->field_0540 * 200) + 100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar8 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_053E * 0xc9) + 100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar6 = CONCAT22((short)((uint)iVar15 >> 0x10),this->field_053C * 0xc9) + 100;
              uVar5 = (undefined2)((uint)iVar8 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar5 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar5,this->field_0041),
                                 CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                                 CONCAT22(uVar5,this->field_0045),iVar6,iVar8,iVar15);
              this->field_0542 = uVar5;
              this->field_0550 = 1;
            }
            if (this->field_0550 == 1) {
              uVar10 = sub_004176C0(this,this->field_0542);
              uVar10 = sub_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2798,0,0,
                                           "%s","STBoatC::UnLoadRC, UNLOADRC_ODEPOT"
                                          );
                if (iVar6 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar6 = 0x2799;
                goto cf_error_exit_0046E857;
              }
              if (uVar10 == 0) {
                this->field_0550 = 2;
              }
            }
            else {
              if (this->field_0550 == 2) {
                sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                             this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                             this->field_0540 * 200 + 100,this->field_0061);
                this->field_0550 = 3;
              }
              if (this->field_0550 == 3) {
                local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
                param_1 = 0;
                if (this->field_02BF != '\0') {
                  local_8 = &this->field_02B3;
                  do {
                    puVar11 = (undefined4 *)
                              thunk_FUN_0041dc40(local_28,(short)*local_8,
                                                 *(undefined2 *)(local_8 + 1),this->field_006C);
                    local_20 = *puVar11;
                    local_1c = *(short *)(puVar11 + 1);
                    if (DAT_0080732c == 1) {
                      bVar27 = 0;
                      sVar26 = 0;
                      uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar8 = -1;
                      this->field_001C = uVar10;
                      sVar25 = 0;
                      sVar24 = 0;
                      uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                      sVar22 = 0;
                      this->field_001C = uVar12;
                      sVar23 = 0;
                      sVar19 = 0;
                      local_18 = uVar12 * 0x41c64e6d + 0x3039;
                      sVar20 = 0;
                      this->field_001C = local_18;
                      lVar18 = Library::MSVCRT::__ftol();
                      iVar6 = (int)(short)lVar18 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_1c;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      iVar15 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                      uVar10 = local_18;
                    }
                    else {
                      uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar12;
                      uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                      bVar27 = 0;
                      this->field_001C = uVar14;
                      uVar10 = uVar14 * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar10;
                      sVar26 = 0;
                      iVar8 = -1;
                      sVar25 = 0;
                      sVar24 = 0;
                      sVar22 = 0;
                      sVar23 = 0;
                      sVar19 = 0;
                      sVar20 = 0;
                      iVar6 = (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      iVar15 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_20,iVar15 + -3,iVar6,sVar20,sVar19,sVar23,sVar22,
                               sVar24,sVar25,iVar8,sVar26,bVar27);
                    param_1 = param_1 + 1;
                    local_8 = (undefined4 *)((int)local_8 + 6);
                  } while (param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_c == -1) {
                  iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x27bd,0,0,
                                             "%s",
                                             "STBoatC::UnLoadRC, UNLOADRC_ODEPOT 2");
                  if (iVar6 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             "E:\\__titans\\wlad\\To_boat.cpp",0x27be);
                  return 0xffff;
                }
                if (local_c == 0) {
                  this->field_054C = CASE_7;
                  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                            ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,
                             this->field_004B,this->field_0047,this->field_0049,
                             (int *)(uint)(ushort)this->field_004B,2,&this->field_0536,
                             &this->field_0538,&this->field_053A);
                  sub_00481520(this,(int)this->field_0536,(int)this->field_0538,
                               (int)this->field_053A);
                  sub_00460260(this,0);
                }
              }
            }
          }
          iVar6 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
        if (SVar1 != CASE_7) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x27e8,0,0,
                                     "%s","STBoatC::UnLoadRC - incorrect entry");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x27d5,0,0,
                                     "%s","STBoatC::UnLoadRC, UNLOADRC_MOVEWAITUNLOAD error");
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar6 = 0x27d5;
          goto cf_error_exit_0046E857;
        }
        if (iVar6 == 0) goto LAB_0046d72e;
        if (iVar6 != 3) goto cf_common_exit_0046E811;
        uVar21 = this->field_004B;
        piVar13 = (int *)(uint)uVar21;
        sVar23 = this->field_0049;
        sVar22 = this->field_0047;
        iVar6 = 2;
        sVar20 = sVar23;
        sVar19 = sVar22;
        goto LAB_0046e7ea;
      }
      iVar6 = this->field_0544 + 1;
      this->field_0544 = iVar6;
      if (iVar6 % 10 != 1) goto cf_common_exit_0046E811;
      sVar20 = this->field_052C;
      sVar19 = this->field_0530;
      sVar23 = this->field_052E;
      if (((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar23)) &&
          (((sVar23 < g_worldGrid.sizeY && (-1 < sVar19)) &&
           (((sVar19 < g_worldGrid.sizeZ &&
             ((pSVar17 = g_worldGrid.cells
                         [(int)sVar19 * (int)g_worldGrid.planeStride +
                          (int)sVar23 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
              pSVar17 != (STWorldObject *)0x0 && (*(int *)&pSVar17->field_0x18 == this->field_0532))
             )) && (*(int *)&pSVar17[0x21].field_0x10 == 0)))))) &&
         (*(int *)&pSVar17[0x10].field_0x5 != 6)) {
        if (this->field_04CD % 0x78 == 1) {
          SVar3 = this->field_06F7;
          if (SVar3 == CASE_8) {
            pSVar16 = this->vtable;
            uVar28 = 0xfb;
LAB_0046e2c8:
            (*pSVar16->vfunc_90)(3,uVar28);
          }
          else if (SVar3 == CASE_14) {
            (*this->vtable->vfunc_90)(3,0x15f);
          }
          else if (SVar3 == CASE_1A) {
            pSVar16 = this->vtable;
            uVar28 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar6 = this->field_07D2;
        iVar15 = 1;
        if (iVar6 < 1) {
          iVar6 = this->field_07D6;
          if (iVar6 < 1) {
            iVar6 = this->field_07DA;
            if (0 < iVar6) {
              if (iVar6 < 1) {
                iVar15 = iVar6;
              }
              thunk_FUN_004e1d70(pSVar17,0xde,iVar15 * 0x14);
              thunk_FUN_004e16d0(pSVar17,this->field_0018);
              this->field_07DA = this->field_07DA - iVar15;
            }
          }
          else {
            if (iVar6 < 1) {
              iVar15 = iVar6;
            }
            thunk_FUN_004e1d70(pSVar17,0xdd,iVar15 * 3);
            thunk_FUN_004e16d0(pSVar17,this->field_0018);
            this->field_07D6 = this->field_07D6 - iVar15;
          }
        }
        else {
          if (iVar6 < 1) {
            iVar15 = iVar6;
          }
          thunk_FUN_004e1d70(pSVar17,0xdc,iVar15 * 5);
          thunk_FUN_004e16d0(pSVar17,this->field_0018);
          this->field_07D2 = this->field_07D2 - iVar15;
        }
        if (this->field_07DA + this->field_07D6 + this->field_07D2 != 0)
        goto cf_common_exit_0046E811;
      }
      sub_0048D930(this);
      this->field_0544 = 0;
      this->field_054C = CASE_6;
      goto cf_common_exit_0046E811;
    }
    iVar6 = sub_00460260(this,2);
    switch(iVar6) {
    case 0:
      sVar20 = this->field_052C;
      sVar19 = this->field_0530;
      sVar23 = this->field_052E;
      if (((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) &&
         (((-1 < sVar23 && ((sVar23 < g_worldGrid.sizeY && (-1 < sVar19)))) &&
          ((sVar19 < g_worldGrid.sizeZ &&
           (((pSVar17 = g_worldGrid.cells
                        [(int)sVar19 * (int)g_worldGrid.planeStride +
                         (int)sVar23 * (int)g_worldGrid.sizeX + (int)sVar20].objects[0],
             pSVar17 != (STWorldObject *)0x0 &&
             (pSVar17[1].vtable == (STWorldObjectVTable *)this->field_0024)) &&
            ((iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x3b ||
             (iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x60)))))))))) {
        if (((this->field_0047 == this->field_053C) && (this->field_0049 == this->field_053E)) &&
           (this->field_004B == this->field_0540)) {
          this->field_054C = CASE_4;
          this->field_0550 = 0;
          iVar6 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
        thunk_FUN_004e1690(pSVar17,this->field_0018);
        return 0;
      }
      goto LAB_0046d652;
    case 1:
      sub_004602B0(this);
      sVar20 = this->field_052C;
      sVar19 = this->field_0530;
      sVar23 = this->field_052E;
      if (((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) &&
         ((-1 < sVar23 &&
          (((sVar23 < g_worldGrid.sizeY && (-1 < sVar19)) && (sVar19 < g_worldGrid.sizeZ)))))) {
        pSVar2 = (STFishC *)
                 g_worldGrid.cells
                 [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar23 * (int)g_worldGrid.sizeX
                  + (int)sVar20].objects[0];
joined_r0x0046dd46:
        if (pSVar2 != (STFishC *)0x0) {
          thunk_FUN_0048d7c0(this,pSVar2);
        }
      }
      break;
    default:
      goto cf_common_exit_0046E9F3;
    case 3:
      sVar20 = this->field_052C;
      sVar19 = this->field_0530;
      sVar23 = this->field_052E;
      if (((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) && (-1 < sVar23)) &&
          ((sVar23 < g_worldGrid.sizeY && (-1 < sVar19)))) && (sVar19 < g_worldGrid.sizeZ)) {
        pSVar2 = (STFishC *)
                 g_worldGrid.cells
                 [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar23 * (int)g_worldGrid.sizeX
                  + (int)sVar20].objects[0];
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x26d9,0,0,"%s",
                                 "STBoatC::UnLoadRC, move to depot 2 error");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x26d9;
cf_error_exit_0046E857:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
      return 0xffff;
    }
    sub_00481520(this,(int)this->field_053C,(int)this->field_053E,(int)this->field_0540);
  }
  sub_00460260(this,0);
cf_common_exit_0046E9F3:
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar20 = this->field_052C;
  sVar19 = this->field_0530;
  sVar23 = this->field_052E;
  if (((((sVar20 < 0) || (g_worldGrid.sizeX <= sVar20)) || (sVar23 < 0)) ||
      ((g_worldGrid.sizeY <= sVar23 || (sVar19 < 0)))) || (g_worldGrid.sizeZ <= sVar19)) {
    pSVar17 = (STWorldObject *)0x0;
  }
  else {
    pSVar17 = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar19 + (int)g_worldGrid.sizeX * (int)sVar23 +
               (int)sVar20].objects[0];
  }
  iVar6 = sub_00490570(this);
  if (iVar6 == 1) {
    if (pSVar17 != (STWorldObject *)0x0) {
      if (((pSVar17[1].vtable == (STWorldObjectVTable *)this->field_0024) &&
          ((iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x3b ||
           (iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x60)))) &&
         (iVar6 = thunk_FUN_004e1490((int)pSVar17), iVar6 != 1)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                   this->field_052C,this->field_052E,
                   (int *)CONCAT22((short)((uint)&this->field_0536 >> 0x10),this->field_0530 + 1),1,
                   &this->field_0536,&this->field_0538,&this->field_053A);
        iVar6 = (int)this->field_053A;
        iVar8 = (int)this->field_0538;
        iVar15 = (int)this->field_0536;
        this->field_054C = CASE_1;
        this->field_00B7 = 0;
        goto cf_common_exit_0046E801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((pSVar17 != (STWorldObject *)0x0) &&
        (pSVar17[1].vtable == (STWorldObjectVTable *)this->field_0024)) &&
       ((iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x3b ||
        (iVar6 = (*pSVar17->vtable->GetObjectTypeId)(pSVar17), iVar6 == 0x60)))) {
      this->field_054C = CASE_2;
LAB_0046d818:
      iVar6 = Defence(this,0);
      return (-(uint)(iVar6 != -1) & 3) - 1;
    }
  }
  sub_004602B0(this);
  this->field_00B7 = 0;
LAB_0046d652:
  iVar6 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar6 != 0);
}

