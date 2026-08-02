#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x14]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x4c]:10 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData1;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x5c]:16 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData10;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x98]:10 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData11;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xa0]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xa8]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xb0]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderDataE;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xb8]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xc0]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xc8]:6 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STPosition16;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xd0]:8 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData4;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xdc]:8 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData6;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0xe4]:7 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderDataF;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x124]:10 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderDataD;
   replacement=unconstrained_ssa_stack_storage
   [STTypeBootstrapApplier] Removed legacy noncanonical stack view at Stack[-0x174]:31 so SSA can
   recover independent lifetimes. Evidence: type=/SubmarineTitans/Recovered/STGroupBoatOrderData9;
   replacement=unconstrained_ssa_stack_storage */

void __thiscall STAllPlayersC::CmdToPlsObj(STAllPlayersC *this,void *command)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined1 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined2 *puVar10;
  code *pcVar11;
  uint uVar12;
  STGameObjC *pSVar13;
  DArrayTy *pDVar14;
  STGroupBoatC *pSVar15;
  DArrayTy *pDVar16;
  byte *puVar17;
  STWorldObject *pSVar18;
  dword dVar19;
  dword dVar20;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  undefined4 uVar21;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX_04;
  STGroupBoatCVTable *pSVar22;
  int iVar23;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  short sVar24;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  byte *puVar25;
  undefined4 arg_2;
  undefined4 local_1fc;
  AnonShape_005EFAE0_B406B78B *local_1f6;
  undefined4 local_1b8 [17];
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  uint uStack_16a;
  undefined1 uStack_166;
  undefined2 uStack_157;
  dword local_154;
  undefined4 local_150;
  uint local_14c;
  DArrayTy *local_148;
  undefined4 local_138;
  DArrayTy *local_134;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined4 uStack_11e;
  undefined1 local_118 [4];
  undefined4 local_114;
  DArrayTy *local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  undefined2 local_104;
  undefined2 local_102;
  int local_100;
  undefined4 local_fc;
  DArrayTy *local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  int local_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined4 uStack_e1;
  DArrayTy *pDStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  undefined4 uStack_d0;
  DArrayTy *pDStack_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  ushort uStack_b0;
  ushort uStack_ae;
  ushort uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  short sStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  AnonShape_0041AF40_F59F8577 local_8c;
  DArrayTy *local_74;
  DArrayTy *local_6c;
  ushort *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  short sStack_58;
  short sStack_56;
  short sStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 auStack_48 [4];
  int *local_40;
  int local_3c;
  undefined4 local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  int local_24;
  STAllPlayersC *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 auStack_10 [2];
  DArrayTy *local_c;
  STGameObjC *local_8;
  char bVar1;

  bVar1 = *(char *)((int)command + 8);
  uVar2 = *(ushort *)((int)command + 10);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_38 = CONCAT22((short)((uint)this >> 0x10),uVar2);
  local_8 = (STGameObjC *)0x0;
  uVar12 = *(uint *)((int)command + 10) >> 0x10;
  pDVar14 = *(DArrayTy **)&g_packedRecords_A62x8[(byte)bVar1].field_0x1;
  local_30 = pDVar14;
  local_20 = this;
  if (uVar12 != 0) {
    if (uVar12 != 1) {
      if (uVar12 != 2) {
        return;
      }
      if (uVar2 == 0xffff) {
        return;
      }
      pSVar13 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar2,CASE_3);
      if (pSVar13 == (STGameObjC *)0x0) {
        return;
      }
      if (*(char *)((int)command + 0xe) != '\x15') {
        if (*(char *)((int)command + 0xe) != '*') {
          return;
        }
        thunk_FUN_006270e0(pSVar13,0x2a,command);
        return;
      }
      local_24 = 4 - (uint)**(byte **)((int)command + 0x17);
      thunk_FUN_006270e0(pSVar13,0x15,(undefined1 *)&local_24);
      return;
    }
    if (uVar2 == 0xffff) {
      return;
    }
    local_8 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar2,CASE_1);
    if (local_8 == (STGameObjC *)0x0) {
      return;
    }
    local_8c.field_0010 = 0x4401;
    switch(*(undefined1 *)((int)command + 0xe)) {
    case 8:
    case 9:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x27:
    case 0x28:
    case 0x2a:
      goto cf_common_exit_00437191;
    default:
      return;
    case 0x14:
      local_68 = *(ushort **)((int)command + 0x17);
      uVar2 = local_68[2];
      uVar3 = *local_68;
      local_34 = (DArrayTy *)(uint)uVar3;
      uVar4 = local_68[4];
      local_2c = (DArrayTy *)(uint)uVar4;
      local_6c = (DArrayTy *)(int)(short)uVar2;
      local_30 = (DArrayTy *)(int)(short)uVar4;
      iVar23 = (int)(short)uVar3;
      if ((g_pathingGrid.cells
           [(int)g_pathingGrid.planeStride * (int)local_30 + iVar23 +
            (int)g_pathingGrid.sizeX * (int)local_6c] != 0) &&
         ((((((((short)uVar3 < 0 || (g_worldGrid.sizeX <= (short)uVar3)) || ((short)uVar2 < 0)) ||
             ((g_worldGrid.sizeY <= (short)uVar2 || ((short)uVar4 < 0)))) ||
            (g_worldGrid.sizeZ <= (short)uVar4)) ||
           (g_worldGrid.cells
            [(int)g_worldGrid.sizeX * (int)local_6c +
             iVar23 + (int)g_worldGrid.planeStride * (int)local_30].objects[0] ==
            (STWorldObject *)0x0)) && (local_28 = local_2c, (short)uVar4 < 5)))) {
        while( true ) {
          sVar24 = (short)local_28;
          if (g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * (int)sVar24 + iVar23 +
               (int)g_pathingGrid.sizeX * (int)local_6c] == 0) break;
          if (((((-1 < (short)uVar3) && ((short)uVar3 < g_worldGrid.sizeX)) &&
               ((-1 < (short)uVar2 &&
                ((((short)uVar2 < g_worldGrid.sizeY && (-1 < sVar24)) &&
                 (sVar24 < g_worldGrid.sizeZ)))))) &&
              (g_worldGrid.cells
               [(int)g_worldGrid.planeStride * (int)sVar24 +
                iVar23 + (int)g_worldGrid.sizeX * (int)(short)uVar2].objects[0] !=
               (STWorldObject *)0x0)) ||
             (local_28 = (DArrayTy *)((int)&local_28->flags + 1), 4 < (short)local_28))
          goto cf_common_exit_00437191;
        }
        *(int *)(local_68 + 4) = (int)sVar24;
      }
