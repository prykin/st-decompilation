#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj

   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

void __thiscall STAllPlayersC::CmdToPlsObj(STAllPlayersC *this,STControlCommand *command)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  STControlCommandPayload *pSVar5;
  code *pcVar6;
  uint uVar7;
  STGameObjC *pSVar8;
  DArrayTy *pDVar9;
  STGroupBoatC *pSVar10;
  undefined4 *puVar11;
  STWorldObject *pSVar12;
  dword dVar13;
  dword dVar14;
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
  STGroupBoatCVTable *pSVar15;
  int iVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  short sVar17;
  short sVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar19;
  AiPlrClassTy *pAVar20;
  undefined4 uVar21;
  DArrayTy *pDVar22;
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
  AiPlrClassTy *local_30;
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

  bVar1 = command->playerId;
  uVar2 = command->objectId;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_38 = CONCAT22((short)((uint)this >> 0x10),uVar2);
  local_8 = (STGameObjC *)0x0;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar7._0_2_ = command->objectId;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  uVar7._2_2_ = command->targetKind;
  uVar7 = uVar7 >> 0x10;
  pAVar20 = g_playerRuntime[bVar1].aiPlayer;
  local_30 = pAVar20;
  local_20 = this;
  if (uVar7 != 0) {
    if (uVar7 != 1) {
      if (uVar7 != 2) {
        return;
      }
      if (uVar2 == 0xffff) {
        return;
      }
      pSVar8 = GetObjPtr(g_allPlayers_007FA174,bVar1,uVar2,CASE_3);
      if (pSVar8 == (STGameObjC *)0x0) {
        return;
      }
      if (command->commandType != 0x15) {
        if (command->commandType != 0x2a) {
          return;
        }
        thunk_FUN_006270e0(pSVar8,0x2a,(undefined1 *)command);
        return;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_24 = 4 - (uint)(command->payload->packed).variant;
      thunk_FUN_006270e0(pSVar8,0x15,(undefined1 *)&local_24);
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
      sVar18 = *(short *)((int)&(local_68->packed).value_01.words.high + 1);
      uVar2 = *(ushort *)local_68;
      local_34 = (DArrayTy *)(uint)uVar2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar3 = *(ushort *)((int)&(local_68->packed).value_05.words.high + 1);
      local_2c = (DArrayTy *)(uint)uVar3;
      local_6c = (DArrayTy *)(int)sVar18;
      local_30 = (AiPlrClassTy *)(int)(short)uVar3;
      iVar16 = (int)(short)uVar2;
      if ((g_pathingGrid.cells
           [(int)g_pathingGrid.planeStride * (int)local_30 + iVar16 +
            (int)g_pathingGrid.sizeX * (int)local_6c] != 0) &&
         ((((((((short)uVar2 < 0 || (g_worldGrid.sizeX <= (short)uVar2)) || (sVar18 < 0)) ||
             ((g_worldGrid.sizeY <= sVar18 || ((short)uVar3 < 0)))) ||
            (g_worldGrid.sizeZ <= (short)uVar3)) ||
           (g_worldGrid.cells
            [(int)g_worldGrid.sizeX * (int)local_6c +
             iVar16 + (int)g_worldGrid.planeStride * (int)local_30].objects[0] ==
            (STWorldObject *)0x0)) && (local_28 = (uint)local_2c, (short)uVar3 < 5)))) {
        while( true ) {
          sVar17 = (short)local_28;
          if (g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * (int)sVar17 + iVar16 +
               (int)g_pathingGrid.sizeX * (int)local_6c] == 0) break;
          if (((((-1 < (short)uVar2) && ((short)uVar2 < g_worldGrid.sizeX)) &&
               ((-1 < sVar18 &&
                (((sVar18 < g_worldGrid.sizeY && (-1 < sVar17)) && (sVar17 < g_worldGrid.sizeZ))))))
              && (g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar17 +
                   iVar16 + (int)g_worldGrid.sizeX * (int)sVar18].objects[0] != (STWorldObject *)0x0
                 )) || (local_28 = local_28 + 1, 4 < (short)local_28)) goto cf_common_exit_00437191;
        }
        *(int *)((int)&(local_68->packed).value_05 + 3) = (int)sVar17;
      }
cf_common_exit_00437191:
      local_8c.field_0014 = &command->unknown_00;
      local_8->GetMessage(&local_8c);
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x29:
      if ((command->payload->packed).variant == 0) {
        if (pAVar20 == (AiPlrClassTy *)0x0) {
          return;
        }
        pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)((uint)local_8c.field_0014._2_2_ << 0x10);
      }
      else {
        if (pAVar20 == (AiPlrClassTy *)0x0) {
          return;
        }
        pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,&local_38);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      }
      local_8c.field_0010 = 0x5d98;
      local_74 = pDVar9;
      (*pAVar20->vtable->vfunc_00)(&local_8c);
      DArrayDestroy(pDVar9);
      return;
    }
  }
  if (uVar2 == 0xffff) {
    return;
  }
  local_1c = local_38;
  if (command->commandType == 0x17) {
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar5->packed).variant) {
    case 0x11:
      if (command->secondaryPayloadSize == 0) {
        pSVar10 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar10 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar10,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_ECX_04;
      }
      else {
        dVar14 = command->primaryPayloadSize;
        local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar18 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar7 = extraout_ECX_03;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      (&local_c->flags,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar14));
            sVar18 = sVar18 + 1;
            uVar7 = command->secondaryPayloadSize >> 1;
          } while (sVar18 < (short)uVar7);
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar7 >> 8),command->playerId),local_c,
                         (command->payload->packed).value_1d);
      DArrayDestroy(local_c);
      return;
    case 0x15:
      if (command->secondaryPayloadSize == 0) {
        pSVar10 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar10 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        pDVar9 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar10,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_ECX_01;
      }
      else {
        dVar14 = command->primaryPayloadSize;
        pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar18 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_ECX;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      (&pDVar9->flags,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar14));
            sVar18 = sVar18 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar21 = extraout_ECX_00;
          } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar21 >> 8),command->playerId),&pDVar9->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),command->playerId),&pDVar9->flags,
                         0);
      DArrayDestroy(pDVar9);
      return;
    case 0x16:
      if (command->secondaryPayloadSize == 0) {
        pSVar10 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar10 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar10,unaff_EDI);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_EDX_02;
      }
      else {
        dVar14 = command->primaryPayloadSize;
        local_c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar18 = 0;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar21 = extraout_EDX_00;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      (&local_c->flags,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar14));
            sVar18 = sVar18 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            uVar21 = extraout_EDX_01;
          } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar21 >> 8),command->playerId),&local_c->flags,0);
      DArrayDestroy(local_c);
      return;
    case 0x17:
      if (command->secondaryPayloadSize == 0) {
        pSVar10 = thunk_FUN_0042b760(bVar1,uVar2);
        if (pSVar10 == (STGroupBoatC *)0x0) {
          return;
        }
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        pDVar9 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar10,unaff_EDI);
      }
      else {
        dVar14 = command->primaryPayloadSize;
        pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
        sVar18 = 0;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      (&pDVar9->flags,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar14));
            sVar18 = sVar18 + 1;
          } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((command->payload->packed).value_1d != 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)command->payload >> 8),command->playerId),
                           &pDVar9->flags,0);
        DArrayDestroy(pDVar9);
        return;
      }
      thunk_FUN_0044cd20((uint)command->playerId,&pDVar9->flags,1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),command->playerId),
                         &pDVar9->flags,0);
      DArrayDestroy(pDVar9);
      return;
    }
  }
  if (command->secondaryPayloadSize != 0) {
    pSVar5 = command->payload;
    dVar14 = command->primaryPayloadSize;
    pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    sVar18 = 0;
    if (0 < (short)(command->secondaryPayloadSize >> 1)) {
      do {
        Library::DKW::TBL::FUN_006ae1c0
                  (&pDVar9->flags,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar14));
        sVar18 = sVar18 + 1;
      } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
    }
    AddObjsToGroup(local_20,command->playerId,0xfffe,&pDVar9->flags,(undefined2 *)&local_1c);
    DArrayDestroy(pDVar9);
  }
  pAVar20 = local_30;
  if (((local_30 != (AiPlrClassTy *)0x0) &&
      (pSVar10 = thunk_FUN_0042b760(command->playerId,(ushort)local_1c),
      pSVar10 != (STGroupBoatC *)0x0)) && (pSVar10->field_001C != 0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((command->commandType == 0x29) && ((command->payload->packed).variant == 1)) {
      return;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pDVar9 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar10,unaff_EDI);
    AddObjsToGroup(local_20,command->playerId,0xfffe,(uint *)pDVar9,(undefined2 *)&local_1c);
    DArrayDestroy(pDVar9);
  }
  pSVar10 = thunk_FUN_0042b760(command->playerId,(ushort)local_1c);
  if (pSVar10 == (STGroupBoatC *)0x0) {
    return;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STGroupBoatC::StartReceiveOrderSound(pSVar10,unaff_EDI);
  switch(command->commandType) {
  case 10:
    goto cf_common_exit_0043824D;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  case 0x14:
    iVar16 = STGroupBoatC::IsAgAtt(pSVar10,unaff_EDI);
    if (iVar16 != 0) {
      pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
      targetPosition.x = *(short *)command->payload;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      targetPosition.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
      STGroupBoatC::sub_0049A500(pSVar10,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&targetPosition);
      orderData6.mode = 1;
      orderData6.positions = pDVar9;
      pSVar10->SetOrderData(CASE_6,&orderData6);
      DArrayDestroy(pDVar9);
      return;
    }
    orderData.position.x = *(short *)command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData.position.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
    STGroupBoatC::sub_0049A500(pSVar10,(undefined2 *)0x0,(undefined2 *)0x0,&orderData.position.z);
    pSVar10->SetOrderData(CASE_1,&orderData);
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x15:
    local_24 = 4 - (uint)(command->payload->packed).variant;
    pSVar10->SetOrderData(CASE_7,&local_24);
    return;
  case 0x16:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar5->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0:
    case 5:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)(pSVar5->packed).value_01,
                 (int *)&local_8);
      if (local_8 == (STGameObjC *)0x0) {
        return;
      }
      pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,4,1);
      local_18 = *(undefined1 *)&local_8->field_0024;
      local_16 = local_8->field_0032;
      uVar7 = local_8->field_0020;
      if (uVar7 < 0x1af) {
        if (uVar7 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar7 != 0x14) {
          return;
        }
      }
      else {
        if (uVar7 < 1000) {
          return;
        }
        if (0x3e9 < uVar7) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&local_18);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14c = (uint)((command->payload->packed).variant != 0);
      local_150 = 0;
      local_148 = pDVar9;
      pSVar10->SetOrderData(CASE_2,&local_150);
      DArrayDestroy(pDVar9);
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)(pSVar5->packed).value_01,
                 (int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        orderDataF.value_00 = *(byte *)&local_8->field_0024;
        orderDataF.value_01 = local_8->field_0032;
        orderDataF.value_03 = local_8->field_0018;
        pSVar10->SetOrderData(CASE_F,&orderDataF);
        return;
      }
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 2:
      orderDataE.value_00 = (short)(pSVar5->packed).value_05.bytes.byte0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderDataE.value_02 = (short)(pSVar5->packed).value_05.bytes.byte1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderDataE.value_04 = (short)(pSVar5->packed).value_05.bytes.byte2;
      pSVar10->SetOrderData(CASE_E,&orderDataE);
      return;
    }
    break;
  case 0x17:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar5->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
      STPlaySystemC::sub_006E62D0
                (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)(pSVar5->packed).value_1d,
                 (int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&local_8->field_0032);
        local_138 = 0;
        local_134 = pDVar9;
        pSVar10->SetOrderData(CASE_5,&local_138);
        DArrayDestroy(pDVar9);
        return;
      }
      break;
    case 2:
      pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,6,1);
      targetPosition.x = (command->payload->position16).x;
      targetPosition.y = (command->payload->position16).y;
      STGroupBoatC::sub_0049A500(pSVar10,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&targetPosition);
      STGroupBoatC::sub_0049A500(pSVar10,&targetPosition.x,&targetPosition.y,(undefined2 *)0x0);
      Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&targetPosition);
      orderData6.mode = 0;
      orderData6.positions = pDVar9;
      pSVar10->SetOrderData(CASE_6,&orderData6);
      DArrayDestroy(pDVar9);
      return;
    case 3:
      sVar18 = (pSVar5->position16).z;
      sVar17 = (pSVar5->position16).y;
      sVar4 = (pSVar5->position16).x;
      if (((-1 < sVar4) && (sVar4 < g_worldGrid.sizeX)) &&
         ((((-1 < sVar17 && ((sVar17 < g_worldGrid.sizeY && (-1 < sVar18)))) &&
           (sVar18 < g_worldGrid.sizeZ)) &&
          (pSVar12 = g_worldGrid.cells
                     [(int)sVar18 * (int)g_worldGrid.planeStride +
                      (int)sVar17 * (int)g_worldGrid.sizeX + (int)sVar4].objects[0],
          pSVar12 != (STWorldObject *)0x0)))) {
        pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&pSVar12[1].field_0xe);
        orderData4.mode = 0;
        orderData4.objectIds = pDVar9;
        pSVar10->SetOrderData(CASE_4,&orderData4);
        DArrayDestroy(pDVar9);
        return;
      }
      break;
    case 10:
      orderData4.mode = 1;
      orderData4.objectIds = (DArrayTy *)0x0;
      pSVar10->SetOrderData(CASE_4,&orderData4);
      return;
    case 0x10:
      orderPosition14.x = (pSVar5->position16).x;
      orderPosition14.y = (pSVar5->position16).y;
      orderPosition14.z = (pSVar5->position16).z;
      pSVar10->SetOrderData(CASE_14,&orderPosition14);
      return;
    case 0x13:
      sVar18 = (pSVar5->position16).x;
      sVar17 = (pSVar5->position16).z;
      sVar4 = (pSVar5->position16).y;
      if ((((-1 < sVar18) && (sVar18 < g_worldGrid.sizeX)) &&
          ((-1 < sVar4 &&
           (((sVar4 < g_worldGrid.sizeY && (-1 < sVar17)) && (sVar17 < g_worldGrid.sizeZ)))))) &&
         (g_worldGrid.cells
          [(int)sVar17 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)g_worldGrid.sizeX +
           (int)sVar18].objects[0] != (STWorldObject *)0x0)) {
        orderData11.mode = 0;
        orderData11.position.x = (pSVar5->position16).x;
        orderData11.position.y = (pSVar5->position16).y;
        orderData11.position.z = (pSVar5->position16).z;
        pSVar10->SetOrderData(CASE_11,&orderData11);
        return;
      }
      break;
    case 0x14:
      orderData11.mode = 1;
      orderData11.position.z = 0;
      orderData11.position.y = 0;
      orderData11.position.x = 0;
      pSVar10->SetOrderData(CASE_11,&orderData11);
      return;
    case 0x18:
      orderPosition13.x = (pSVar5->position16).x;
      orderPosition13.y = (pSVar5->position16).y;
      orderPosition13.z = (pSVar5->position16).z;
      pSVar10->SetOrderData(CASE_13,&orderPosition13);
      return;
    }
    break;
  case 0x18:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar5->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 1;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 2:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 2;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 3:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 4;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 4:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 5;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 5:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 3;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 6:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 0xfffffffd;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 7:
      arg_4 = (pSVar5->packed).value_0d;
      pSVar15 = pSVar10->vtable;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar7 = (uint)(pSVar5->packed).value_11;
      uVar21 = 0xfffffffe;
      break;
    case 8:
      pSVar10->vfunc_18(0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar15 = pSVar10->vtable;
      dVar14 = (*pSVar15->slot_24)(pSVar10);
      dVar13 = pSVar10->slot_20();
      (*pSVar15->vfunc_18)(pSVar10,0xffffffff,dVar13 + 1,dVar14);
      goto switchD_004384bc_default;
    case 10:
      pSVar15 = pSVar10->vtable;
      dVar14 = (*pSVar15->slot_24)(pSVar10);
      dVar13 = pSVar10->slot_20();
      (*pSVar15->vfunc_18)(pSVar10,0xffffffff,dVar13 - 1,dVar14);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar15 = pSVar10->vtable;
      dVar14 = (*pSVar15->slot_24)(pSVar10);
      iVar16 = dVar14 + 0x2d;
      dVar14 = pSVar10->slot_20();
      (*pSVar15->vfunc_18)(pSVar10,0xffffffff,dVar14,iVar16);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar15 = pSVar10->vtable;
      dVar14 = (*pSVar15->slot_24)(pSVar10);
      iVar16 = dVar14 - 0x2d;
      dVar14 = pSVar10->slot_20();
      (*pSVar15->vfunc_18)(pSVar10,0xffffffff,dVar14,iVar16);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar15->vfunc_18)(pSVar10,uVar21,uVar7,arg_4);
