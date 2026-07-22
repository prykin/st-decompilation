#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_artf.cpp
   STArtiafactC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005EAF10; family_names=STArtiafactC::GetMessage; ret4=22;
   direct_offsets={10:1,14:3,18:9,1c:0} */

int __thiscall STArtiafactC::GetMessage(STArtiafactC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STMessageId SVar4;
  dword dVar5;
  code *pcVar6;
  bool bVar7;
  STArtiafactC *this_00;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  STGameObjC *pSVar11;
  int iVar12;
  byte bVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  STWorldObject *pSVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  InternalExceptionFrame local_60;
  undefined4 local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STArtiafactC *local_8;

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
          if (local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad5e0((int)&local_8->field_01D5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_STSPRGAMEOBJC_0113:
          if (local_8->field_02D6 < 0) {
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
             ((pSVar11 = (STGameObjC *)local_8->field_02AD, pSVar11 != (STGameObjC *)0x0 ||
              (pSVar11 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,local_8->field_02A3,
                                    CONCAT22((short)(SVar4 - MESS_STOCTOPUSC_0112 >> 0x10),
                                             local_8->field_02AB),CASE_1),
              pSVar11 != (STGameObjC *)0x0)))) {
            thunk_FUN_00492510(pSVar11,this_00->field_0018);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)this_00->field_0000->field_00AC)(pSVar11->field_0018);
          }
          switch(*(undefined4 *)(dVar5 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005eb627_caseD_2;
          case 3:
            uVar20 = 0;
            this_00->field_030E = *(undefined1 *)(dVar5 + 8);
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            iVar8 = this_00->field_02C6;
            this_00->field_030D = 1;
            this_00->field_023A = 5;
            iVar12 = this_00->field_02C2;
            this_00->field_02E0 = g_playSystem_00802A38->field_00E4 + 0x15;
            iVar19 = this_00->field_02BE;
            iVar18 = 1;
            uVar10 = thunk_FUN_004ad650((int)&this_00->field_01D5);
            thunk_FUN_006377b0(uVar10,iVar18,iVar19,iVar12,iVar8,uVar20);
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
            if (-1 < this_00->field_02D6) {
              thunk_FUN_004ad430((int)&this_00->field_01D5);
            }
            sub_005EBCB0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case MESS_SHARED_0129:
          goto switchD_005eb5ad_caseD_129;
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
        local_10 = STAllPlayersC::thunk_FUN_005ec370((STAllPlayersC *)local_8,(uint *)&local_c);
        STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,local_c);
        FreeAndNull(&local_10);
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
        if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        sub_005F0D00(this_00);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        STAllPlayersC::UnRegisterArtefact
                  (g_allPlayers_007FA174,CONCAT22(extraout_var,this_00->field_0032),
                   (AnonShape_00449E60_F2069C78 *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 != MESS_ID_NONE) {
        if (SVar4 != MESS_ID_CREATE) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        puVar15 = (message->arg0).ptr;
        if (puVar15[3] == 2) {
          iVar8 = thunk_FUN_005ec4a0(local_8,puVar15);
          if (iVar8 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          if (this_00->field_0252 != '\0') {
            sVar1 = this_00->field_0242;
            sVar2 = this_00->field_0244;
            local_18 = (int)sVar2;
            sVar3 = this_00->field_0246;
            local_1c = 1;
            if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
                ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) || (g_worldGrid.sizeZ <= sVar3)) {
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
              sub_005EBCB0(this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
            bVar13 = this_00->field_0252 - 1;
            this_00->field_0252 = bVar13;
            if (1 < bVar13) {
              sVar1 = this_00->field_0248;
              sVar2 = this_00->field_024A;
              local_18 = (int)sVar2;
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
                sub_005EBCB0(this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              this_00->field_0252 = this_00->field_0252 + -1;
            }
          }
          if ((g_allPlayers_007FA174 != (STAllPlayersC *)0x0) &&
             (iVar8 = STAllPlayersC::RegisterArtefact
                                (g_allPlayers_007FA174,this_00->field_0032,this_00), iVar8 != 0)) {
            sub_005EBCB0(this_00);
          }
          thunk_FUN_005ef5f0((int)this_00);
          thunk_FUN_005eeff0(this_00,0);
          if (this_00->field_02B9 == '\0') {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad460(&this_00->field_01D5,0);
          this_00->field_02B9 = 1;
          this_00->field_02DE = 0;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        puVar14 = puVar15;
        puVar16 = (undefined4 *)&local_8->field_0x326;
        for (iVar8 = 0x54; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
        if (puVar15[3] == 0) {
          local_8->field_046B = (int)local_8->field_034A;
          local_8->field_046F = (int)local_8->field_034C;
          local_8->field_0473 = (int)local_8->field_034E;
          local_8->field_034A = local_8->field_034A * 0xc9 + 100;
          local_8->field_034C = local_8->field_034C * 0xc9 + 100;
          local_8->field_034E = local_8->field_034E * 200 + 100;
        }
        iVar8 = thunk_FUN_005ebd80(local_8);
        if (iVar8 == 0) {
          sub_005EBCB0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
          iVar8 = STAllPlayersC::RegisterArtefact(g_allPlayers_007FA174,0xffff,this_00);
          if (iVar8 != 0) {
            sub_005EBCB0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02E4 = 1;
          thunk_FUN_005ec6a0((AnonShape_005EC6A0_C8559927 *)this_00);
        }
        if (this_00->field_0346 != 3) {
          if (this_00->field_0346 != 5) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02D2 = *(short *)(DAT_00806724 + 0x23) + -1;
          this_00->field_02B5 = 1;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_006377b0(this_00->field_01ED,1,(int)this_00->field_034A,(int)this_00->field_034C,
                           (int)this_00->field_034E,0x13);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (local_8->field_023A == 6) {
        sub_005EBCB0(local_8);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      uVar9 = thunk_FUN_005ee6e0((AnonShape_005EE6E0_AB6798ED *)local_8);
      this_00->field_02DE = (char)uVar9;
      if ((char)uVar9 != '\0') {
        this_00->field_02BE = this_00->field_0277;
        this_00->field_02C2 = this_00->field_027B;
        this_00->field_02C6 = this_00->field_027F;
        thunk_FUN_005eff00((int)this_00);
        if ((-1 < this_00->field_02D2) &&
           (iVar8 = thunk_FUN_005f0ba0((AnonShape_005F0BA0_C8D654C5 *)this_00), iVar8 != 0)) {
          this_00->field_02D2 = -1;
        }
        thunk_FUN_005eeff0(this_00,0);
        if (this_00->field_0320 == '\0') {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005f0310((AnonShape_005F0310_D6E15516 *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (this_00->field_023A != 6) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      sub_005EBCB0(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\nick\\to_artf.cpp",0x1b2,0,iVar8,"%s",
                                "STArtiafactC::GetMessage");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\nick\\to_artf.cpp",0x1b4);
  }
  return 0xffff;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
switchD_005eb627_caseD_2:
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
switchD_005eb5ad_caseD_129:
  if (local_8->field_023A != 4) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  iVar8 = local_8->field_02A7;
  if (iVar8 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_024F == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if ((local_8->field_02AB == -1) &&
     (iVar8 = FUN_006e62d0(g_playSystem_00802A38,iVar8,&local_14), iVar8 != -4)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    iVar8 = CONCAT22((short)((uint)iVar8 >> 0x10),*(undefined2 *)(local_14 + 0x32));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_02AB = *(undefined2 *)(local_14 + 0x32);
  }
  if (this_00->field_02AB == -1) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  pSVar11 = (STGameObjC *)this_00->field_02AD;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if ((pSVar11 != (STGameObjC *)0x0) ||
     (pSVar11 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,this_00->field_02A3,
                           CONCAT22((short)((uint)iVar8 >> 0x10),this_00->field_02AB),CASE_1),
     pSVar11 != (STGameObjC *)0x0)) {
    this_00->field_0277 = (int)*(short *)&pSVar11->field_0x41;
    this_00->field_027B = (int)*(short *)&pSVar11->field_0x43;
    this_00->field_027F = (int)*(short *)&pSVar11->field_0x45;
    this_00->field_02BA = (int)(short)pSVar11->field_006C / 0xf;
    puVar15 = (undefined4 *)&pSVar11->field_0x34;
    puVar14 = (undefined4 *)&this_00->field_0x34;
    for (iVar8 = 0x17; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar15;
    *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar15 + 2);
    this_00->field_0076 = 0;
    this_00->field_006E = 0x2f;
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