cf_common_exit_00437191:
      local_8c.field_0014 = command;
      local_8->GetMessage(&local_8c);
      return;
    case 0x29:
      if (**(char **)((int)command + 0x17) == '\0') {
        if (pDVar14 == (DArrayTy *)0x0) {
          return;
        }
        pDVar16 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar16,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)((uint)local_8c.field_0014._2_2_ << 0x10);
      }
      else {
        if (pDVar14 == (DArrayTy *)0x0) {
          return;
        }
        pDVar16 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar16,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      }
      local_8c.field_0010 = 0x5d98;
      local_74 = pDVar16;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pDVar14->flags)(&local_8c);
      DArrayDestroy(pDVar16);
      return;
    }
  }
  if (uVar2 == 0xffff) {
    return;
  }
  local_1c = local_38;
  if (*(char *)((int)command + 0xe) == '\x17') {
    puVar7 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar7) {
    case 0x11:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar15 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar15 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar15,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar12 = extraout_ECX_04;
      }
      else {
        iVar23 = *(int *)((int)command + 0xf);
        local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar24 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar12 = extraout_ECX_03;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(local_c,puVar7 + sVar24 * 2 + iVar23);
            sVar24 = sVar24 + 1;
            uVar12 = *(uint *)((int)command + 0x13) >> 1;
          } while (sVar24 < (short)uVar12);
        }
      }
      pDVar14 = local_c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar12 >> 8),*(undefined1 *)((int)command + 8)),local_c,
                         *(int *)(*(int *)((int)command + 0x17) + 0x1d));
      DArrayDestroy(pDVar14);
      return;
    case 0x15:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar15 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar15 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        pDVar14 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar15,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_ECX_01;
      }
      else {
        iVar23 = *(int *)((int)command + 0xf);
        pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar24 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_ECX;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(pDVar14,puVar7 + sVar24 * 2 + iVar23);
            sVar24 = sVar24 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar21 = extraout_ECX_00;
          } while (sVar24 < (short)(*(uint *)((int)command + 0x13) >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar21 >> 8),*(undefined1 *)((int)command + 8)),
                         &pDVar14->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)command + 8))
                         ,&pDVar14->flags,0);
      DArrayDestroy(pDVar14);
      return;
    case 0x16:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar15 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar15 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar15,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_EDX_02;
      }
      else {
        iVar23 = *(int *)((int)command + 0xf);
        local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar24 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_EDX_00;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(local_c,puVar7 + sVar24 * 2 + iVar23);
            sVar24 = sVar24 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar21 = extraout_EDX_01;
          } while (sVar24 < (short)(*(uint *)((int)command + 0x13) >> 1));
        }
      }
      pDVar14 = local_c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar21 >> 8),*(undefined1 *)((int)command + 8)),
                         &local_c->flags,0);
      DArrayDestroy(pDVar14);
      return;
    case 0x17:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar15 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar15 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        pDVar14 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar15,unaff_EDI);
      }
      else {
        iVar23 = *(int *)((int)command + 0xf);
        pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar24 = 0;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(pDVar14,puVar7 + sVar24 * 2 + iVar23);
            sVar24 = sVar24 + 1;
          } while (sVar24 < (short)(*(uint *)((int)command + 0x13) >> 1));
        }
      }
      if (*(int *)(*(int *)((int)command + 0x17) + 0x1d) != 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)*(int *)((int)command + 0x17) >> 8),
                                    *(undefined1 *)((int)command + 8)),&pDVar14->flags,0);
        DArrayDestroy(pDVar14);
        return;
      }
      thunk_FUN_0044cd20((uint)*(byte *)((int)command + 8),&pDVar14->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                  *(undefined1 *)((int)command + 8)),&pDVar14->flags,0);
      DArrayDestroy(pDVar14);
      return;
    }
  }
  if (*(int *)((int)command + 0x13) != 0) {
    iVar23 = *(int *)((int)command + 0x17);
    iVar8 = *(int *)((int)command + 0xf);
    local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    sVar24 = 0;
    if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
      do {
        Library::DKW::TBL::DArrayAppend(local_c,(void *)(iVar23 + iVar8 + sVar24 * 2));
        sVar24 = sVar24 + 1;
      } while (sVar24 < (short)(*(uint *)((int)command + 0x13) >> 1));
    }
    pDVar14 = local_c;
    AddObjsToGroup(local_20,*(char *)((int)command + 8),0xfffe,&local_c->flags,
                   (undefined2 *)&local_1c);
    DArrayDestroy(pDVar14);
  }
  pDVar14 = local_30;
  if (((local_30 != (DArrayTy *)0x0) &&
      (pSVar15 = thunk_FUN_0042b760(*(char *)((int)command + 8),(ushort)local_1c),
      pSVar15 != (STGroupBoatC *)0x0)) && (pSVar15->field_001C != 0)) {
    if ((*(char *)((int)command + 0xe) == ')') && (**(char **)((int)command + 0x17) == '\x01')) {
      return;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pDVar16 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar15,unaff_EDI);
    AddObjsToGroup(local_20,*(char *)((int)command + 8),0xfffe,(uint *)pDVar16,
                   (undefined2 *)&local_1c);
    DArrayDestroy(pDVar16);
  }
  pSVar15 = thunk_FUN_0042b760(*(char *)((int)command + 8),(ushort)local_1c);
  if (pSVar15 == (STGroupBoatC *)0x0) {
    return;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STGroupBoatC::StartReceiveOrderSound(pSVar15,unaff_EDI);
  switch(*(undefined1 *)((int)command + 0xe)) {
  case 10:
    goto cf_common_exit_0043824D;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  case 0x14:
    iVar23 = STGroupBoatC::IsAgAtt(pSVar15,unaff_EDI);
    if (iVar23 != 0) {
      pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
      uStack_14 = **(undefined2 **)((int)command + 0x17);
      uStack_12 = (*(undefined2 **)((int)command + 0x17))[2];
      STGroupBoatC::sub_0049A500(pSVar15,(undefined2 *)0x0,(undefined2 *)0x0,auStack_10);
      Library::DKW::TBL::DArrayAppend(pDVar14,&uStack_14);
      uStack_d8 = 1;
      pDStack_dc = pDVar14;
      pSVar15->sub_00498D20(6,&pDStack_dc);
      DArrayDestroy(pDVar14);
      return;
    }
    uStack_4c = **(undefined2 **)((int)command + 0x17);
    uStack_4a = (*(undefined2 **)((int)command + 0x17))[2];
    STGroupBoatC::sub_0049A500(pSVar15,(undefined2 *)0x0,(undefined2 *)0x0,auStack_48);
    pSVar15->sub_00498D20(1,&uStack_4c);
    return;
  case 0x15:
    local_24 = 4 - (uint)**(byte **)((int)command + 0x17);
    pSVar15->sub_00498D20(7,&local_24);
    return;
  case 0x16:
    puVar7 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar7) {
    case 0:
    case 5:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar7 + 1),(int *)&local_8
                );
      if (local_8 == (STGameObjC *)0x0) {
        return;
      }
      pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,4,1);
      local_18 = *(undefined1 *)&local_8->field_0024;
      local_16 = local_8->field_0032;
      uVar12 = local_8->field_0020;
      if (uVar12 < 0x1af) {
        if (uVar12 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar12 != 0x14) {
          return;
        }
      }
      else {
        if (uVar12 < 1000) {
          return;
        }
        if (0x3e9 < uVar12) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      Library::DKW::TBL::DArrayAppend(pDVar14,&local_18);
      local_14c = (uint)(**(char **)((int)command + 0x17) != '\0');
      local_150 = 0;
      local_148 = pDVar14;
      pSVar15->sub_00498D20(2,&local_150);
      DArrayDestroy(pDVar14);
      return;
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar7 + 1),(int *)&local_8
                );
      if (local_8 != (STGameObjC *)0x0) {
        uStack_e4 = *(undefined1 *)&local_8->field_0024;
        uStack_e3 = local_8->field_0032;
        uStack_e1 = local_8->field_0018;
        pSVar15->sub_00498D20(0xf,&uStack_e4);
        return;
      }
      break;
    case 2:
      uStack_b0 = (ushort)(byte)puVar7[5];
      uStack_ae = (ushort)(byte)puVar7[6];
      uStack_ac = (ushort)(byte)puVar7[7];
      pSVar15->sub_00498D20(0xe,&uStack_b0);
      return;
    }
    break;
  case 0x17:
    puVar7 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar7) {
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar7 + 0x1d),
                 (int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar14,&local_8->field_0032);
        local_138 = 0;
        local_134 = pDVar14;
        pSVar15->sub_00498D20(5,&local_138);
        DArrayDestroy(pDVar14);
        return;
      }
      break;
    case 2:
      pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
      uStack_14 = *(undefined2 *)(*(int *)((int)command + 0x17) + 1);
      uStack_12 = *(undefined2 *)(*(int *)((int)command + 0x17) + 5);
      STGroupBoatC::sub_0049A500(pSVar15,(undefined2 *)0x0,(undefined2 *)0x0,auStack_10);
      Library::DKW::TBL::DArrayAppend(pDVar14,&uStack_14);
      STGroupBoatC::sub_0049A500(pSVar15,&uStack_14,&uStack_12,(undefined2 *)0x0);
      Library::DKW::TBL::DArrayAppend(pDVar14,&uStack_14);
      uStack_d8 = 0;
      pDStack_dc = pDVar14;
      pSVar15->sub_00498D20(6,&pDStack_dc);
      DArrayDestroy(pDVar14);
      return;
    case 3:
      sVar24 = *(short *)(puVar7 + 9);
      sVar5 = *(short *)(puVar7 + 5);
      sVar6 = *(short *)(puVar7 + 1);
      if (((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
         ((((-1 < sVar5 && ((sVar5 < g_worldGrid.sizeY && (-1 < sVar24)))) &&
           (sVar24 < g_worldGrid.sizeZ)) &&
          (pSVar18 = g_worldGrid.cells
                     [(int)sVar24 * (int)g_worldGrid.planeStride +
                      (int)sVar5 * (int)g_worldGrid.sizeX + (int)sVar6].objects[0],
          pSVar18 != (STWorldObject *)0x0)))) {
        pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar14,&pSVar18[1].field_0xe);
        uStack_d0 = 0;
        pDStack_cc = pDVar14;
        pSVar15->sub_00498D20(4,&uStack_d0);
        DArrayDestroy(pDVar14);
        return;
      }
      break;
    case 10:
      uStack_d0 = 1;
      pDStack_cc = (DArrayTy *)0x0;
      pSVar15->sub_00498D20(4,&uStack_d0);
      return;
    case 0x10:
      uStack_b8 = *(undefined2 *)(puVar7 + 1);
      uStack_b6 = *(undefined2 *)(puVar7 + 5);
      uStack_b4 = *(undefined2 *)(puVar7 + 9);
      pSVar15->sub_00498D20(0x14,&uStack_b8);
      return;
    case 0x13:
      sVar24 = *(short *)(puVar7 + 1);
      sVar5 = *(short *)(puVar7 + 9);
      sVar6 = *(short *)(puVar7 + 5);
      if ((((-1 < sVar24) && (sVar24 < g_worldGrid.sizeX)) &&
          ((-1 < sVar6 &&
           (((sVar6 < g_worldGrid.sizeY && (-1 < sVar5)) && (sVar5 < g_worldGrid.sizeZ)))))) &&
         (g_worldGrid.cells
          [(int)sVar5 * (int)g_worldGrid.planeStride + (int)sVar6 * (int)g_worldGrid.sizeX +
           (int)sVar24].objects[0] != (STWorldObject *)0x0)) {
        uStack_98 = 0;
        uStack_94 = *(undefined2 *)(puVar7 + 1);
        uStack_92 = *(undefined2 *)(puVar7 + 5);
        uStack_90 = *(undefined2 *)(puVar7 + 9);
        pSVar15->sub_00498D20(0x11,&uStack_98);
        return;
      }
      break;
    case 0x14:
      uStack_98 = 1;
      uStack_90 = 0;
      uStack_92 = 0;
      uStack_94 = 0;
      pSVar15->sub_00498D20(0x11,&uStack_98);
      return;
    case 0x18:
      uStack_a8 = *(undefined2 *)(puVar7 + 1);
      uStack_a6 = *(undefined2 *)(puVar7 + 5);
      uStack_a4 = *(undefined2 *)(puVar7 + 9);
      pSVar15->sub_00498D20(0x13,&uStack_a8);
      return;
    }
    break;
  case 0x18:
    puVar7 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar7) {
    case 1:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 1;
      break;
    case 2:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 2;
      break;
    case 3:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 4;
      break;
    case 4:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 5;
      break;
    case 5:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 3;
      break;
    case 6:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 0xfffffffd;
      break;
    case 7:
      uVar21 = *(undefined4 *)(puVar7 + 0xd);
      pSVar22 = pSVar15->vtable;
      uVar12 = (uint)(byte)puVar7[0x11];
      arg_2 = 0xfffffffe;
      break;
    case 8:
      pSVar15->vfunc_18(0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar22 = pSVar15->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar15);
      dVar19 = pSVar15->slot_20();
      (*pSVar22->vfunc_18)(pSVar15,0xffffffff,dVar19 + 1,dVar20);
      goto switchD_004384bc_default;
    case 10:
      pSVar22 = pSVar15->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar15);
      dVar19 = pSVar15->slot_20();
      (*pSVar22->vfunc_18)(pSVar15,0xffffffff,dVar19 - 1,dVar20);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar22 = pSVar15->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar15);
      iVar23 = dVar20 + 0x2d;
      dVar20 = pSVar15->slot_20();
      (*pSVar22->vfunc_18)(pSVar15,0xffffffff,dVar20,iVar23);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar22 = pSVar15->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar15);
      iVar23 = dVar20 - 0x2d;
      dVar20 = pSVar15->slot_20();
      (*pSVar22->vfunc_18)(pSVar15,0xffffffff,dVar20,iVar23);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar22->vfunc_18)(pSVar15,arg_2,uVar12,uVar21);
