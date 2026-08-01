#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

void __thiscall STAllPlayersC::CmdToPlsObj(STAllPlayersC *this,STControlCommand *command)

{
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  STControlCommandPayload *pSVar6;
  code *pcVar7;
  uint uVar8;
  STGameObjC *pSVar9;
  DArrayTy *pDVar10;
  STGroupBoatC *pSVar11;
  DArrayTy *pDVar12;
  byte *puVar13;
  STWorldObject *pSVar14;
  dword dVar15;
  dword dVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_ECX_04;
  STGroupBoatCVTable *pSVar17;
  int iVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  short sVar19;
  short sVar20;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  byte *puVar21;
  undefined4 uVar22;
  STPackedValue32 arg_4;
  undefined4 local_1fc;
  AnonShape_005EFAE0_B406B78B *local_1f6;
  undefined4 local_1b8 [17];
  STGroupBoatOrderData9 orderData9;
  undefined4 local_150;
  uint local_14c;
  DArrayTy *local_148;
  undefined4 local_138;
  DArrayTy *local_134;
  STGroupBoatOrderDataD orderDataD;
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
  STGroupBoatOrderDataF orderDataF;
  STGroupBoatOrderData6 orderData6;
  int local_d4;
  STGroupBoatOrderData4 orderData4;
  STPosition16 orderPositionC;
  STPosition16 orderPositionA;
  STPosition16 orderPosition14;
  STGroupBoatOrderDataE orderDataE;
  STPosition16 orderPosition13;
  STPosition16 orderPosition12;
  STGroupBoatOrderData11 orderData11;
  AnonShape_0041AF40_F59F8577 local_8c;
  DArrayTy *local_74;
  DArrayTy *local_6c;
  STControlCommandPayload *local_68;
  STPackedValue32 local_64;
  STPackedValue32 local_60;
  STGroupBoatOrderData10 orderData10;
  STGroupBoatOrderData1 orderData;
  int *local_40;
  int local_3c;
  undefined4 local_38;
  DArrayTy *local_34;
  DArrayTy *local_30;
  DArrayTy *local_2c;
  uint local_28;
  int local_24;
  STAllPlayersC *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  STPosition16 targetPosition;
  DArrayTy *local_c;
  STGameObjC *local_8;
  char bVar1;

  bVar1 = command->playerId;
  uVar3 = command->objectId;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_38 = CONCAT22((short)((uint)this >> 0x10),uVar3);
  local_8 = (STGameObjC *)0x0;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar8._0_2_ = command->objectId;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar8._2_2_ = command->targetKind;
  uVar8 = uVar8 >> 0x10;
  puVar13 = (byte *)(*(undefined4 **)&g_playerRuntime[(byte)bVar1].field_0x1);
  local_30 = (DArrayTy *)puVar13;
  local_20 = this;
  if (uVar8 != 0) {
    if (uVar8 != 1) {
      if (uVar8 != 2) {
        return;
      }
      if (uVar3 == 0xffff) {
        return;
      }
      pSVar9 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar3,CASE_3);
      if (pSVar9 == (STGameObjC *)0x0) {
        return;
      }
      if (command->commandType != 0x15) {
        if (command->commandType != 0x2a) {
          return;
        }
        thunk_FUN_006270e0(pSVar9,0x2a,(undefined1 *)command);
        return;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_24 = 4 - (uint)(command->payload->packed).variant;
      thunk_FUN_006270e0(pSVar9,0x15,(undefined1 *)&local_24);
      return;
    }
    if (uVar3 == 0xffff) {
      return;
    }
    local_8 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar3,CASE_1);
    if (local_8 == (STGameObjC *)0x0) {
      return;
    }
    local_8c.field_0010 = 0x4401;
    switch(command->commandType) {
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
      local_68 = command->payload;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar20 = *(short *)((int)&(local_68->packed).value_01.words.high + 1);
      uVar3 = *(ushort *)local_68;
      local_34 = (DArrayTy *)(uint)uVar3;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar4 = *(ushort *)((int)&(local_68->packed).value_05.words.high + 1);
      local_2c = (DArrayTy *)(uint)uVar4;
      local_6c = (DArrayTy *)(int)sVar20;
      local_30 = (DArrayTy *)(int)(short)uVar4;
      iVar18 = (int)(short)uVar3;
      if ((g_pathingGrid.cells
           [(int)g_pathingGrid.planeStride * (int)local_30 + iVar18 +
            (int)g_pathingGrid.sizeX * (int)local_6c] != 0) &&
         ((((((((short)uVar3 < 0 || (g_worldGrid.sizeX <= (short)uVar3)) || (sVar20 < 0)) ||
             ((g_worldGrid.sizeY <= sVar20 || ((short)uVar4 < 0)))) ||
            (g_worldGrid.sizeZ <= (short)uVar4)) ||
           (g_worldGrid.cells
            [(int)g_worldGrid.sizeX * (int)local_6c +
             iVar18 + (int)g_worldGrid.planeStride * (int)local_30].objects[0] ==
            (STWorldObject *)0x0)) && (local_28 = (uint)local_2c, (short)uVar4 < 5)))) {
        while( true ) {
          sVar19 = (short)local_28;
          if (g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * (int)sVar19 + iVar18 +
               (int)g_pathingGrid.sizeX * (int)local_6c] == 0) break;
          if (((((-1 < (short)uVar3) && ((short)uVar3 < g_worldGrid.sizeX)) &&
               ((-1 < sVar20 &&
                (((sVar20 < g_worldGrid.sizeY && (-1 < sVar19)) && (sVar19 < g_worldGrid.sizeZ))))))
              && (g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar19 +
                   iVar18 + (int)g_worldGrid.sizeX * (int)sVar20].objects[0] != (STWorldObject *)0x0
                 )) || (local_28 = local_28 + 1, 4 < (short)local_28)) goto cf_common_exit_00437191;
        }
        *(int *)((int)&(local_68->packed).value_05 + 3) = (int)sVar19;
      }
