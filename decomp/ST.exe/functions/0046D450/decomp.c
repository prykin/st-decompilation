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
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar13;
  int iVar14;
  STBoatCVTable *pSVar15;
  STWorldObject *pSVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  ushort uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  if ((param_1 == 0) || (param_1 == 1)) {
    puVar10 = &this->field_02CC;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    this->field_02C4 = 0;
    if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 == 0) {
      return 0;
    }
    sVar19 = *(short *)&this->field_0x396;
    sVar18 = *(short *)&this->field_0x39a;
    sVar22 = *(short *)&this->field_0x398;
    if (sVar19 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar19) {
      return 0;
    }
    if (sVar22 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar22) {
      return 0;
    }
    if (sVar18 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar18) {
      return 0;
    }
    pSVar16 = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar18 + (int)g_worldGrid.sizeX * (int)sVar22 +
               (int)sVar19].objects[0];
    if (pSVar16 == (STWorldObject *)0x0) {
      return 0;
    }
    if (pSVar16[1].vtable != *(STWorldObjectVTable **)&this->field_0x24) {
      return 0;
    }
    iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16);
    if ((iVar6 != 0x3b) && (iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 != 0x60)) {
      return 0;
    }
    this->field_0530 = *(short *)&this->field_0x39a;
    this->field_052E = *(short *)&this->field_0x398;
    this->field_052C = *(short *)&this->field_0x396;
    *(undefined4 *)&this->field_0x548 = 0;
    this->field_0544 = 0;
    this->field_054C = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)*(short *)&this->field_0x396,(int)*(short *)&this->field_0x398,
                 *(short *)&this->field_0x39a + 1);
  }
  else {
    SVar1 = this->field_054C;
    if (SVar1 == CASE_0) {
      iVar6 = sub_00460260(this,2);
      switch(iVar6) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar19 = this->field_052C;
        sVar18 = this->field_0530;
        sVar22 = this->field_052E;
        if (((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
            (((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) &&
             ((sVar18 < g_worldGrid.sizeZ &&
              ((pSVar16 = g_worldGrid.cells
                          [(int)sVar22 * (int)g_worldGrid.sizeX +
                           (int)g_worldGrid.planeStride * (int)sVar18 + (int)sVar19].objects[0],
               pSVar16 != (STWorldObject *)0x0 &&
               (pSVar16[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)))))))) &&
           ((iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x3b ||
            (iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x60))))
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
        iVar7 = (int)(short)this->field_052E;
        iVar14 = (int)(short)this->field_052C;
        iVar6 = (short)this->field_0530 + 1;
        goto cf_common_exit_0046E801;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__move_to_depot_007aa9dc);
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2638
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
        sVar22 = this->field_052E;
        sVar21 = this->field_052C;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar12 = (int *)CONCAT22(extraout_var,this->field_0530 + 1);
        iVar6 = 1;
        uVar20 = this->field_004B;
        sVar19 = this->field_0049;
        sVar18 = this->field_0047;
LAB_0046e7ea:
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,sVar18,sVar19,uVar20,sVar21,sVar22,piVar12,iVar6,
                   (short *)&this->field_0x536,(short *)&this->field_0x538,
                   (short *)&this->field_0x53a);
        sVar19 = *(short *)&this->field_0x53a;
        sVar18 = *(short *)&this->field_0x538;
        break;
      case 1:
        sVar19 = this->field_052C;
        sVar18 = this->field_0530;
        sVar22 = this->field_052E;
        if ((((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar22 < 0)) ||
             ((g_worldGrid.sizeY <= sVar22 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) ||
           (((pSVar2 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar18 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar19].objects[0],
             pSVar2 == (STFishC *)0x0 || (*(int *)&pSVar2->field_0x24 != *(int *)&this->field_0x24))
            || ((iVar6 = (*pSVar2->vtable->vfunc_2C)(), iVar6 != 0x3b &&
                (iVar6 = (*pSVar2->vtable->vfunc_2C)(), iVar6 != 0x60)))))) {
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
        iVar6 = (int)*(short *)&this->field_0x540;
        iVar7 = (int)*(short *)&this->field_0x53e;
        iVar14 = (int)*(short *)&this->field_0x53c;
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
                     (int *)CONCAT22((short)((uint)&this->field_0x53a >> 0x10),this->field_0530 + 1)
                     ,1,(short *)&this->field_0x536,(short *)&this->field_0x538,
                     (short *)&this->field_0x53a);
        }
        sVar19 = *(short *)&this->field_0x53a;
        sVar18 = *(short *)&this->field_0x538;
        break;
      case -1:
        iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678,0,0,&DAT_007a4ccc,
                                   s_STBoatC__UnLoadRC__correct_move_t_007aa9a4);
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2678
                  );
        return 0xffff;
      }
      iVar6 = (int)sVar19;
      iVar7 = (int)sVar18;
      iVar14 = (int)*(short *)&this->field_0x536;
