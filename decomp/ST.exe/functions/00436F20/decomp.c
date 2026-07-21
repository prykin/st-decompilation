
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj
   
   [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

void __thiscall STAllPlayersC::CmdToPlsObj(STAllPlayersC *this,STControlCommand *command)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  STControlCommandPayload *pSVar4;
  code *pcVar5;
  uint uVar6;
  STGameObjC *pSVar7;
  DArrayTy *pDVar8;
  STGroupBoatC *extraout_EAX;
  STGroupBoatC *pSVar9;
  STGroupBoatC *extraout_EAX_00;
  undefined4 *puVar10;
  STWorldObject *pSVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_ECX_06;
  STGroupBoatCVTable *pSVar14;
  undefined4 in_EDX;
  uint objPtr;
  int iVar15;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  uint extraout_EDX_03;
  undefined4 extraout_EDX_04;
  short sVar16;
  short sVar17;
  int unaff_EDI;
  undefined4 *puVar18;
  AiPlrClassTy *pAVar19;
  byte bVar20;
  DArrayTy *pDVar21;
  dword dVar22;
  undefined4 local_1fc;
  int local_1f6;
  undefined4 local_1b8 [17];
  STGroupBoatOrderData9 orderData9;
  undefined4 local_150;
  uint local_14c;
  DArrayTy *local_148;
  undefined4 local_138;
  DArrayTy *local_134;
  STGroupBoatOrderDataD orderDataD;
  uint local_118 [2];
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
  uint local_38;
  DArrayTy *local_34;
  AiPlrClassTy *local_30;
  DArrayTy *local_2c;
  uint local_28;
  int local_24;
  STAllPlayersC *local_20;
  uint local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  STPosition16 targetPosition;
  DArrayTy *local_c;
  STGameObjC *local_8;
  
  objPtr = CONCAT31((int3)((uint)in_EDX >> 8),command->playerId);
  sVar17 = command->objectId;
  uVar13 = CONCAT22((short)((uint)this >> 0x10),sVar17);
  local_8 = (STGameObjC *)0x0;
  uVar6._0_2_ = command->objectId;
  uVar6._2_2_ = command->targetKind;
  uVar6 = uVar6 >> 0x10;
  pAVar19 = g_playerRuntime[command->playerId].aiPlayer;
  local_38 = uVar13;
  local_30 = pAVar19;
  local_20 = this;
  if (uVar6 != 0) {
    if (uVar6 != 1) {
      if (uVar6 != 2) {
        return;
      }
      if (sVar17 == -1) {
        return;
      }
      pSVar7 = GetObjPtr(g_sTAllPlayers_007FA174,objPtr,uVar13,CASE_3);
      if (pSVar7 == (STGameObjC *)0x0) {
        return;
      }
      if (command->commandType != 0x15) {
        if (command->commandType != 0x2a) {
          return;
        }
        thunk_FUN_006270e0(pSVar7,0x2a,(undefined1 *)command);
        return;
      }
      local_24 = 4 - (uint)(command->payload->packed).variant;
      thunk_FUN_006270e0(pSVar7,0x15,(undefined1 *)&local_24);
      return;
    }
    if (sVar17 == -1) {
      return;
    }
    local_8 = GetObjPtr(g_sTAllPlayers_007FA174,objPtr,uVar13,CASE_1);
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
      sVar17 = *(short *)((int)&(local_68->packed).value_01.words.high + 1);
      uVar1 = *(ushort *)local_68;
      local_34 = (DArrayTy *)(uint)uVar1;
      uVar2 = *(ushort *)((int)&(local_68->packed).value_05.words.high + 1);
      local_2c = (DArrayTy *)(uint)uVar2;
      local_6c = (DArrayTy *)(int)sVar17;
      local_30 = (AiPlrClassTy *)(int)(short)uVar2;
      iVar15 = (int)(short)uVar1;
      if ((g_pathingGrid.cells
           [(int)g_pathingGrid.planeStride * (int)local_30 + iVar15 +
            (int)g_pathingGrid.sizeX * (int)local_6c] != 0) &&
         ((((((((short)uVar1 < 0 || (g_worldGrid.sizeX <= (short)uVar1)) || (sVar17 < 0)) ||
             ((g_worldGrid.sizeY <= sVar17 || ((short)uVar2 < 0)))) ||
            (g_worldGrid.sizeZ <= (short)uVar2)) ||
           (g_worldGrid.cells
            [(int)g_worldGrid.sizeX * (int)local_6c +
             iVar15 + (int)g_worldGrid.planeStride * (int)local_30].objects[0] ==
            (STWorldObject *)0x0)) && (local_28 = (uint)local_2c, (short)uVar2 < 5)))) {
        while( true ) {
          sVar16 = (short)local_28;
          if (g_pathingGrid.cells
              [(int)g_pathingGrid.planeStride * (int)sVar16 + iVar15 +
               (int)g_pathingGrid.sizeX * (int)local_6c] == 0) break;
          if (((((-1 < (short)uVar1) && ((short)uVar1 < g_worldGrid.sizeX)) &&
               ((-1 < sVar17 &&
                (((sVar17 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ))))))
              && (g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar16 +
                   iVar15 + (int)g_worldGrid.sizeX * (int)sVar17].objects[0] != (STWorldObject *)0x0
                 )) || (local_28 = local_28 + 1, 4 < (short)local_28)) goto cf_common_exit_00437191;
        }
        *(int *)((int)&(local_68->packed).value_05 + 3) = (int)sVar16;
      }
cf_common_exit_00437191:
      local_8c.field_0014 = &command->unknown_00;
      (*local_8->vtable->GetMessage)(local_8,&local_8c);
      return;
    case 0x29:
      if ((command->payload->packed).variant == 0) {
        if (pAVar19 == (AiPlrClassTy *)0x0) {
          return;
        }
        pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,&local_38);
        local_8c.field_0014 = (undefined4 *)((uint)local_8c.field_0014._2_2_ << 0x10);
      }
      else {
        if (pAVar19 == (AiPlrClassTy *)0x0) {
          return;
        }
        pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,&local_38);
        local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      }
      local_8c.field_0010 = 0x5d98;
      local_74 = pDVar8;
      (*(code *)**(undefined4 **)pAVar19)(&local_8c);
      DArrayDestroy(pDVar8);
      return;
    }
  }
  if (sVar17 == -1) {
    return;
  }
  local_1c = uVar13;
  if (command->commandType == 0x17) {
    pSVar4 = command->payload;
    switch((pSVar4->packed).variant) {
    case 0x11:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar13);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
        uVar6 = extraout_ECX_04;
      }
      else {
        dVar22 = command->primaryPayloadSize;
        local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar17 = 0;
        uVar6 = extraout_ECX_03;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)local_c,(undefined4 *)((int)pSVar4 + sVar17 * 2 + dVar22));
            sVar17 = sVar17 + 1;
            uVar6 = command->secondaryPayloadSize >> 1;
          } while (sVar17 < (short)uVar6);
        }
      }
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar6 >> 8),command->playerId),local_c,
                         (command->payload->packed).value_1d);
      DArrayDestroy(local_c);
      return;
    case 0x15:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar13);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        pDVar8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
        uVar12 = extraout_ECX_01;
      }
      else {
        dVar22 = command->primaryPayloadSize;
        pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar17 = 0;
        uVar12 = extraout_ECX;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)pDVar8,(undefined4 *)((int)pSVar4 + sVar17 * 2 + dVar22));
            sVar17 = sVar17 + 1;
            uVar12 = extraout_ECX_00;
          } while (sVar17 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar12 >> 8),command->playerId),&pDVar8->flags,1);
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),command->playerId),&pDVar8->flags,
                         0);
      DArrayDestroy(pDVar8);
      return;
    case 0x16:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar13);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
        uVar12 = extraout_EDX_02;
      }
      else {
        dVar22 = command->primaryPayloadSize;
        local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar17 = 0;
        uVar12 = extraout_EDX_00;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)local_c,(undefined4 *)((int)pSVar4 + sVar17 * 2 + dVar22));
            sVar17 = sVar17 + 1;
            uVar12 = extraout_EDX_01;
          } while (sVar17 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar12 >> 8),command->playerId),&local_c->flags,0);
      DArrayDestroy(local_c);
      return;
    case 0x17:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar13);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        pDVar8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
      }
      else {
        dVar22 = command->primaryPayloadSize;
        pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar17 = 0;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)pDVar8,(undefined4 *)((int)pSVar4 + sVar17 * 2 + dVar22));
            sVar17 = sVar17 + 1;
          } while (sVar17 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      if ((command->payload->packed).value_1d != 0) {
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)command->payload >> 8),command->playerId),
                           &pDVar8->flags,0);
        DArrayDestroy(pDVar8);
        return;
      }
      thunk_FUN_0044cd20((uint)command->playerId,&pDVar8->flags,1);
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),command->playerId),
                         &pDVar8->flags,0);
      DArrayDestroy(pDVar8);
      return;
    }
  }
  pSVar9 = (STGroupBoatC *)0x0;
  if (command->secondaryPayloadSize != 0) {
    pSVar4 = command->payload;
    dVar22 = command->primaryPayloadSize;
    pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    sVar17 = 0;
    uVar6 = command->secondaryPayloadSize >> 1;
    if (0 < (short)uVar6) {
      do {
        Library::DKW::TBL::FUN_006ae1c0
                  ((uint *)pDVar8,(undefined4 *)((int)pSVar4 + sVar17 * 2 + dVar22));
        sVar17 = sVar17 + 1;
        uVar6 = extraout_EDX_03;
      } while (sVar17 < (short)(command->secondaryPayloadSize >> 1));
    }
    AddObjsToGroup(local_20,CONCAT31((int3)(uVar6 >> 8),command->playerId),0xfffe,(uint *)pDVar8,
                   (undefined2 *)&local_1c);
    DArrayDestroy(pDVar8);
    pSVar9 = extraout_EAX;
    uVar13 = extraout_ECX_05;
  }
  pAVar19 = local_30;
  if (((local_30 != (AiPlrClassTy *)0x0) &&
      (pSVar9 = thunk_FUN_0042b760(CONCAT31((int3)(uVar13 >> 8),command->playerId),local_1c),
      pSVar9 != (STGroupBoatC *)0x0)) && (pSVar9->field_001C != 0)) {
    if ((command->commandType == 0x29) && ((command->payload->packed).variant == 1)) {
      return;
    }
    pDVar8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
    AddObjsToGroup(local_20,CONCAT31((int3)((uint)extraout_ECX_06 >> 8),command->playerId),0xfffe,
                   (uint *)pDVar8,(undefined2 *)&local_1c);
    DArrayDestroy(pDVar8);
    pSVar9 = extraout_EAX_00;
  }
  pSVar9 = thunk_FUN_0042b760(CONCAT31((int3)((uint)pSVar9 >> 8),command->playerId),local_1c);
  if (pSVar9 == (STGroupBoatC *)0x0) {
    return;
  }
  STGroupBoatC::StartReceiveOrderSound(pSVar9,unaff_EDI);
  switch(command->commandType) {
  case 10:
    goto cf_common_exit_0043824D;
  case 0x14:
    iVar15 = STGroupBoatC::IsAgAtt(pSVar9,unaff_EDI);
    if (iVar15 != 0) {
      pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      targetPosition.x = *(short *)command->payload;
      targetPosition.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
      thunk_FUN_0049a500(pSVar9,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&targetPosition);
      orderData6.mode = 1;
      orderData6.positions = pDVar8;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_6,&orderData6);
      DArrayDestroy(pDVar8);
      return;
    }
    orderData.position.x = *(short *)command->payload;
    orderData.position.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
    thunk_FUN_0049a500(pSVar9,(undefined2 *)0x0,(undefined2 *)0x0,&orderData.position.z);
    (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_1,&orderData);
    return;
  case 0x15:
    local_24 = 4 - (uint)(command->payload->packed).variant;
    (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_7,&local_24);
    return;
  case 0x16:
    pSVar4 = command->payload;
    switch((pSVar4->packed).variant) {
    case 0:
    case 5:
      FUN_006e62d0(PTR_00802a38,(pSVar4->position32).x,(int *)&local_8);
      if (local_8 == (STGameObjC *)0x0) {
        return;
      }
      pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      local_18 = *(undefined1 *)&local_8->field_0024;
      local_16 = *(undefined2 *)&local_8->field_0x32;
      uVar6 = local_8->field_0020;
      if (uVar6 < 0x1af) {
        if (uVar6 == 0x1ae) {
          local_17 = 3;
          goto LAB_00437842;
        }
        if (uVar6 != 0x14) {
          return;
        }
      }
      else {
        if (uVar6 < 1000) {
          return;
        }
        if (0x3e9 < uVar6) {
          return;
        }
      }
      local_17 = 1;
LAB_00437842:
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&local_18);
      local_14c = (uint)((command->payload->packed).variant != 0);
      local_150 = 0;
      local_148 = pDVar8;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_2,&local_150);
      DArrayDestroy(pDVar8);
      return;
    case 1:
      FUN_006e62d0(PTR_00802a38,(pSVar4->position32).x,(int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        orderDataF.value_00 = *(byte *)&local_8->field_0024;
        orderDataF.value_01 = *(short *)&local_8->field_0x32;
        orderDataF.value_03 = local_8->field_0018;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_F,&orderDataF);
        return;
      }
      break;
    case 2:
      orderDataE.value_00 = (short)(pSVar4->packed).value_05.bytes.byte0;
      orderDataE.value_02 = (short)(pSVar4->packed).value_05.bytes.byte1;
      orderDataE.value_04 = (short)(pSVar4->packed).value_05.bytes.byte2;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_E,&orderDataE);
      return;
    }
    break;
  case 0x17:
    pSVar4 = command->payload;
    switch((pSVar4->packed).variant) {
    case 1:
      FUN_006e62d0(PTR_00802a38,(pSVar4->packed).value_1d,(int *)&local_8);
      if (local_8 != (STGameObjC *)0x0) {
        pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&local_8->field_0x32);
        local_138 = 0;
        local_134 = pDVar8;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_5,&local_138);
        DArrayDestroy(pDVar8);
        return;
      }
      break;
    case 2:
      pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      targetPosition.x = (command->payload->position16).x;
      targetPosition.y = (command->payload->position16).y;
      thunk_FUN_0049a500(pSVar9,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&targetPosition);
      thunk_FUN_0049a500(pSVar9,&targetPosition.x,&targetPosition.y,(undefined2 *)0x0);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&targetPosition);
      orderData6.mode = 0;
      orderData6.positions = pDVar8;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_6,&orderData6);
      DArrayDestroy(pDVar8);
      return;
    case 3:
      sVar17 = (pSVar4->position16).z;
      sVar16 = (pSVar4->position16).y;
      sVar3 = (pSVar4->position16).x;
      if (((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) &&
         ((((-1 < sVar16 && ((sVar16 < g_worldGrid.sizeY && (-1 < sVar17)))) &&
           (sVar17 < g_worldGrid.sizeZ)) &&
          (pSVar11 = g_worldGrid.cells
                     [(int)sVar17 * (int)g_worldGrid.planeStride +
                      (int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar3].objects[0],
          pSVar11 != (STWorldObject *)0x0)))) {
        pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&pSVar11[1].field_0xe);
        orderData4.mode = 0;
        orderData4.objectIds = pDVar8;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_4,&orderData4);
        DArrayDestroy(pDVar8);
        return;
      }
      break;
    case 10:
      orderData4.mode = 1;
      orderData4.objectIds = (DArrayTy *)0x0;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_4,&orderData4);
      return;
    case 0x10:
      orderPosition14.x = (pSVar4->position16).x;
      orderPosition14.y = (pSVar4->position16).y;
      orderPosition14.z = (pSVar4->position16).z;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_14,&orderPosition14);
      return;
    case 0x13:
      sVar17 = (pSVar4->position16).x;
      sVar16 = (pSVar4->position16).z;
      sVar3 = (pSVar4->position16).y;
      if ((((-1 < sVar17) && (sVar17 < g_worldGrid.sizeX)) &&
          ((-1 < sVar3 &&
           (((sVar3 < g_worldGrid.sizeY && (-1 < sVar16)) && (sVar16 < g_worldGrid.sizeZ)))))) &&
         (g_worldGrid.cells
          [(int)sVar16 * (int)g_worldGrid.planeStride + (int)sVar3 * (int)g_worldGrid.sizeX +
           (int)sVar17].objects[0] != (STWorldObject *)0x0)) {
        orderData11.mode = 0;
        orderData11.position.x = (pSVar4->position16).x;
        orderData11.position.y = (pSVar4->position16).y;
        orderData11.position.z = (pSVar4->position16).z;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_11,&orderData11);
        return;
      }
      break;
    case 0x14:
      orderData11.mode = 1;
      orderData11.position.z = 0;
      orderData11.position.y = 0;
      orderData11.position.x = 0;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_11,&orderData11);
      return;
    case 0x18:
      orderPosition13.x = (pSVar4->position16).x;
      orderPosition13.y = (pSVar4->position16).y;
      orderPosition13.z = (pSVar4->position16).z;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_13,&orderPosition13);
      return;
    }
    break;
  case 0x18:
    pSVar4 = command->payload;
    switch((pSVar4->packed).variant) {
    case 1:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 1;
      break;
    case 2:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 2;
      break;
    case 3:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 4;
      break;
    case 4:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 5;
      break;
    case 5:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 3;
      break;
    case 6:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 0xfffffffd;
      break;
    case 7:
      dVar22 = (pSVar4->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar4->packed).value_11;
      uVar12 = 0xfffffffe;
      break;
    case 8:
      (*pSVar9->vtable->vfunc_18)(pSVar9,0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar14 = pSVar9->vtable;
      uVar12 = (*pSVar14->vfunc_24)();
      iVar15 = (*pSVar9->vtable->vfunc_20)(uVar12);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,iVar15 + 1);
      goto switchD_004384bc_default;
    case 10:
      pSVar14 = pSVar9->vtable;
      uVar12 = (*pSVar14->vfunc_24)();
      iVar15 = (*pSVar9->vtable->vfunc_20)(uVar12);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,iVar15 + -1);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar14 = pSVar9->vtable;
      iVar15 = (*pSVar14->vfunc_24)();
      uVar12 = (*pSVar9->vtable->vfunc_20)(iVar15 + 0x2d);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,uVar12);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar14 = pSVar9->vtable;
      iVar15 = (*pSVar14->vfunc_24)();
      uVar12 = (*pSVar9->vtable->vfunc_20)(iVar15 + -0x2d);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,uVar12);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar14->vfunc_18)(pSVar9,uVar12,bVar20,dVar22);