switchD_004384bc_default:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar5->packed).variant) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      orderData.position.x = (pSVar5->position16).x;
      orderData.position.y = (pSVar5->position16).y;
      STGroupBoatC::sub_0049A500(pSVar10,(undefined2 *)0x0,(undefined2 *)0x0,&orderData.position.z);
      pSVar10->SetOrderData(CASE_1,&orderData);
      return;
    case 8:
cf_common_exit_0043824D:
      pSVar10->SetOrderData(CASE_3,(void *)0x0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      STGroupBoatC::sub_0049A500
                (pSVar10,(undefined2 *)&orderData,&orderData.position.y,&orderData.position.z);
      pSVar10->SetOrderData(CASE_1,&orderData);
      return;
    }
    break;
  case 0x19:
    pSVar5 = command->payload;
    orderDataD.position.x = *(short *)pSVar5;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderDataD.position.y = *(short *)((int)&(pSVar5->packed).value_01.words.high + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderDataD.position.z = *(short *)((int)&(pSVar5->packed).value_05.words.high + 1);
    orderDataD.value_06 = -1;
    pSVar10->SetOrderData(CASE_D,&orderDataD);
    return;
  case 0x1a:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar5->packed).variant == 1) {
      orderData10.mode = 2;
      orderData10.sourcePosition.x = 0;
      orderData10.sourcePosition.y = 0;
      orderData10.sourcePosition.z = 0;
      orderData10.targetPosition.x = (pSVar5->position16).x;
      orderData10.targetPosition.y = (pSVar5->position16).y;
      orderData10.targetPosition.z = (pSVar5->position16).z;
      pSVar10->SetOrderData(CASE_10,&orderData10);
      return;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar5->packed).variant == 2) {
      orderData10.sourcePosition.x = (pSVar5->position16).x;
      orderData10.sourcePosition.y = (pSVar5->position16).y;
      orderData10.sourcePosition.z = (pSVar5->position16).z;
      if ((((-1 < orderData10.sourcePosition.x) &&
           (orderData10.sourcePosition.x < g_worldGrid.sizeX)) &&
          ((-1 < orderData10.sourcePosition.y &&
           (((orderData10.sourcePosition.y < g_worldGrid.sizeY &&
             (-1 < orderData10.sourcePosition.z)) &&
            (orderData10.sourcePosition.z < g_worldGrid.sizeZ)))))) &&
         ((pSVar12 = g_worldGrid.cells
                     [(int)orderData10.sourcePosition.z * (int)g_worldGrid.planeStride +
                      (int)orderData10.sourcePosition.y * (int)g_worldGrid.sizeX +
                      (int)orderData10.sourcePosition.x].objects[0], pSVar12 != (STWorldObject *)0x0
          && (pSVar12->value_20 == 1000)))) {
        iVar16 = pSVar12->GetObjectTypeId();
        if (iVar16 == 0x37) {
          orderData10.mode = 0;
          orderData10.targetPosition.x = 0;
          orderData10.targetPosition.y = 0;
          orderData10.targetPosition.z = 0;
        }
        else {
          iVar16 = pSVar12->GetObjectTypeId();
          if (iVar16 != 0x6c) {
            return;
          }
          iVar16 = thunk_FUN_004e9960(pSVar12,(undefined4 *)&orderData10.targetPosition,
                                      (undefined4 *)&orderData10.targetPosition.y,
                                      (undefined4 *)&orderData10.targetPosition.z);
          if (iVar16 != 1) {
            return;
          }
          orderData10.mode = 1;
        }
        pSVar10->SetOrderData(CASE_10,&orderData10);
        return;
      }
    }
    break;
  case 0x1f:
    pSVar5 = command->payload;
    orderPosition12.x = (pSVar5->position16).x;
    sVar18 = (pSVar5->position16).y;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    sVar17 = (pSVar5->packed).value_01.words.high;
    if (orderPosition12.x < 0) {
      return;
    }
    if (g_worldGrid.sizeX <= orderPosition12.x) {
      return;
    }
    if (sVar17 < 0) {
      return;
    }
    if (g_worldGrid.sizeY <= sVar17) {
      return;
    }
    if (sVar18 < 0) {
      return;
    }
    if (g_worldGrid.sizeZ <= sVar18) {
      return;
    }
    pSVar12 = g_worldGrid.cells
              [(int)sVar17 * (int)g_worldGrid.sizeX + (int)sVar18 * (int)g_worldGrid.planeStride +
               (int)orderPosition12.x].objects[0];
    if (pSVar12 == (STWorldObject *)0x0) {
      return;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar5->packed).variant == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderPosition12.y = (pSVar5->packed).value_01.words.high;
      orderPosition12.z = (pSVar5->position16).y;
      pSVar10->SetOrderData(CASE_12,&orderPosition12);
      return;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((pSVar5->packed).variant == 1) {
      pDVar9 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,2,1);
      Library::DKW::TBL::FUN_006ae1c0(&pDVar9->flags,(undefined4 *)&pSVar12[1].field_0xe);
      local_114 = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = pDVar9;
      local_100 = pSVar12->GetObjectTypeId();
      local_fc = 1;
      local_f8 = (DArrayTy *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar10->SetOrderData(CASE_8,&local_114);
      DArrayDestroy(pDVar9);
      return;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    pDVar9 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar10,unaff_EDI);
    dVar14 = pDVar9->count;
    local_6c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_34 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_2c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_30 = (AiPlrClassTy *)Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (STControlCommandPayload *)0x0;
    local_d4 = 0;
    local_28 = 0;
    if ((int)dVar14 < 1) {
cf_common_exit_00437E03:
      pSVar5 = command->payload;
      orderPositionA.x = (pSVar5->position16).x;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      orderPositionA.y = (pSVar5->packed).value_01.words.high;
      orderPositionA.z = (pSVar5->position16).y;
      pSVar10->SetOrderData(CASE_A,&orderPositionA);
      pAVar20 = local_30;
    }
    else {
      uVar7 = 0;
      do {
        DArrayGetElement(pDVar9,uVar7,local_118);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar8 = GetObjPtr(g_allPlayers_007FA174,pSVar10->field_0024,local_118._0_2_,CASE_1);
        iVar16 = (*pSVar8->vtable->vfunc_2C)();
        if ((((iVar16 == 8) || (iVar16 = (*pSVar8->vtable->vfunc_2C)(), iVar16 == 0x14)) ||
            (iVar16 = (*pSVar8->vtable->vfunc_2C)(), iVar16 == 0x1a)) &&
           (iVar16 = thunk_FUN_0045ff10(pSVar8), iVar16 == 0xc)) {
          puVar11 = (undefined4 *)thunk_FUN_0048dc90(pSVar8,local_1b8);
          puVar19 = &local_1fc;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar19 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar19 = puVar19 + 1;
          }
          *(undefined2 *)puVar19 = *(undefined2 *)puVar11;
          iVar16 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,local_1f6,(int *)&local_40);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar16 == 0) && (iVar16 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar16)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar22 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (STControlCommandPayload *)((int)local_68 + 1);
              pDVar22 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar16 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x14ca,0,0,
                                            "%s",
                                            "STAllPlayersC::CmdToPlsObj, CMDTY_RC - unknown resource type");
                if (iVar16 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar22 = local_2c;
            }
            Library::DKW::TBL::FUN_006ae1c0(&pDVar22->flags,(undefined4 *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = local_28 + 1;
        uVar7 = (uint)(short)local_28;
      } while ((int)uVar7 < (int)dVar14);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar16 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar16 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar16 = 2;
      }
