#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::Dismant

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0047DF00 -> 006E62D0 @ 0047E48C | 0047DF00 -> 006E62D0 @ 0047E5E1 | 0047DF00 ->
   006E62D0 @ 0047E6BB | 0047DF00 -> 006E62D0 @ 0047EB16 | 0047DF00 -> 006E62D0 @ 0047EC6A
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   Dismant(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=0047DF93 RET 0x4 | 0047E0BD RET 0x4 | 0047E18D RET 0x4 | 0047E2F8 RET 0x4 |
   0047E364 RET 0x4 | 0047E453 RET 0x4 | 0047E478 RET 0x4 | 0047E4BB RET 0x4 | 0047E50A RET 0x4 |
   0047E610 RET 0x4 | 0047E6ED RET 0x4 | 0047E7AB RET 0x4 | 0047ED0B RET 0x4 | 0047EDF5 RET 0x4 |
   0047F0AF RET 0x4 | 0047F0FD RET 0x4 | 0047F119 RET 0x4 | 0047F1B3 RET 0x4 | 0047F1CA RET 0x4 |
   0047F218 RET 0x4 | 0047F249 RET 0x4 | 0047F4C4 RET 0x4 | 0047F50A RET 0x4 */

int __thiscall STBoatC::Dismant(STBoatC *this,int *param_1)

{
  STBoatC_field_06C3State SVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  AnonShape_005EFAE0_B406B78B *pAVar13;
  short sVar14;
  uint uVar15;
  short sVar16;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  byte bVar22;
  undefined4 local_2c [2];
  undefined4 local_24;
  short local_20;
  AnonShape_005EFAE0_B406B78B *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
    memset(&this->field_02CC, 0, 0x5c); /* compiler bulk-zero initialization */
    this->field_02C4 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar8 = *(int *)((int)this->field_06CB + 0x2c);
    if (((iVar8 != 0xc) && (iVar8 != 0x18)) && (iVar8 != 0x1d)) {
      return 0;
    }
    sVar5 = *(short *)&this->field_0x42d;
    sVar16 = *(short *)&this->field_0x42f;
    sVar14 = *(short *)&this->field_0x431;
    local_1c = *(AnonShape_005EFAE0_B406B78B **)&this->field_0x433;
    this->field_06A9 = sVar5;
    this->field_06AB = sVar16;
    this->field_06AD = sVar14;
    this->field_06AF = local_1c;
    if (g_worldGrid.sizeZ + -2 < (int)sVar14) {
      return 0;
    }
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar16 < 0 || ((g_worldGrid.sizeY <= sVar16 || (sVar14 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar14)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar16, sVar14).objects[0];
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) {
      return 0;
    }
    if (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
        local_1c) {
      return 0;
    }
    if (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x20 != 1000) {
      return 0;
    }
    if (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024) {
      return 0;
    }
    iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1);
    if (iVar8 == 0) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar8 = (**(code **)(*param_1 + 0x2c))();
    iVar8 = *(int *)(&DAT_00791d68 + iVar8 * 4);
    this->field_06B9 = iVar8;
    if (iVar8 == 1) {
      sVar5 = this->field_06AB;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_c = (undefined4 *)CONCAT22(extraout_var,this->field_06AD);
      local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(sVar5));
      local_8 = 0;
      sVar16 = this->field_06AD + 1;
      local_14 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(this->field_06A9));
      do {
        local_18 = 0;
        sVar14 = (short)local_8 + this->field_06A9;
        do {
          sVar7 = sVar5 + (short)local_18;
          if (((((-1 < sVar14) && (sVar14 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
              ((sVar7 < g_worldGrid.sizeY && (-1 < sVar16)))) &&
             ((sVar16 < g_worldGrid.sizeZ &&
              (iVar8 = local_14,
              STGridAt3D(g_pathingGrid, sVar14, sVar7, sVar16) == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar4 = (undefined2)((uint)iVar8 >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (undefined4 *)CONCAT22(uVar4,this->field_06AD);
    sVar5 = this->field_06AB;
    sVar14 = this->field_06AD + 1;
    sVar16 = this->field_06A9;
    if (sVar16 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar16) {
      return 0;
    }
    if (sVar5 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar5) {
      return 0;
    }
    if (sVar14 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar14) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar8 = CONCAT22(uVar4,sVar16);
    if (STGridAt3D(g_pathingGrid, sVar16, sVar5, sVar14) != 0) {
      return 0;
    }
LAB_0047f4cd:
    this->field_06C3 = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)(short)iVar8,(int)sVar5,(short)local_c + 1);
    sub_00460260(this,0);
    return 2;
  }
  SVar1 = this->field_06C3;
  if (SVar1 == CASE_0) {
    iVar8 = sub_00460260(this,2);
    switch(iVar8) {
    case 0:
      sVar5 = this->field_06A9;
      sVar16 = this->field_06AD;
      sVar14 = this->field_06AB;
      this->field_00B7 = 0;
      if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
         ((sVar14 < 0 ||
          (((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 == 0)))) {
        return 0;
      }
      iVar8 = thunk_FUN_00495420(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
      if ((iVar8 == 1) && ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
        param_1[300] = this->field_0018;
        this->field_06C3 = CASE_2;
LAB_0047e4df:
        iVar8 = (int)this->field_06B7;
        sVar5 = this->field_06B5;
        sVar16 = this->field_06B3;
LAB_0047e4ee:
        sub_00481520(this,(int)sVar16,(int)sVar5,iVar8);
        sub_00460260(this,0);
        return 2;
      }
      this->field_06C3 = CASE_1;
      this->field_06BF = 0;
LAB_0047e0a4:
      iVar8 = Defence(this,0);
      if (iVar8 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar5 = this->field_06A9;
      sVar16 = this->field_06AD;
      sVar14 = this->field_06AB;
      if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
         ((sVar14 < 0 ||
          (((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 == 0)))) {
        sub_004602B0(this);
        this->field_00B7 = 0;
        return 0;
      }
      break;
    case 3:
      sVar5 = this->field_06AB;
      sVar16 = this->field_06A9;
      iVar8 = this->field_06AD + 1;
      goto LAB_0047e4ee;
    case -1:
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3987,0,0,"%s",
                                 "STBoatC::Dismant, DISMANT_MOVE error");
      if (iVar8 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x3987
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if (SVar1 == CASE_1) {
      iVar8 = Defence(this,2);
      if (iVar8 == -1) {
        return -1;
      }
      if (((this->field_082E == 0) && (this->field_048B == 0xffff)) && (this->field_06BF % 10 == 0))
      {
        sVar5 = this->field_06A9;
        sVar16 = this->field_06AD;
        sVar14 = this->field_06AB;
        if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
            ((sVar14 < 0 || ((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar16)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) {
          return 0;
        }
        if (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
            != this->field_06AF) {
          return 0;
        }
        if (*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024) {
          return 0;
        }
        iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1);
        if (iVar8 == 0) {
          return 0;
        }
        iVar8 = thunk_FUN_00495420(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
        if ((iVar8 == 1) && ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
          param_1[300] = this->field_0018;
          this->field_06C3 = CASE_2;
          sub_00481520(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
          sub_00460260(this,0);
        }
      }
      this->field_06BF = this->field_06BF + 1;
      return 2;
    }
    if (SVar1 != CASE_2) {
      if (SVar1 == CASE_3) {
        if (this->field_06C7 == 0) {
          iVar9 = (ushort)(this->field_06B7 * 200) + 100;
          iVar8 = STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_06AB + 1)) * 0xc9;
          iVar20 = STReplaceLowWord((uint32_t)(iVar8), (uint16_t)(this->field_06A9 + 1));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar4 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             CONCAT22((short)((uint)(iVar20 * 0x19) >> 0x10),this->field_0045),
                             (short)(iVar20 * 0xc9),(short)iVar8,iVar9);
          this->field_06BD = uVar4;
          this->field_06C7 = 1;
        }
        if (this->field_06C7 == 1) {
          uVar10 = sub_004176C0(this,this->field_06BD);
          uVar10 = sub_00417910(this,(short)uVar10);
          if (uVar10 == 0xffffffff) {
            iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3a2d,0,0,
                                       "%s","STBoatC::Dismant, DISMANT_PMOVE");
            if (iVar8 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar8 = 0x3a2e;
LAB_0047f1f7:
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       iVar8);
            return 0xffff;
          }
          if (uVar10 == 0) {
            this->field_06C7 = 2;
            iVar8 = this->vfunc_D8();
            return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
          }
        }
        if (this->field_06C7 == 2) {
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                       (this->field_06A9 + 1) * 0xc9,(this->field_06AB + 1) * 0xc9,
                       this->field_06B7 * 200 + 100,this->field_0061);
          this->field_06C7 = 3;
        }
        if (this->field_06C7 != 3) goto cf_common_exit_0047F19A;
        local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_18,&local_14);
        local_8 = 0;
        if (this->field_02BF != '\0') {
          local_c = (undefined4 *)&this->field_0x2b3;
          do {
            puVar11 = (undefined4 *)
                      thunk_FUN_0041dc40(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                         this->field_006C);
            uVar2 = *puVar11;
            local_20 = *(short *)(puVar11 + 1);
            local_24 = uVar2;
            if (DAT_0080732c == 1) {
              bVar22 = 0;
              sVar21 = 0;
              uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar8 = -1;
              this->field_001C = uVar10;
              sVar19 = 0;
              sVar18 = 0;
              uVar12 = uVar10 * 0x41c64e6d + 0x3039;
              sVar7 = 0;
              this->field_001C = uVar12;
              sVar14 = 0;
              sVar16 = 0;
              local_1c = (AnonShape_005EFAE0_B406B78B *)(uVar12 * 0x41c64e6d + 0x3039);
              sVar5 = 0;
              this->field_001C = local_1c;
              lVar17 = Library::MSVCRT::__ftol();
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         ((uint)local_1c >> 0x10) % 7 + (int)this->field_0041 + -3 +
                         (int)(short)local_24,
                         (((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_) + -3
                         ,(int)(short)lVar17 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_20,sVar5,sVar16,sVar14,sVar7,sVar18,sVar19,iVar8,sVar21,bVar22);
            }
            else {
              uVar12 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar12;
              uVar15 = uVar12 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar15;
              uVar10 = uVar15 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar10;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_24._2_2_ = (short)((uint)uVar2 >> 0x10);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              iVar8 = (int)local_24._2_2_;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_24._0_2_ = (short)uVar2;
              iVar9 = (int)(short)local_24;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar10 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar9,
                         (((uVar15 >> 0x10) % 7 + (int)this->field_0043) - iVar8) + -3,
                         (uVar12 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20,0,0,0,0,0
                         ,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_10 == -1) {
          iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3a53,0,0,
                                     "%s","STBoatC::Dismant, DISMANT_PMOVE 2");
          if (iVar8 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar8 = 0x3a54;
LAB_0047edd5:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar8);
          return 0xffff;
        }
        if (local_10 != 0) goto cf_common_exit_0047F19A;
        sVar5 = this->field_06A9;
        sVar16 = this->field_06AD;
        sVar14 = this->field_06AB;
        if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar14 < 0)) ||
           (((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
        }
        if ((((AnonShape_004B9D90_4F3151F9 *)param_1 != nullptr) &&
            (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
             == this->field_06AF)) &&
           ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 == this->field_0024 &&
            (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 != 0)))) {
          thunk_FUN_004b9cf0((AnonShape_004B9D90_4F3151F9 *)param_1);
          this->field_06C3 = CASE_4;
          goto cf_common_exit_0047F19A;
        }
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
      }
      else {
        if (SVar1 != CASE_4) {
          if (SVar1 == CASE_5) {
            if (this->field_06C7 == 0) {
              /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
              iVar8 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_06B5 * 0xc9)) + 100;
              uVar4 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 STReplaceLowWord((uint32_t)(iVar8), (uint16_t)(this->field_0045)),
                                 this->field_06B3 * 0xc9 + 100,(short)iVar8,
                                 STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_06B7 * 200)) + 100);
              this->field_06BD = uVar4;
              this->field_06C7 = 1;
            }
            if (this->field_06C7 == 1) {
              uVar10 = sub_004176C0(this,this->field_06BD);
              uVar10 = sub_00417910(this,(short)uVar10);
              if (uVar10 == 0xffffffff) {
                iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3aa0,0,0,
                                           "%s","STBoatC::Dismant, DISMANT_OMOVE");
                if (iVar8 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar8 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar10 == 0) {
                this->field_06C7 = 2;
                goto cf_common_exit_0047F19A;
              }
            }
            if (this->field_06C7 == 2) {
              sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                           this->field_06B3 * 0xc9 + 100,this->field_06B5 * 0xc9 + 100,
                           this->field_06B7 * 200 + 100,this->field_0061);
              this->field_06C7 = 3;
            }
            if (this->field_06C7 == 3) {
              local_10 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_14,&local_18);
              local_8 = 0;
              if (this->field_02BF != '\0') {
                local_c = (undefined4 *)&this->field_0x2b3;
                do {
                  puVar11 = (undefined4 *)
                            thunk_FUN_0041dc40(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                               this->field_006C);
                  local_24 = *puVar11;
                  local_20 = *(short *)(puVar11 + 1);
                  if (DAT_0080732c == 1) {
                    bVar22 = 0;
                    sVar21 = 0;
                    iVar20 = -1;
                    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                    sVar19 = 0;
                    this->field_001C = uVar10;
                    sVar18 = 0;
                    sVar7 = 0;
                    uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                    sVar14 = 0;
                    this->field_001C = uVar12;
                    local_1c = (AnonShape_005EFAE0_B406B78B *)(uVar12 * 0x41c64e6d + 0x3039);
                    sVar16 = 0;
                    this->field_001C = local_1c;
                    sVar5 = 0;
                    lVar17 = Library::MSVCRT::__ftol();
                    iVar8 = (int)(short)lVar17 + (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                            (int)local_20;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                    pAVar13 = local_1c;
                  }
                  else {
                    uVar10 = this->field_001C * 0x41c64e6d + 0x3039;
                    bVar22 = 0;
                    this->field_001C = uVar10;
                    uVar12 = uVar10 * 0x41c64e6d + 0x3039;
                    sVar21 = 0;
                    this->field_001C = uVar12;
                    pAVar13 = (AnonShape_005EFAE0_B406B78B *)(uVar12 * 0x41c64e6d + 0x3039);
                    this->field_001C = pAVar13;
                    iVar20 = -1;
                    sVar19 = 0;
                    sVar18 = 0;
                    sVar7 = 0;
                    sVar14 = 0;
                    sVar16 = 0;
                    sVar5 = 0;
                    iVar8 = (uVar10 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_24._2_2_ = (short)((uint)local_24 >> 0x10);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    iVar9 = ((uVar12 >> 0x10) % 7 + (int)this->field_0043) - (int)local_24._2_2_;
                  }
                  TraksClassTy::TraksCreate
                            (g_traksClass_00802A7C,1,2,7,
                             ((uint)pAVar13 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                             (int)(short)local_24,iVar9 + -3,iVar8,sVar5,sVar16,sVar14,sVar7,sVar18,
                             sVar19,iVar20,sVar21,bVar22);
                  local_8 = local_8 + 1;
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)(uint)(byte)this->field_02BF);
              }
              if (local_10 == -1) {
                iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3ac6,0,0,
                                           "%s",
                                           "STBoatC::Dismant, DISMANT_OMOVE 2");
                if (iVar8 == 0) {
                  RaiseInternalException
                            (0xffff,g_overwriteContext_007ED77C,
                             "E:\\__titans\\wlad\\To_boat.cpp",0x3ac7);
                  return 0xffff;
                }
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              if (local_10 == 0) {
                uVar6 = this->field_06AD + 1;
                this->field_06C3 = CASE_6;
                sub_0048DFD0(this,this->field_06A9,this->field_06AB,uVar6,this->field_06A9,
                             this->field_06AB,(int *)(uint)uVar6,1,&this->field_06B3,
                             &this->field_06B5,&this->field_06B7);
                sub_00481520(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
                iVar8 = sub_0045FF50(this,0);
                if (iVar8 == -1) {
                  return -1;
                }
              }
            }
            iVar8 = this->vfunc_D8();
            return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
          }
          if (SVar1 != CASE_6) {
            iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3af1,0,0,
                                       "%s","STBoatC::Dismant - incorrect entry");
            if (iVar8 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar8 = sub_0045FF50(this,2);
          if (iVar8 == -1) {
            iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3ade,0,0,
                                       "%s","STBoatC::Dismant, DISMANT_ESCMOVE error");
            if (iVar8 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar8 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar8 == 0) {
            iVar8 = this->vfunc_D8();
            return -(uint)(iVar8 != 0);
          }
          if (iVar8 == 3) {
            uVar6 = this->field_06AD + 1;
            sub_0048DFD0(this,this->field_06A9,this->field_06AB,uVar6,this->field_06A9,
                         this->field_06AB,(int *)(uint)uVar6,1,&this->field_06B3,&this->field_06B5,
                         &this->field_06B7);
            sub_00481520(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
            sub_0045FF50(this,0);
          }
          goto cf_common_exit_0047F19A;
        }
        sVar5 = this->field_06A9;
        sVar16 = this->field_06AD;
        sVar14 = this->field_06AB;
        if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar14 < 0)) ||
            ((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
        }
        if ((((AnonShape_004B9D90_4F3151F9 *)param_1 != nullptr) &&
            (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
             == this->field_06AF)) &&
           ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 == this->field_0024 &&
            (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 != 0)))) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)param_1 + 0x245) == 6) {
            if (this->field_06B9 == 1) {
              this->field_06C3 = CASE_5;
              this->field_06C7 = 0;
            }
            else {
              this->field_06C3 = CASE_6;
            }
          }
          goto cf_common_exit_0047F19A;
        }
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
        if (this->field_06B9 != 1) {
          sVar5 = this->field_06AD + 1;
          this->field_06C3 = CASE_6;
          sub_0048DFD0(this,this->field_06A9,this->field_06AB,sVar5,this->field_06A9,
                       this->field_06AB,(int *)STReplaceLowWord((uint32_t)(param_1), (uint16_t)(sVar5)),1,
                       &this->field_06B3,&this->field_06B5,&this->field_06B7);
          sub_00481520(this,(int)this->field_06B3,(int)this->field_06B5,(int)this->field_06B7);
          iVar8 = sub_0045FF50(this,0);
          if (iVar8 == -1) {
            return -1;
          }
          goto cf_common_exit_0047F19A;
        }
      }
      this->field_06C3 = CASE_5;
      this->field_06C7 = 0;
cf_common_exit_0047F19A:
      iVar8 = this->vfunc_D8();
      return (-(uint)(iVar8 != 0) & 0xfffffffd) + 2;
    }
    iVar8 = sub_00460260(this,2);
    switch(iVar8) {
    case 0:
      sVar5 = this->field_06A9;
      sVar16 = this->field_06AD;
      sVar14 = this->field_06AB;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar14 < 0)) ||
         (((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 == 0)))) {
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_1 == nullptr) {
          return 0;
        }
      }
      else {
        if (this->field_06B9 != 1) {
          thunk_FUN_004b9cf0((AnonShape_004B9D90_4F3151F9 *)param_1);
          this->field_06C3 = CASE_4;
          return 2;
        }
        if (((this->field_0047 == this->field_06B3) && (this->field_0049 == this->field_06B5)) &&
           (this->field_004B == this->field_06B7)) {
          this->field_06C3 = CASE_3;
          this->field_06C7 = 0;
          return 2;
        }
      }
      if (param_1[300] != this->field_0018) {
        return 0;
      }
      param_1[300] = 0;
      return 0;
    case 1:
      sVar5 = this->field_06A9;
      sVar16 = this->field_06AD;
      sVar14 = this->field_06AB;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar14 < 0)) ||
          ((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 == 0)))) {
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
        sub_004602B0(this);
        return 0;
      }
      break;
    case 3:
      iVar8 = thunk_FUN_00495420(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
      if (iVar8 == 1) goto LAB_0047e4df;
      sVar5 = this->field_06A9;
      sVar16 = this->field_06AD;
      sVar14 = this->field_06AB;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar14 < 0)) ||
         (((g_worldGrid.sizeY <= sVar14 || (sVar16 < 0)) || (g_worldGrid.sizeZ <= sVar16)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar14, sVar16).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar8 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar8 == 0)))) {
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_1 == nullptr) {
          return 0;
        }
        if (param_1[300] != this->field_0018) {
          return 0;
        }
        param_1[300] = 0;
        return 0;
      }
      if (param_1[300] == this->field_0018) {
        param_1[300] = 0;
      }
      this->field_06C3 = CASE_1;
      this->field_06BF = 0;
      goto LAB_0047e0a4;
    case -1:
      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x39d9,0,0,"%s",
                                 "STBoatC::Dismant DISMANT_MOVEOBJ error");
      if (iVar8 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x39d9
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 2;
}

