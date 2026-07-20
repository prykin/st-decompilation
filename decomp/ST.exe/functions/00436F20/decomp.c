
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CmdToPlsObj */

void __thiscall STAllPlayersC::CmdToPlsObj(STAllPlayersC *this,STControlCommand *command)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  AiPlrClassTy *pAVar4;
  STControlCommandPayload *pSVar5;
  code *pcVar6;
  uint uVar7;
  void *this_00;
  uint *puVar8;
  STGroupBoatC *pSVar9;
  DArrayTy *pDVar10;
  AnonShape_006ACC70_C8641025 *groupContent;
  int *this_01;
  undefined4 *puVar11;
  STWorldObject *pSVar12;
  undefined4 uVar13;
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
  uint uVar16;
  undefined4 extraout_EDX_04;
  short sVar17;
  short sVar18;
  int unaff_EDI;
  undefined4 *puVar19;
  byte bVar20;
  dword dVar21;
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
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_74;
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
  DArrayTy *local_30;
  DArrayTy *local_2c;
  DArrayTy *local_28;
  int local_24;
  STAllPlayersC *local_20;
  uint local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  STPosition16 targetPosition;
  DArrayTy *local_c;
  AnonShape_00436F20_BB207B3A *local_8;
  
  objPtr = CONCAT31((int3)((uint)in_EDX >> 8),command->playerId);
  sVar18 = command->objectId;
  uVar16 = CONCAT22((short)((uint)this >> 0x10),sVar18);
  local_8 = (AnonShape_00436F20_BB207B3A *)0x0;
  uVar7._0_2_ = command->objectId;
  uVar7._2_2_ = command->targetKind;
  uVar7 = uVar7 >> 0x10;
  pAVar4 = g_playerRuntime[command->playerId].aiPlayer;
  local_38 = uVar16;
  local_30 = (DArrayTy *)pAVar4;
  local_20 = this;
  if (uVar7 != 0) {
    if (uVar7 != 1) {
      if (uVar7 != 2) {
        return;
      }
      if (sVar18 == -1) {
        return;
      }
      this_00 = (void *)GetObjPtr(g_sTAllPlayers_007FA174,objPtr,uVar16,CASE_3);
      if (this_00 == (void *)0x0) {
        return;
      }
      if (command->commandType != 0x15) {
        if (command->commandType != 0x2a) {
          return;
        }
        thunk_FUN_006270e0(this_00,0x2a,(undefined1 *)command);
        return;
      }
      local_24 = 4 - (uint)(command->payload->packed).variant;
      thunk_FUN_006270e0(this_00,0x15,(undefined1 *)&local_24);
      return;
    }
    if (sVar18 == -1) {
      return;
    }
    local_8 = (AnonShape_00436F20_BB207B3A *)GetObjPtr(g_sTAllPlayers_007FA174,objPtr,uVar16,CASE_1)
    ;
    if (local_8 == (AnonShape_00436F20_BB207B3A *)0x0) {
      return;
    }
    local_7c = 0x4401;
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
      sVar18 = *(short *)((int)&(local_68->packed).value_01.words.high + 1);
      uVar1 = *(ushort *)local_68;
      local_34 = (DArrayTy *)(uint)uVar1;
      uVar2 = *(ushort *)((int)&(local_68->packed).value_05.words.high + 1);
      local_2c = (DArrayTy *)(uint)uVar2;
      local_6c = (DArrayTy *)(int)sVar18;
      local_30 = (DArrayTy *)(int)(short)uVar2;
      iVar15 = (int)(short)uVar1;
      if ((*(short *)(DAT_007fb280 +
                     ((int)SHORT_007fb27e * (int)local_30 + iVar15 +
                     (int)SHORT_007fb278 * (int)local_6c) * 2) != 0) &&
         ((((((((short)uVar1 < 0 || (SHORT_007fb240 <= (short)uVar1)) || (sVar18 < 0)) ||
             ((SHORT_007fb242 <= sVar18 || ((short)uVar2 < 0)))) || (SHORT_007fb244 <= (short)uVar2)
            ) || (g_worldCells
                  [(int)SHORT_007fb240 * (int)local_6c +
                   iVar15 + (int)SHORT_007fb246 * (int)local_30].objects[0] == (STWorldObject *)0x0)
           ) && (local_28 = local_2c, (short)uVar2 < 5)))) {
        while( true ) {
          sVar17 = (short)local_28;
          if (*(short *)(DAT_007fb280 +
                        ((int)SHORT_007fb27e * (int)sVar17 + iVar15 +
                        (int)SHORT_007fb278 * (int)local_6c) * 2) == 0) break;
          if (((((-1 < (short)uVar1) && ((short)uVar1 < SHORT_007fb240)) &&
               ((-1 < sVar18 &&
                (((sVar18 < SHORT_007fb242 && (-1 < sVar17)) && (sVar17 < SHORT_007fb244)))))) &&
              (g_worldCells
               [(int)SHORT_007fb246 * (int)sVar17 + iVar15 + (int)SHORT_007fb240 * (int)sVar18].
               objects[0] != (STWorldObject *)0x0)) ||
             (local_28 = (DArrayTy *)((int)&local_28->flags + 1), 4 < (short)local_28))
          goto cf_common_exit_00437191;
        }
        *(int *)((int)&(local_68->packed).value_05 + 3) = (int)sVar17;
      }
cf_common_exit_00437191:
      local_78 = command;
      (*(code *)**(undefined4 **)local_8)(local_8c);
      return;
    case 0x29:
      if ((command->payload->packed).variant == 0) {
        if (pAVar4 == (AiPlrClassTy *)0x0) {
          return;
        }
        puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar8,&local_38);
        local_78 = (STControlCommand *)((uint)local_78._2_2_ << 0x10);
      }
      else {
        if (pAVar4 == (AiPlrClassTy *)0x0) {
          return;
        }
        puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0(puVar8,&local_38);
        local_78 = (STControlCommand *)CONCAT22(local_78._2_2_,1);
      }
      local_7c = 0x5d98;
      local_74 = puVar8;
      (*(code *)**(undefined4 **)&pAVar4->field_0x0)(local_8c);
      FUN_006ae110((byte *)puVar8);
      return;
    }
  }
  if (sVar18 == -1) {
    return;
  }
  local_1c = uVar16;
  if (command->commandType == 0x17) {
    pSVar5 = command->payload;
    switch((pSVar5->packed).variant) {
    case 0x11:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar16);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
        uVar7 = extraout_ECX_04;
      }
      else {
        dVar21 = command->primaryPayloadSize;
        local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar18 = 0;
        uVar7 = extraout_ECX_03;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)local_c,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar21));
            sVar18 = sVar18 + 1;
            uVar7 = command->secondaryPayloadSize >> 1;
          } while (sVar18 < (short)uVar7);
        }
      }
      thunk_FUN_0044cdb0(CONCAT31((int3)(uVar7 >> 8),command->playerId),local_c,
                         (command->payload->packed).value_1d);
      FUN_006ae110((byte *)local_c);
      return;
    case 0x15:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar16);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        puVar8 = STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
        uVar13 = extraout_ECX_01;
      }
      else {
        dVar21 = command->primaryPayloadSize;
        puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar18 = 0;
        uVar13 = extraout_ECX;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      (puVar8,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar21));
            sVar18 = sVar18 + 1;
            uVar13 = extraout_ECX_00;
          } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar13 >> 8),command->playerId),puVar8,1);
      thunk_FUN_0044cd20(CONCAT31((int3)((uint)extraout_EDX >> 8),command->playerId),puVar8,0);
      FUN_006ae110((byte *)puVar8);
      return;
    case 0x16:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar16);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
        uVar13 = extraout_EDX_02;
      }
      else {
        dVar21 = command->primaryPayloadSize;
        local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar18 = 0;
        uVar13 = extraout_EDX_00;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      ((uint *)local_c,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar21));
            sVar18 = sVar18 + 1;
            uVar13 = extraout_EDX_01;
          } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)uVar13 >> 8),command->playerId),&local_c->flags,0);
      FUN_006ae110((byte *)local_c);
      return;
    case 0x17:
      if (command->secondaryPayloadSize == 0) {
        pSVar9 = thunk_FUN_0042b760(objPtr,uVar16);
        if (pSVar9 == (STGroupBoatC *)0x0) {
          return;
        }
        puVar8 = STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
      }
      else {
        dVar21 = command->primaryPayloadSize;
        puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        sVar18 = 0;
        if (0 < (short)(command->secondaryPayloadSize >> 1)) {
          do {
            Library::DKW::TBL::FUN_006ae1c0
                      (puVar8,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar21));
            sVar18 = sVar18 + 1;
          } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
        }
      }
      if ((command->payload->packed).value_1d != 0) {
        thunk_FUN_0044cd20(CONCAT31((int3)((uint)command->payload >> 8),command->playerId),puVar8,0)
        ;
        FUN_006ae110((byte *)puVar8);
        return;
      }
      thunk_FUN_0044cd20((uint)command->playerId,puVar8,1);
      thunk_FUN_0044cc90(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),command->playerId),puVar8,0);
      FUN_006ae110((byte *)puVar8);
      return;
    }
  }
  pSVar9 = (STGroupBoatC *)0x0;
  if (command->secondaryPayloadSize != 0) {
    pSVar5 = command->payload;
    dVar21 = command->primaryPayloadSize;
    puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    sVar18 = 0;
    uVar7 = command->secondaryPayloadSize >> 1;
    if (0 < (short)uVar7) {
      do {
        Library::DKW::TBL::FUN_006ae1c0(puVar8,(undefined4 *)((int)pSVar5 + sVar18 * 2 + dVar21));
        sVar18 = sVar18 + 1;
        uVar7 = extraout_EDX_03;
      } while (sVar18 < (short)(command->secondaryPayloadSize >> 1));
    }
    AddObjsToGroup(local_20,CONCAT31((int3)(uVar7 >> 8),command->playerId),0xfffe,puVar8,
                   (undefined2 *)&local_1c);
    pSVar9 = (STGroupBoatC *)FUN_006ae110((byte *)puVar8);
    uVar16 = extraout_ECX_05;
  }
  pDVar10 = local_30;
  if (((local_30 != (DArrayTy *)0x0) &&
      (pSVar9 = thunk_FUN_0042b760(CONCAT31((int3)(uVar16 >> 8),command->playerId),local_1c),
      pSVar9 != (STGroupBoatC *)0x0)) && (pSVar9->field_001C != 0)) {
    if ((command->commandType == 0x29) && ((command->payload->packed).variant == 1)) {
      return;
    }
    puVar8 = STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
    AddObjsToGroup(local_20,CONCAT31((int3)((uint)extraout_ECX_06 >> 8),command->playerId),0xfffe,
                   puVar8,(undefined2 *)&local_1c);
    pSVar9 = (STGroupBoatC *)FUN_006ae110((byte *)puVar8);
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
      pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      targetPosition.x = *(short *)command->payload;
      targetPosition.y = *(short *)((int)&(command->payload->packed).value_01.words.high + 1);
      thunk_FUN_0049a500(pSVar9,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar10,(undefined4 *)&targetPosition);
      orderData6.mode = 1;
      orderData6.positions = pDVar10;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_6,&orderData6);
      FUN_006ae110((byte *)pDVar10);
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
    pSVar5 = command->payload;
    switch((pSVar5->packed).variant) {
    case 0:
    case 5:
      FUN_006e62d0(PTR_00802a38,(pSVar5->position32).x,(int *)&local_8);
      if (local_8 == (AnonShape_00436F20_BB207B3A *)0x0) {
        return;
      }
      pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      local_18 = local_8->field_0x24;
      local_16 = local_8->field_0032;
      uVar7 = *(uint *)&local_8->field_0x20;
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
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar10,(undefined4 *)&local_18);
      local_14c = (uint)((command->payload->packed).variant != 0);
      local_150 = 0;
      local_148 = pDVar10;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_2,&local_150);
      FUN_006ae110((byte *)pDVar10);
      return;
    case 1:
      FUN_006e62d0(PTR_00802a38,(pSVar5->position32).x,(int *)&local_8);
      if (local_8 != (AnonShape_00436F20_BB207B3A *)0x0) {
        orderDataF.value_00 = local_8->field_0x24;
        orderDataF.value_01 = local_8->field_0032;
        orderDataF.value_03 = *(dword *)&local_8->field_0x18;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_F,&orderDataF);
        return;
      }
      break;
    case 2:
      orderDataE.value_00 = (short)(pSVar5->packed).value_05.bytes.byte0;
      orderDataE.value_02 = (short)(pSVar5->packed).value_05.bytes.byte1;
      orderDataE.value_04 = (short)(pSVar5->packed).value_05.bytes.byte2;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_E,&orderDataE);
      return;
    }
    break;
  case 0x17:
    pSVar5 = command->payload;
    switch((pSVar5->packed).variant) {
    case 1:
      FUN_006e62d0(PTR_00802a38,(pSVar5->packed).value_1d,(int *)&local_8);
      if (local_8 != (AnonShape_00436F20_BB207B3A *)0x0) {
        pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar10,(undefined4 *)&local_8->field_0032);
        local_138 = 0;
        local_134 = pDVar10;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_5,&local_138);
        FUN_006ae110((byte *)pDVar10);
        return;
      }
      break;
    case 2:
      pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
      targetPosition.x = (command->payload->position16).x;
      targetPosition.y = (command->payload->position16).y;
      thunk_FUN_0049a500(pSVar9,(undefined2 *)0x0,(undefined2 *)0x0,&targetPosition.z);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar10,(undefined4 *)&targetPosition);
      thunk_FUN_0049a500(pSVar9,&targetPosition.x,&targetPosition.y,(undefined2 *)0x0);
      Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar10,(undefined4 *)&targetPosition);
      orderData6.mode = 0;
      orderData6.positions = pDVar10;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_6,&orderData6);
      FUN_006ae110((byte *)pDVar10);
      return;
    case 3:
      sVar18 = (pSVar5->position16).z;
      sVar17 = (pSVar5->position16).y;
      sVar3 = (pSVar5->position16).x;
      if (((-1 < sVar3) && (sVar3 < SHORT_007fb240)) &&
         ((((-1 < sVar17 && ((sVar17 < SHORT_007fb242 && (-1 < sVar18)))) &&
           (sVar18 < SHORT_007fb244)) &&
          (pSVar12 = g_worldCells
                     [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar17 * (int)SHORT_007fb240 +
                      (int)sVar3].objects[0], pSVar12 != (STWorldObject *)0x0)))) {
        pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
        Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar10,(undefined4 *)&pSVar12[1].field_0xe);
        orderData4.mode = 0;
        orderData4.objectIds = pDVar10;
        (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_4,&orderData4);
        FUN_006ae110((byte *)pDVar10);
        return;
      }
      break;
    case 10:
      orderData4.mode = 1;
      orderData4.objectIds = (DArrayTy *)0x0;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_4,&orderData4);
      return;
    case 0x10:
      orderPosition14.x = (pSVar5->position16).x;
      orderPosition14.y = (pSVar5->position16).y;
      orderPosition14.z = (pSVar5->position16).z;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_14,&orderPosition14);
      return;
    case 0x13:
      sVar18 = (pSVar5->position16).x;
      sVar17 = (pSVar5->position16).z;
      sVar3 = (pSVar5->position16).y;
      if ((((-1 < sVar18) && (sVar18 < SHORT_007fb240)) &&
          ((-1 < sVar3 && (((sVar3 < SHORT_007fb242 && (-1 < sVar17)) && (sVar17 < SHORT_007fb244)))
           ))) && (g_worldCells
                   [(int)sVar17 * (int)SHORT_007fb246 + (int)sVar3 * (int)SHORT_007fb240 +
                    (int)sVar18].objects[0] != (STWorldObject *)0x0)) {
        orderData11.mode = 0;
        orderData11.position.x = (pSVar5->position16).x;
        orderData11.position.y = (pSVar5->position16).y;
        orderData11.position.z = (pSVar5->position16).z;
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
      orderPosition13.x = (pSVar5->position16).x;
      orderPosition13.y = (pSVar5->position16).y;
      orderPosition13.z = (pSVar5->position16).z;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_13,&orderPosition13);
      return;
    }
    break;
  case 0x18:
    pSVar5 = command->payload;
    switch((pSVar5->packed).variant) {
    case 1:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 1;
      break;
    case 2:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 2;
      break;
    case 3:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 4;
      break;
    case 4:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 5;
      break;
    case 5:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 3;
      break;
    case 6:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 0xfffffffd;
      break;
    case 7:
      dVar21 = (pSVar5->packed).value_0d.whole;
      pSVar14 = pSVar9->vtable;
      bVar20 = (pSVar5->packed).value_11;
      uVar13 = 0xfffffffe;
      break;
    case 8:
      (*pSVar9->vtable->vfunc_18)(pSVar9,0,0,0);
      thunk_FUN_0043fc50(CASE_11,0);
      goto switchD_004384bc_default;
    case 9:
      pSVar14 = pSVar9->vtable;
      uVar13 = (*pSVar14->vfunc_24)();
      iVar15 = (*pSVar9->vtable->vfunc_20)(uVar13);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,iVar15 + 1);
      goto switchD_004384bc_default;
    case 10:
      pSVar14 = pSVar9->vtable;
      uVar13 = (*pSVar14->vfunc_24)();
      iVar15 = (*pSVar9->vtable->vfunc_20)(uVar13);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,iVar15 + -1);
      goto switchD_004384bc_default;
    case 0xb:
      pSVar14 = pSVar9->vtable;
      iVar15 = (*pSVar14->vfunc_24)();
      uVar13 = (*pSVar9->vtable->vfunc_20)(iVar15 + 0x2d);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,uVar13);
      goto switchD_004384bc_default;
    case 0xc:
      pSVar14 = pSVar9->vtable;
      iVar15 = (*pSVar14->vfunc_24)();
      uVar13 = (*pSVar9->vtable->vfunc_20)(iVar15 + -0x2d);
      (*pSVar14->vfunc_18)(pSVar9,0xffffffff,uVar13);
    default:
      goto switchD_004384bc_default;
    }
    (*pSVar14->vfunc_18)(pSVar9,uVar13,bVar20,dVar21);
