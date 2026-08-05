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
  short sVar4;
  short sVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  code *pcVar10;
  undefined2 uVar11;
  short sVar12;
  uint uVar13;
  STGameObjC *pSVar14;
  DArrayTy *pDVar15;
  STGroupBoatC *pSVar16;
  DArrayTy *pDVar17;
  byte *puVar18;
  STWorldObject *pSVar19;
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
  ushort uVar23;
  int iVar24;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  byte *puVar25;
  undefined2 arg_1;
  undefined2 arg_2;
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
  uVar23 = *(ushort *)((int)command + 10);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_38 = CONCAT22((short)((uint)this >> 0x10),uVar23);
  local_8 = nullptr;
  uVar13 = *(uint *)((int)command + 10) >> 0x10;
  pDVar15 = *(DArrayTy **)&g_packedRecords_A62x8[(byte)bVar1].field_0x1;
  local_30 = pDVar15;
  local_20 = this;
  if (uVar13 != 0) {
    if (uVar13 != 1) {
      if (uVar13 != 2) {
        return;
      }
      if (uVar23 == 0xffff) {
        return;
      }
      pSVar14 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar23,CASE_3);
      if (pSVar14 == nullptr) {
        return;
      }
      if (*(char *)((int)command + 0xe) != '\x15') {
        if (*(char *)((int)command + 0xe) != '*') {
          return;
        }
        thunk_FUN_006270e0(pSVar14,0x2a,command);
        return;
      }
      local_24 = 4 - (uint)**(byte **)((int)command + 0x17);
      thunk_FUN_006270e0(pSVar14,0x15,(undefined1 *)&local_24);
      return;
    }
    if (uVar23 == 0xffff) {
      return;
    }
    local_8 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar23,CASE_1);
    if (local_8 == nullptr) {
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
      uVar23 = local_68[2];
      uVar2 = *local_68;
      local_34 = (DArrayTy *)(uint)uVar2;
      uVar3 = local_68[4];
      local_2c = (DArrayTy *)(uint)uVar3;
      local_6c = (DArrayTy *)(int)(short)uVar23;
      local_30 = (DArrayTy *)(int)(short)uVar3;
      iVar24 = (int)(short)uVar2;
      if ((STGridAt3D(g_pathingGrid, iVar24, local_6c, local_30) != 0) &&
         ((((((((short)uVar2 < 0 || (g_worldGrid.sizeX <= (short)uVar2)) || ((short)uVar23 < 0)) ||
             ((g_worldGrid.sizeY <= (short)uVar23 || ((short)uVar3 < 0)))) ||
            (g_worldGrid.sizeZ <= (short)uVar3)) ||
           (STGridAt3D(g_worldGrid, iVar24, local_6c, local_30).objects[0] ==
            nullptr)) && (local_28 = local_2c, (short)uVar3 < 5)))) {
        while( true ) {
          sVar12 = (short)local_28;
          if (STGridAt3D(g_pathingGrid, iVar24, local_6c, sVar12) == 0) break;
          if (((((-1 < (short)uVar2) && ((short)uVar2 < g_worldGrid.sizeX)) &&
               ((-1 < (short)uVar23 &&
                ((((short)uVar23 < g_worldGrid.sizeY && (-1 < sVar12)) &&
                 (sVar12 < g_worldGrid.sizeZ)))))) &&
              (STGridAt3D(g_worldGrid, iVar24, uVar23, sVar12).objects[0] !=
               nullptr)) ||
             (local_28 = (DArrayTy *)((int)&local_28->flags + 1), 4 < (short)local_28))
          goto cf_common_exit_00437191;
        }
        *(int *)(local_68 + 4) = (int)sVar12;
      }
cf_common_exit_00437191:
      local_8c.field_0014 = command;
      local_8->GetMessage(&local_8c);
      return;
    case 0x29:
      if (**(char **)((int)command + 0x17) == '\0') {
        if (pDVar15 == nullptr) {
          return;
        }
        pDVar17 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar17,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)((uint)local_8c.field_0014._2_2_ << 0x10);
      }
      else {
        if (pDVar15 == nullptr) {
          return;
        }
        pDVar17 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar17,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      }
      local_8c.field_0010 = 0x5d98;
      local_74 = pDVar17;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pDVar15->flags)(&local_8c);
      DArrayDestroy(pDVar17);
      return;
    }
  }
  if (uVar23 == 0xffff) {
    return;
  }
  local_1c = local_38;
  if (*(char *)((int)command + 0xe) == '\x17') {
    puVar6 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar6) {
    case 0x11:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar16 = thunk_FUN_0042b760(bVar1,uVar23);
        if (pSVar16 == nullptr) {
          return;
        }
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar16);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar13 = extraout_ECX_04;
      }
      else {
        iVar24 = *(int *)((int)command + 0xf);
        local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        sVar12 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar13 = extraout_ECX_03;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(local_c,puVar6 + sVar12 * 2 + iVar24);
            sVar12 = sVar12 + 1;
            uVar13 = *(uint *)((int)command + 0x13) >> 1;
          } while (sVar12 < (short)uVar13);
        }
      }
      pDVar15 = local_c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar13 >> 8),*(undefined1 *)((int)command + 8)),local_c,
                         *(int *)(*(int *)((int)command + 0x17) + 0x1d));
      DArrayDestroy(pDVar15);
      return;
    case 0x15:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar16 = thunk_FUN_0042b760(bVar1,uVar23);
        if (pSVar16 == nullptr) {
          return;
        }
        pDVar15 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar16);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_ECX_01;
      }
      else {
        iVar24 = *(int *)((int)command + 0xf);
        pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        sVar12 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_ECX;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(pDVar15,puVar6 + sVar12 * 2 + iVar24);
            sVar12 = sVar12 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar21 = extraout_ECX_00;
          } while (sVar12 < (short)(*(uint *)((int)command + 0x13) >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar21 >> 8),*(undefined1 *)((int)command + 8)),
                         &pDVar15->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)((int)command + 8))
                         ,&pDVar15->flags,0);
      DArrayDestroy(pDVar15);
      return;
    case 0x16:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar16 = thunk_FUN_0042b760(bVar1,uVar23);
        if (pSVar16 == nullptr) {
          return;
        }
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar16);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_EDX_02;
      }
      else {
        iVar24 = *(int *)((int)command + 0xf);
        local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        sVar12 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_EDX_00;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(local_c,puVar6 + sVar12 * 2 + iVar24);
            sVar12 = sVar12 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar21 = extraout_EDX_01;
          } while (sVar12 < (short)(*(uint *)((int)command + 0x13) >> 1));
        }
      }
      pDVar15 = local_c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar21 >> 8),*(undefined1 *)((int)command + 8)),
                         &local_c->flags,0);
      DArrayDestroy(pDVar15);
      return;
    case 0x17:
      if (*(int *)((int)command + 0x13) == 0) {
        pSVar16 = thunk_FUN_0042b760(bVar1,uVar23);
        if (pSVar16 == nullptr) {
          return;
        }
        pDVar15 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar16);
      }
      else {
        iVar24 = *(int *)((int)command + 0xf);
        pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        sVar12 = 0;
        if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(pDVar15,puVar6 + sVar12 * 2 + iVar24);
            sVar12 = sVar12 + 1;
          } while (sVar12 < (short)(*(uint *)((int)command + 0x13) >> 1));
        }
      }
      if (*(int *)(*(int *)((int)command + 0x17) + 0x1d) != 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)*(int *)((int)command + 0x17) >> 8),
                                    *(undefined1 *)((int)command + 8)),&pDVar15->flags,0);
        DArrayDestroy(pDVar15);
        return;
      }
      thunk_FUN_0044cd20((uint)*(byte *)((int)command + 8),&pDVar15->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                  *(undefined1 *)((int)command + 8)),&pDVar15->flags,0);
      DArrayDestroy(pDVar15);
      return;
    }
  }
  if (*(int *)((int)command + 0x13) != 0) {
    iVar24 = *(int *)((int)command + 0x17);
    iVar7 = *(int *)((int)command + 0xf);
    local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    sVar12 = 0;
    if (0 < (short)(*(uint *)((int)command + 0x13) >> 1)) {
      do {
        Library::DKW::TBL::DArrayAppend(local_c,(void *)(iVar24 + iVar7 + sVar12 * 2));
        sVar12 = sVar12 + 1;
      } while (sVar12 < (short)(*(uint *)((int)command + 0x13) >> 1));
    }
    pDVar15 = local_c;
    AddObjsToGroup(local_20,*(char *)((int)command + 8),0xfffe,&local_c->flags,
                   (undefined2 *)&local_1c);
    DArrayDestroy(pDVar15);
  }
  pDVar15 = local_30;
  if (((local_30 != nullptr) &&
      (pSVar16 = thunk_FUN_0042b760(*(char *)((int)command + 8),(ushort)local_1c),
      pSVar16 != nullptr)) && (pSVar16->field_001C != 0)) {
    if ((*(char *)((int)command + 0xe) == ')') && (**(char **)((int)command + 0x17) == '\x01')) {
      return;
    }
    pDVar17 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar16);
    AddObjsToGroup(local_20,*(char *)((int)command + 8),0xfffe,(uint *)pDVar17,
                   (undefined2 *)&local_1c);
    DArrayDestroy(pDVar17);
  }
  pSVar16 = thunk_FUN_0042b760(*(char *)((int)command + 8),(ushort)local_1c);
  if (pSVar16 == nullptr) {
    return;
  }
  STGroupBoatC::StartReceiveOrderSound(pSVar16);
  switch(*(undefined1 *)((int)command + 0xe)) {
  case 10:
    goto cf_common_exit_0043824D;
  case 0x14:
    iVar24 = STGroupBoatC::IsAgAtt(pSVar16);
    if (iVar24 != 0) {
      pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
      uStack_14 = **(undefined2 **)((int)command + 0x17);
      uStack_12 = (*(undefined2 **)((int)command + 0x17))[2];
      STGroupBoatC::sub_0049A500(pSVar16,nullptr,nullptr,auStack_10);
      Library::DKW::TBL::DArrayAppend(pDVar15,&uStack_14);
      uStack_d8 = 1;
      pDStack_dc = pDVar15;
      pSVar16->sub_00498D20(6,(short)&pDStack_dc);
      DArrayDestroy(pDVar15);
      return;
    }
    uStack_4c = **(undefined2 **)((int)command + 0x17);
    uStack_4a = (*(undefined2 **)((int)command + 0x17))[2];
    STGroupBoatC::sub_0049A500(pSVar16,nullptr,nullptr,auStack_48);
    pSVar16->sub_00498D20(1,(short)&uStack_4c);
    return;
  case 0x15:
    local_24 = 4 - (uint)**(byte **)((int)command + 0x17);
    pSVar16->sub_00498D20(7,(short)&local_24);
    return;
  case 0x16:
    puVar6 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar6) {
    case 0:
    case 5:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar6 + 1),(int *)&local_8
                );
      if (local_8 == nullptr) {
        return;
      }
      pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
      local_18 = *(undefined1 *)&local_8->field_0024;
      local_16 = local_8->field_0032;
      uVar13 = local_8->field_0020;
      if (uVar13 < 0x1af) {
        if (uVar13 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar13 != 0x14) {
          return;
        }
      }
      else {
        if (uVar13 < 1000) {
          return;
        }
        if (0x3e9 < uVar13) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      Library::DKW::TBL::DArrayAppend(pDVar15,&local_18);
      local_14c = (uint)(**(char **)((int)command + 0x17) != '\0');
      local_150 = 0;
      local_148 = pDVar15;
      pSVar16->sub_00498D20(2,(short)&local_150);
      DArrayDestroy(pDVar15);
      return;
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar6 + 1),(int *)&local_8
                );
      if (local_8 != nullptr) {
        uStack_e4 = *(undefined1 *)&local_8->field_0024;
        uStack_e3 = local_8->field_0032;
        uStack_e1 = local_8->field_0018;
        pSVar16->sub_00498D20(0xf,(short)&uStack_e4);
        return;
      }
      break;
    case 2:
      uStack_b0 = (ushort)(byte)puVar6[5];
      uStack_ae = (ushort)(byte)puVar6[6];
      uStack_ac = (ushort)(byte)puVar6[7];
      pSVar16->sub_00498D20(0xe,(short)&uStack_b0);
      return;
    }
    break;
  case 0x17:
    puVar6 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar6) {
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(puVar6 + 0x1d),
                 (int *)&local_8);
      if (local_8 != nullptr) {
        pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar15,&local_8->field_0032);
        local_138 = 0;
        local_134 = pDVar15;
        pSVar16->sub_00498D20(5,(short)&local_138);
        DArrayDestroy(pDVar15);
        return;
      }
      break;
    case 2:
      pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,1,6,1);
      uStack_14 = *(undefined2 *)(*(int *)((int)command + 0x17) + 1);
      uStack_12 = *(undefined2 *)(*(int *)((int)command + 0x17) + 5);
      STGroupBoatC::sub_0049A500(pSVar16,nullptr,nullptr,auStack_10);
      Library::DKW::TBL::DArrayAppend(pDVar15,&uStack_14);
      STGroupBoatC::sub_0049A500(pSVar16,&uStack_14,&uStack_12,nullptr);
      Library::DKW::TBL::DArrayAppend(pDVar15,&uStack_14);
      uStack_d8 = 0;
      pDStack_dc = pDVar15;
      pSVar16->sub_00498D20(6,(short)&pDStack_dc);
      DArrayDestroy(pDVar15);
      return;
    case 3:
      sVar12 = *(short *)(puVar6 + 9);
      sVar4 = *(short *)(puVar6 + 5);
      sVar5 = *(short *)(puVar6 + 1);
      if (((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) &&
         ((((-1 < sVar4 && ((sVar4 < g_worldGrid.sizeY && (-1 < sVar12)))) &&
           (sVar12 < g_worldGrid.sizeZ)) &&
          (pSVar19 = STGridAt3D(g_worldGrid, sVar5, sVar4, sVar12).objects[0],
          pSVar19 != nullptr)))) {
        pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar15,&pSVar19[1].field_0xe);
        uStack_d0 = 0;
        pDStack_cc = pDVar15;
        pSVar16->sub_00498D20(4,(short)&uStack_d0);
        DArrayDestroy(pDVar15);
        return;
      }
      break;
    case 10:
      uStack_d0 = 1;
      pDStack_cc = nullptr;
      pSVar16->sub_00498D20(4,(short)&uStack_d0);
      return;
    case 0x10:
      uStack_b8 = *(undefined2 *)(puVar6 + 1);
      uStack_b6 = *(undefined2 *)(puVar6 + 5);
      uStack_b4 = *(undefined2 *)(puVar6 + 9);
      pSVar16->sub_00498D20(0x14,(short)&uStack_b8);
      return;
    case 0x13:
      sVar12 = *(short *)(puVar6 + 1);
      sVar4 = *(short *)(puVar6 + 9);
      sVar5 = *(short *)(puVar6 + 5);
      if ((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) &&
          ((-1 < sVar5 &&
           (((sVar5 < g_worldGrid.sizeY && (-1 < sVar4)) && (sVar4 < g_worldGrid.sizeZ)))))) &&
         (STGridAt3D(g_worldGrid, sVar12, sVar5, sVar4).objects[0] != nullptr)) {
        uStack_98 = 0;
        uStack_94 = *(undefined2 *)(puVar6 + 1);
        uStack_92 = *(undefined2 *)(puVar6 + 5);
        uStack_90 = *(undefined2 *)(puVar6 + 9);
        pSVar16->sub_00498D20(0x11,(short)&uStack_98);
        return;
      }
      break;
    case 0x14:
      uStack_98 = 1;
      uStack_90 = 0;
      uStack_92 = 0;
      uStack_94 = 0;
      pSVar16->sub_00498D20(0x11,(short)&uStack_98);
      return;
    case 0x18:
      uStack_a8 = *(undefined2 *)(puVar6 + 1);
      uStack_a6 = *(undefined2 *)(puVar6 + 5);
      uStack_a4 = *(undefined2 *)(puVar6 + 9);
      pSVar16->sub_00498D20(0x13,(short)&uStack_a8);
      return;
    }
    break;
  case 0x18:
    puVar6 = *(undefined1 **)((int)command + 0x17);
    arg_1 = SUB42(pSVar16,0);
    switch(*puVar6) {
    case 1:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 1;
      break;
    case 2:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 2;
      break;
    case 3:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 4;
      break;
    case 4:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 5;
      break;
    case 5:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 3;
      break;
    case 6:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 0xfffd;
      break;
    case 7:
      uVar11 = (undefined2)*(undefined4 *)(puVar6 + 0xd);
      pSVar22 = pSVar16->vtable;
      uVar23 = (ushort)(byte)puVar6[0x11];
      arg_2 = 0xfffe;
      break;
    case 8:
      (*pSVar16->vtable->vfunc_18)(arg_1,0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar22 = pSVar16->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar16);
      uVar11 = (undefined2)dVar20;
      dVar20 = pSVar16->slot_20();
      (*pSVar22->vfunc_18)(arg_1,0xffff,(short)dVar20 + 1,uVar11);
      goto switchD_004384bc_default;
    case 10:
      pSVar22 = pSVar16->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar16);
      uVar11 = (undefined2)dVar20;
      dVar20 = pSVar16->slot_20();
      (*pSVar22->vfunc_18)(arg_1,0xffff,(short)dVar20 + -1,uVar11);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar22 = pSVar16->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar16);
      sVar12 = (short)dVar20 + 0x2d;
      dVar20 = pSVar16->slot_20();
      (*pSVar22->vfunc_18)(arg_1,0xffff,(short)dVar20,sVar12);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar22 = pSVar16->vtable;
      dVar20 = (*pSVar22->slot_24)(pSVar16);
      sVar12 = (short)dVar20 + -0x2d;
      dVar20 = pSVar16->slot_20();
      (*pSVar22->vfunc_18)(arg_1,0xffff,(short)dVar20,sVar12);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar22->vfunc_18)(arg_1,arg_2,uVar23,uVar11);