switchD_004384bc_default:
    puVar7 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uStack_4c = *(undefined2 *)(puVar7 + 1);
      uStack_4a = *(undefined2 *)(puVar7 + 5);
      STGroupBoatC::sub_0049A500(pSVar15,(undefined2 *)0x0,(undefined2 *)0x0,auStack_48);
      pSVar15->sub_00498D20(1,&uStack_4c);
      return;
    case 8:
cf_common_exit_0043824D:
      pSVar15->sub_00498D20(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      STGroupBoatC::sub_0049A500(pSVar15,&uStack_4c,&uStack_4a,auStack_48);
      pSVar15->sub_00498D20(1,&uStack_4c);
      return;
    }
    break;
  case 0x19:
    puVar10 = *(undefined2 **)((int)command + 0x17);
    uStack_124 = *puVar10;
    uStack_122 = puVar10[2];
    uStack_120 = puVar10[4];
    uStack_11e = 0xffffffff;
    pSVar15->sub_00498D20(0xd,&uStack_124);
    return;
  case 0x1a:
    pcVar9 = *(char **)((int)command + 0x17);
    if (*pcVar9 == '\x01') {
      uStack_5c = 2;
      sStack_58 = 0;
      sStack_56 = 0;
      sStack_54 = 0;
      uStack_52 = *(undefined2 *)(pcVar9 + 1);
      uStack_50 = *(undefined2 *)(pcVar9 + 5);
      uStack_4e = *(undefined2 *)(pcVar9 + 9);
      pSVar15->sub_00498D20(0x10,&uStack_5c);
      return;
    }
    if (*pcVar9 == '\x02') {
      sStack_58 = *(short *)(pcVar9 + 1);
      sStack_56 = *(short *)(pcVar9 + 5);
      sStack_54 = *(short *)(pcVar9 + 9);
      if ((((-1 < sStack_58) && (sStack_58 < g_worldGrid.sizeX)) &&
          ((-1 < sStack_56 &&
           (((sStack_56 < g_worldGrid.sizeY && (-1 < sStack_54)) && (sStack_54 < g_worldGrid.sizeZ))
           )))) && ((pSVar18 = g_worldGrid.cells
                               [(int)sStack_54 * (int)g_worldGrid.planeStride +
                                (int)sStack_56 * (int)g_worldGrid.sizeX + (int)sStack_58].objects[0]
                    , pSVar18 != (STWorldObject *)0x0 && (pSVar18->value_20 == 1000)))) {
        iVar23 = pSVar18->GetObjectTypeId();
        if (iVar23 == 0x37) {
          uStack_5c = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
        }
        else {
          iVar23 = pSVar18->GetObjectTypeId();
          if (iVar23 != 0x6c) {
            return;
          }
          iVar23 = thunk_FUN_004e9960(pSVar18,(undefined4 *)&uStack_52,(undefined4 *)&uStack_50,
                                      (undefined4 *)&uStack_4e);
          if (iVar23 != 1) {
            return;
          }
          uStack_5c = 1;
        }
        pSVar15->sub_00498D20(0x10,&uStack_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar9 = *(char **)((int)command + 0x17);
    sStack_a0 = *(short *)(pcVar9 + 1);
    sVar24 = *(short *)(pcVar9 + 5);
    sVar5 = *(short *)(pcVar9 + 3);
    if (sStack_a0 < 0) {
      return;
    }
    if (g_worldGrid.sizeX <= sStack_a0) {
      return;
    }
    if (sVar5 < 0) {
      return;
    }
    if (g_worldGrid.sizeY <= sVar5) {
      return;
    }
    if (sVar24 < 0) {
      return;
    }
    if (g_worldGrid.sizeZ <= sVar24) {
      return;
    }
    pSVar18 = g_worldGrid.cells
              [(int)sVar5 * (int)g_worldGrid.sizeX + (int)sVar24 * (int)g_worldGrid.planeStride +
               (int)sStack_a0].objects[0];
    if (pSVar18 == (STWorldObject *)0x0) {
      return;
    }
    if (*pcVar9 == '\x03') {
      uStack_9e = *(undefined2 *)(pcVar9 + 3);
      uStack_9c = *(undefined2 *)(pcVar9 + 5);
      pSVar15->sub_00498D20(0x12,&sStack_a0);
      return;
    }
    if (*pcVar9 == '\x01') {
      pDVar14 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      local_c = pDVar14;
      Library::DKW::TBL::DArrayAppend(pDVar14,&pSVar18[1].field_0xe);
      local_114 = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = pDVar14;
      local_100 = pSVar18->GetObjectTypeId();
      local_fc = 1;
      local_f8 = (DArrayTy *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar15->sub_00498D20(8,&local_114);
      DArrayDestroy(local_c);
      return;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar15,unaff_EDI);
    dVar20 = local_c->count;
    local_154 = dVar20;
    local_6c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_34 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_2c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_30 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (ushort *)0x0;
    local_d4 = 0;
    local_28 = (DArrayTy *)0x0;
    if ((int)dVar20 < 1) {
cf_common_exit_00437E03:
      iVar23 = *(int *)((int)command + 0x17);
      uStack_c0 = *(undefined2 *)(iVar23 + 1);
      uStack_be = *(undefined2 *)(iVar23 + 3);
      uStack_bc = *(undefined2 *)(iVar23 + 5);
      pSVar15->sub_00498D20(10,&uStack_c0);
      pDVar14 = local_30;
    }
    else {
      uVar12 = 0;
      do {
        DArrayGetElement(local_c,uVar12,local_118);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar13 = GetObjPtr(g_allPlayers_007FA174,pSVar15->field_0024,local_118._0_2_,CASE_1);
        iVar23 = (*pSVar13->vtable->vfunc_2C)();
        if ((((iVar23 == 8) || (iVar23 = (*pSVar13->vtable->vfunc_2C)(), iVar23 == 0x14)) ||
            (iVar23 = (*pSVar13->vtable->vfunc_2C)(), iVar23 == 0x1a)) &&
           (iVar23 = thunk_FUN_0045ff10(pSVar13), iVar23 == 0xc)) {
          puVar17 = (byte *)thunk_FUN_0048dc90(pSVar13,local_1b8);
          puVar25 = (byte *)(&local_1fc);
          memmove(puVar25, puVar17, 0x42); /* compiler REP MOVS byte copy */
          iVar23 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,local_1f6,(int *)&local_40);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar23 == 0) && (iVar23 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar23)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar14 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (ushort *)((int)local_68 + 1);
              pDVar14 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar23 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x14ca,0,0,
                                            "%s",
                                            "STAllPlayersC::CmdToPlsObj, CMDTY_RC - unknown resource type");
                if (iVar23 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar14 = local_2c;
            }
            Library::DKW::TBL::DArrayAppend(pDVar14,(void *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = (DArrayTy *)((int)local_28 + 1);
        uVar12 = (uint)(short)local_28;
      } while ((int)uVar12 < (int)local_154);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar23 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar23 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar23 = 2;
      }
LAB_00437cb5:
      local_114 = 0;
      if (iVar23 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar23 == 1) {
        local_110 = local_34;
        iVar23 = LookupRecordByte(pSVar15->field_0024);
        local_100 = (-(uint)((char)iVar23 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar23 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pDVar14 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      iVar23 = *(int *)((int)command + 0x17);
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar24 = *(short *)(iVar23 + 5);
      sVar5 = *(short *)(iVar23 + 3);
      sVar6 = *(short *)(iVar23 + 1);
      if (((((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) || (sVar5 < 0)) ||
          ((g_worldGrid.sizeY <= sVar5 || (sVar24 < 0)))) || (g_worldGrid.sizeZ <= sVar24)) {
        pSVar18 = (STWorldObject *)0x0;
      }
      else {
        pSVar18 = g_worldGrid.cells
                  [(int)sVar24 * (int)g_worldGrid.planeStride + (int)sVar5 * (int)g_worldGrid.sizeX
                   + (int)sVar6].objects[0];
      }
      Library::DKW::TBL::DArrayAppend(local_30,&pSVar18[1].field_0xe);
      local_f8 = pDVar14;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar15->sub_00498D20(8,&local_114);
    }
    DArrayDestroy(local_c);
    DArrayDestroy(local_6c);
    DArrayDestroy(local_34);
    DArrayDestroy(local_2c);
    DArrayDestroy(pDVar14);
    return;
  case 0x21:
    pcVar9 = *(char **)((int)command + 0x17);
    cVar1 = *pcVar9;
    if (cVar1 == '\x01') {
      local_64 = *(undefined4 *)(pcVar9 + 1);
      pSVar15->sub_00498D20(0x15,&local_64);
      return;
    }
    if (cVar1 == '\x03') {
      uStack_c4 = 0xffff;
      uStack_c6 = 0xffff;
      uStack_c8 = 0xffff;
      pSVar15->sub_00498D20(0xc,&uStack_c8);
      return;
    }
    if (cVar1 == '\x04') {
      local_60 = *(undefined4 *)(pcVar9 + 1);
      pSVar15->sub_00498D20(0xb,&local_60);
      return;
    }
    break;
  case 0x23:
    puVar17 = (byte *)(*(undefined4 **)((int)command + 0x17));
    uStack_174 = *(undefined2 *)(puVar17 + 1);
    uStack_172 = *(undefined2 *)(puVar17 + 2);
    uStack_170 = *(undefined2 *)(puVar17 + 3);
    uStack_16e = *puVar17;
    uStack_16a = (uint)*(byte *)((int)command + 8);
    uStack_166 = 0;
    uStack_157 = 0xffff;
    pSVar15->sub_00498D20(9,&uStack_174);
    return;
  case 0x28:
    if (**(char **)((int)command + 0x17) == '\0') {
      STGroupBoatC::GenSwitch(pSVar15,0);
    }
    else if (**(char **)((int)command + 0x17) == '\x01') {
      STGroupBoatC::GenSwitch(pSVar15,1);
      return;
    }
    break;
  case 0x29:
    if (**(char **)((int)command + 0x17) != '\0') {
      if (pDVar14 == (DArrayTy *)0x0) {
        return;
      }
      local_8c.field_0010 = 0x5d98;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      local_74 = (DArrayTy *)pSVar15->field_0029;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pDVar14->flags)(&local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    puVar7 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar7) {
    case 1:
    case 2:
      local_14c = (uint)(puVar7[3] != '\x01');
      sVar24 = 0;
      local_150 = 0;
      local_148 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,4,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar23 = 0;
        do {
          Library::DKW::TBL::DArrayAppend(local_148,puVar7 + iVar23 * 4 + 4);
          sVar24 = sVar24 + 1;
          iVar23 = (int)sVar24;
        } while (iVar23 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      pSVar15->sub_00498D20(2,&local_150);
      DArrayDestroy(local_148);
      return;
    case 3:
      sVar24 = 0;
      local_138 = 0;
      local_134 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
      if (*(short *)(puVar7 + 1) != 0) {
        iVar23 = 0;
        do {
          Library::DKW::TBL::DArrayAppend(local_134,puVar7 + iVar23 * 2 + 4);
          sVar24 = sVar24 + 1;
          iVar23 = (int)sVar24;
        } while (iVar23 < (int)(uint)*(ushort *)(puVar7 + 1));
      }
      pSVar15->sub_00498D20(5,&local_138);
      DArrayDestroy(local_134);
      return;
    case 4:
      break;
    default:
      iVar23 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1427,0,0,"%s",
                                  "STAllPlayersC::CmdToPlsObj CMDTY_LPTR");
      if (iVar23 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

