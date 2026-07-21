#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_cont.cpp
   STContainerC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005FB640; family_names=STContainerC::GetMessage; ret4=22;
   direct_offsets={10:1,14:3,18:9,1c:0} */

int __thiscall STContainerC::GetMessage(STContainerC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STMessageId SVar4;
  dword dVar5;
  code *pcVar6;
  bool bVar7;
  STContainerC *this_00;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  STGameObjC *this_01;
  int iVar11;
  byte bVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined2 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  STWorldObject *pSVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  byte *local_14;
  AnonShape_0060EA30_DCEB68AD *local_10;
  STGameObjC *local_c;
  STContainerC *local_8;

  local_8 = this;
  iVar8 = STSprGameObjC::GetMessage((STSprGameObjC *)this,message);
  if (iVar8 != 0xffff) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    iVar8 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    this_00 = local_8;
    if (iVar8 == 0) {
      SVar4 = message->id;
      if (MESS_TORPHIT < SVar4) {
        switch(SVar4) {
        case MESS_STOCTOPUSC_0112:
          if ((int)local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad5e0((int)&local_8->field_01D5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_STSPRGAMEOBJC_0113:
          if ((int)local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)local_8->field_01D5)();
          g_currentExceptionFrame = local_60.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_HITKILL:
          dVar5 = (message->arg0).u32;
          local_8->field_0315 = *(undefined1 *)(dVar5 + 0x18);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (((local_8->field_024E != '\0') && (local_8->field_02AB != -1)) &&
             ((this_01 = (STGameObjC *)local_8->field_02AD, this_01 != (STGameObjC *)0x0 ||
              (this_01 = STAllPlayersC::GetObjPtr
                                   (g_sTAllPlayers_007FA174,local_8->field_02A3,
                                    CONCAT22((short)(SVar4 - MESS_STOCTOPUSC_0112 >> 0x10),
                                             local_8->field_02AB),CASE_1),
              this_01 != (STGameObjC *)0x0)))) {
            thunk_FUN_00492510(this_01,this_00->field_0018);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_00AC)(this_01->field_0018);
          }
          switch(*(undefined4 *)(dVar5 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005fbd82_caseD_2;
          case 3:
            uVar20 = 0;
            this_00->field_030E = *(undefined1 *)(dVar5 + 8);
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            iVar8 = this_00->field_02C6;
            this_00->field_030D = 1;
            this_00->field_023A = 5;
            iVar11 = this_00->field_02C2;
            this_00->field_02E0 = PTR_00802a38->field_00E4 + 0x15;
            iVar19 = this_00->field_02BE;
            iVar18 = 1;
            uVar9 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            thunk_FUN_006377b0(uVar9,iVar18,iVar19,iVar11,iVar8,uVar20);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          case 5:
            this_00->field_02D2 = 0;
            this_00->field_02B5 = 3;
            this_00->field_023A = 5;
            g_currentExceptionFrame = local_60.previous;
            return 0;
          default:
            this_00->field_030E = *(undefined1 *)(dVar5 + 8);
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            this_00->field_030D = 1;
            if (-1 < (int)this_00->field_02D6) {
              FUN_006eab60((void *)this_00->field_0211,this_00->field_02D6);
            }
            thunk_FUN_005fc3e0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case MESS_SHARED_0129:
          goto switchD_005fbd08_caseD_129;
        }
      }
      if (SVar4 == MESS_TORPHIT) {
        puVar15 = (message->arg0).ptr;
        if (local_8->field_023A == 5) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (local_8->field_023A == 6) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar8 = (*(code *)local_8->field_0000->field_0124)(*puVar15);
        if (iVar8 == 0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(1);
        this_00->field_030E = *(undefined1 *)(puVar15 + 2);
        this_00->field_030F = *(undefined2 *)(puVar15 + 3);
        this_00->field_030D = 1;
        this_00->field_023A = 5;
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (MESS_SHARED_0003 < SVar4) {
        if (SVar4 == MESS_SHARED_0108) {
          thunk_FUN_005ef5f0((int)local_8);
          thunk_FUN_005eeff0(this_00,0);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (SVar4 != MESS_SHARED_010F) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        local_14 = thunk_FUN_005fcad0(local_8,(uint *)&local_10);
        STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_14,local_10);
        FreeAndNull(&local_14);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 == MESS_SHARED_0003) {
        iVar8 = thunk_FUN_00495ff0(local_8->field_0242,local_8->field_0244,local_8->field_0246,0,
                                   (AnonShape_00495FF0_59081BDD *)local_8);
        if (iVar8 == 0) {
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
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar13 = extraout_var;
        if (this_00->field_0250 != '\x03') {
          thunk_FUN_005f0d90((AnonShape_005F0D00_68DA5B8B *)this_00);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar13 = extraout_var_00;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STAllPlayersC::UnRegisterContainer
                  (g_sTAllPlayers_007FA174,CONCAT22(uVar13,this_00->field_0032),
                   (AnonShape_0044A730_DBE673B2 *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 == MESS_ID_NONE) {
        if (local_8->field_023A == 6) {
          thunk_FUN_005fc3e0(local_8);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        uVar10 = thunk_FUN_005ee6e0((AnonShape_005EE6E0_AB6798ED *)local_8);
        this_00->field_02DE = (char)uVar10;
        if ((char)uVar10 == '\0') {
          if (this_00->field_023A != 6) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_005fc3e0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        this_00->field_02BE = this_00->field_0277;
        this_00->field_02C2 = this_00->field_027B;
        this_00->field_02C6 = this_00->field_027F;
        thunk_FUN_005eff00((int)this_00);
        if ((-1 < (int)this_00->field_02D2) &&
           (iVar8 = thunk_FUN_005f0ba0((AnonShape_005F0BA0_C8D654C5 *)this_00), iVar8 != 0)) {
          this_00->field_02D2 = 0xffffffff;
        }
        thunk_FUN_005eeff0(this_00,0);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 != MESS_ID_CREATE) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar15 = (message->arg0).ptr;
      if (puVar15[3] != 2) {
        puVar14 = puVar15;
        puVar16 = (undefined4 *)&local_8->field_0x326;
        for (iVar8 = 0x55; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
        if (puVar15[3] == 0) {
          local_8->field_046F = (int)local_8->field_034E;
          local_8->field_0473 = (int)local_8->field_0350;
          local_8->field_0477 = (int)local_8->field_0352;
          local_8->field_034E = local_8->field_034E * 0xc9 + 100;
          local_8->field_0350 = local_8->field_0350 * 0xc9 + 100;
          local_8->field_0352 = local_8->field_0352 * 200 + 100;
        }
        iVar8 = thunk_FUN_005fc4a0(local_8);
        if (iVar8 == 0) {
          thunk_FUN_005fc3e0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if ((((this_00->field_0358 != 0) && ((short)this_00->field_0342 == 1)) &&
            (iVar8 = FUN_006e62d0(PTR_00802a38,this_00->field_0358,&local_18), iVar8 != -4)) &&
           ((void *)this_00->field_0211 != (void *)0x0)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          FUN_006ea460((void *)this_00->field_0211,this_00->field_01ED,*(int *)(local_18 + 0x1ed));
        }
        if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
          iVar8 = STAllPlayersC::RegisterContainer(g_sTAllPlayers_007FA174,0xffff,this_00);
          if (iVar8 != 0) {
            thunk_FUN_005fc3e0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02E4 = 1;
          thunk_FUN_005fceb0((AnonShape_005FCEB0_FA1F7938 *)this_00);
        }
        uVar9 = this_00->field_0342 >> 0x10;
        if (uVar9 != 3) {
          if (uVar9 != 5) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02D2 = *(short *)(DAT_00806724 + 0x23) + -1;
          this_00->field_02B5 = 1;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_006377b0(this_00->field_01ED,1,(int)this_00->field_034E,(int)this_00->field_0350,
                           (int)this_00->field_0352,0x13);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      iVar8 = thunk_FUN_005fcc00(local_8,puVar15);
      if (iVar8 < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (this_00->field_0252 != '\0') {
        sVar1 = this_00->field_0242;
        sVar2 = this_00->field_0244;
        local_1c = (int)sVar2;
        sVar3 = this_00->field_0246;
        local_c = (STGameObjC *)0x1;
        if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
            ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar3)) {
          pSVar17 = (STWorldObject *)0x0;
        }
        else {
          pSVar17 = g_worldGrid.cells
                    [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2
                     + (int)sVar1].objects[0];
        }
        bVar7 = true;
        if ((pSVar17 == (STWorldObject *)0x0) &&
           (iVar8 = DumpClassC::WritePtr(sVar1,sVar2,sVar3,0,(AnonShape_00495EC0_95A268C6 *)this_00)
           , iVar8 == 0)) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) {
          thunk_FUN_005fc3e0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        bVar12 = this_00->field_0252 - 1;
        this_00->field_0252 = bVar12;
        if (1 < bVar12) {
          sVar1 = this_00->field_0248;
          sVar2 = this_00->field_024A;
          local_c = (STGameObjC *)(int)sVar2;
          sVar3 = this_00->field_024C;
          local_1c = 1;
          if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
             (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) {
            pSVar17 = (STWorldObject *)0x0;
          }
          else {
            pSVar17 = g_worldGrid.cells
                      [(int)g_worldGrid.planeStride * (int)sVar3 +
                       (int)g_worldGrid.sizeX * (int)sVar2 + (int)sVar1].objects[0];
          }
          bVar7 = true;
          if ((pSVar17 == (STWorldObject *)0x0) &&
             (iVar8 = DumpClassC::WritePtr
                                (sVar1,sVar2,sVar3,0,(AnonShape_00495EC0_95A268C6 *)this_00),
             iVar8 == 0)) {
            this_00->field_0252 = this_00->field_0252 + '\x01';
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) {
            thunk_FUN_005fc3e0(this_00);
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
      iVar8 = STAllPlayersC::RegisterContainer(g_sTAllPlayers_007FA174,this_00->field_0032,this_00);
      if (iVar8 == 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      thunk_FUN_005fc3e0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\nick\\to_cont.cpp",0x139,0,iVar8,"%s",
                                "STContainerC::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\nick\\to_cont.cpp",0x13b);
  }
  return 0xffff;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
switchD_005fbd82_caseD_2:
  iVar8 = (*(code *)this_00->field_0000->field_0124)(20000);
  if (iVar8 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005ec9f0(1);
  if (*(int *)(dVar5 + 0x18) == 4) {
    FUN_006e9d40((void *)this_00->field_0211,(uint *)this_00->field_01ED,8);
  }
  this_00->field_030E = *(undefined1 *)(dVar5 + 8);
  this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
  this_00->field_023A = 5;
  this_00->field_030D = 1;
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005fbd08_caseD_129:
  if (local_8->field_023A != 4) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_02AB == -1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_024F == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  local_c = (STGameObjC *)local_8->field_02AD;
  if (local_c == (STGameObjC *)0x0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,local_8->field_02A3,
                         CONCAT22((short)((uint)message >> 0x10),local_8->field_02AB),CASE_1);
  }
  if (local_c != (STGameObjC *)0x0) {
    this_00->field_0277 = (int)*(short *)&local_c->field_0x41;
    this_00->field_027B = (int)*(short *)&local_c->field_0x43;
    this_00->field_027F = *(short *)&local_c->field_0x45 + 5;
    this_00->field_02BA = (int)(short)local_c->field_006C / 0xf;
    puVar15 = (undefined4 *)&local_c->field_0x34;
    puVar14 = (undefined4 *)&this_00->field_0x34;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar15;
    *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar15 + 2);
    this_00->field_0076 = 0;
    this_00->field_006E = local_c->field_006E;
    this_00->field_02BE = this_00->field_0277;
    this_00->field_02C2 = this_00->field_027B;
    this_00->field_02C6 = this_00->field_027F;
  }
  thunk_FUN_005ef5f0((int)this_00);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar8 = (*(code *)this_00->field_0000->field_00D8)();
  if (iVar8 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0xffff;
}