switchD_004384bc_default:
    puVar6 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar6) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uStack_4c = *(undefined2 *)(puVar6 + 1);
      uStack_4a = *(undefined2 *)(puVar6 + 5);
      STGroupBoatC::sub_0049A500(pSVar16,nullptr,nullptr,auStack_48);
      pSVar16->sub_00498D20(1,(short)&uStack_4c);
      return;
    case 8:
cf_common_exit_0043824D:
      pSVar16->sub_00498D20(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      STGroupBoatC::sub_0049A500(pSVar16,&uStack_4c,&uStack_4a,auStack_48);
      pSVar16->sub_00498D20(1,(short)&uStack_4c);
      return;
    }
    break;
  case 0x19:
    puVar9 = *(undefined2 **)((int)command + 0x17);
    uStack_124 = *puVar9;
    uStack_122 = puVar9[2];
    uStack_120 = puVar9[4];
    uStack_11e = 0xffffffff;
    pSVar16->sub_00498D20(0xd,(short)&uStack_124);
    return;
  case 0x1a:
    pcVar8 = *(char **)((int)command + 0x17);
    if (*pcVar8 == '\x01') {
      uStack_5c = 2;
      sStack_58 = 0;
      sStack_56 = 0;
      sStack_54 = 0;
      uStack_52 = *(undefined2 *)(pcVar8 + 1);
      uStack_50 = *(undefined2 *)(pcVar8 + 5);
      uStack_4e = *(undefined2 *)(pcVar8 + 9);
      pSVar16->sub_00498D20(0x10,(short)&uStack_5c);
      return;
    }
    if (*pcVar8 == '\x02') {
      sStack_58 = *(short *)(pcVar8 + 1);
      sStack_56 = *(short *)(pcVar8 + 5);
      sStack_54 = *(short *)(pcVar8 + 9);
      if ((((-1 < sStack_58) && (sStack_58 < g_worldGrid.sizeX)) &&
          ((-1 < sStack_56 &&
           (((sStack_56 < g_worldGrid.sizeY && (-1 < sStack_54)) && (sStack_54 < g_worldGrid.sizeZ))
           )))) && ((pSVar19 = STGridAt3D(g_worldGrid, sStack_58, sStack_56, sStack_54).objects[0]
                    , pSVar19 != nullptr && (pSVar19->value_20 == 1000)))) {
        iVar24 = pSVar19->GetObjectTypeId();
        if (iVar24 == 0x37) {
          uStack_5c = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          uStack_4e = 0;
        }
        else {
          iVar24 = pSVar19->GetObjectTypeId();
          if (iVar24 != 0x6c) {
            return;
          }
          iVar24 = thunk_FUN_004e9960(pSVar19,(undefined4 *)&uStack_52,(undefined4 *)&uStack_50,
                                      (undefined4 *)&uStack_4e);
          if (iVar24 != 1) {
            return;
          }
          uStack_5c = 1;
        }
        pSVar16->sub_00498D20(0x10,(short)&uStack_5c);
        return;
      }
    }
    break;
  case 0x1f:
    pcVar8 = *(char **)((int)command + 0x17);
    sStack_a0 = *(short *)(pcVar8 + 1);
    sVar12 = *(short *)(pcVar8 + 5);
    sVar4 = *(short *)(pcVar8 + 3);
    if (sStack_a0 < 0) {
      return;
    }
    if (g_worldGrid.sizeX <= sStack_a0) {
      return;
    }
    if (sVar4 < 0) {
      return;
    }
    if (g_worldGrid.sizeY <= sVar4) {
      return;
    }
    if (sVar12 < 0) {
      return;
    }
    if (g_worldGrid.sizeZ <= sVar12) {
      return;
    }
    pSVar19 = STGridAt3D(g_worldGrid, sStack_a0, sVar4, sVar12).objects[0];
    if (pSVar19 == nullptr) {
      return;
    }
    if (*pcVar8 == '\x03') {
      uStack_9e = *(undefined2 *)(pcVar8 + 3);
      uStack_9c = *(undefined2 *)(pcVar8 + 5);
      pSVar16->sub_00498D20(0x12,(short)&sStack_a0);
      return;
    }
    if (*pcVar8 == '\x01') {
      pDVar15 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
      local_c = pDVar15;
      Library::DKW::TBL::DArrayAppend(pDVar15,&pSVar19[1].field_0xe);
      local_114 = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = pDVar15;
      local_100 = pSVar19->GetObjectTypeId();
      local_fc = 1;
      local_f8 = nullptr;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar16->sub_00498D20(8,(short)&local_114);
      DArrayDestroy(local_c);
      return;
    }
    local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar16);
    dVar20 = local_c->count;
    local_154 = dVar20;
    local_6c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    local_34 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    local_2c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    local_30 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    local_3c = 0;
    local_68 = nullptr;
    local_d4 = 0;
    local_28 = nullptr;
    if ((int)dVar20 < 1) {
cf_common_exit_00437E03:
      iVar24 = *(int *)((int)command + 0x17);
      uStack_c0 = *(undefined2 *)(iVar24 + 1);
      uStack_be = *(undefined2 *)(iVar24 + 3);
      uStack_bc = *(undefined2 *)(iVar24 + 5);
      pSVar16->sub_00498D20(10,(short)&uStack_c0);
      pDVar15 = local_30;
    }
    else {
      uVar13 = 0;
      do {
        DArrayGetElement(local_c,uVar13,local_118);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar14 = GetObjPtr(g_allPlayers_007FA174,pSVar16->field_0024,local_118._0_2_,CASE_1);
        iVar24 = (*pSVar14->vtable->vfunc_2C)();
        if ((((iVar24 == 8) || (iVar24 = (*pSVar14->vtable->vfunc_2C)(), iVar24 == 0x14)) ||
            (iVar24 = (*pSVar14->vtable->vfunc_2C)(), iVar24 == 0x1a)) &&
           (iVar24 = thunk_FUN_0045ff10(pSVar14), iVar24 == 0xc)) {
          puVar18 = (byte *)thunk_FUN_0048dc90(pSVar14,local_1b8);
          puVar25 = (byte *)(&local_1fc);
          memmove(puVar25, puVar18, 0x42); /* compiler REP MOVS byte copy */
          iVar24 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,local_1f6,(int *)&local_40);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar24 == 0) && (iVar24 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar24)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar15 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (ushort *)((int)local_68 + 1);
              pDVar15 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar24 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x14ca,0,0,
                                            "%s",
                                            "STAllPlayersC::CmdToPlsObj, CMDTY_RC - unknown resource type");
                if (iVar24 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar15 = local_2c;
            }
            Library::DKW::TBL::DArrayAppend(pDVar15,(void *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = (DArrayTy *)((int)local_28 + 1);
        uVar13 = (uint)(short)local_28;
      } while ((int)uVar13 < (int)local_154);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar24 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar24 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar24 = 2;
      }
