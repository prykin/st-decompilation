#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::UnLoadRC

   [STSwitchEnumApplier] Switch target field_0550 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0550State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target field_0550 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0550State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STBoatC::UnLoadRC(STBoatC *this,int param_1)

{
  STBoatC_field_054CState SVar1;
  STFishC *pSVar2;
  STWorldObject *pSVar3;
  STBoatC_field_06F7State SVar4;
  undefined2 uVar6;
  int local_EAX_51;
  int iVar6;
  int local_EAX_769;
  int local_EAX_815;
  int local_EAX_972;
  int local_EAX_1289;
  int local_EAX_1434;
  dword dVar7;
  int local_EAX_1686;
  int local_EAX_1808;
  int local_EAX_1854;
  int iVar8;
  uint uVar9;
  int local_EAX_2671;
  undefined4 *puVar10;
  uint uVar11;
  int local_EAX_3355;
  int local_EAX_4165;
  int local_EAX_4888;
  int local_EAX_4955;
  int *piVar12;
  int iVar13;
  int local_EAX_5109;
  int local_EAX_5187;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar14;
  STBoatCVTable *pSVar15;
  STBoatC *pSVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  ushort uVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  short sVar26;
  byte bVar27;
  undefined4 local_28 [2];
  undefined4 local_20;
  short local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    if (this->field_07DA + this->field_07D6 + this->field_07D2 == 0) {
      return 0;
    }
    sVar19 = this->field_0396;
    sVar18 = this->field_039A;
    sVar22 = this->field_0398;
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
    pSVar3 = STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0];
    if (pSVar3 == nullptr) {
      return 0;
    }
    if (pSVar3[1].vtable != (STWorldObjectVTable *)this->field_0024) {
      return 0;
    }
    iVar13 = pSVar3->GetObjectTypeId();
    if ((iVar13 != 0x3b) && (iVar13 = pSVar3->GetObjectTypeId(), iVar13 != 0x60)) {
      return 0;
    }
    this->field_0530 = this->field_039A;
    this->field_052E = this->field_0398;
    this->field_052C = this->field_0396;
    this->field_0548 = 0;
    this->field_0544 = 0;
    this->field_054C = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)this->field_0396,(int)this->field_0398,this->field_039A + 1);
  }
  else {
    SVar1 = this->field_054C;
    if (SVar1 == CASE_0) {
      local_EAX_51 = sub_00460260(this,2);
      switch(local_EAX_51) {
      case 0:
        goto switchD_0046d492_caseD_0;
      case 1:
        sVar19 = this->field_052C;
        sVar18 = this->field_0530;
        sVar22 = this->field_052E;
        if (((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
            (((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) &&
             ((sVar18 < g_worldGrid.sizeZ &&
              ((pSVar3 = STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0],
               pSVar3 != nullptr &&
               (pSVar3[1].vtable == (STWorldObjectVTable *)this->field_0024)))))))) &&
           ((iVar13 = pSVar3->GetObjectTypeId(), iVar13 == 0x3b ||
            (iVar13 = pSVar3->GetObjectTypeId(), iVar13 == 0x60))))
        goto cf_common_exit_0046E811;
LAB_0046d71d:
        sub_004602B0(this);
        this->field_00B7 = 0;
LAB_0046d72e:
        iVar13 = this->vfunc_D8();
        return -(uint)(iVar13 != 0);
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar25 = (int)this->field_052E;
        iVar8 = (int)this->field_052C;
        iVar13 = this->field_0530 + 1;
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
      local_EAX_769 = sub_00460260(this,2);
      switch(local_EAX_769) {
      case 0:
        iVar13 = sub_00490570(this);
        if (iVar13 != 1) {
          this->field_054C = CASE_2;
          this->field_00B7 = 3;
          goto LAB_0046d818;
        }
        sVar22 = this->field_052E;
        sVar21 = this->field_052C;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        piVar12 = (int *)CONCAT22(extraout_var,this->field_0530 + 1);
        iVar13 = 1;
        uVar20 = this->field_004B;
        sVar19 = this->field_0049;
        sVar18 = this->field_0047;
LAB_0046e7ea:
        sub_0048DFD0(this,sVar18,sVar19,uVar20,sVar21,sVar22,piVar12,iVar13,&this->field_0536,
                     &this->field_0538,&this->field_053A);
        sVar19 = this->field_053A;
        sVar18 = this->field_0538;
        break;
      case 1:
        sVar19 = this->field_052C;
        sVar18 = this->field_0530;
        sVar22 = this->field_052E;
        if ((((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar22 < 0)) ||
             ((g_worldGrid.sizeY <= sVar22 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) ||
           (((pSVar16 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0],
             pSVar16 == nullptr || (pSVar16->field_0024 != this->field_0024)) ||
            ((dVar7 = pSVar16->slot_2C(), dVar7 != 0x3b &&
             (dVar7 = pSVar16->slot_2C(), dVar7 != 0x60)))))) {
          sub_004602B0(this);
          iVar13 = this->vfunc_D8();
          return -(uint)(iVar13 != 0);
        }
        iVar13 = thunk_FUN_004e1490(pSVar16);
        if ((iVar13 != 1) ||
           (local_EAX_1289 = thunk_FUN_0048d7c0(this,(STFishC *)pSVar16), local_EAX_1289 != 1))
        goto cf_common_exit_0046E811;
        sub_004602B0(this);
        this->field_0532 = pSVar16->field_0018;
        thunk_FUN_004e15f0(pSVar16,this->field_0018);
        iVar13 = (int)this->field_0540;
        iVar25 = (int)this->field_053E;
        iVar8 = (int)this->field_053C;
        this->field_0544 = 0;
        this->field_054C = CASE_3;
        goto cf_common_exit_0046E801;
      default:
        goto cf_common_exit_0046E811;
      case 3:
        iVar13 = sub_00490570(this);
        if (iVar13 == 1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_052C,
                       this->field_052E,
                       (int *)CONCAT22((short)((uint)&this->field_053A >> 0x10),this->field_0530 + 1
                                      ),1,&this->field_0536,&this->field_0538,&this->field_053A);
        }
        sVar19 = this->field_053A;
        sVar18 = this->field_0538;
        break;
      case -1:
        local_EAX_815 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2678,0,0,"%s",
                                "STBoatC::UnLoadRC, correct move to depot error");
        if (local_EAX_815 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2678
                  );
        return 0xffff;
      }
      iVar13 = (int)sVar19;
      iVar25 = (int)sVar18;
      iVar8 = (int)this->field_0536;
cf_common_exit_0046E801:
      sub_00481520(this,iVar8,iVar25,iVar13);
      sub_00460260(this,0);
cf_common_exit_0046E811:
      iVar13 = this->vfunc_D8();
      return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
    }
    if (SVar1 == CASE_2) {
      this->field_0544 = this->field_0544 + 1;
      local_EAX_1434 = Defence(this,2);
      if (local_EAX_1434 == -1) {
        return -1;
      }
      if ((this->field_082E != ~CASE_FFFFFFFF) || (this->field_0544 % 0x32 != 1)) {
        return 2;
      }
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if ((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
         ((((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) &&
           ((sVar18 < g_worldGrid.sizeZ &&
            ((pSVar16 = (STBoatC *)
                        STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0],
             pSVar16 != nullptr && (pSVar16->field_0024 == this->field_0024)))))) &&
          ((dVar7 = pSVar16->slot_2C(), dVar7 == 0x3b ||
           (dVar7 = pSVar16->slot_2C(), dVar7 == 0x60)))))) {
        iVar13 = thunk_FUN_004e1490(pSVar16);
        if (iVar13 != 1) {
          return 2;
        }
        local_EAX_1686 = thunk_FUN_0048d7c0(this,(STFishC *)pSVar16);
        if (local_EAX_1686 != 1) {
          return 2;
        }
        this->field_0532 = pSVar16->field_0018;
        thunk_FUN_004e15f0(pSVar16,this->field_0018);
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
        if (this->field_0550 == CASE_0) {
          iVar8 = (ushort)(this->field_0530 * 200) + 300;
          iVar13 = STReplaceLowWord((uint32_t)(iVar8), (uint16_t)(this->field_052E + 1)) * 0xc9;
          iVar25 = STReplaceLowWord((uint32_t)(iVar13), (uint16_t)(this->field_052C + 1));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar6 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             CONCAT22((short)((uint)(iVar25 * 0x19) >> 0x10),this->field_0045),
                             (short)(iVar25 * 0xc9),(short)iVar13,iVar8);
          this->field_0542 = uVar6;
          this->field_0550 = CASE_1;
        }
        if (this->field_0550 == CASE_1) {
          uVar9 = sub_004176C0(this,this->field_0542);
          uVar9 = sub_00417910(this,(short)uVar9);
          if (uVar9 == 0xffffffff) {
            local_EAX_2671 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2712,0,0,"%s"
                                    ,"STBoatC::UnLoadRC, UNLOADRC_PDEPOT");
            if (local_EAX_2671 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar13 = 0x2713;
            goto cf_error_exit_0046E857;
          }
          if (uVar9 == 0) {
            this->field_0550 = CASE_2;
            iVar13 = this->vfunc_D8();
            return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
          }
        }
        if (this->field_0550 == CASE_2) {
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                       (this->field_052C + 1) * 0xc9,(this->field_052E + 1) * 0xc9,
                       this->field_0530 * 200 + 300,this->field_0061);
          this->field_0550 = CASE_3;
        }
        if (this->field_0550 == CASE_3) {
          local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_10);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = 0;
          if (this->field_02BF != '\0') {
            local_8 = (undefined4 *)&this->field_0x2b3;
            do {
              puVar10 = thunk_FUN_0041dc40(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                           this->field_006C);
              local_20 = *puVar10;
              local_1c = *(short *)(puVar10 + 1);
              if (DAT_0080732c == 1) {
                bVar27 = 0;
                sVar26 = 0;
                uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                iVar25 = -1;
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
                iVar13 = (int)(short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                         (int)local_1c;
                iVar8 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
                uVar9 = local_18;
              }
              else {
                uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                this->field_001C = uVar11;
                uVar14 = uVar11 * 0x41c64e6d + 0x3039;
                bVar27 = 0;
                this->field_001C = uVar14;
                uVar9 = uVar14 * 0x41c64e6d + 0x3039;
                this->field_001C = uVar9;
                sVar26 = 0;
                iVar25 = -1;
                sVar24 = 0;
                sVar23 = 0;
                sVar21 = 0;
                sVar22 = 0;
                sVar18 = 0;
                sVar19 = 0;
                iVar13 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                STPiece<2,2>(local_20) = (short)((uint)local_20 >> 0x10);
                iVar8 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
              }
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_20,
                         iVar8 + -3,iVar13,sVar19,sVar18,sVar22,sVar21,sVar23,sVar24,iVar25,sVar26,
                         bVar27);
              /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
              param_1 = param_1 + 1;
              local_8 = (undefined4 *)((int)local_8 + 6);
            } while (param_1 < (int)(uint)(byte)this->field_02BF);
          }
          if (local_c == -1) {
            local_EAX_3355 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2738,0,0,"%s"
                                    ,"STBoatC::UnLoadRC, UNLOADRC_PDEPOT 2");
            if (local_EAX_3355 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       0x2739);
            return 0xffff;
          }
          if (local_c == 0) {
            this->field_0550 = CASE_0;
            this->field_054C = CASE_5;
            iVar13 = this->vfunc_D8();
            return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
          }
        }
        goto cf_common_exit_0046E9F3;
      }
      if (SVar1 != CASE_5) {
        if (SVar1 == CASE_6) {
          iVar13 = this->field_0548 + 1;
          this->field_0548 = iVar13;
          if (0x45 < iVar13) {
            if (this->field_0550 == CASE_0) {
              iVar13 = STReplaceLowWord((uint32_t)(iVar13), (uint16_t)(this->field_053E * 0xc9)) + 100;
              uVar6 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 STReplaceLowWord((uint32_t)(iVar13), (uint16_t)(this->field_0045)),
                                 this->field_053C * 0xc9 + 100,(short)iVar13,
                                 (ushort)(this->field_0540 * 200) + 100);
              this->field_0542 = uVar6;
              this->field_0550 = CASE_1;
            }
            if (this->field_0550 == CASE_1) {
              uVar9 = sub_004176C0(this,this->field_0542);
              uVar9 = sub_00417910(this,(short)uVar9);
              if (uVar9 == 0xffffffff) {
                local_EAX_4165 =
                     ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2798,0,0,
                                        "%s","STBoatC::UnLoadRC, UNLOADRC_ODEPOT");
                if (local_EAX_4165 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar13 = 0x2799;
                goto cf_error_exit_0046E857;
              }
              if (uVar9 == 0) {
                this->field_0550 = CASE_2;
              }
            }
            else {
              if (this->field_0550 == CASE_2) {
                sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                             this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                             this->field_0540 * 200 + 100,this->field_0061);
                this->field_0550 = CASE_3;
              }
              if (this->field_0550 == CASE_3) {
                local_c = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_10,&local_14);
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = 0;
                if (this->field_02BF != '\0') {
                  local_8 = (undefined4 *)&this->field_0x2b3;
                  do {
                    puVar10 = thunk_FUN_0041dc40(local_28,(short)*local_8,*(ushort *)(local_8 + 1),
                                                 this->field_006C);
                    local_20 = *puVar10;
                    local_1c = *(short *)(puVar10 + 1);
                    if (DAT_0080732c == 1) {
                      bVar27 = 0;
                      sVar26 = 0;
                      uVar9 = this->field_001C * 0x41c64e6d + 0x3039;
                      iVar25 = -1;
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
                      iVar13 = (int)(short)lVar17 + (uVar9 >> 0x10) % 7 + (int)this->field_0045 + -3
                               + (int)local_1c;
                      iVar8 = ((uVar11 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
                      uVar9 = local_18;
                    }
                    else {
                      uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar11;
                      uVar14 = uVar11 * 0x41c64e6d + 0x3039;
                      bVar27 = 0;
                      this->field_001C = uVar14;
                      uVar9 = uVar14 * 0x41c64e6d + 0x3039;
                      this->field_001C = uVar9;
                      sVar26 = 0;
                      iVar25 = -1;
                      sVar24 = 0;
                      sVar23 = 0;
                      sVar21 = 0;
                      sVar22 = 0;
                      sVar18 = 0;
                      sVar19 = 0;
                      iVar13 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_1c;
                      STPiece<2,2>(local_20) = (short)((uint)local_20 >> 0x10);
                      iVar8 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_20);
                    }
                    TraksClassTy::TraksCreate
                              (g_traksClass_00802A7C,1,2,7,
                               (uVar9 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                               (int)(short)local_20,iVar8 + -3,iVar13,sVar19,sVar18,sVar22,sVar21,
                               sVar23,sVar24,iVar25,sVar26,bVar27);
                    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                    param_1 = param_1 + 1;
                    local_8 = (undefined4 *)((int)local_8 + 6);
                  } while (param_1 < (int)(uint)(byte)this->field_02BF);
                }
                if (local_c == -1) {
                  local_EAX_4888 =
                       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x27bd,0,0,
                                          "%s","STBoatC::UnLoadRC, UNLOADRC_ODEPOT 2");
                  if (local_EAX_4888 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             "E:\\__titans\\wlad\\To_boat.cpp",0x27be);
                  return 0xffff;
                }
                if (local_c == 0) {
                  this->field_054C = CASE_7;
                  sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,
                               this->field_0047,this->field_0049,
                               (int *)(uint)(ushort)this->field_004B,2,&this->field_0536,
                               &this->field_0538,&this->field_053A);
                  sub_00481520(this,(int)this->field_0536,(int)this->field_0538,
                               (int)this->field_053A);
                  sub_00460260(this,0);
                }
              }
            }
          }
          iVar13 = this->vfunc_D8();
          return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
        }
        if (SVar1 != CASE_7) {
          local_EAX_5187 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x27e8,0,0,"%s",
                                  "STBoatC::UnLoadRC - incorrect entry");
          if (local_EAX_5187 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          return -1;
        }
        local_EAX_4955 = sub_00460260(this,2);
        if (local_EAX_4955 == -1) {
          local_EAX_5109 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x27d5,0,0,"%s",
                                  "STBoatC::UnLoadRC, UNLOADRC_MOVEWAITUNLOAD error");
          if (local_EAX_5109 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar13 = 0x27d5;
          goto cf_error_exit_0046E857;
        }
        if (local_EAX_4955 == 0) goto LAB_0046d72e;
        if (local_EAX_4955 != 3) goto cf_common_exit_0046E811;
        uVar20 = this->field_004B;
        piVar12 = (int *)(uint)uVar20;
        sVar22 = this->field_0049;
        sVar21 = this->field_0047;
        iVar13 = 2;
        sVar19 = sVar22;
        sVar18 = sVar21;
        goto LAB_0046e7ea;
      }
      iVar13 = this->field_0544 + 1;
      this->field_0544 = iVar13;
      if (iVar13 % 10 != 1) goto cf_common_exit_0046E811;
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if (((((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) && (-1 < sVar22)) &&
          (((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)) &&
           (((sVar18 < g_worldGrid.sizeZ &&
             ((pSVar3 = STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0],
              pSVar3 != nullptr && (*(int *)&pSVar3->field_0x18 == this->field_0532))))
            && (*(int *)&pSVar3[0x21].field_0x10 == 0)))))) &&
         (*(int *)&pSVar3[0x10].field_0x5 != 6)) {
        if (*(int *)&this->field_0x4cd % 0x78 == 1) {
          SVar4 = this->field_06F7;
          if (SVar4 == CASE_8) {
            pSVar15 = this->vtable;
            uVar6 = 0xfb;
LAB_0046e2c8:
            (*pSVar15->vfunc_90)(this,3,uVar6);
          }
          else if (SVar4 == CASE_14) {
            this->vfunc_90(3,0x15f);
          }
          else if (SVar4 == CASE_1A) {
            pSVar15 = this->vtable;
            uVar6 = 0x19e;
            goto LAB_0046e2c8;
          }
        }
        iVar13 = this->field_07D2;
        iVar8 = 1;
        if (iVar13 < 1) {
          iVar13 = this->field_07D6;
          if (iVar13 < 1) {
            iVar13 = this->field_07DA;
            if (0 < iVar13) {
              if (iVar13 < 1) {
                iVar8 = iVar13;
              }
              thunk_FUN_004e1d70(pSVar3,0xde,iVar8 * 0x14);
              thunk_FUN_004e16d0(pSVar3,this->field_0018);
              this->field_07DA = this->field_07DA - iVar8;
            }
          }
          else {
            if (iVar13 < 1) {
              iVar8 = iVar13;
            }
            thunk_FUN_004e1d70(pSVar3,0xdd,iVar8 * 3);
            thunk_FUN_004e16d0(pSVar3,this->field_0018);
            this->field_07D6 = this->field_07D6 - iVar8;
          }
        }
        else {
          if (iVar13 < 1) {
            iVar8 = iVar13;
          }
          thunk_FUN_004e1d70(pSVar3,0xdc,iVar8 * 5);
          thunk_FUN_004e16d0(pSVar3,this->field_0018);
          this->field_07D2 = this->field_07D2 - iVar8;
        }
        if (this->field_07DA + this->field_07D6 + this->field_07D2 != 0)
        goto cf_common_exit_0046E811;
      }
      sub_0048D930(this);
      this->field_0544 = 0;
      this->field_054C = CASE_6;
      goto cf_common_exit_0046E811;
    }
    local_EAX_1808 = sub_00460260(this,2);
    switch(local_EAX_1808) {
    case 0:
      sVar19 = this->field_052C;
      sVar18 = this->field_0530;
      sVar22 = this->field_052E;
      if (((-1 < sVar19) && (sVar19 < g_worldGrid.sizeX)) &&
         (((-1 < sVar22 && ((sVar22 < g_worldGrid.sizeY && (-1 < sVar18)))) &&
          ((sVar18 < g_worldGrid.sizeZ &&
           (((pSVar3 = STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0],
             pSVar3 != nullptr &&
             (pSVar3[1].vtable == (STWorldObjectVTable *)this->field_0024)) &&
            ((iVar13 = pSVar3->GetObjectTypeId(), iVar13 == 0x3b ||
             (iVar13 = pSVar3->GetObjectTypeId(), iVar13 == 0x60)))))))))) {
        if (((this->field_0047 == this->field_053C) && (this->field_0049 == this->field_053E)) &&
           (this->field_004B == this->field_0540)) {
          this->field_054C = CASE_4;
          this->field_0550 = CASE_0;
          iVar13 = this->vfunc_D8();
          return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
        }
        thunk_FUN_004e1690(pSVar3,this->field_0018);
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
                 STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0];
