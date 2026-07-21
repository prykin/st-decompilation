#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Dismant */

int __thiscall
STBoatC::Dismant(STBoatC *this,AnonShape_004B9D90_4F3151F9 *param_1,undefined4 param_2,int *param_3)

{
  STBoatC_field_06C3State SVar1;
  undefined4 uVar2;
  STBoatC_field_06F7State SVar3;
  code *pcVar4;
  undefined2 uVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  short sVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  byte bVar23;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  if ((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
     (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x1)) {
    puVar13 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    this->field_02C4 = 0;
    SVar3 = this->field_06F7;
    if (((SVar3 != CASE_C) && (SVar3 != CASE_18)) && (SVar3 != CASE_1D)) {
      return 0;
    }
    sVar6 = *(short *)&this->field_0x42d;
    sVar18 = *(short *)&this->field_0x42f;
    sVar15 = *(short *)&this->field_0x431;
    local_1c = *(uint *)&this->field_0x433;
    this->field_06A9 = sVar6;
    this->field_06AB = sVar18;
    this->field_06AD = sVar15;
    this->field_06AF = local_1c;
    if (g_worldGrid.sizeZ + -2 < (int)sVar15) {
      return 0;
    }
    if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
        ((sVar18 < 0 || ((g_worldGrid.sizeY <= sVar18 || (sVar15 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar15)) {
      param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
    }
    else {
      param_1 = (AnonShape_004B9D90_4F3151F9 *)
                g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar15 + (int)g_worldGrid.sizeX * (int)sVar18 +
                 (int)sVar6].objects[0];
    }
    if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
      return 0;
    }
    if (*(int *)&param_1->field_0x18 != local_1c) {
      return 0;
    }
    if (*(int *)&param_1->field_0x20 != 1000) {
      return 0;
    }
    if (*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24) {
      return 0;
    }
    iVar9 = thunk_FUN_004b9d90(param_1);
    if (iVar9 == 0) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*(int *)param_1 + 0x2c))();
    iVar9 = *(int *)(&DAT_00791d68 + iVar9 * 4);
    *(int *)&this->field_0x6b9 = iVar9;
    if (iVar9 == 1) {
      sVar6 = this->field_06AB;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_c = (undefined4 *)CONCAT22(extraout_var,this->field_06AD);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT22(local_10._2_2_,sVar6);
      local_8 = 0;
      sVar18 = this->field_06AD + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT22(local_14._2_2_,this->field_06A9);
      do {
        local_18 = 0;
        sVar15 = (short)local_8 + this->field_06A9;
        do {
          sVar8 = sVar6 + (short)local_18;
          if (((((-1 < sVar15) && (sVar15 < g_worldGrid.sizeX)) && (-1 < sVar8)) &&
              ((sVar8 < g_worldGrid.sizeY && (-1 < sVar18)))) &&
             ((sVar18 < g_worldGrid.sizeZ &&
              (iVar9 = local_14,
              g_pathingGrid.cells
              [(int)g_pathingGrid.sizeX * (int)sVar8 + (int)g_pathingGrid.planeStride * (int)sVar18
               + (int)sVar15] == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar5 = (undefined2)((uint)iVar9 >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (undefined4 *)CONCAT22(uVar5,this->field_06AD);
    sVar6 = this->field_06AB;
    sVar15 = this->field_06AD + 1;
    sVar18 = this->field_06A9;
    if (sVar18 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar18) {
      return 0;
    }
    if (sVar6 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar6) {
      return 0;
    }
    if (sVar15 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar15) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar9 = CONCAT22(uVar5,sVar18);
    if (g_pathingGrid.cells
        [(int)sVar15 * (int)g_pathingGrid.planeStride + (int)sVar6 * (int)g_pathingGrid.sizeX +
         (int)sVar18] != 0) {
      return 0;
    }
LAB_0047f4cd:
    this->field_06C3 = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)(short)iVar9,(int)sVar6,(short)local_c + 1);
    sub_00460260(this,0);
    return 2;
  }
  SVar1 = this->field_06C3;
  if (SVar1 == CASE_0) {
    iVar9 = sub_00460260(this,2);
    switch(iVar9) {
    case 0:
      sVar6 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar15 = this->field_06AB;
      this->field_00B7 = 0;
      if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)
                  g_worldGrid.cells
                  [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar6].objects[0];
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 == 0)))) {
        return 0;
      }
      iVar9 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                 (short *)&this->field_0x6b7);
      if ((iVar9 == 1) &&
         ((*(int *)&param_1->field_0x4b0 == 0 || (*(int *)&param_1->field_0x4b0 == this->field_0018)
          ))) {
        *(undefined4 *)&param_1->field_0x4b0 = this->field_0018;
        this->field_06C3 = CASE_2;
LAB_0047e4df:
        iVar9 = (int)*(short *)&this->field_0x6b7;
        sVar6 = *(short *)&this->field_0x6b5;
        sVar18 = *(short *)&this->field_0x6b3;
LAB_0047e4ee:
        sub_00481520(this,(int)sVar18,(int)sVar6,iVar9);
        sub_00460260(this,0);
        return 2;
      }
      this->field_06C3 = CASE_1;
      *(undefined4 *)&this->field_0x6bf = 0;
LAB_0047e0a4:
      iVar9 = Defence(this,0);
      if (iVar9 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar6 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar15 = this->field_06AB;
      if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)
                  g_worldGrid.cells
                  [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar6].objects[0];
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 == 0)))) {
        sub_004602B0(this);
        this->field_00B7 = 0;
        return 0;
      }
      break;
    case 3:
      sVar6 = this->field_06AB;
      sVar18 = this->field_06A9;
      iVar9 = (short)this->field_06AD + 1;
      goto LAB_0047e4ee;
    case -1:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant__DISMANT_MOVE_e_007ab804);
      if (iVar9 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3987
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if (SVar1 == CASE_1) {
      iVar9 = Defence(this,2);
      if (iVar9 == -1) {
        return -1;
      }
      if (((this->field_082E == 0) && (this->field_048B == 0xffff)) &&
         (*(int *)&this->field_0x6bf % 10 == 0)) {
        sVar6 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar15 = this->field_06AB;
        if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
            ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar18)) {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
        }
        else {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)
                    g_worldGrid.cells
                    [(int)sVar18 * (int)g_worldGrid.planeStride +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar6].objects[0];
        }
        if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
          return 0;
        }
        if (*(int *)&param_1->field_0x18 != this->field_06AF) {
          return 0;
        }
        if (*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24) {
          return 0;
        }
        iVar9 = thunk_FUN_004b9d90(param_1);
        if (iVar9 == 0) {
          return 0;
        }
        iVar9 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                   (short *)&this->field_0x6b7);
        if ((iVar9 == 1) &&
           ((*(int *)&param_1->field_0x4b0 == 0 ||
            (*(int *)&param_1->field_0x4b0 == this->field_0018)))) {
          *(undefined4 *)&param_1->field_0x4b0 = this->field_0018;
          this->field_06C3 = CASE_2;
          sub_00481520(this,(int)*(short *)&this->field_0x6b3,(int)*(short *)&this->field_0x6b5,
                       (int)*(short *)&this->field_0x6b7);
          sub_00460260(this,0);
        }
      }
      *(int *)&this->field_0x6bf = *(int *)&this->field_0x6bf + 1;
      return 2;
    }
    if (SVar1 != CASE_2) {
      if (SVar1 == CASE_3) {
        if (*(int *)&this->field_0x6c7 == 0) {
          iVar10 = (ushort)(*(short *)&this->field_0x6b7 * 200) + 100;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar17 = CONCAT22((short)((uint)iVar10 >> 0x10),this->field_06AB + 1) * 0xc9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar11 = CONCAT22((short)((uint)iVar17 >> 0x10),this->field_06A9 + 1);
          iVar9 = iVar11 * 0xc9;
          uVar5 = (undefined2)((uint)(iVar11 * 0x19) >> 0x10);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar5 = (*this->vtable->vfunc_10)
                            (CONCAT22(uVar5,this->field_0041),
                             CONCAT22((short)((uint)iVar9 >> 0x10),this->field_0043),
                             CONCAT22(uVar5,this->field_0045),iVar9,iVar17,iVar10);
          *(undefined2 *)&this->field_0x6bd = uVar5;
          *(undefined4 *)&this->field_0x6c7 = 1;
        }
        if (*(int *)&this->field_0x6c7 == 1) {
          uVar12 = sub_004176C0(this,*(short *)&this->field_0x6bd);
          uVar12 = sub_00417910(this,(short)uVar12);
          if (uVar12 == 0xffffffff) {
            iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a2d,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_007ab7ac);
            if (iVar9 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar9 = 0x3a2e;
LAB_0047f1f7:
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                       iVar9);
            return 0xffff;
          }
          if (uVar12 == 0) {
            *(undefined4 *)&this->field_0x6c7 = 2;
            iVar9 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
        }
        if (*(int *)&this->field_0x6c7 == 2) {
          STJellyGunC::sub_00415B30
                    ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                     (this->field_06A9 + 1) * 0xc9,(this->field_06AB + 1) * 0xc9,
                     *(short *)&this->field_0x6b7 * 200 + 100,this->field_0061);
          *(undefined4 *)&this->field_0x6c7 = 3;
        }
        if (*(int *)&this->field_0x6c7 != 3) goto cf_common_exit_0047F19A;
        local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        local_8 = 0;
        if (this->field_0x2bf != '\0') {
          local_c = (undefined4 *)&this->field_0x2b3;
          do {
            puVar13 = (undefined4 *)
                      thunk_FUN_0041dc40(local_2c,(short)*local_c,*(undefined2 *)(local_c + 1),
                                         this->field_006C);
            uVar2 = *puVar13;
            local_20 = *(short *)(puVar13 + 1);
            local_24 = uVar2;
            if (DAT_0080732c == 1) {
              bVar23 = 0;
              sVar22 = 0;
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              this->field_001C = uVar12;
              sVar21 = 0;
              sVar20 = 0;
              uVar14 = uVar12 * 0x41c64e6d + 0x3039;
              sVar8 = 0;
              this->field_001C = uVar14;
              sVar15 = 0;
              sVar18 = 0;
              local_1c = uVar14 * 0x41c64e6d + 0x3039;
              sVar6 = 0;
              this->field_001C = local_1c;
              lVar19 = Library::MSVCRT::__ftol();
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (local_1c >> 0x10) % 7 + (int)this->field_0041 + -3 + (int)(short)local_24,
                         (((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_) + -3
                         ,(int)(short)lVar19 + (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_20,sVar6,sVar18,sVar15,sVar8,sVar20,sVar21,iVar9,sVar22,bVar23)
              ;
            }
            else {
              uVar14 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar14;
              uVar16 = uVar14 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar16;
              uVar12 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = (int)local_24._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_24._0_2_ = (short)uVar2;
              iVar17 = (int)(short)local_24;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar12 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar17,
                         (((uVar16 >> 0x10) % 7 + (int)this->field_0043) - iVar9) + -3,
                         (uVar14 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20,0,0,0,0,0
                         ,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)(byte)this->field_0x2bf);
        }
        if (local_10 == -1) {
          iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3a53,0,0,
                                     &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_PMOVE_2_007ab784);
          if (iVar9 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = 0x3a54;
LAB_0047edd5:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,
                     iVar9);
          return 0xffff;
        }
        if (local_10 != 0) goto cf_common_exit_0047F19A;
        sVar6 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar15 = this->field_06AB;
        if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar15 < 0)) ||
           (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
        }
        else {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)
                    g_worldGrid.cells
                    [(int)sVar18 * (int)g_worldGrid.planeStride +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar6].objects[0];
        }
        if (((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
            (*(int *)&param_1->field_0x18 == this->field_06AF)) &&
           ((*(int *)&param_1->field_0x24 == *(int *)&this->field_0x24 &&
            (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 != 0)))) {
          thunk_FUN_004b9cf0(param_1);
          this->field_06C3 = CASE_4;
          goto cf_common_exit_0047F19A;
        }
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
           (*(int *)&param_1->field_0x4b0 == this->field_0018)) {
          *(undefined4 *)&param_1->field_0x4b0 = 0;
        }
      }
      else {
        if (SVar1 != CASE_4) {
          if (SVar1 == CASE_5) {
            if (*(int *)&this->field_0x6c7 == 0) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar9 = CONCAT22((short)((uint)this >> 0x10),*(short *)&this->field_0x6b7 * 200) + 100
              ;
              /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
              iVar10 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)&this->field_0x6b5 * 0xc9) +
                       100;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar17 = CONCAT22((short)((uint)iVar9 >> 0x10),*(short *)&this->field_0x6b3 * 0xc9) +
                       100;
              uVar5 = (undefined2)((uint)iVar10 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar5 = (*this->vtable->vfunc_10)
                                (CONCAT22(uVar5,this->field_0041),
                                 CONCAT22((short)((uint)iVar17 >> 0x10),this->field_0043),
                                 CONCAT22(uVar5,this->field_0045),iVar17,iVar10,iVar9);
              *(undefined2 *)&this->field_0x6bd = uVar5;
              *(undefined4 *)&this->field_0x6c7 = 1;
            }
            if (*(int *)&this->field_0x6c7 == 1) {
              uVar12 = sub_004176C0(this,*(short *)&this->field_0x6bd);
              uVar12 = sub_00417910(this,(short)uVar12);
              if (uVar12 == 0xffffffff) {
                iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3aa0,0,0,
                                           &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_OMOVE_007ab75c)
                ;
                if (iVar9 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar9 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar12 == 0) {
                *(undefined4 *)&this->field_0x6c7 = 2;
                goto cf_common_exit_0047F19A;
              }
            }
            if (*(int *)&this->field_0x6c7 == 2) {
              STJellyGunC::sub_00415B30
                        ((STJellyGunC *)this,this->field_0041,this->field_0043,this->field_0045,
                         *(short *)&this->field_0x6b3 * 0xc9 + 100,
                         *(short *)&this->field_0x6b5 * 0xc9 + 100,
                         *(short *)&this->field_0x6b7 * 200 + 100,this->field_0061);
              *(undefined4 *)&this->field_0x6c7 = 3;
            }
            if (*(int *)&this->field_0x6c7 == 3) {
              local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_18);
              local_8 = 0;
              if (this->field_0x2bf != '\0') {
                local_c = (undefined4 *)&this->field_0x2b3;
                do {
                  puVar13 = (undefined4 *)
                            thunk_FUN_0041dc40(local_2c,(short)*local_c,*(undefined2 *)(local_c + 1)
                                               ,this->field_006C);
                  local_24 = *puVar13;
                  local_20 = *(short *)(puVar13 + 1);
                  if (DAT_0080732c == 1) {
                    bVar23 = 0;
                    sVar22 = 0;
                    iVar10 = -1;
                    uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
                    sVar21 = 0;
                    this->field_001C = uVar12;
                    sVar20 = 0;
                    sVar8 = 0;
                    uVar14 = uVar12 * 0x41c64e6d + 0x3039;
                    sVar15 = 0;
                    this->field_001C = uVar14;
                    local_1c = uVar14 * 0x41c64e6d + 0x3039;
                    sVar18 = 0;
                    this->field_001C = local_1c;
                    sVar6 = 0;
                    lVar19 = Library::MSVCRT::__ftol();
                    iVar9 = (int)(short)lVar19 + (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                            (int)local_20;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar17 = ((uVar14 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                    uVar12 = local_1c;
                  }
                  else {
                    uVar14 = this->field_001C * 0x41c64e6d + 0x3039;
                    bVar23 = 0;
                    this->field_001C = uVar14;
                    uVar16 = uVar14 * 0x41c64e6d + 0x3039;
                    sVar22 = 0;
                    this->field_001C = uVar16;
                    uVar12 = uVar16 * 0x41c64e6d + 0x3039;
                    this->field_001C = uVar12;
                    iVar10 = -1;
                    sVar21 = 0;
                    sVar20 = 0;
                    sVar8 = 0;
                    sVar15 = 0;
                    sVar18 = 0;
                    sVar6 = 0;
                    iVar9 = (uVar14 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar17 = ((uVar16 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                  }
                  TraksClassTy::TraksCreate
                            (g_traksClass_00802A7C,1,2,7,
                             (uVar12 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                             (int)(short)local_24,iVar17 + -3,iVar9,sVar6,sVar18,sVar15,sVar8,sVar20
                             ,sVar21,iVar10,sVar22,bVar23);
                  local_8 = local_8 + 1;
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)(uint)(byte)this->field_0x2bf);
              }
              if (local_10 == -1) {
                iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac6,0,0,
                                           &DAT_007a4ccc,
                                           s_STBoatC__Dismant__DISMANT_OMOVE_2_007ab734);
                if (iVar9 == 0) {
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ac7);
                  return 0xffff;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              if (local_10 == 0) {
                uVar7 = this->field_06AD + 1;
                this->field_06C3 = CASE_6;
                SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                          ((AnonReceiver_0048DFD0 *)this,this->field_06A9,this->field_06AB,uVar7,
                           this->field_06A9,this->field_06AB,(int *)(uint)uVar7,1,
                           (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                           (short *)&this->field_0x6b7);
                sub_00481520(this,(int)*(short *)&this->field_0x6b3,
                             (int)*(short *)&this->field_0x6b5,(int)*(short *)&this->field_0x6b7);
                iVar9 = sub_0045FF50(this,0);
                if (iVar9 == -1) {
                  return -1;
                }
              }
            }
            iVar9 = (*this->vtable->vfunc_D8)();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
          if (SVar1 != CASE_6) {
            iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3af1,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant___incorrect_ent_007ab6d8);
            if (iVar9 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = sub_0045FF50(this,2);
          if (iVar9 == -1) {
            iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3ade,0,0,
                                       &DAT_007a4ccc,s_STBoatC__Dismant__DISMANT_ESCMOV_007ab704);
            if (iVar9 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar9 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar9 == 0) {
            iVar9 = (*this->vtable->vfunc_D8)();
            return -(uint)(iVar9 != 0);
          }
          if (iVar9 == 3) {
            uVar7 = this->field_06AD + 1;
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                      ((AnonReceiver_0048DFD0 *)this,this->field_06A9,this->field_06AB,uVar7,
                       this->field_06A9,this->field_06AB,(int *)(uint)uVar7,1,
                       (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                       (short *)&this->field_0x6b7);
            sub_00481520(this,(int)*(short *)&this->field_0x6b3,(int)*(short *)&this->field_0x6b5,
                         (int)*(short *)&this->field_0x6b7);
            sub_0045FF50(this,0);
          }
          goto cf_common_exit_0047F19A;
        }
        sVar6 = this->field_06A9;
        sVar18 = this->field_06AD;
        sVar15 = this->field_06AB;
        if (((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar15 < 0)) ||
            ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
        }
        else {
          param_1 = (AnonShape_004B9D90_4F3151F9 *)
                    g_worldGrid.cells
                    [(int)sVar18 * (int)g_worldGrid.planeStride +
                     (int)sVar15 * (int)g_worldGrid.sizeX + (int)sVar6].objects[0];
        }
        if (((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
            (*(int *)&param_1->field_0x18 == this->field_06AF)) &&
           ((*(int *)&param_1->field_0x24 == *(int *)&this->field_0x24 &&
            (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 != 0)))) {
          if (param_1->field_0245 == 6) {
            if (*(int *)&this->field_0x6b9 == 1) {
              this->field_06C3 = CASE_5;
              *(undefined4 *)&this->field_0x6c7 = 0;
            }
            else {
              this->field_06C3 = CASE_6;
            }
          }
          goto cf_common_exit_0047F19A;
        }
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
           (*(int *)&param_1->field_0x4b0 == this->field_0018)) {
          *(undefined4 *)&param_1->field_0x4b0 = 0;
        }
        if (*(int *)&this->field_0x6b9 != 1) {
          sVar6 = this->field_06AD + 1;
          this->field_06C3 = CASE_6;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::thunk_FUN_0048dfd0
                    ((AnonReceiver_0048DFD0 *)this,this->field_06A9,this->field_06AB,sVar6,
                     this->field_06A9,this->field_06AB,
                     (int *)CONCAT22((short)((uint)param_1 >> 0x10),sVar6),1,
                     (short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                     (short *)&this->field_0x6b7);
          sub_00481520(this,(int)*(short *)&this->field_0x6b3,(int)*(short *)&this->field_0x6b5,
                       (int)*(short *)&this->field_0x6b7);
          iVar9 = sub_0045FF50(this,0);
          if (iVar9 == -1) {
            return -1;
          }
          goto cf_common_exit_0047F19A;
        }
      }
      this->field_06C3 = CASE_5;
      *(undefined4 *)&this->field_0x6c7 = 0;
cf_common_exit_0047F19A:
      iVar9 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
    }
    iVar9 = sub_00460260(this,2);
    switch(iVar9) {
    case 0:
      sVar6 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar15 = this->field_06AB;
      if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar15 < 0)) ||
         (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)
                  g_worldGrid.cells
                  [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar6].objects[0];
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 == 0)))) {
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
          return 0;
        }
      }
      else {
        if (*(int *)&this->field_0x6b9 != 1) {
          thunk_FUN_004b9cf0(param_1);
          this->field_06C3 = CASE_4;
          return 2;
        }
        if (((this->field_0047 == *(short *)&this->field_0x6b3) &&
            (this->field_0049 == *(short *)&this->field_0x6b5)) &&
           (this->field_004B == *(short *)&this->field_0x6b7)) {
          this->field_06C3 = CASE_3;
          *(undefined4 *)&this->field_0x6c7 = 0;
          return 2;
        }
      }
      if (*(int *)&param_1->field_0x4b0 != this->field_0018) {
        return 0;
      }
      *(undefined4 *)&param_1->field_0x4b0 = 0;
      return 0;
    case 1:
      sVar6 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar15 = this->field_06AB;
      if (((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar15 < 0)) ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)
                  g_worldGrid.cells
                  [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar6].objects[0];
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 == 0)))) {
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if ((param_1 != (AnonShape_004B9D90_4F3151F9 *)0x0) &&
           (*(int *)&param_1->field_0x4b0 == this->field_0018)) {
          *(undefined4 *)&param_1->field_0x4b0 = 0;
        }
        sub_004602B0(this);
        return 0;
      }
      break;
    case 3:
      iVar9 = thunk_FUN_00495420(this,(short *)&this->field_0x6b3,(short *)&this->field_0x6b5,
                                 (short *)&this->field_0x6b7);
      if (iVar9 == 1) goto LAB_0047e4df;
      sVar6 = this->field_06A9;
      sVar18 = this->field_06AD;
      sVar15 = this->field_06AB;
      if ((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar15 < 0)) ||
         (((g_worldGrid.sizeY <= sVar15 || (sVar18 < 0)) || (g_worldGrid.sizeZ <= sVar18)))) {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)0x0;
      }
      else {
        param_1 = (AnonShape_004B9D90_4F3151F9 *)
                  g_worldGrid.cells
                  [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)g_worldGrid.sizeX
                   + (int)sVar6].objects[0];
      }
      if (((param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) ||
          (*(int *)&param_1->field_0x18 != this->field_06AF)) ||
         ((*(int *)&param_1->field_0x24 != *(int *)&this->field_0x24 ||
          (iVar9 = thunk_FUN_004b9d90(param_1), iVar9 == 0)))) {
        FUN_006e62d0(PTR_00802a38,this->field_06AF,(int *)&param_1);
        if (param_1 == (AnonShape_004B9D90_4F3151F9 *)0x0) {
          return 0;
        }
        if (*(int *)&param_1->field_0x4b0 != this->field_0018) {
          return 0;
        }
        *(undefined4 *)&param_1->field_0x4b0 = 0;
        return 0;
      }
      if (*(int *)&param_1->field_0x4b0 == this->field_0018) {
        *(undefined4 *)&param_1->field_0x4b0 = 0;
      }
      this->field_06C3 = CASE_1;
      *(undefined4 *)&this->field_0x6bf = 0;
      goto LAB_0047e0a4;
    case -1:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9,0,0,&DAT_007a4ccc,
                                 s_STBoatC__Dismant_DISMANT_MOVEOBJ_007ab7d4);
      if (iVar9 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x39d9
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 2;
}