cf_common_exit_0046E801:
      sub_00481520(this,iVar14,iVar7,iVar6);
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
      if ((this->field_082E != 0) || ((int)this->field_0544 % 0x32 != 1)) {
        return 2;
      }
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if ((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
         ((((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) &&
           ((sVar18 < g_worldGrid.sizeZ &&
            ((pSVar2 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar18 * (int)g_worldGrid.planeStride +
                        (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar19].objects[0],
             pSVar2 != (STFishC *)0x0 && (*(int *)&pSVar2->field_0x24 == *(int *)&this->field_0x24))
            )))) && ((iVar6 = (*pSVar2->vtable->vfunc_2C)(), iVar6 == 0x3b ||
                     (iVar6 = (*pSVar2->vtable->vfunc_2C)(), iVar6 == 0x60)))))) {
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
        sub_00481520(this,(int)*(short *)&this->field_0x53c,(int)*(short *)&this->field_0x53e,
                     (int)*(short *)&this->field_0x540);
        sub_00460260(this,0);
        return 2;
      }
      goto LAB_0046d71d;
    }
    if (SVar1 != CASE_3) {
      if (SVar1 == CASE_4) {
        if (*(int *)&this->field_0x550 == 0) {
          iVar7 = (ushort)(this->field_0530 * 200) + 300;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar14 = CONCAT22((short)((uint)iVar7 >> 0x10),this->field_052E + 1) * 0xc9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar8 = CONCAT22((short)((uint)iVar14 >> 0x10),this->field_052C + 1);
          iVar6 = iVar8 * 0xc9;
          uVar5 = (undefined2)((uint)(iVar8 * 0x19) >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar5 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar5,this->field_0041),
                             CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                             CONCAT22(uVar5,this->field_0045),iVar6,iVar14,iVar7);
          *(undefined2 *)&this->field_0x542 = uVar5;
          *(undefined4 *)&this->field_0x550 = 1;
        }
        if (*(int *)&this->field_0x550 == 1) {
          uVar9 = sub_004176C0(this,*(short *)&this->field_0x542);
          uVar9 = sub_00417910(this,(short)uVar9);
          if (uVar9 == 0xffffffff) {
            iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2712,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa944);
            if (iVar6 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar6 = 0x2713;
            goto cf_error_exit_0046E857;
          }
          if (uVar9 == 0) {
            *(undefined4 *)&this->field_0x550 = 2;
            iVar6 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)&this->field_0x550 == 2) {
          STJellyGunC::sub_00415B30
                    ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_052C + 1) * 0xc9,(this->field_052E + 1) * 0xc9,
                     this->field_0530 * 200 + 300,this->field_0061);
          *(undefined4 *)&this->field_0x550 = 3;
        }
        if (*(int *)&this->field_0x550 == 3) {
          local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_10);
          param_1 = 0;
          if (this->field_0x2bf != '\0') {
            local_8 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar10 = (undefined4 *)
                        thunk_FUN_0041dc40(local_28,(short)*local_8,*(undefined2 *)(local_8 + 1),
                                           this->field_006C);
              local_20 = *puVar10;
              local_1c = *(short *)(puVar10 + 1);
              if (DAT_0080732c == 1) {
                bVar26 = 0;
                sVar25 = 0;
                uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                iVar7 = -1;
                this->field_001C = uVar9;
                sVar24 = 0;
                sVar23 = 0;
                uVar11 = uVar9 * 0x41c64e6d + 0x3039;
                sVar21 = 0;
                this->field_001C = uVar11;
                sVar22 = 0;
                sVar18 = 0;
                local_18 = uVar11 * 0x41c64e6d + 0x3039;
                sVar19 = 0;
                this->field_001C = local_18;
                lVar17 = Library::MSVCRT::__ftol();
                iVar6 = (int)(short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                        (int)local_1c;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar14 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                uVar9 = local_18;
              }
              else {
                uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                this->field_001C = uVar11;
                uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                bVar26 = 0;
                this->field_001C = uVar13;
                uVar9 = uVar13 * 0x41c64e6d + 0x3039;
                this->field_001C = uVar9;
                sVar25 = 0;
                iVar7 = -1;
                sVar24 = 0;
                sVar23 = 0;
                sVar21 = 0;
                sVar22 = 0;
                sVar18 = 0;
                sVar19 = 0;
                iVar6 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                iVar14 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_20,
                         iVar14 + -3,iVar6,sVar19,sVar18,sVar22,sVar21,sVar23,sVar24,iVar7,sVar25,
                         bVar26);
              param_1 = param_1 + 1;
              local_8 = (undefined4 *)((int)local_8 + 6);
            } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
          }
          if (local_c == -1) {
            iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2738,0,0,
                                       &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_PDEP_007aa918);
            if (iVar6 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       0x2739);
            return 0xffff;
          }
          if (local_c == 0) {
            *(undefined4 *)&this->field_0x550 = 0;
            this->field_054C = CASE_5;
            iVar6 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
          }
        }
        goto cf_common_exit_0046E9F3;
      }
      if (SVar1 != CASE_5) {
        if (SVar1 == CASE_6) {
          iVar6 = *(int *)&this->field_0x548 + 1;
          *(int *)&this->field_0x548 = iVar6;
          if (0x45 < iVar6) {
            if (*(int *)&this->field_0x550 == 0) {
              iVar14 = (ushort)(*(short *)&this->field_0x540 * 200) + 100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar7 = CONCAT22((short)((uint)iVar6 >> 0x10),*(short *)&this->field_0x53e * 0xc9) +
                      100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar6 = CONCAT22((short)((uint)iVar14 >> 0x10),*(short *)&this->field_0x53c * 0xc9) +
                      100;
              uVar5 = (undefined2)((uint)iVar7 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar5 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar5,this->field_0041),
                                 CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                                 CONCAT22(uVar5,this->field_0045),iVar6,iVar7,iVar14);
              *(undefined2 *)&this->field_0x542 = uVar5;
              *(undefined4 *)&this->field_0x550 = 1;
            }
            if (*(int *)&this->field_0x550 == 1) {
              uVar9 = sub_004176C0(this,*(short *)&this->field_0x542);
              uVar9 = sub_00417910(this,(short)uVar9);
              if (uVar9 == 0xffffffff) {
                iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2798,0,0,
                                           &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8ec
                                          );
                if (iVar6 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar6 = 0x2799;
                goto cf_error_exit_0046E857;
              }
              if (uVar9 == 0) {
                *(undefined4 *)&this->field_0x550 = 2;
              }
            }
            else {
              if (*(int *)&this->field_0x550 == 2) {
                STJellyGunC::sub_00415B30
                          ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                           *(short *)&this->field_0x53c * 0xc9 + 100,
                           *(short *)&this->field_0x53e * 0xc9 + 100,
                           *(short *)&this->field_0x540 * 200 + 100,this->field_0061);
                *(undefined4 *)&this->field_0x550 = 3;
              }
              if (*(int *)&this->field_0x550 == 3) {
                local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
                param_1 = 0;
                if (this->field_0x2bf != '\0') {
                  local_8 = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar10 = (undefined4 *)
                              thunk_FUN_0041dc40(local_28,(short)*local_8,
                                                 *(undefined2 *)(local_8 + 1),this->field_006C);
                    local_20 = *puVar10;
                    local_1c = *(short *)(puVar10 + 1);
                    if (DAT_0080732c == 1) {
                      bVar26 = 0;
                      sVar25 = 0;
                      uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar7 = -1;
                      this->field_001C = uVar9;
                      sVar24 = 0;
                      sVar23 = 0;
                      uVar11 = uVar9 * 0x41c64e6d + 0x3039;
                      sVar21 = 0;
                      this->field_001C = uVar11;
                      sVar22 = 0;
                      sVar18 = 0;
                      local_18 = uVar11 * 0x41c64e6d + 0x3039;
                      sVar19 = 0;
                      this->field_001C = local_18;
                      lVar17 = Library::MSVCRT::__ftol();
                      iVar6 = (int)(short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3
                              + (int)local_1c;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      iVar14 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                      uVar9 = local_18;
                    }
                    else {
                      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar11;
                      uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                      bVar26 = 0;
                      this->field_001C = uVar13;
                      uVar9 = uVar13 * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar9;
                      sVar25 = 0;
                      iVar7 = -1;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar21 = 0;
                      sVar22 = 0;
                      sVar18 = 0;
                      sVar19 = 0;
                      iVar6 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      local_20._2_2_ = (short)((uint)local_20 >> 0x10);
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      iVar14 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)local_20._2_2_;
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_20,iVar14 + -3,iVar6,sVar19,sVar18,sVar22,sVar21,
                               sVar23,sVar24,iVar7,sVar25,bVar26);
                    param_1 = param_1 + 1;
                    local_8 = (undefined4 *)((int)local_8 + 6);
                  } while (param_1 < (int)(uint)(byte)this->field_0x2bf);
                }
                if (local_c == -1) {
                  iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27bd,0,0,
                                             &DAT_007a4ccc,
                                             s_STBoatC__UnLoadRC__UNLOADRC_ODEP_007aa8c0);
                  if (iVar6 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27be);
                  return 0xffff;
                }
                if (local_c == 0) {
                  this->field_054C = CASE_7;
                  SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                            ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,
                             this->field_004B,this->field_0047,this->field_0049,
                             (int *)(uint)(ushort)this->field_004B,2,(short *)&this->field_0x536,
                             (short *)&this->field_0x538,(short *)&this->field_0x53a);
                  sub_00481520(this,(int)*(short *)&this->field_0x536,
                               (int)*(short *)&this->field_0x538,(int)*(short *)&this->field_0x53a);
                  sub_00460260(this,0);
                }
              }
            }
          }
          iVar6 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
        if (SVar1 != CASE_7) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27e8,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC___incorrect_en_007aa858);
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        iVar6 = sub_00460260(this,2);
        if (iVar6 == -1) {
          iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x27d5,0,0,
                                     &DAT_007a4ccc,s_STBoatC__UnLoadRC__UNLOADRC_MOVE_007aa884);
          if (iVar6 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar6 = 0x27d5;
          goto cf_error_exit_0046E857;
        }
        if (iVar6 == 0) goto LAB_0046d72e;
        if (iVar6 != 3) goto cf_common_exit_0046E811;
        uVar20 = this->field_004B;
        piVar12 = (int *)(uint)uVar20;
        sVar22 = this->field_0049;
        sVar21 = this->field_0047;
        iVar6 = 2;
        sVar19 = sVar22;
        sVar18 = sVar21;
        goto LAB_0046e7ea;
      }
      iVar6 = this->field_0544 + 1;
      this->field_0544 = iVar6;
      if (iVar6 % 10 != 1) goto cf_common_exit_0046E811;
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if (((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
          (((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) &&
           (((sVar18 < g_worldGrid.sizeZ &&
             ((pSVar16 = g_worldGrid.cells
                         [(int)sVar18 * (int)g_worldGrid.planeStride +
                          (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar19].objects[0],
              pSVar16 != (STWorldObject *)0x0 && (*(int *)&pSVar16->field_0x18 == this->field_0532))
             )) && (*(int *)&pSVar16[0x21].field_0x10 == 0)))))) &&
         (*(int *)&pSVar16[0x10].field_0x5 != 6)) {
        if ((int)this->field_04CD % 0x78 == 1) {
          SVar3 = this->field_06F7;
          if (SVar3 == CASE_8) {
            pSVar15 = this->vtable;
            uVar27 = 0xfb;
LAB_0046e2c8:
            (*pSVar15->vfunc_90)(3,uVar27);
          }
          else if (SVar3 == CASE_14) {
            (*this->vtable->vfunc_90)(3,0x15f);
          }
          else if (SVar3 == CASE_1A) {
            pSVar15 = this->vtable;
            uVar27 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar6 = *(int *)&this->field_0x7d2;
        iVar14 = 1;
        if (iVar6 < 1) {
          iVar6 = this->field_07D6;
          if (iVar6 < 1) {
            iVar6 = this->field_07DA;
            if (0 < iVar6) {
              if (iVar6 < 1) {
                iVar14 = iVar6;
              }
              thunk_FUN_004e1d70(pSVar16,0xde,iVar14 * 0x14);
              thunk_FUN_004e16d0(pSVar16,this->field_0018);
              this->field_07DA = this->field_07DA - iVar14;
            }
          }
          else {
            if (iVar6 < 1) {
              iVar14 = iVar6;
            }
            thunk_FUN_004e1d70(pSVar16,0xdd,iVar14 * 3);
            thunk_FUN_004e16d0(pSVar16,this->field_0018);
            this->field_07D6 = this->field_07D6 - iVar14;
          }
        }
        else {
          if (iVar6 < 1) {
            iVar14 = iVar6;
          }
          thunk_FUN_004e1d70(pSVar16,0xdc,iVar14 * 5);
          thunk_FUN_004e16d0(pSVar16,this->field_0018);
          *(int *)&this->field_0x7d2 = *(int *)&this->field_0x7d2 - iVar14;
        }
        if (this->field_07DA + this->field_07D6 + *(int *)&this->field_0x7d2 != 0)
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
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if (((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) &&
         (((-1 < sVar22 && ((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)))) &&
          ((sVar18 < g_worldGrid.sizeZ &&
           (((pSVar16 = g_worldGrid.cells
                        [(int)sVar18 * (int)g_worldGrid.planeStride +
                         (int)sVar22 * (int)g_worldGrid.sizeX + (int)sVar19].objects[0],
             pSVar16 != (STWorldObject *)0x0 &&
             (pSVar16[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) &&
            ((iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x3b ||
             (iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x60)))))))))) {
        if (((this->field_0047 == *(short *)&this->field_0x53c) &&
            (this->field_0049 == *(short *)&this->field_0x53e)) &&
           (this->field_004B == *(short *)&this->field_0x540)) {
          this->field_054C = CASE_4;
          *(undefined4 *)&this->field_0x550 = 0;
          iVar6 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
        thunk_FUN_004e1690(pSVar16,this->field_0018);
        return 0;
      }
      goto LAB_0046d652;
    case 1:
      sub_004602B0(this);
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if (((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) &&
         ((-1 < sVar22 &&
          (((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) && (sVar18 < g_worldGrid.sizeZ)))))) {
        pSVar2 = (STFishC *)
                 g_worldGrid.cells
                 [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar22 * (int)g_worldGrid.sizeX
                  + (int)sVar19].objects[0];
joined_r0x0046dd46:
        if (pSVar2 != (STFishC *)0x0) {
          thunk_FUN_0048d7c0(this,pSVar2);
        }
      }
      break;
    default:
      goto cf_common_exit_0046E9F3;
    case 3:
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if (((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
          ((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)))) && (sVar18 < g_worldGrid.sizeZ)) {
        pSVar2 = (STFishC *)
                 g_worldGrid.cells
                 [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar22 * (int)g_worldGrid.sizeX
                  + (int)sVar19].objects[0];
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      iVar6 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x26d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__UnLoadRC__move_to_depot_007aa970);
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x26d9;
cf_error_exit_0046E857:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar6);
      return 0xffff;
    }
    sub_00481520(this,(int)*(short *)&this->field_0x53c,(int)*(short *)&this->field_0x53e,
                 (int)*(short *)&this->field_0x540);
  }
  sub_00460260(this,0);
cf_common_exit_0046E9F3:
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar19 = this->field_052C;
  sVar18 = this->field_0530;
  sVar22 = this->field_052E;
  if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar22 < 0)) ||
      ((g_worldGrid.sizeY <= sVar22 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
    pSVar16 = (STWorldObject *)0x0;
  }
  else {
    pSVar16 = g_worldGrid.cells
              [(int)g_worldGrid.planeStride * (int)sVar18 + (int)g_worldGrid.sizeX * (int)sVar22 +
               (int)sVar19].objects[0];
  }
  iVar6 = sub_00490570(this);
  if (iVar6 == 1) {
    if (pSVar16 != (STWorldObject *)0x0) {
      if (((pSVar16[1].vtable == *(STWorldObjectVTable **)&this->field_0x24) &&
          ((iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x3b ||
           (iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x60)))) &&
         (iVar6 = thunk_FUN_004e1490((int)pSVar16), iVar6 != 1)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                  ((AnonReceiver_0048DFD0 *)this,this->field_0047,this->field_0049,this->field_004B,
                   this->field_052C,this->field_052E,
                   (int *)CONCAT22((short)((uint)&this->field_0x536 >> 0x10),this->field_0530 + 1),1
                   ,(short *)&this->field_0x536,(short *)&this->field_0x538,
                   (short *)&this->field_0x53a);
        iVar6 = (int)*(short *)&this->field_0x53a;
        iVar7 = (int)*(short *)&this->field_0x538;
        iVar14 = (int)*(short *)&this->field_0x536;
        this->field_054C = CASE_1;
        this->field_00B7 = 0;
        goto cf_common_exit_0046E801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((pSVar16 != (STWorldObject *)0x0) &&
        (pSVar16[1].vtable == *(STWorldObjectVTable **)&this->field_0x24)) &&
       ((iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x3b ||
        (iVar6 = (*pSVar16->vtable->GetObjectTypeId)(pSVar16), iVar6 == 0x60)))) {
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

