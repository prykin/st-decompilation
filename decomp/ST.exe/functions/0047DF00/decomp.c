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
  undefined2 uVar4;
  short sVar7;
  int local_EAX_51;
  int local_EAX_97;
  int iVar8;
  int local_EAX_422;
  int local_EAX_668;
  int iVar9;
  int local_EAX_920;
  int local_EAX_1031;
  int local_EAX_1073;
  int local_EAX_1493;
  int iVar10;
  uint uVar11;
  int local_EAX_2246;
  undefined4 *puVar12;
  uint uVar13;
  int local_EAX_3170;
  short sVar5;
  int local_EAX_3779;
  ushort uVar6;
  AnonShape_005EFAE0_B406B78B *pAVar14;
  int local_EAX_4554;
  int local_EAX_4837;
  int local_EAX_4915;
  short sVar15;
  uint uVar16;
  short sVar17;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar18;
  short sVar19;
  short sVar20;
  int iVar21;
  short sVar22;
  byte bVar23;
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
    iVar9 = *(int *)((int)this->field_06CB + 0x2c);
    if (((iVar9 != 0xc) && (iVar9 != 0x18)) && (iVar9 != 0x1d)) {
      return 0;
    }
    sVar5 = *(short *)&this->field_0x42d;
    sVar17 = *(short *)&this->field_0x42f;
    sVar15 = *(short *)&this->field_0x431;
    local_1c = *(AnonShape_005EFAE0_B406B78B **)&this->field_0x433;
    this->field_06A9 = sVar5;
    this->field_06AB = sVar17;
    this->field_06AD = sVar15;
    this->field_06AF = local_1c;
    if (g_worldGrid.sizeZ + -2 < (int)sVar15) {
      return 0;
    }
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar17 < 0 || ((g_worldGrid.sizeY <= sVar17 || (sVar15 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar15)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar17, sVar15).objects[0];
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
    iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1);
    if (iVar9 == 0) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar9 = (**(code **)(*param_1 + 0x2c))();
    iVar9 = *(int *)(&DAT_00791d68 + iVar9 * 4);
    this->field_06B9 = iVar9;
    if (iVar9 == 1) {
      sVar5 = this->field_06AB;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_c = (undefined4 *)CONCAT22(extraout_var,this->field_06AD);
      local_10 = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(sVar5));
      local_8 = 0;
      sVar17 = this->field_06AD + 1;
      local_14 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(this->field_06A9));
      do {
        local_18 = 0;
        sVar15 = (short)local_8 + this->field_06A9;
        do {
          sVar7 = sVar5 + (short)local_18;
          if (((((-1 < sVar15) && (sVar15 < g_worldGrid.sizeX)) && (-1 < sVar7)) &&
              ((sVar7 < g_worldGrid.sizeY && (-1 < sVar17)))) &&
             ((sVar17 < g_worldGrid.sizeZ &&
              (iVar9 = local_14,
              STGridAt3D(g_pathingGrid, sVar15, sVar7, sVar17) == 0)))) goto LAB_0047f4cd;
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        local_8 = local_8 + 1;
        if (1 < local_8) {
          return 0;
        }
      } while( true );
    }
    uVar4 = (undefined2)((uint)iVar9 >> 0x10);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = (undefined4 *)CONCAT22(uVar4,this->field_06AD);
    sVar5 = this->field_06AB;
    sVar15 = this->field_06AD + 1;
    sVar17 = this->field_06A9;
    if (sVar17 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar17) {
      return 0;
    }
    if (sVar5 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar5) {
      return 0;
    }
    if (sVar15 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar15) {
      return 0;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar9 = CONCAT22(uVar4,sVar17);
    if (STGridAt3D(g_pathingGrid, sVar17, sVar5, sVar15) != 0) {
      return 0;
    }
LAB_0047f4cd:
    this->field_06C3 = CASE_0;
    this->field_00B7 = 3;
    sub_00481520(this,(int)(short)iVar9,(int)sVar5,(short)local_c + 1);
    sub_00460260(this,0);
    return 2;
  }
  SVar1 = this->field_06C3;
  if (SVar1 == CASE_0) {
    local_EAX_51 = sub_00460260(this,2);
    switch(local_EAX_51) {
    case 0:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      this->field_00B7 = 0;
      if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        return 0;
      }
      iVar8 = thunk_FUN_00495420(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
      if ((iVar8 == 1) && ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
        param_1[300] = this->field_0018;
        this->field_06C3 = CASE_2;
LAB_0047e4df:
        iVar9 = (int)this->field_06B7;
        sVar5 = this->field_06B5;
        sVar17 = this->field_06B3;
LAB_0047e4ee:
        sub_00481520(this,(int)sVar17,(int)sVar5,iVar9);
        sub_00460260(this,0);
        return 2;
      }
      this->field_06C3 = CASE_1;
      this->field_06BF = 0;
LAB_0047e0a4:
      local_EAX_422 = Defence(this,0);
      if (local_EAX_422 == -1) {
        return -1;
      }
      break;
    case 1:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
         ((sVar15 < 0 ||
          (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        sub_004602B0(this);
        this->field_00B7 = 0;
        return 0;
      }
      break;
    case 3:
      sVar5 = this->field_06AB;
      sVar17 = this->field_06A9;
      iVar9 = this->field_06AD + 1;
      goto LAB_0047e4ee;
    case -1:
      local_EAX_97 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3987,0,0,
                                        "%s","STBoatC::Dismant, DISMANT_MOVE error");
      if (local_EAX_97 == 0) {
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
      local_EAX_668 = Defence(this,2);
      if (local_EAX_668 == -1) {
        return -1;
      }
      if (((this->field_082E == 0) && (this->field_048B == 0xffff)) && (this->field_06BF % 10 == 0))
      {
        sVar5 = this->field_06A9;
        sVar17 = this->field_06AD;
        sVar15 = this->field_06AB;
        if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
            ((sVar15 < 0 || ((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar17)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
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
        iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1);
        if (iVar9 == 0) {
          return 0;
        }
        local_EAX_920 =
             thunk_FUN_00495420(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
        if ((local_EAX_920 == 1) && ((param_1[300] == 0 || (param_1[300] == this->field_0018)))) {
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
          iVar10 = (ushort)(this->field_06B7 * 200) + 100;
          iVar9 = STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(this->field_06AB + 1)) * 0xc9;
          iVar21 = STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_06A9 + 1));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar4 = (*this->vtable->vfunc_10)
                            (this->field_0041,this->field_0043,
                             CONCAT22((short)((uint)(iVar21 * 0x19) >> 0x10),this->field_0045),
                             (short)(iVar21 * 0xc9),(short)iVar9,iVar10);
          this->field_06BD = uVar4;
          this->field_06C7 = 1;
        }
        if (this->field_06C7 == 1) {
          uVar11 = sub_004176C0(this,this->field_06BD);
          uVar11 = sub_00417910(this,(short)uVar11);
          if (uVar11 == 0xffffffff) {
            local_EAX_2246 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3a2d,0,0,"%s"
                                    ,"STBoatC::Dismant, DISMANT_PMOVE");
            if (local_EAX_2246 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar9 = 0x3a2e;
LAB_0047f1f7:
            RaiseInternalException
                      (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                       iVar9);
            return 0xffff;
          }
          if (uVar11 == 0) {
            this->field_06C7 = 2;
            iVar9 = this->vfunc_D8();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
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
            puVar12 = (undefined4 *)
                      thunk_FUN_0041dc40(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                         this->field_006C);
            uVar2 = *puVar12;
            local_20 = *(short *)(puVar12 + 1);
            local_24 = uVar2;
            if (DAT_0080732c == 1) {
              bVar23 = 0;
              sVar22 = 0;
              uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
              iVar9 = -1;
              this->field_001C = uVar11;
              sVar20 = 0;
              sVar19 = 0;
              uVar13 = uVar11 * 0x41c64e6d + 0x3039;
              sVar7 = 0;
              this->field_001C = uVar13;
              sVar15 = 0;
              sVar17 = 0;
              local_1c = (AnonShape_005EFAE0_B406B78B *)(uVar13 * 0x41c64e6d + 0x3039);
              sVar5 = 0;
              this->field_001C = local_1c;
              lVar18 = Library::MSVCRT::__ftol();
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         ((uint)local_1c >> 0x10) % 7 + (int)this->field_0041 + -3 +
                         (int)(short)local_24,
                         (((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24)) + -3
                         ,(int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                          (int)local_20,sVar5,sVar17,sVar15,sVar7,sVar19,sVar20,iVar9,sVar22,bVar23);
            }
            else {
              uVar13 = this->field_001C * 0x41c64e6d + 0x3039;
              this->field_001C = uVar13;
              uVar16 = uVar13 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar16;
              uVar11 = uVar16 * 0x41c64e6d + 0x3039;
              this->field_001C = uVar11;
              STPiece<2,2>(local_24) = (short)((uint)uVar2 >> 0x10);
              iVar9 = (int)STPiece<2,2>(local_24);
              STPiece<0,2>(local_24) = (short)uVar2;
              iVar10 = (int)(short)local_24;
              TraksClassTy::TraksCreate
                        (g_traksClass_00802A7C,1,2,7,
                         (uVar11 >> 0x10) % 7 + (int)this->field_0041 + -3 + iVar10,
                         (((uVar16 >> 0x10) % 7 + (int)this->field_0043) - iVar9) + -3,
                         (uVar13 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20,0,0,0,0,0
                         ,0,-1,0,0);
            }
            local_8 = local_8 + 1;
            local_c = (undefined4 *)((int)local_c + 6);
          } while (local_8 < (int)(uint)(byte)this->field_02BF);
        }
        if (local_10 == -1) {
          local_EAX_3170 =
               ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3a53,0,0,"%s",
                                  "STBoatC::Dismant, DISMANT_PMOVE 2");
          if (local_EAX_3170 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = 0x3a54;
LAB_0047edd5:
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     iVar9);
          return 0xffff;
        }
        if (local_10 != 0) goto cf_common_exit_0047F19A;
        sVar5 = this->field_06A9;
        sVar17 = this->field_06AD;
        sVar15 = this->field_06AB;
        if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
           (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
        }
        if ((((AnonShape_004B9D90_4F3151F9 *)param_1 != nullptr) &&
            (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
             == this->field_06AF)) &&
           ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 == this->field_0024 &&
            (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 != 0)))) {
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
              iVar9 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_06B5 * 0xc9)) + 100;
              uVar4 = (*this->vtable->vfunc_10)
                                (this->field_0041,this->field_0043,
                                 STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(this->field_0045)),
                                 this->field_06B3 * 0xc9 + 100,(short)iVar9,
                                 STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_06B7 * 200)) + 100);
              this->field_06BD = uVar4;
              this->field_06C7 = 1;
            }
            if (this->field_06C7 == 1) {
              uVar11 = sub_004176C0(this,this->field_06BD);
              uVar11 = sub_00417910(this,(short)uVar11);
              if (uVar11 == 0xffffffff) {
                local_EAX_3779 =
                     ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3aa0,0,0,
                                        "%s","STBoatC::Dismant, DISMANT_OMOVE");
                if (local_EAX_3779 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                iVar9 = 0x3aa1;
                goto LAB_0047edd5;
              }
              if (uVar11 == 0) {
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
                  puVar12 = (undefined4 *)
                            thunk_FUN_0041dc40(local_2c,(short)*local_c,*(ushort *)(local_c + 1),
                                               this->field_006C);
                  local_24 = *puVar12;
                  local_20 = *(short *)(puVar12 + 1);
                  if (DAT_0080732c == 1) {
                    bVar23 = 0;
                    sVar22 = 0;
                    iVar21 = -1;
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    sVar20 = 0;
                    this->field_001C = uVar11;
                    sVar19 = 0;
                    sVar7 = 0;
                    uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                    sVar15 = 0;
                    this->field_001C = uVar13;
                    local_1c = (AnonShape_005EFAE0_B406B78B *)(uVar13 * 0x41c64e6d + 0x3039);
                    sVar17 = 0;
                    this->field_001C = local_1c;
                    sVar5 = 0;
                    lVar18 = Library::MSVCRT::__ftol();
                    iVar9 = (int)(short)lVar18 + (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 +
                            (int)local_20;
                    iVar10 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                    pAVar14 = local_1c;
                  }
                  else {
                    uVar11 = this->field_001C * 0x41c64e6d + 0x3039;
                    bVar23 = 0;
                    this->field_001C = uVar11;
                    uVar13 = uVar11 * 0x41c64e6d + 0x3039;
                    sVar22 = 0;
                    this->field_001C = uVar13;
                    pAVar14 = (AnonShape_005EFAE0_B406B78B *)(uVar13 * 0x41c64e6d + 0x3039);
                    this->field_001C = pAVar14;
                    iVar21 = -1;
                    sVar20 = 0;
                    sVar19 = 0;
                    sVar7 = 0;
                    sVar15 = 0;
                    sVar17 = 0;
                    sVar5 = 0;
                    iVar9 = (uVar11 >> 0x10) % 7 + (int)this->field_0045 + -3 + (int)local_20;
                    STPiece<2,2>(local_24) = (short)((uint)local_24 >> 0x10);
                    iVar10 = ((uVar13 >> 0x10) % 7 + (int)this->field_0043) - (int)STPiece<2,2>(local_24);
                  }
                  TraksClassTy::TraksCreate
                            (g_traksClass_00802A7C,1,2,7,
                             ((uint)pAVar14 >> 0x10) % 7 + (int)this->field_0041 + -3 +
                             (int)(short)local_24,iVar10 + -3,iVar9,sVar5,sVar17,sVar15,sVar7,sVar19
                             ,sVar20,iVar21,sVar22,bVar23);
                  local_8 = local_8 + 1;
                  local_c = (undefined4 *)((int)local_c + 6);
                } while (local_8 < (int)(uint)(byte)this->field_02BF);
              }
              if (local_10 == -1) {
                local_EAX_4554 =
                     ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3ac6,0,0,
                                        "%s","STBoatC::Dismant, DISMANT_OMOVE 2");
                if (local_EAX_4554 == 0) {
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
                iVar9 = sub_0045FF50(this,0);
                if (iVar9 == -1) {
                  return -1;
                }
              }
            }
            iVar9 = this->vfunc_D8();
            return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
          }
          if (SVar1 != CASE_6) {
            local_EAX_4915 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3af1,0,0,"%s"
                                    ,"STBoatC::Dismant - incorrect entry");
            if (local_EAX_4915 == 0) {
              return -1;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          iVar9 = sub_0045FF50(this,2);
          if (iVar9 == -1) {
            local_EAX_4837 =
                 ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3ade,0,0,"%s"
                                    ,"STBoatC::Dismant, DISMANT_ESCMOVE error");
            if (local_EAX_4837 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            iVar9 = 0x3ade;
            goto LAB_0047f1f7;
          }
          if (iVar9 == 0) {
            iVar9 = this->vfunc_D8();
            return -(uint)(iVar9 != 0);
          }
          if (iVar9 == 3) {
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
        sVar17 = this->field_06AD;
        sVar15 = this->field_06AB;
        if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
            ((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = nullptr;
        }
        else {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
        }
        if ((((AnonShape_004B9D90_4F3151F9 *)param_1 != nullptr) &&
            (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18
             == this->field_06AF)) &&
           ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 == this->field_0024 &&
            (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 != 0)))) {
          if (STField<int>(param_1,0x245) == 6) {
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
          iVar9 = sub_0045FF50(this,0);
          if (iVar9 == -1) {
            return -1;
          }
          goto cf_common_exit_0047F19A;
        }
      }
      this->field_06C3 = CASE_5;
      this->field_06C7 = 0;
cf_common_exit_0047F19A:
      iVar9 = this->vfunc_D8();
      return (-(uint)(iVar9 != 0) & 0xfffffffd) + 2;
    }
    local_EAX_1031 = sub_00460260(this,2);
    switch(local_EAX_1031) {
    case 0:
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
         (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
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
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
        STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,this->field_06AF,(int *)&param_1);
        if ((param_1 != nullptr) && (param_1[300] == this->field_0018)) {
          param_1[300] = 0;
        }
        sub_004602B0(this);
        return 0;
      }
      break;
    case 3:
      local_EAX_1493 =
           thunk_FUN_00495420(this,&this->field_06B3,&this->field_06B5,&this->field_06B7);
      if (local_EAX_1493 == 1) goto LAB_0047e4df;
      sVar5 = this->field_06A9;
      sVar17 = this->field_06AD;
      sVar15 = this->field_06AB;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar15 < 0)) ||
         (((g_worldGrid.sizeY <= sVar15 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = nullptr;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int *)STGridAt3D(g_worldGrid, sVar5, sVar15, sVar17).objects[0];
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if ((((AnonShape_004B9D90_4F3151F9 *)param_1 == nullptr) ||
          (*(AnonShape_005EFAE0_B406B78B **)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x18 !=
           this->field_06AF)) ||
         ((*(int *)&((AnonShape_004B9D90_4F3151F9 *)param_1)->field_0x24 != this->field_0024 ||
          (iVar9 = thunk_FUN_004b9d90((AnonShape_004B9D90_4F3151F9 *)param_1), iVar9 == 0)))) {
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
      local_EAX_1073 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x39d9,0,0,"%s",
                              "STBoatC::Dismant DISMANT_MOVEOBJ error");
      if (local_EAX_1073 == 0) {
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