LAB_00437cb5:
      local_114 = 0;
      if (iVar24 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar24 == 1) {
        local_110 = local_34;
        iVar24 = LookupRecordByte(pSVar16->field_0024);
        local_100 = (-(uint)((char)iVar24 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar24 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pDVar15 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      iVar24 = *(int *)((int)command + 0x17);
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar12 = *(short *)(iVar24 + 5);
      sVar4 = *(short *)(iVar24 + 3);
      sVar5 = *(short *)(iVar24 + 1);
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar4 < 0)) ||
          ((g_worldGrid.sizeY <= sVar4 || (sVar12 < 0)))) || (g_worldGrid.sizeZ <= sVar12)) {
        pSVar19 = nullptr;
      }
      else {
        pSVar19 = STGridAt3D(g_worldGrid, sVar5, sVar4, sVar12).objects[0];
      }
      Library::DKW::TBL::DArrayAppend(local_30,&pSVar19[1].field_0xe);
      local_f8 = pDVar15;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar16->sub_00498D20(8,(short)&local_114);
    }
    DArrayDestroy(local_c);
    DArrayDestroy(local_6c);
    DArrayDestroy(local_34);
    DArrayDestroy(local_2c);
    DArrayDestroy(pDVar15);
    return;
  case 0x21:
    pcVar8 = *(char **)((int)command + 0x17);
    cVar1 = *pcVar8;
    if (cVar1 == '\x01') {
      local_64 = *(undefined4 *)(pcVar8 + 1);
      pSVar16->sub_00498D20(0x15,(short)&local_64);
      return;
    }
    if (cVar1 == '\x03') {
      uStack_c4 = 0xffff;
      uStack_c6 = 0xffff;
      uStack_c8 = 0xffff;
      pSVar16->sub_00498D20(0xc,(short)&uStack_c8);
      return;
    }
    if (cVar1 == '\x04') {
      local_60 = *(undefined4 *)(pcVar8 + 1);
      pSVar16->sub_00498D20(0xb,(short)&local_60);
      return;
    }
    break;
  case 0x23:
    puVar18 = (byte *)(*(undefined4 **)((int)command + 0x17));
    uStack_174 = *(undefined2 *)(puVar18 + 1);
    uStack_172 = *(undefined2 *)(puVar18 + 2);
    uStack_170 = *(undefined2 *)(puVar18 + 3);
    uStack_16e = *puVar18;
    uStack_16a = (uint)*(byte *)((int)command + 8);
    uStack_166 = 0;
    uStack_157 = 0xffff;
    pSVar16->sub_00498D20(9,(short)&uStack_174);
    return;
  case 0x28:
    if (**(char **)((int)command + 0x17) == '\0') {
      STGroupBoatC::GenSwitch(pSVar16,0);
    }
    else if (**(char **)((int)command + 0x17) == '\x01') {
      STGroupBoatC::GenSwitch(pSVar16,1);
      return;
    }
    break;
  case 0x29:
    if (**(char **)((int)command + 0x17) != '\0') {
      if (pDVar15 == nullptr) {
        return;
      }
      local_8c.field_0010 = 0x5d98;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      local_74 = (DArrayTy *)pSVar16->field_0029;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)pDVar15->flags)(&local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    puVar6 = *(undefined1 **)((int)command + 0x17);
    switch(*puVar6) {
    case 1:
    case 2:
      local_14c = (uint)(puVar6[3] != '\x01');
      sVar12 = 0;
      local_150 = 0;
      local_148 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
      if (*(short *)(puVar6 + 1) != 0) {
        iVar24 = 0;
        do {
          Library::DKW::TBL::DArrayAppend(local_148,puVar6 + iVar24 * 4 + 4);
          sVar12 = sVar12 + 1;
          iVar24 = (int)sVar12;
        } while (iVar24 < (int)(uint)*(ushort *)(puVar6 + 1));
      }
      pSVar16->sub_00498D20(2,(short)&local_150);
      DArrayDestroy(local_148);
      return;
    case 3:
      sVar12 = 0;
      local_138 = 0;
      local_134 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
      if (*(short *)(puVar6 + 1) != 0) {
        iVar24 = 0;
        do {
          Library::DKW::TBL::DArrayAppend(local_134,puVar6 + iVar24 * 2 + 4);
          sVar12 = sVar12 + 1;
          iVar24 = (int)sVar12;
        } while (iVar24 < (int)(uint)*(ushort *)(puVar6 + 1));
      }
      pSVar16->sub_00498D20(5,(short)&local_138);
      DArrayDestroy(local_134);
      return;
    case 4:
      break;
    default:
      iVar24 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1427,0,0,"%s",
                                  "STAllPlayersC::CmdToPlsObj CMDTY_LPTR");
      if (iVar24 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