switchD_004384bc_default:
    pSVar5 = command->payload;
    switch((pSVar5->packed).variant) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      orderData.position.x = (pSVar5->position16).x;
      orderData.position.y = (pSVar5->position16).y;
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
    pSVar5 = command->payload;
    orderDataD.position.x = *(short *)pSVar5;
    orderDataD.position.y = *(short *)((int)&(pSVar5->packed).value_01.words.high + 1);
    orderDataD.position.z = *(short *)((int)&(pSVar5->packed).value_05.words.high + 1);
    orderDataD.value_06 = -1;
    (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_D,&orderDataD);
    return;
  case 0x1a:
    pSVar5 = command->payload;
    if ((pSVar5->packed).variant == 1) {
      orderData10.mode = 2;
      orderData10.sourcePosition.x = 0;
      orderData10.sourcePosition.y = 0;
      orderData10.sourcePosition.z = 0;
      orderData10.targetPosition.x = (pSVar5->position16).x;
      orderData10.targetPosition.y = (pSVar5->position16).y;
      orderData10.targetPosition.z = (pSVar5->position16).z;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_10,&orderData10);
      return;
    }
    if ((pSVar5->packed).variant == 2) {
      orderData10.sourcePosition.x = (pSVar5->position16).x;
      orderData10.sourcePosition.y = (pSVar5->position16).y;
      orderData10.sourcePosition.z = (pSVar5->position16).z;
      if ((((-1 < orderData10.sourcePosition.x) && (orderData10.sourcePosition.x < SHORT_007fb240))
          && ((-1 < orderData10.sourcePosition.y &&
              (((orderData10.sourcePosition.y < SHORT_007fb242 &&
                (-1 < orderData10.sourcePosition.z)) &&
               (orderData10.sourcePosition.z < SHORT_007fb244)))))) &&
         ((pSVar12 = g_worldCells
                     [(int)orderData10.sourcePosition.z * (int)SHORT_007fb246 +
                      (int)orderData10.sourcePosition.y * (int)SHORT_007fb240 +
                      (int)orderData10.sourcePosition.x].objects[0], pSVar12 != (STWorldObject *)0x0
          && (pSVar12->value_20 == 1000)))) {
        iVar15 = (*pSVar12->vtable->GetObjectTypeId)(pSVar12);
        if (iVar15 == 0x37) {
          orderData10.mode = 0;
          orderData10.targetPosition.x = 0;
          orderData10.targetPosition.y = 0;
          orderData10.targetPosition.z = 0;
        }
        else {
          iVar15 = (*pSVar12->vtable->GetObjectTypeId)(pSVar12);
          if (iVar15 != 0x6c) {
            return;
          }
          iVar15 = thunk_FUN_004e9960(pSVar12,(undefined4 *)&orderData10.targetPosition,
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
    pSVar5 = command->payload;
    orderPosition12.x = (pSVar5->position16).x;
    sVar18 = (pSVar5->position16).y;
    sVar17 = (pSVar5->packed).value_01.words.high;
    if (orderPosition12.x < 0) {
      return;
    }
    if (SHORT_007fb240 <= orderPosition12.x) {
      return;
    }
    if (sVar17 < 0) {
      return;
    }
    if (SHORT_007fb242 <= sVar17) {
      return;
    }
    if (sVar18 < 0) {
      return;
    }
    if (SHORT_007fb244 <= sVar18) {
      return;
    }
    pSVar12 = g_worldCells
              [(int)sVar17 * (int)SHORT_007fb240 + (int)sVar18 * (int)SHORT_007fb246 +
               (int)orderPosition12.x].objects[0];
    if (pSVar12 == (STWorldObject *)0x0) {
      return;
    }
    if ((pSVar5->packed).variant == 3) {
      orderPosition12.y = (pSVar5->packed).value_01.words.high;
      orderPosition12.z = (pSVar5->position16).y;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_12,&orderPosition12);
      return;
    }
    if ((pSVar5->packed).variant == 1) {
      puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
      Library::DKW::TBL::FUN_006ae1c0(puVar8,(undefined4 *)&pSVar12[1].field_0xe);
      local_118[1] = 0;
      local_102 = 0xffff;
      local_104 = 0xffff;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_110 = (DArrayTy *)puVar8;
      local_100 = (*pSVar12->vtable->GetObjectTypeId)(pSVar12);
      local_fc = 1;
      local_f8 = (DArrayTy *)0x0;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_8,local_118 + 1);
      FUN_006ae110((byte *)puVar8);
      return;
    }
    groupContent = (AnonShape_006ACC70_C8641025 *)
                   STGroupC::GetGroupContent((STGroupC *)pSVar9,unaff_EDI);
    uVar7 = groupContent->field_000C;
    local_6c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_34 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_2c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_30 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    local_3c = 0;
    local_68 = (STControlCommandPayload *)0x0;
    local_d4 = 0;
    local_28 = (DArrayTy *)0x0;
    if ((int)uVar7 < 1) {
cf_common_exit_00437E03:
      pSVar5 = command->payload;
      orderPositionA.x = (pSVar5->position16).x;
      orderPositionA.y = (pSVar5->packed).value_01.words.high;
      orderPositionA.z = (pSVar5->position16).y;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_A,&orderPositionA);
      pDVar10 = local_30;
    }
    else {
      uVar16 = 0;
      do {
        FUN_006acc70(groupContent,uVar16,local_118);
        this_01 = (int *)GetObjPtr(g_sTAllPlayers_007FA174,
                                   CONCAT31((int3)((uint)extraout_EDX_04 >> 8),pSVar9->field_0024),
                                   local_118[0],CASE_1);
        iVar15 = (**(code **)(*this_01 + 0x2c))();
        if ((((iVar15 == 8) || (iVar15 = (**(code **)(*this_01 + 0x2c))(), iVar15 == 0x14)) ||
            (iVar15 = (**(code **)(*this_01 + 0x2c))(), iVar15 == 0x1a)) &&
           (iVar15 = thunk_FUN_0045ff10((int)this_01), iVar15 == 0xc)) {
          puVar11 = (undefined4 *)thunk_FUN_0048dc90(this_01,local_1b8);
          puVar19 = &local_1fc;
          for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar19 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar19 = puVar19 + 1;
          }
          *(undefined2 *)puVar19 = *(undefined2 *)puVar11;
          iVar15 = FUN_006e62d0(PTR_00802a38,local_1f6,(int *)&local_40);
          if ((iVar15 == 0) && (iVar15 = (**(code **)(*local_40 + 0x88))(&local_e8), 0 < iVar15)) {
            if (local_e8 == 0xdc) {
              local_d4 = local_d4 + 1;
              pDVar10 = local_6c;
            }
            else if (local_e8 == 0xdd) {
              local_68 = (STControlCommandPayload *)((int)local_68 + 1);
              pDVar10 = local_34;
            }
            else {
              if (local_e8 != 0xde) {
                iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x14ca,0,0,
                                            &DAT_007a4ccc,
                                            s_STAllPlayersC__CmdToPlsObj__CMDT_007a73e0);
                if (iVar15 != 0) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                goto LAB_00437c45;
              }
              local_3c = local_3c + 1;
              pDVar10 = local_2c;
            }
            Library::DKW::TBL::FUN_006ae1c0(&pDVar10->flags,(undefined4 *)((int)local_40 + 0x32));
          }
        }
LAB_00437c45:
        local_28 = (DArrayTy *)((int)local_28 + 1);
        uVar16 = (uint)(short)local_28;
      } while ((int)uVar16 < (int)uVar7);
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
        iVar15 = thunk_FUN_004406c0(pSVar9->field_0024);
        local_100 = (-(uint)((char)iVar15 != '\x03') & 0xffffffdb) + 0x5e;
      }
      else if (iVar15 == 2) {
        local_100 = 0x4f;
        local_110 = local_2c;
      }
      pDVar10 = local_30;
      local_102 = 0xffff;
      local_104 = 0xffff;
      pSVar5 = command->payload;
      local_106 = 0xffff;
      local_108 = 0xffff;
      local_10a = 0xffff;
      local_10c = 0xffff;
      local_fc = 0;
      sVar18 = (pSVar5->position16).y;
      sVar17 = (pSVar5->packed).value_01.words.high;
      sVar3 = (pSVar5->position16).x;
      if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar17 < 0)) ||
          ((SHORT_007fb242 <= sVar17 || (sVar18 < 0)))) || (SHORT_007fb244 <= sVar18)) {
        pSVar12 = (STWorldObject *)0x0;
      }
      else {
        pSVar12 = g_worldCells
                  [(int)sVar18 * (int)SHORT_007fb246 + (int)sVar17 * (int)SHORT_007fb240 +
                   (int)sVar3].objects[0];
      }
      Library::DKW::TBL::FUN_006ae1c0(&local_30->flags,(undefined4 *)&pSVar12[1].field_0xe);
      local_f8 = pDVar10;
      local_ea = 0xffff;
      local_ec = 0xffff;
      local_ee = 0xffff;
      local_f0 = 0xffff;
      local_f2 = 0xffff;
      local_f4 = 0xffff;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_8,local_118 + 1);
    }
    FUN_006ae110((byte *)groupContent);
    FUN_006ae110((byte *)local_6c);
    FUN_006ae110((byte *)local_34);
    FUN_006ae110((byte *)local_2c);
    FUN_006ae110((byte *)pDVar10);
    return;
  case 0x21:
    pSVar5 = command->payload;
    bVar20 = (pSVar5->packed).variant;
    if (bVar20 == 1) {
      local_64 = (pSVar5->packed).value_01;
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
      local_60 = (pSVar5->packed).value_01;
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_B,&local_60);
      return;
    }
    break;
  case 0x23:
    pSVar5 = command->payload;
    orderData9.position.x = *(short *)((int)&(pSVar5->packed).value_01.words.high + 1);
    orderData9.position.y = *(short *)((int)&(pSVar5->packed).value_05.words.high + 1);
    orderData9.position.z = *(short *)((int)&(pSVar5->packed).value_09.words.high + 1);
    orderData9.value_06 = *(int *)pSVar5;
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
      if (pDVar10 == (DArrayTy *)0x0) {
        return;
      }
      local_7c = 0x5d98;
      local_78 = (STControlCommand *)CONCAT22(local_78._2_2_,1);
      local_74 = (uint *)pSVar9->field_0029;
      (**(code **)pDVar10->flags)(local_8c);
      return;
    }
    goto cf_common_exit_0043824D;
  case 0x31:
    pSVar5 = command->payload;
    switch((pSVar5->packed).variant) {
    case 1:
    case 2:
      local_14c = (uint)((pSVar5->packed).value_01.bytes.byte2 != 1);
      sVar18 = 0;
      local_150 = 0;
      local_148 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      if ((pSVar5->position16).x != 0) {
        iVar15 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0
                    (&local_148->flags,(undefined4 *)((int)pSVar5 + iVar15 * 4 + 4));
          sVar18 = sVar18 + 1;
          iVar15 = (int)sVar18;
        } while (iVar15 < (int)(uint)(ushort)(pSVar5->position16).x);
      }
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_2,&local_150);
      FUN_006ae110((byte *)local_148);
      return;
    case 3:
      sVar18 = 0;
      local_138 = 0;
      local_134 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      if ((pSVar5->position16).x != 0) {
        iVar15 = 0;
        do {
          Library::DKW::TBL::FUN_006ae1c0
                    (&local_134->flags,(undefined4 *)((int)pSVar5 + iVar15 * 2 + 4));
          sVar18 = sVar18 + 1;
          iVar15 = (int)sVar18;
        } while (iVar15 < (int)(uint)(ushort)(pSVar5->position16).x);
      }
      (*pSVar9->vtable->vfunc_08)(pSVar9,CASE_5,&local_138);
      FUN_006ae110((byte *)local_134);
      return;
    case 4:
      break;
    default:
      iVar15 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1427,0,0,&DAT_007a4ccc,
                                  s_STAllPlayersC__CmdToPlsObj_CMDTY_007a742c);
      if (iVar15 != 0) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  return;
}