switchD_004384bc_default:
    pSVar4 = command->payload;
    switch((pSVar4->packed).variant) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      orderData.position.x = (pSVar4->position16).x;
      orderData.position.y = (pSVar4->position16).y;
      thunk_FUN_0049a500(pSVar9,(undefined2 *)0x0,(undefined2 *)0x0,&orderData.position.z);
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_1,&orderData);
      return;
    case 8:
cf_common_exit_0043824D:
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_3,(void *)0x0);
      return;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      thunk_FUN_0049a500(pSVar9,(undefined2 *)&orderData,&orderData.position.y,&orderData.position.z
                        );
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_1,&orderData);
      return;
    }
    break;
  case 0x19:
    pSVar4 = command->payload;
    orderDataD.position.x = *(short *)pSVar4;
    orderDataD.position.y = *(short *)((int)&(pSVar4->packed).value_01.words.high + 1);
    orderDataD.position.z = *(short *)((int)&(pSVar4->packed).value_05.words.high + 1);
    orderDataD.value_06 = -1;
    (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_D,&orderDataD);
    return;
  case 0x1a:
    pSVar4 = command->payload;
    if ((pSVar4->packed).variant == 1) {
      orderData10.mode = 2;
      orderData10.sourcePosition.x = 0;
      orderData10.sourcePosition.y = 0;
      orderData10.sourcePosition.z = 0;
      orderData10.targetPosition.x = (pSVar4->position16).x;
      orderData10.targetPosition.y = (pSVar4->position16).y;
      orderData10.targetPosition.z = (pSVar4->position16).z;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_10,&orderData10);
      return;
    }
    if ((pSVar4->packed).variant == 2) {
      orderData10.sourcePosition.x = (pSVar4->position16).x;
      orderData10.sourcePosition.y = (pSVar4->position16).y;
      orderData10.sourcePosition.z = (pSVar4->position16).z;
      if ((((-1 < orderData10.sourcePosition.x) &&
           (orderData10.sourcePosition.x < g_worldGrid.sizeX)) &&
          ((-1 < orderData10.sourcePosition.y &&
           (((orderData10.sourcePosition.y < g_worldGrid.sizeY &&
             (-1 < orderData10.sourcePosition.z)) &&
            (orderData10.sourcePosition.z < g_worldGrid.sizeZ)))))) &&
         ((pSVar11 = g_worldGrid.cells
                     [(int)orderData10.sourcePosition.z * (int)g_worldGrid.planeStride +
                      (int)orderData10.sourcePosition.y * (int)g_worldGrid.sizeX +
                      (int)orderData10.sourcePosition.x].objects[0], pSVar11 != (STWorldObject *)0x0
          && (pSVar11->value_20 == 1000)))) {
        iVar15 = (*pSVar11->vtable->GetObjectTypeId)(pSVar11);
        if (iVar15 == 0x37) {
          orderData10.mode = 0;
          orderData10.targetPosition.x = 0;
          orderData10.targetPosition.y = 0;
          orderData10.targetPosition.z = 0;
        }
        else {
          iVar15 = (*pSVar11->vtable->GetObjectTypeId)(pSVar11);
          if (iVar15 != 0x6c) {
            return;
          }
          iVar15 = thunk_FUN_004e9960(pSVar11,(undefined4 *)&orderData10.targetPosition,
                                      (undefined4 *)&orderData10.targetPosition.y,
                                      (undefined4 *)&orderData10.targetPosition.z);
          if (iVar15 != 1) {
            return;
          }
          orderData10.mode = 1;
        }
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_10,&orderData10);
        return;
      }
    }
    break;
  case 0x1f:
    pSVar4 = command->payload;
    orderPosition12.x = (pSVar4->position16).x;
    sVar17 = (pSVar4->position16).y;
    sVar16 = (pSVar4->packed).value_01.words.high;
    if (orderPosition12.x < 0) {
      return;
    }
    if (g_worldGrid.sizeX <= orderPosition12.x) {
      return;
    }
    if (sVar16 < 0) {
      return;
    }
    if (g_worldGrid.sizeY <= sVar16) {
      return;
    }
    if (sVar17 < 0) {
      return;
    }
    if (g_worldGrid.sizeZ <= sVar17) {
      return;
    }
    pSVar11 = g_worldGrid.cells
              [(int)sVar16 * (int)g_worldGrid.sizeX + (int)sVar17 * (int)g_worldGrid.planeStride +
               (int)orderPosition12.x].objects[0];
    if (pSVar11 == (STWorldObject *)0x0) {
      return;
    }
    if ((pSVar4->packed).variant == 3) {
      orderPosition12.y = (pSVar4->packed).value_01.words.high;
      orderPosition12.z = (pSVar4->position16).y;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_12,&orderPosition12);
      return;
    }
    if ((pSVar4->packed).variant == 1) {
      pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar8,(undefined4 *)&pSVar11[1].field_0xe);
      local_118[1] = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = pDVar8;
      local_100 = (*pSVar11->vtable->GetObjectTypeId)(pSVar11);
      local_fc = 1;
      local_f8 = (DArrayTy *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_8,local_118 + 1);
      DArrayDestroy(pDVar8);
      return;
    }
    pDVar8 = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
    dVar22 = pDVar8->count;
    local_6c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_34 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_2c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_30 = (AiPlrClassTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (STControlCommandPayload *)0x0;
    local_d4 = 0;
    local_28 = 0;
    if ((int)dVar22 < 1) {
cf_common_exit_00437E03:
      pSVar4 = command->payload;
      orderPositionA.x = (pSVar4->position16).x;
      orderPositionA.y = (pSVar4->packed).value_01.words.high;
      orderPositionA.z = (pSVar4->position16).y;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_A,&orderPositionA);
      pAVar19 = local_30;
    }
    else {
      uVar6 = 0;
      do {
        DArrayGetElement(pDVar8,uVar6,local_118);
        pSVar7 = GetObjPtr(g_sTAllPlayers_007FA174,
                           CONCAT31((int3)((uint)extraout_EDX_04 >> 8),pSVar9->field_0024),
                           local_118[0],CASE_1);
        iVar15 = (*pSVar7->vtable->vfunc_2C)();
        if ((((iVar15 == 8) || (iVar15 = (*pSVar7->vtable->vfunc_2C)(), iVar15 == 0x14)) ||
            (iVar15 = (*pSVar7->vtable->vfunc_2C)(), iVar15 == 0x1a)) &&
           (iVar15 = thunk_FUN_0045ff10((int)pSVar7), iVar15 == 0xc)) {
          puVar10 = (undefined4 *)thunk_FUN_0048dc90(pSVar7,local_1b8);
          puVar18 = &local_1fc;
          for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar18 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar18 = puVar18 + 1;
          }
          *(undefined2 *)puVar18 = *(undefined2 *)puVar10;
          iVar15 = FUN_006e62d0(PTR_00802a38,local_1f6,(int *)&local_40);
          if ((iVar15 == 0) && (iVar15 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar15)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar21 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (STControlCommandPayload *)((int)local_68 + 1);
              pDVar21 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x14ca,0,0,
                                            &DAT_007a4ccc,
                                            s_STAllPlayersC__CmdToPlsObj__CMDT_007a73e0);
                if (iVar15 != 0) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar21 = local_2c;
            }
            Library::DKW::TBL::FUN_006ae1c0(&pDVar21->flags,(undefined4 *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = local_28 + 1;
        uVar6 = (uint)(short)local_28;
      } while ((int)uVar6 < (int)dVar22);
      if ((((int)local_68 < local_d4) && (local_3c < local_d4)) && (0 < local_d4)) {
        iVar15 = 0;
      }
      else {
        if (local_3c < (int)local_68) {
          if ((local_d4 <= (int)local_68) && (0 < (int)local_68)) {
            iVar15 = 1;
            goto LAB_00437cb5;
          }
          if (local_3c < (int)local_68) goto cf_common_exit_00437E03;
        }
        if ((local_3c < local_d4) || (local_3c < 1)) goto cf_common_exit_00437E03;
        iVar15 = 2;
      }
LAB_00437cb5:
      local_118[1] = 0;
      if (iVar15 == 0) {
        local_100 = 0x38;
        local_110 = local_6c;
      }
      else if (iVar15 == 1) {
        local_110 = local_34;
        iVar15 = GetPlayerRaceId(pSVar9->field_0024);
        local_100 = (-(uint)((char)iVar15 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar15 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pAVar19 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      pSVar4 = command->payload;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar17 = (pSVar4->position16).y;
      sVar16 = (pSVar4->packed).value_01.words.high;
      sVar3 = (pSVar4->position16).x;
      if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar16 < 0)) ||
          ((g_worldGrid.sizeY <= sVar16 || (sVar17 < 0)))) || (g_worldGrid.sizeZ <= sVar17)) {
        pSVar11 = (STWorldObject *)0x0;
      }
      else {
        pSVar11 = g_worldGrid.cells
                  [(int)sVar17 * (int)g_worldGrid.planeStride + (int)sVar16 * (int)g_worldGrid.sizeX
                   + (int)sVar3].objects[0];
      }
      Library::DKW::TBL::FUN_006ae1c0((uint *)local_30,(undefined4 *)&pSVar11[1].field_0xe);
      local_f8 = (DArrayTy *)pAVar19;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_8,local_118 + 1);
    }
    DArrayDestroy(pDVar8);
    DArrayDestroy(local_6c);
    DArrayDestroy(local_34);
    DArrayDestroy(local_2c);
    DArrayDestroy((DArrayTy *)pAVar19);
    return;
  case 0x21:
    pSVar4 = command->payload;
    bVar20 = (pSVar4->packed).variant;
    if (bVar20 == 1) {
      local_64 = (pSVar4->packed).value_01;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_15,&local_64);
      return;
    }
    if (bVar20 == 3) {
      orderPositionC.z = -1;
      orderPositionC.y = -1;
      orderPositionC.x = -1;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_C,&orderPositionC);
      return;
    }
    if (bVar20 == 4) {
      local_60 = (pSVar4->packed).value_01;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_B,&local_60);
      return;
    }
    break;
  case 0x23:
    pSVar4 = command->payload;
    orderData9.position.x = *(short *)((int)&(pSVar4->packed).value_01.words.high + 1);
    orderData9.position.y = *(short *)((int)&(pSVar4->packed).value_05.words.high + 1);
    orderData9.position.z = *(short *)((int)&(pSVar4->packed).value_09.words.high + 1);
    orderData9.value_06 = *(int *)pSVar4;
    orderData9.playerId = (dword)command->playerId;
    orderData9.value_0e = 0;
    orderData9.value_1d = -1;
    (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_9,&orderData9);
    return;
  case 0x28:
    bVar20 = (command->payload->packed).variant;
    if (bVar20 == 0) {
      STGroupBoatC::GenSwitch(pSVar9,0);
    }
    else if (bVar20 == 1) {
      STGroupBoatC::GenSwitch(pSVar9,1);
      return;
    }
    break;
  case 0x29:
    if ((command->payload->packed).variant != 0) {
      if (pAVar19 == (AiPlrClassTy *)0x0) {
        return;
      }
      local_8c.field_0010 = 0x5d98;
      local_8c.field_0014 = (undefined4 *)CONCAT22(local_8c.field_0014._2_2_,1);
      local_74 = (DArrayTy *)pSVar9->field_0029;
      (*(code *)**(undefined4 **)pAVar19)(&local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    pSVar4 = command->payload;
    switch((pSVar4->packed).variant) {
    case 1:
    case 2:
      local_14c = (uint)((pSVar4->packed).value_01.bytes.byte2 != 1);
      sVar17 = 0;
      local_150 = 0;
      local_148 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      if ((pSVar4->position16).x != 0) {
        iVar15 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0
                    (&local_148->flags,(undefined4 *)((int)pSVar4 + iVar15 * 4 + 4));
          sVar17 = sVar17 + 1;
          iVar15 = (int)sVar17;
        } while (iVar15 < (int)(uint)(ushort)(pSVar4->position16).x);
      }
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_2,&local_150);
      DArrayDestroy(local_148);
      return;
    case 3:
      sVar17 = 0;
      local_138 = 0;
      local_134 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      if ((pSVar4->position16).x != 0) {
        iVar15 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0
                    (&local_134->flags,(undefined4 *)((int)pSVar4 + iVar15 * 2 + 4));
          sVar17 = sVar17 + 1;
          iVar15 = (int)sVar17;
        } while (iVar15 < (int)(uint)(ushort)(pSVar4->position16).x);
      }
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_5,&local_138);
      DArrayDestroy(local_134);
      return;
    case 4:
      break;
    default:
      iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1427,0,0,&DAT_007a4ccc,
                                  s_STAllPlayersC__CmdToPlsObj_CMDTY_007a742c);
      if (iVar15 != 0) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