joined_r0x0046dd46:
        if (pSVar2 != nullptr) {
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
                 STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0];
        goto joined_r0x0046dd46;
      }
      break;
    case -1:
      local_EAX_1854 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x26d9,0,0,"%s",
                              "STBoatC::UnLoadRC, move to depot 2 error");
      if (local_EAX_1854 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar13 = 0x26d9;
cf_error_exit_0046E857:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar13);
      return 0xffff;
    }
    sub_00481520(this,(int)this->field_053C,(int)this->field_053E,(int)this->field_0540);
  }
  sub_00460260(this,0);
cf_common_exit_0046E9F3:
  iVar13 = this->vfunc_D8();
  return (-(uint)(iVar13 != 0) & 0xfffffffd) + 2;
switchD_0046d492_caseD_0:
  sVar19 = this->field_052C;
  sVar18 = this->field_0530;
  sVar22 = this->field_052E;
  if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar22 < 0)) ||
      ((g_worldGrid.sizeY <= sVar22 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
    pSVar16 = nullptr;
  }
  else {
    pSVar16 = (STBoatC *)
              STGridAt3D(g_worldGrid, sVar19, sVar22, sVar18).objects[0];
  }
  iVar13 = sub_00490570(this);
  if (iVar13 == 1) {
    if (pSVar16 != nullptr) {
      if (((pSVar16->field_0024 == this->field_0024) &&
          ((dVar7 = pSVar16->slot_2C(), dVar7 == 0x3b ||
           (dVar7 = pSVar16->slot_2C(), dVar7 == 0x60)))) &&
         (iVar13 = thunk_FUN_004e1490(pSVar16), iVar13 != 1)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        sub_0048DFD0(this,this->field_0047,this->field_0049,this->field_004B,this->field_052C,
                     this->field_052E,
                     (int *)CONCAT22((short)((uint)&this->field_0536 >> 0x10),this->field_0530 + 1),
                     1,&this->field_0536,&this->field_0538,&this->field_053A);
        iVar13 = (int)this->field_053A;
        iVar25 = (int)this->field_0538;
        iVar8 = (int)this->field_0536;
        this->field_054C = CASE_1;
        this->field_00B7 = 0;
        goto cf_common_exit_0046E801;
      }
      goto LAB_0046d60c;
    }
  }
  else {
LAB_0046d60c:
    if (((pSVar16 != nullptr) && (pSVar16->field_0024 == this->field_0024)) &&
       ((dVar7 = pSVar16->slot_2C(), dVar7 == 0x3b ||
        (dVar7 = pSVar16->slot_2C(), dVar7 == 0x60)))) {
      this->field_054C = CASE_2;
LAB_0046d818:
      local_EAX_972 = Defence(this,0);
      return (-(uint)(local_EAX_972 != -1) & 3) - 1;
    }
  }
  sub_004602B0(this);
  this->field_00B7 = 0;
LAB_0046d652:
  iVar13 = this->vfunc_D8();
  return -(uint)(iVar13 != 0);
}