cf_common_exit_00437191:
      local_8c.field_0014 = &command->unknown_00;
      local_8->GetMessage(&local_8c);
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x29:
      if ((command->payload->packed).variant == 0) {
        if (puVar13 == (undefined4 *)0x0) {
          return;
        }
        pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar10,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)((uint)local_8c.field_0014._2_2_ << 0x10);
      }
      else {
        if (puVar13 == (undefined4 *)0x0) {
          return;
        }
        pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar10,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      }
      local_8c.field_0010 = 0x5d98;
      local_74 = pDVar10;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar13)(&local_8c);
      DArrayDestroy(pDVar10);
      return;
    }
  }
  if (uVar3 == 0xffff) {
    return;
  }
  local_1c = local_38;
  if (command->commandType == 0x17) {
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar6->packed).variant) {
    case 0x11:
      if (command->secondaryPayloadSize == 0) {
        pSVar11 = thunk_FUN_0042b760(bVar1,uVar3);
        if (pSVar11 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar11,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_ECX_04;
      }
      else {
        dVar16 = command->primaryPayloadSize;
        local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar20 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar8 = extraout_ECX_03;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(local_c,(void *)((int)pSVar6 + sVar20 * 2 + dVar16));
            sVar20 = sVar20 + 1;
            uVar8 = command->secondaryPayloadSize >> 1;
          } while (sVar20 < (short)uVar8);
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar8 >> 8),command->playerId),local_c,
                         (command->payload->packed).value_1d);
      DArrayDestroy(local_c);
      return;
    case 0x15:
      if (command->secondaryPayloadSize == 0) {
        pSVar11 = thunk_FUN_0042b760(bVar1,uVar3);
        if (pSVar11 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        pDVar10 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar11,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_ECX_01;
      }
      else {
        dVar16 = command->primaryPayloadSize;
        pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar20 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_ECX;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(pDVar10,(void *)((int)pSVar6 + sVar20 * 2 + dVar16));
            sVar20 = sVar20 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar22 = extraout_ECX_00;
          } while (sVar20 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar22 >> 8),command->playerId),&pDVar10->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),command->playerId),&pDVar10->flags
                         ,0);
      DArrayDestroy(pDVar10);
      return;
    case 0x16:
      if (command->secondaryPayloadSize == 0) {
        pSVar11 = thunk_FUN_0042b760(bVar1,uVar3);
        if (pSVar11 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar11,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_EDX_02;
      }
      else {
        dVar16 = command->primaryPayloadSize;
        local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar20 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar22 = extraout_EDX_00;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(local_c,(void *)((int)pSVar6 + sVar20 * 2 + dVar16));
            sVar20 = sVar20 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar22 = extraout_EDX_01;
          } while (sVar20 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar22 >> 8),command->playerId),&local_c->flags,0);
      DArrayDestroy(local_c);
      return;
    case 0x17:
      if (command->secondaryPayloadSize == 0) {
        pSVar11 = thunk_FUN_0042b760(bVar1,uVar3);
        if (pSVar11 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        pDVar10 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar11,unaff_EDI);
      }
      else {
        dVar16 = command->primaryPayloadSize;
        pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar20 = 0;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::DArrayAppend(pDVar10,(void *)((int)pSVar6 + sVar20 * 2 + dVar16));
            sVar20 = sVar20 + 1;
          } while (sVar20 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((command->payload->packed).value_1d != 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)command->payload >> 8),command->playerId),
                           &pDVar10->flags,0);
        DArrayDestroy(pDVar10);
        return;
      }
      thunk_FUN_0044cd20((uint)command->playerId,&pDVar10->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),command->playerId),
                         &pDVar10->flags,0);
      DArrayDestroy(pDVar10);
      return;
    }
  }
  if (command->secondaryPayloadSize != 0) {
    pSVar6 = command->payload;
    dVar16 = command->primaryPayloadSize;
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    sVar20 = 0;
    if (0 < (short)(command->secondaryPayloadSize >> 1)) {
      do {
        Library::DKW::TBL::DArrayAppend(pDVar10,(void *)((int)pSVar6 + sVar20 * 2 + dVar16));
        sVar20 = sVar20 + 1;
      } while (sVar20 < (short)(command->secondaryPayloadSize >> 1));
    }
    AddObjsToGroup(local_20,command->playerId,0xfffe,&pDVar10->flags,(undefined2 *)&local_1c);
    DArrayDestroy(pDVar10);
  }
  pDVar10 = local_30;
  if (((local_30 != (DArrayTy *)0x0) &&
      (pSVar11 = thunk_FUN_0042b760(command->playerId,(ushort)local_1c),
      pSVar11 != (STGroupBoatC *)0x0)) && (pSVar11->field_001C != 0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((command->commandType == 0x29) && ((command->payload->packed).variant == 1)) {
      return;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pDVar12 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar11,unaff_EDI);
    AddObjsToGroup(local_20,command->playerId,0xfffe,(uint *)pDVar12,(undefined2 *)&local_1c);
    DArrayDestroy(pDVar12);
  }
  pSVar11 = thunk_FUN_0042b760(command->playerId,(ushort)local_1c);
  if (pSVar11 == (STGroupBoatC *)0x0) {
    return;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STGroupBoatC::StartReceiveOrderSound(pSVar11,unaff_EDI);
  switch(command->commandType) {
  case 10:
    goto cf_common_exit_0043824D;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  case 0x14:
    iVar18 = STGroupBoatC::IsAgAtt(pSVar11,unaff_EDI);
    if (iVar18 != 0) {
      pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
      targetPosition.x = *(short *)command->payload;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      targetPosition.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
      STGroupBoatC::sub_0049A500(pSVar11,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::DArrayAppend(pDVar10,&targetPosition);
      orderData6.mode = 1;
      orderData6.positions = pDVar10;
      pSVar11->sub_00498D20(6,&orderData6);
      DArrayDestroy(pDVar10);
      return;
    }
    orderData.position.x = *(short *)command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData.position.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
    STGroupBoatC::sub_0049A500(pSVar11,(undefined2 *)0x0,(undefined2 *)0x0,&orderData.position.z);
    pSVar11->sub_00498D20(1,&orderData);
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x15:
    local_24 = 4 - (uint)(command->payload->packed).variant;
    pSVar11->sub_00498D20(7,&local_24);
    return;
  case 0x16:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar6->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0:
    case 5:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)(pSVar6->packed).value_01,
                 (int *)&local_8);
      if (local_8 == (STGameObjC *)0x0) {
        return;
      }
      pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,4,1);
      local_18 = *(undefined1 *)&local_8->field_0024;
      local_16 = local_8->field_0032;
      uVar8 = local_8->field_0020;
      if (uVar8 < 0x1af) {
        if (uVar8 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar8 != 0x14) {
          return;
        }
      }
      else {
        if (uVar8 < 1000) {
          return;
        }
        if (0x3e9 < uVar8) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      Library::DKW::TBL::DArrayAppend(pDVar10,&local_18);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14c = (uint)((command->payload->packed).variant != 0);
      local_150 = 0;
      local_148 = pDVar10;
      pSVar11->sub_00498D20(2,&local_150);
      DArrayDestroy(pDVar10);
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)(pSVar6->packed).value_01,
                 (int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        orderDataF.value_00 = *(byte *)&local_8->field_0024;
        orderDataF.value_01 = local_8->field_0032;
        orderDataF.value_03 = local_8->field_0018;
        pSVar11->sub_00498D20(0xf,&orderDataF);
        return;
      }
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 2:
      orderDataE.value_00 = (short)(pSVar6->packed).value_05.bytes.byte0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderDataE.value_02 = (short)(pSVar6->packed).value_05.bytes.byte1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderDataE.value_04 = (short)(pSVar6->packed).value_05.bytes.byte2;
      pSVar11->sub_00498D20(0xe,&orderDataE);
      return;
    }
    break;
  case 0x17:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar6->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)(pSVar6->packed).value_1d,
                 (int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar10,&local_8->field_0032);
        local_138 = 0;
        local_134 = pDVar10;
        pSVar11->sub_00498D20(5,&local_138);
        DArrayDestroy(pDVar10);
        return;
      }
      break;
    case 2:
      pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
      targetPosition.x = (command->payload->position16).x;
      targetPosition.y = (command->payload->position16).y;
      STGroupBoatC::sub_0049A500(pSVar11,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::DArrayAppend(pDVar10,&targetPosition);
      STGroupBoatC::sub_0049A500(pSVar11,&targetPosition.x,&targetPosition.y,(undefined2 *)0x0);
      Library::DKW::TBL::DArrayAppend(pDVar10,&targetPosition);
      orderData6.mode = 0;
      orderData6.positions = pDVar10;
      pSVar11->sub_00498D20(6,&orderData6);
      DArrayDestroy(pDVar10);
      return;
    case 3:
      sVar20 = (pSVar6->position16).z;
      sVar19 = (pSVar6->position16).y;
      sVar5 = (pSVar6->position16).x;
      if (((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) &&
         ((((-1 < sVar19 && ((sVar19 < g_worldGrid.sizeY && (-1 < sVar20)))) &&
           (sVar20 < g_worldGrid.sizeZ)) &&
          (pSVar14 = g_worldGrid.cells
                     [(int)sVar20 * (int)g_worldGrid.planeStride +
                      (int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar5].objects[0],
          pSVar14 != (STWorldObject *)0x0)))) {
        pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::DArrayAppend(pDVar10,&pSVar14[1].field_0xe);
        orderData4.mode = 0;
        orderData4.objectIds = pDVar10;
        pSVar11->sub_00498D20(4,&orderData4);
        DArrayDestroy(pDVar10);
        return;
      }
      break;
    case 10:
      orderData4.mode = 1;
      orderData4.objectIds = (DArrayTy *)0x0;
      pSVar11->sub_00498D20(4,&orderData4);
      return;
    case 0x10:
      orderPosition14.x = (pSVar6->position16).x;
      orderPosition14.y = (pSVar6->position16).y;
      orderPosition14.z = (pSVar6->position16).z;
      pSVar11->sub_00498D20(0x14,&orderPosition14);
      return;
    case 0x13:
      sVar20 = (pSVar6->position16).x;
      sVar19 = (pSVar6->position16).z;
      sVar5 = (pSVar6->position16).y;
      if ((((-1 < sVar20) && (sVar20 < g_worldGrid.sizeX)) &&
          ((-1 < sVar5 &&
           (((sVar5 < g_worldGrid.sizeY && (-1 < sVar19)) && (sVar19 < g_worldGrid.sizeZ)))))) &&
         (g_worldGrid.cells
          [(int)sVar19 * (int)g_worldGrid.planeStride + (int)sVar5 * (int)g_worldGrid.sizeX +
           (int)sVar20].objects[0] != (STWorldObject *)0x0)) {
        orderData11.mode = 0;
        orderData11.position.x = (pSVar6->position16).x;
        orderData11.position.y = (pSVar6->position16).y;
        orderData11.position.z = (pSVar6->position16).z;
        pSVar11->sub_00498D20(0x11,&orderData11);
        return;
      }
      break;
    case 0x14:
      orderData11.mode = 1;
      orderData11.position.z = 0;
      orderData11.position.y = 0;
      orderData11.position.x = 0;
      pSVar11->sub_00498D20(0x11,&orderData11);
      return;
    case 0x18:
      orderPosition13.x = (pSVar6->position16).x;
      orderPosition13.y = (pSVar6->position16).y;
      orderPosition13.z = (pSVar6->position16).z;
      pSVar11->sub_00498D20(0x13,&orderPosition13);
      return;
    }
    break;
  case 0x18:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar6->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 1;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 2:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 2;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 3:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 4;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 4:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 5;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 5:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 3;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 6:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 0xfffffffd;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 7:
      arg_4 = (pSVar6->packed).value_0d;
      pSVar17 = pSVar11->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar8 = (uint)(pSVar6->packed).value_11;
      uVar22 = 0xfffffffe;
      break;
    case 8:
      pSVar11->vfunc_18(0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar17 = pSVar11->vtable;
      dVar16 = (*pSVar17->slot_24)(pSVar11);
      dVar15 = pSVar11->slot_20();
      (*pSVar17->vfunc_18)(pSVar11,0xffffffff,dVar15 + 1,dVar16);
      goto switchD_004384bc_default;
    case 10:
      pSVar17 = pSVar11->vtable;
      dVar16 = (*pSVar17->slot_24)(pSVar11);
      dVar15 = pSVar11->slot_20();
      (*pSVar17->vfunc_18)(pSVar11,0xffffffff,dVar15 - 1,dVar16);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar17 = pSVar11->vtable;
      dVar16 = (*pSVar17->slot_24)(pSVar11);
      iVar18 = dVar16 + 0x2d;
      dVar16 = pSVar11->slot_20();
      (*pSVar17->vfunc_18)(pSVar11,0xffffffff,dVar16,iVar18);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar17 = pSVar11->vtable;
      dVar16 = (*pSVar17->slot_24)(pSVar11);
      iVar18 = dVar16 - 0x2d;
      dVar16 = pSVar11->slot_20();
      (*pSVar17->vfunc_18)(pSVar11,0xffffffff,dVar16,iVar18);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar17->vfunc_18)(pSVar11,uVar22,uVar8,arg_4);
switchD_004384bc_default:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar6->packed).variant) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      orderData.position.x = (pSVar6->position16).x;
      orderData.position.y = (pSVar6->position16).y;
      STGroupBoatC::sub_0049A500(pSVar11,(undefined2 *)0x0,(undefined2 *)0x0,&orderData.position.z);
      pSVar11->sub_00498D20(1,&orderData);
      return;
    case 8:
cf_common_exit_0043824D:
      pSVar11->sub_00498D20(3,0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      STGroupBoatC::sub_0049A500
                (pSVar11,(undefined2 *)&orderData,&orderData.position.y,&orderData.position.z);
      pSVar11->sub_00498D20(1,&orderData);
      return;
    }
    break;
  case 0x19:
    pSVar6 = command->payload;
    orderDataD.position.x = *(short *)pSVar6;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderDataD.position.y = *(short *)((int)&(pSVar6->packed).value_01.words.high + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderDataD.position.z = *(short *)((int)&(pSVar6->packed).value_05.words.high + 1);
    orderDataD.value_06 = -1;
    pSVar11->sub_00498D20(0xd,&orderDataD);
    return;
  case 0x1a:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar6->packed).variant == 1) {
      orderData10.mode = 2;
      orderData10.sourcePosition.x = 0;
      orderData10.sourcePosition.y = 0;
      orderData10.sourcePosition.z = 0;
      orderData10.targetPosition.x = (pSVar6->position16).x;
      orderData10.targetPosition.y = (pSVar6->position16).y;
      orderData10.targetPosition.z = (pSVar6->position16).z;
      pSVar11->sub_00498D20(0x10,&orderData10);
      return;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar6->packed).variant == 2) {
      orderData10.sourcePosition.x = (pSVar6->position16).x;
      orderData10.sourcePosition.y = (pSVar6->position16).y;
      orderData10.sourcePosition.z = (pSVar6->position16).z;
      if ((((-1 < orderData10.sourcePosition.x) &&
           (orderData10.sourcePosition.x < g_worldGrid.sizeX)) &&
          ((-1 < orderData10.sourcePosition.y &&
           (((orderData10.sourcePosition.y < g_worldGrid.sizeY &&
             (-1 < orderData10.sourcePosition.z)) &&
            (orderData10.sourcePosition.z < g_worldGrid.sizeZ)))))) &&
         ((pSVar14 = g_worldGrid.cells
                     [(int)orderData10.sourcePosition.z * (int)g_worldGrid.planeStride +
                      (int)orderData10.sourcePosition.y * (int)g_worldGrid.sizeX +
                      (int)orderData10.sourcePosition.x].objects[0], pSVar14 != (STWorldObject *)0x0
          && (pSVar14->value_20 == 1000)))) {
        iVar18 = pSVar14->GetObjectTypeId();
        if (iVar18 == 0x37) {
          orderData10.mode = 0;
          orderData10.targetPosition.x = 0;
          orderData10.targetPosition.y = 0;
          orderData10.targetPosition.z = 0;
        }
        else {
          iVar18 = pSVar14->GetObjectTypeId();
          if (iVar18 != 0x6c) {
            return;
          }
          iVar18 = thunk_FUN_004e9960(pSVar14,(undefined4 *)&orderData10.targetPosition,
                                      (undefined4 *)&orderData10.targetPosition.y,
                                      (undefined4 *)&orderData10.targetPosition.z);
          if (iVar18 != 1) {
            return;
          }
          orderData10.mode = 1;
        }
        pSVar11->sub_00498D20(0x10,&orderData10);
        return;
      }
    }
    break;
  case 0x1f:
    pSVar6 = command->payload;
    orderPosition12.x = (pSVar6->position16).x;
    sVar20 = (pSVar6->position16).y;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar19 = (pSVar6->packed).value_01.words.high;
    if (orderPosition12.x < 0) {
      return;
    }
    if (g_worldGrid.sizeX <= orderPosition12.x) {
      return;
    }
    if (sVar19 < 0) {
      return;
    }
    if (g_worldGrid.sizeY <= sVar19) {
      return;
    }
    if (sVar20 < 0) {
      return;
    }
    if (g_worldGrid.sizeZ <= sVar20) {
      return;
    }
    pSVar14 = g_worldGrid.cells
              [(int)sVar19 * (int)g_worldGrid.sizeX + (int)sVar20 * (int)g_worldGrid.planeStride +
               (int)orderPosition12.x].objects[0];
    if (pSVar14 == (STWorldObject *)0x0) {
      return;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar6->packed).variant == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderPosition12.y = (pSVar6->packed).value_01.words.high;
      orderPosition12.z = (pSVar6->position16).y;
      pSVar11->sub_00498D20(0x12,&orderPosition12);
      return;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar6->packed).variant == 1) {
      pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      Library::DKW::TBL::DArrayAppend(pDVar10,&pSVar14[1].field_0xe);
      local_114 = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = pDVar10;
      local_100 = pSVar14->GetObjectTypeId();
      local_fc = 1;
      local_f8 = (DArrayTy *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar11->sub_00498D20(8,&local_114);
      DArrayDestroy(pDVar10);
      return;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pDVar10 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar11,unaff_EDI);
    dVar16 = pDVar10->count;
    local_6c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_34 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_2c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_30 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (STControlCommandPayload *)0x0;
    local_d4 = 0;
    local_28 = 0;
    if ((int)dVar16 < 1) {
cf_common_exit_00437E03:
      pSVar6 = command->payload;
      orderPositionA.x = (pSVar6->position16).x;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderPositionA.y = (pSVar6->packed).value_01.words.high;
      orderPositionA.z = (pSVar6->position16).y;
      pSVar11->sub_00498D20(10,&orderPositionA);
      pDVar12 = local_30;
    }
    else {
      uVar8 = 0;
      do {
        DArrayGetElement(pDVar10,uVar8,local_118);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar9 = GetObjPtr(g_allPlayers_007FA174,pSVar11->field_0024,local_118._0_2_,CASE_1);
        iVar18 = (*pSVar9->vtable->vfunc_2C)();
        if ((((iVar18 == 8) || (iVar18 = (*pSVar9->vtable->vfunc_2C)(), iVar18 == 0x14)) ||
            (iVar18 = (*pSVar9->vtable->vfunc_2C)(), iVar18 == 0x1a)) &&
           (iVar18 = thunk_FUN_0045ff10(pSVar9), iVar18 == 0xc)) {
          puVar13 = (byte *)thunk_FUN_0048dc90(pSVar9,local_1b8);
          puVar21 = (byte *)(&local_1fc);
          memmove(puVar21, puVar13, 0x42); /* compiler REP MOVS byte copy */
          iVar18 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,local_1f6,(int *)&local_40);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar18 == 0) && (iVar18 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar18)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar12 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (STControlCommandPayload *)((int)local_68 + 1);
              pDVar12 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar18 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x14ca,0,0,
                                            "%s",
                                            "STAllPlayersC::CmdToPlsObj, CMDTY_RC - unknown resource type");
                if (iVar18 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar12 = local_2c;
            }
            Library::DKW::TBL::DArrayAppend(pDVar12,(void *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = local_28 + 1;
        uVar8 = (uint)(short)local_28;
      } while ((int)uVar8 < (int)dVar16);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar18 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar18 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar18 = 2;
      }
LAB_00437cb5:
      local_114 = 0;
      if (iVar18 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar18 == 1) {
        local_110 = local_34;
        iVar18 = GetPlayerRaceId(pSVar11->field_0024);
        local_100 = (-(uint)((char)iVar18 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar18 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pDVar12 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      pSVar6 = command->payload;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar20 = (pSVar6->position16).y;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar19 = (pSVar6->packed).value_01.words.high;
      sVar5 = (pSVar6->position16).x;
      if (((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) || (sVar19 < 0)) ||
          ((g_worldGrid.sizeY <= sVar19 || (sVar20 < 0)))) || (g_worldGrid.sizeZ <= sVar20)) {
        pSVar14 = (STWorldObject *)0x0;
      }
      else {
        pSVar14 = g_worldGrid.cells
                  [(int)sVar20 * (int)g_worldGrid.planeStride + (int)sVar19 * (int)g_worldGrid.sizeX
                   + (int)sVar5].objects[0];
      }
      Library::DKW::TBL::DArrayAppend(local_30,&pSVar14[1].field_0xe);
      local_f8 = pDVar12;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar11->sub_00498D20(8,&local_114);
    }
    DArrayDestroy(pDVar10);
    DArrayDestroy(local_6c);
    DArrayDestroy(local_34);
    DArrayDestroy(local_2c);
    DArrayDestroy(pDVar12);
    return;
  case 0x21:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    bVar2 = (pSVar6->packed).variant;
    if (bVar2 == 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_64 = (pSVar6->packed).value_01;
      pSVar11->sub_00498D20(0x15,&local_64);
      return;
    }
    if (bVar2 == 3) {
      orderPositionC.z = -1;
      orderPositionC.y = -1;
      orderPositionC.x = -1;
      pSVar11->sub_00498D20(0xc,&orderPositionC);
      return;
    }
    if (bVar2 == 4) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_60 = (pSVar6->packed).value_01;
      pSVar11->sub_00498D20(0xb,&local_60);
      return;
    }
    break;
  case 0x23:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData9.position.x = *(short *)((int)&(pSVar6->packed).value_01.words.high + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData9.position.y = *(short *)((int)&(pSVar6->packed).value_05.words.high + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData9.position.z = *(short *)((int)&(pSVar6->packed).value_09.words.high + 1);
    orderData9.value_06 = *(int *)pSVar6;
    orderData9.playerId = (dword)command->playerId;
    orderData9.value_0e = 0;
    orderData9.value_1d = -1;
    pSVar11->sub_00498D20(9,&orderData9);
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x28:
    bVar2 = (command->payload->packed).variant;
    if (bVar2 == 0) {
      STGroupBoatC::GenSwitch(pSVar11,0);
    }
    else if (bVar2 == 1) {
      STGroupBoatC::GenSwitch(pSVar11,1);
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x29:
    if ((command->payload->packed).variant != 0) {
      if (pDVar10 == (DArrayTy *)0x0) {
        return;
      }
      local_8c.field_0010 = 0x5d98;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      local_74 = (DArrayTy *)pSVar11->field_0029;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)**(undefined4 **)pDVar10)(&local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    pSVar6 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar6->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
    case 2:
      local_14c = (uint)((pSVar6->packed).value_01.bytes.byte2 != 1);
      sVar20 = 0;
      local_150 = 0;
      local_148 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,4,1);
      if ((pSVar6->position16).x != 0) {
        iVar18 = 0;
        do {
          Library::DKW::TBL::DArrayAppend(local_148,(void *)((int)pSVar6 + iVar18 * 4 + 4));
          sVar20 = sVar20 + 1;
          iVar18 = (int)sVar20;
        } while (iVar18 < (int)(uint)(ushort)(pSVar6->position16).x);
      }
      pSVar11->sub_00498D20(2,&local_150);
      DArrayDestroy(local_148);
      return;
    case 3:
      sVar20 = 0;
      local_138 = 0;
      local_134 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
      if ((pSVar6->position16).x != 0) {
        iVar18 = 0;
        do {
          Library::DKW::TBL::DArrayAppend(local_134,(void *)((int)pSVar6 + iVar18 * 2 + 4));
          sVar20 = sVar20 + 1;
          iVar18 = (int)sVar20;
        } while (iVar18 < (int)(uint)(ushort)(pSVar6->position16).x);
      }
      pSVar11->sub_00498D20(5,&local_138);
      DArrayDestroy(local_134);
      return;
    case 4:
      break;
    default:
      iVar18 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1427,0,0,"%s",
                                  "STAllPlayersC::CmdToPlsObj CMDTY_LPTR");
      if (iVar18 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