LAB_00437cb5:
      local_114 = 0;
      if (iVar16 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar16 == 1) {
        local_110 = local_34;
        iVar16 = GetPlayerRaceId(pSVar10->field_0024);
        local_100 = (-(uint)((char)iVar16 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar16 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pAVar20 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      pSVar5 = command->payload;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar18 = (pSVar5->position16).y;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar17 = (pSVar5->packed).value_01.words.high;
      sVar4 = (pSVar5->position16).x;
      if (((((sVar4 < 0) || (g_worldGrid.sizeX <= sVar4)) || (sVar17 < 0)) ||
          ((g_worldGrid.sizeY <= sVar17 || (sVar18 < 0)))) || (g_worldGrid.sizeZ <= sVar18)) {
        pSVar12 = (STWorldObject *)0x0;
      }
      else {
        pSVar12 = g_worldGrid.cells
                  [(int)sVar18 * (int)g_worldGrid.planeStride + (int)sVar17 * (int)g_worldGrid.sizeX
                   + (int)sVar4].objects[0];
      }
      Library::DKW::TBL::FUN_006ae1c0((uint *)local_30,(undefined4 *)&pSVar12[1].field_0xe);
      local_f8 = (DArrayTy *)pAVar20;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      pSVar10->SetOrderData(CASE_8,&local_114);
    }
    DArrayDestroy(pDVar9);
    DArrayDestroy(local_6c);
    DArrayDestroy(local_34);
    DArrayDestroy(local_2c);
    DArrayDestroy((DArrayTy *)pAVar20);
    return;
  case 0x21:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    bVar1 = (pSVar5->packed).variant;
    if (bVar1 == 1) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_64 = (pSVar5->packed).value_01;
      pSVar10->SetOrderData(CASE_15,&local_64);
      return;
    }
    if (bVar1 == 3) {
      orderPositionC.z = -1;
      orderPositionC.y = -1;
      orderPositionC.x = -1;
      pSVar10->SetOrderData(CASE_C,&orderPositionC);
      return;
    }
    if (bVar1 == 4) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_60 = (pSVar5->packed).value_01;
      pSVar10->SetOrderData(CASE_B,&local_60);
      return;
    }
    break;
  case 0x23:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData9.position.x = *(short *)((int)&(pSVar5->packed).value_01.words.high + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData9.position.y = *(short *)((int)&(pSVar5->packed).value_05.words.high + 1);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    orderData9.position.z = *(short *)((int)&(pSVar5->packed).value_09.words.high + 1);
    orderData9.value_06 = *(int *)pSVar5;
    orderData9.playerId = (dword)command->playerId;
    orderData9.value_0e = 0;
    orderData9.value_1d = -1;
    pSVar10->SetOrderData(CASE_9,&orderData9);
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x28:
    bVar1 = (command->payload->packed).variant;
    if (bVar1 == 0) {
      STGroupBoatC::GenSwitch(pSVar10,0);
    }
    else if (bVar1 == 1) {
      STGroupBoatC::GenSwitch(pSVar10,1);
      return;
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x29:
    if ((command->payload->packed).variant != 0) {
      if (pAVar20 == (AiPlrClassTy *)0x0) {
        return;
      }
      local_8c.field_0010 = 0x5d98;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      local_74 = (DArrayTy *)pSVar10->field_0029;
      (*pAVar20->vtable->vfunc_00)(&local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    pSVar5 = command->payload;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    switch((pSVar5->packed).variant) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 1:
    case 2:
      local_14c = (uint)((pSVar5->packed).value_01.bytes.byte2 != 1);
      sVar18 = 0;
      local_150 = 0;
      local_148 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,4,1);
      if ((pSVar5->position16).x != 0) {
        iVar16 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0
                    (&local_148->flags,(undefined4 *)((int)pSVar5 + iVar16 * 4 + 4));
          sVar18 = sVar18 + 1;
          iVar16 = (int)sVar18;
        } while (iVar16 < (int)(uint)(ushort)(pSVar5->position16).x);
      }
      pSVar10->SetOrderData(CASE_2,&local_150);
      DArrayDestroy(local_148);
      return;
    case 3:
      sVar18 = 0;
      local_138 = 0;
      local_134 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,2,1);
      if ((pSVar5->position16).x != 0) {
        iVar16 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0
                    (&local_134->flags,(undefined4 *)((int)pSVar5 + iVar16 * 2 + 4));
          sVar18 = sVar18 + 1;
          iVar16 = (int)sVar18;
        } while (iVar16 < (int)(uint)(ushort)(pSVar5->position16).x);
      }
      pSVar10->SetOrderData(CASE_5,&local_138);
      DArrayDestroy(local_134);
      return;
    case 4:
      break;
    default:
      iVar16 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x1427,0,0,"%s",
                                  "STAllPlayersC::CmdToPlsObj CMDTY_LPTR");
      if (iVar16 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

