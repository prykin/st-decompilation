
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_cont.cpp
   STContainerC::GetMessage */

undefined4 __thiscall
STContainerC::GetMessage(STContainerC *this,AnonShape_005FB640_4C6A297D *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  bool bVar5;
  STContainerC *this_00;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  void *this_01;
  int iVar9;
  byte bVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar11;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  undefined4 *puVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  STContainerC *local_8;
  
  local_8 = this;
  iVar6 = STSprGameObjC::GetMessage((STSprGameObjC *)this,(AnonShape_0041AF40_F59F8577 *)param_1);
  if (iVar6 != 0xffff) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    iVar6 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar6 == 0) {
      uVar7 = param_1->field_0010;
      if (0x110 < uVar7) {
        switch(uVar7) {
        case 0x112:
          if ((int)local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad5e0((int)&local_8->field_01D5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case 0x113:
          if ((int)local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          (**(code **)local_8->field_01D5)();
          g_currentExceptionFrame = local_60.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case 0x128:
          iVar6 = param_1->field_0014;
          local_8->field_0315 = *(undefined1 *)(iVar6 + 0x18);
          if (((local_8->field_024E != '\0') && (local_8->field_02AB != -1)) &&
             ((this_01 = (void *)local_8->field_02AD, this_01 != (void *)0x0 ||
              (this_01 = (void *)STAllPlayersC::GetObjPtr
                                           (g_sTAllPlayers_007FA174,
                                            CONCAT31((int3)((uint)param_1 >> 8),local_8->field_02A3)
                                            ,CONCAT22((short)(uVar7 - 0x112 >> 0x10),
                                                      local_8->field_02AB),CASE_1),
              this_01 != (void *)0x0)))) {
            thunk_FUN_00492510(this_01,this_00->field_0018);
            (**(code **)(this_00->field_0000 + 0xac))(*(undefined4 *)((int)this_01 + 0x18));
          }
          switch(*(undefined4 *)(iVar6 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005fbd82_caseD_2;
          case 3:
            uVar17 = 0;
            this_00->field_030E = *(undefined1 *)(iVar6 + 8);
            this_00->field_030F = *(undefined2 *)(iVar6 + 0xc);
            iVar6 = this_00->field_02C6;
            this_00->field_030D = 1;
            this_00->field_023A = 5;
            iVar9 = this_00->field_02C2;
            *(int *)&this_00->field_0x2e0 = PTR_00802a38->field_00E4 + 0x15;
            iVar16 = this_00->field_02BE;
            iVar15 = 1;
            uVar7 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            thunk_FUN_006377b0(uVar7,iVar15,iVar16,iVar9,iVar6,uVar17);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          case 5:
            *(undefined4 *)&this_00->field_0x2d2 = 0;
            *(undefined4 *)&this_00->field_0x2b5 = 3;
            this_00->field_023A = 5;
            g_currentExceptionFrame = local_60.previous;
            return 0;
          default:
            this_00->field_030E = *(undefined1 *)(iVar6 + 8);
            this_00->field_030F = *(undefined2 *)(iVar6 + 0xc);
            this_00->field_030D = 1;
            if (-1 < (int)this_00->field_02D6) {
              FUN_006eab60((void *)this_00->field_0211,this_00->field_02D6);
            }
            thunk_FUN_005fc3e0((STJellyGunC *)this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case 0x129:
          goto switchD_005fbd08_caseD_129;
        }
      }
      if (uVar7 == 0x110) {
        puVar13 = (undefined4 *)param_1->field_0014;
        if (local_8->field_023A == 5) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (local_8->field_023A == 6) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        iVar6 = (**(code **)(local_8->field_0000 + 0x124))(*puVar13);
        if (iVar6 == 0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(1);
        this_00->field_030E = *(undefined1 *)(puVar13 + 2);
        this_00->field_030F = *(undefined2 *)(puVar13 + 3);
        this_00->field_030D = 1;
        this_00->field_023A = 5;
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (3 < uVar7) {
        if (uVar7 == 0x108) {
          thunk_FUN_005ef5f0((int)local_8);
          thunk_FUN_005eeff0(this_00,0);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (uVar7 != 0x10f) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        local_14 = thunk_FUN_005fcad0(local_8,&local_10);
        STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_14,local_10);
        FUN_006ab060(&local_14);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar7 == 3) {
        iVar6 = thunk_FUN_00495ff0(local_8->field_0242,local_8->field_0244,local_8->field_0246,0,
                                   (AnonShape_00495FF0_59081BDD *)local_8);
        if (iVar6 == 0) {
          this_00->field_0252 = this_00->field_0252 + -1;
        }
        thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
        if (this_00->field_02E4 == '\0') {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        uVar11 = extraout_var;
        if (this_00->field_0250 != '\x03') {
          thunk_FUN_005f0d90((AnonShape_005F0D90_C3146DC2 *)this_00);
          uVar11 = extraout_var_00;
        }
        STAllPlayersC::UnRegisterContainer
                  (g_sTAllPlayers_007FA174,CONCAT22(uVar11,this_00->field_0032),
                   (AnonShape_0044A730_DBE673B2 *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar7 == 0) {
        if (local_8->field_023A == 6) {
          thunk_FUN_005fc3e0((STJellyGunC *)local_8);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        uVar8 = thunk_FUN_005ee6e0((AnonShape_005EE6E0_AB6798ED *)local_8);
        this_00->field_0x2de = (char)uVar8;
        if ((char)uVar8 == '\0') {
          if (this_00->field_023A != 6) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_005fc3e0((STJellyGunC *)this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        this_00->field_02BE = this_00->field_0277;
        this_00->field_02C2 = this_00->field_027B;
        this_00->field_02C6 = this_00->field_027F;
        thunk_FUN_005eff00((int)this_00);
        if ((-1 < *(int *)&this_00->field_0x2d2) &&
           (iVar6 = thunk_FUN_005f0ba0((AnonShape_005F0BA0_C8D654C5 *)this_00), iVar6 != 0)) {
          *(undefined4 *)&this_00->field_0x2d2 = 0xffffffff;
        }
        thunk_FUN_005eeff0(this_00,0);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (uVar7 != 2) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar13 = (undefined4 *)param_1->field_0014;
      if (puVar13[3] != 2) {
        puVar12 = puVar13;
        puVar14 = (undefined4 *)&local_8->field_0x326;
        for (iVar6 = 0x55; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
        if (puVar13[3] == 0) {
          local_8->field_046F = (int)local_8->field_034E;
          local_8->field_0473 = (int)local_8->field_0350;
          local_8->field_0477 = (int)local_8->field_0352;
          local_8->field_034E = local_8->field_034E * 0xc9 + 100;
          local_8->field_0350 = local_8->field_0350 * 0xc9 + 100;
          local_8->field_0352 = local_8->field_0352 * 200 + 100;
        }
        iVar6 = thunk_FUN_005fc4a0(local_8);
        if (iVar6 == 0) {
          thunk_FUN_005fc3e0((STJellyGunC *)this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if ((((*(int *)&this_00->field_0x358 != 0) && (*(short *)&this_00->field_0x342 == 1)) &&
            (iVar6 = FUN_006e62d0(PTR_00802a38,*(int *)&this_00->field_0x358,&local_18), iVar6 != -4
            )) && ((void *)this_00->field_0211 != (void *)0x0)) {
          FUN_006ea460((void *)this_00->field_0211,this_00->field_01ED,*(int *)(local_18 + 0x1ed));
        }
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          iVar6 = STAllPlayersC::RegisterContainer(g_sTAllPlayers_007FA174,0xffff,this_00);
          if (iVar6 != 0) {
            thunk_FUN_005fc3e0((STJellyGunC *)this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02E4 = 1;
          thunk_FUN_005fceb0((AnonShape_005FCEB0_FA1F7938 *)this_00);
        }
        uVar7 = *(uint *)&this_00->field_0x342 >> 0x10;
        if (uVar7 != 3) {
          if (uVar7 != 5) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          *(int *)&this_00->field_0x2d2 = *(short *)(DAT_00806724 + 0x23) + -1;
          *(undefined4 *)&this_00->field_0x2b5 = 1;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_006377b0(this_00->field_01ED,1,(int)this_00->field_034E,(int)this_00->field_0350,
                           (int)this_00->field_0352,0x13);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      iVar6 = thunk_FUN_005fcc00(local_8,puVar13);
      if (iVar6 < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (this_00->field_0252 != '\0') {
        sVar1 = this_00->field_0242;
        sVar2 = this_00->field_0244;
        local_1c = (int)sVar2;
        sVar3 = this_00->field_0246;
        local_c = 1;
        if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) ||
            ((sVar2 < 0 || ((SHORT_007fb242 <= sVar2 || (sVar3 < 0)))))) ||
           (SHORT_007fb244 <= sVar3)) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_007fb248 +
                          ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar2 +
                          (int)sVar1) * 8);
        }
        bVar5 = true;
        if ((iVar6 == 0) &&
           (iVar6 = DumpClassC::WritePtr(sVar1,sVar2,sVar3,0,(AnonShape_00495EC0_95A268C6 *)this_00)
           , iVar6 == 0)) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) {
          thunk_FUN_005fc3e0((STJellyGunC *)this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        bVar10 = this_00->field_0252 - 1;
        this_00->field_0252 = bVar10;
        if (1 < bVar10) {
          sVar1 = *(short *)&this_00->field_0x248;
          sVar2 = *(short *)&this_00->field_0x24a;
          local_c = (uint)sVar2;
          sVar3 = *(short *)&this_00->field_0x24c;
          local_1c = 1;
          if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar2 < 0)) ||
             (((SHORT_007fb242 <= sVar2 || (sVar3 < 0)) || (SHORT_007fb244 <= sVar3)))) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(DAT_007fb248 +
                            ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar2 +
                            (int)sVar1) * 8);
          }
          bVar5 = true;
          if ((iVar6 == 0) &&
             (iVar6 = DumpClassC::WritePtr
                                (sVar1,sVar2,sVar3,0,(AnonShape_00495EC0_95A268C6 *)this_00),
             iVar6 == 0)) {
            this_00->field_0252 = this_00->field_0252 + '\x01';
          }
          else {
            bVar5 = false;
          }
          if (!bVar5) {
            thunk_FUN_005fc3e0((STJellyGunC *)this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_0252 = this_00->field_0252 + -1;
        }
      }
      thunk_FUN_005ef5f0((int)this_00);
      thunk_FUN_005eeff0(this_00,0);
      if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      iVar6 = STAllPlayersC::RegisterContainer(g_sTAllPlayers_007FA174,this_00->field_0032,this_00);
      if (iVar6 == 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      thunk_FUN_005fc3e0((STJellyGunC *)this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar9 = ReportDebugMessage(s_E____titans_nick_to_cont_cpp_007ce8e0,0x139,0,iVar6,&DAT_007a4ccc,
                               s_STContainerC__GetMessage_007ce904);
    if (iVar9 != 0) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    RaiseInternalException(iVar6,0,s_E____titans_nick_to_cont_cpp_007ce8e0,0x13b);
  }
  return 0xffff;
switchD_005fbd82_caseD_2:
  iVar9 = (**(code **)(this_00->field_0000 + 0x124))(20000);
  if (iVar9 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005ec9f0(1);
  if (*(int *)(iVar6 + 0x18) == 4) {
    FUN_006e9d40((void *)this_00->field_0211,(uint *)this_00->field_01ED,8);
  }
  this_00->field_030E = *(undefined1 *)(iVar6 + 8);
  this_00->field_030F = *(undefined2 *)(iVar6 + 0xc);
  this_00->field_023A = 5;
  this_00->field_030D = 1;
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005fbd08_caseD_129:
  if (local_8->field_023A != 4) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  uVar7 = CONCAT22((short)((uint)param_1 >> 0x10),local_8->field_02AB);
  if (local_8->field_02AB == -1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_024F == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  local_c = local_8->field_02AD;
  if (local_c == 0) {
    local_c = STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,CONCAT31((int3)(uVar7 >> 8),local_8->field_02A3),
                         uVar7,CASE_1);
  }
  if (local_c != 0) {
    this_00->field_0277 = (int)*(short *)(local_c + 0x41);
    this_00->field_027B = (int)*(short *)(local_c + 0x43);
    this_00->field_027F = *(short *)(local_c + 0x45) + 5;
    this_00->field_02BA = (int)*(short *)(local_c + 0x6c) / 0xf;
    puVar13 = (undefined4 *)(local_c + 0x34);
    puVar12 = (undefined4 *)&this_00->field_0x34;
    for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = *(undefined2 *)puVar13;
    *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar13 + 2);
    this_00->field_0076 = 0;
    this_00->field_006E = *(undefined2 *)(local_c + 0x6e);
    this_00->field_02BE = this_00->field_0277;
    this_00->field_02C2 = this_00->field_027B;
    this_00->field_02C6 = this_00->field_027F;
  }
  thunk_FUN_005ef5f0((int)this_00);
  iVar6 = (**(code **)(this_00->field_0000 + 0xd8))();
  if (iVar6 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0xffff;
}

