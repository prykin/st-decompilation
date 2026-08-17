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
  bool bVar7;
  STArtiafactC *this_00;
  int local_EAX_16;
  int iVar8;
  int local_EAX_520;
  undefined4 uVar8;
  uint uVar9;
  STGameObjC *pSVar10;
  int iVar12;
  byte bVar11;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  byte *puVar14;
  byte *puVar15;
  byte *puVar16;
  STWorldObject *pSVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  InternalExceptionFrame local_60;
  undefined4 local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STArtiafactC *local_8;

  local_8 = this;
  /* ST_CALLSITE[005EAF20]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  local_EAX_16 = STSprGameObjC::GetMessage((STSprGameObjC *)this,message);
  if (local_EAX_16 != 0xffff) {
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
          thunk_FUN_004ad5e0((STT3DSprC *)&local_8->vtable_at_1d5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_STSPRGAMEOBJC_0113:
          if (local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          /* ST_CALLSITE[005EB7E3]: CALL dword ptr [EAX] */
          (*local_8->vtable_at_1d5->vfunc_00)((STArtiafactC *)&local_8->vtable_at_1d5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_HITKILL:
          dVar5 = (message->arg0).u32;
          local_8->field_0315 = ((undefined1 *)dVar5)[0x18];
          if (((local_8->field_024E != '\0') && (local_8->field_02AB != 0xffff)) &&
             ((pSVar10 = (STGameObjC *)local_8->field_02AD, pSVar10 != nullptr ||
              /* ST_CALLSITE[005EB5F4]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              (pSVar10 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,local_8->field_02A3,local_8->field_02AB,
                                    CASE_1), pSVar10 != nullptr)))) {
            thunk_FUN_00492510(pSVar10,(int)this_00->field_0018);
            /* ST_CALLSITE[005EB612]: CALL dword ptr [EAX + 0xac] */
            this_00->vfunc_AC((short)pSVar10->field_0018);
          }
          switch(*(undefined4 *)(dVar5 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005eb627_caseD_2;
          case 3:
            uVar21 = 0;
            this_00->field_030E = ((undefined1 *)dVar5)[8];
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            iVar13 = this_00->field_02C6;
            this_00->field_030D = 1;
            this_00->field_023A = 5;
            iVar20 = this_00->field_02C2;
            this_00->field_02E0 = g_playSystem_00802A38->field_00E4 + 0x15;
            iVar19 = this_00->field_02BE;
            iVar18 = 1;
            uVar9 = thunk_FUN_004ad650((STT3DSprC *)&this_00->vtable_at_1d5);
            thunk_FUN_006377b0(uVar9,iVar18,iVar19,iVar20,iVar13,uVar21);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          case 5:
            this_00->field_02D2 = 0;
            this_00->field_02B5 = 3;
            this_00->field_023A = 5;
            g_currentExceptionFrame = local_60.previous;
            return 0;
          default:
            this_00->field_030E = ((undefined1 *)dVar5)[8];
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            this_00->field_030D = 1;
            if (-1 < this_00->field_02D6) {
              thunk_FUN_004ad430((STT3DSprC *)&this_00->vtable_at_1d5);
            }
            /* ST_CALLSITE[005EB77F]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
            sub_005EBCB0(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case MESS_SHARED_0129:
          goto switchD_005eb5ad_caseD_129;
        }
      }
      if (SVar4 == MESS_TORPHIT) {
        puVar15 = (byte *)((message->arg0).ptr);
        if (local_8->field_023A == 5) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (local_8->field_023A == 6) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        /* ST_CALLSITE[005EB546]: CALL dword ptr [EDX + 0x124] */
        iVar13 = local_8->vfunc_124((short)*puVar15);
        if (iVar13 == 0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(1);
        this_00->field_030E = ((undefined1 *)puVar15)[2];
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
        /* ST_CALLSITE[005EB4DA]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
        STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_10,(uint)local_c);
        FreeAndNull(&local_10);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 == MESS_SHARED_0003) {
        iVar13 = thunk_FUN_00495ff0(local_8->field_0242,local_8->field_0244,local_8->field_0246,0,
                                    (AnonShape_00495FF0_59081BDD *)local_8);
        if (iVar13 == 0) {
          this_00->field_0252 = this_00->field_0252 + -1;
        }
        thunk_FUN_004ad310((STT3DSprC *)&this_00->vtable_at_1d5);
        if (this_00->field_02E4 == '\0') {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        /* ST_CALLSITE[005EB47C]: CALL 0x004026da; direct=004026DA STArtiafactC::sub_005F0D00 */
        sub_005F0D00(this_00);
        /* ST_CALLSITE[005EB492]: CALL 0x00403a5d; direct=00403A5D STAllPlayersC::UnRegisterArtefact */
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
        puVar15 = (byte *)((message->arg0).ptr);
        if (puVar15[3] == 2) {
          local_EAX_520 = thunk_FUN_005ec4a0(local_8,puVar15);
          if (local_EAX_520 < 0) {
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
              pSVar17 = nullptr;
            }
            else {
              pSVar17 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0];
            }
            bVar7 = true;
            if ((pSVar17 == nullptr) &&
               /* ST_CALLSITE[005EB1C5]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
               (iVar13 = DumpClassC::WritePtr
                                   (sVar1,sVar2,sVar3,0,
                                    (RecoveredRecord_DumpClassC_00495EC0 *)this_00), iVar13 == 0)) {
              this_00->field_0252 = this_00->field_0252 + '\x01';
            }
            else {
              bVar7 = false;
            }
            if (!bVar7) {
              /* ST_CALLSITE[005EB1DE]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
              sub_005EBCB0(this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
            bVar11 = this_00->field_0252 - 1;
            this_00->field_0252 = bVar11;
            if (1 < bVar11) {
              sVar1 = this_00->field_0248;
              sVar2 = this_00->field_024A;
              local_18 = (int)sVar2;
              sVar3 = this_00->field_024C;
              local_1c = 1;
              if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
                 (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) {
                pSVar17 = nullptr;
              }
              else {
                pSVar17 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0];
              }
              bVar7 = true;
              if ((pSVar17 == nullptr) &&
                 /* ST_CALLSITE[005EB2A0]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
                 (iVar13 = DumpClassC::WritePtr
                                     (sVar1,sVar2,sVar3,0,
                                      (RecoveredRecord_DumpClassC_00495EC0 *)this_00), iVar13 == 0))
              {
                this_00->field_0252 = this_00->field_0252 + '\x01';
              }
              else {
                bVar7 = false;
              }
              if (!bVar7) {
                /* ST_CALLSITE[005EB2B9]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
                sub_005EBCB0(this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              this_00->field_0252 = this_00->field_0252 + -1;
            }
          }
          if ((g_allPlayers_007FA174 != nullptr) &&
             /* ST_CALLSITE[005EB2E7]: CALL 0x0040440d; direct=0040440D STAllPlayersC::RegisterArtefact */
             (iVar13 = STAllPlayersC::RegisterArtefact
                                 (g_allPlayers_007FA174,this_00->field_0032,this_00), iVar13 != 0))
          {
            /* ST_CALLSITE[005EB2F2]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
            sub_005EBCB0(this_00);
          }
          thunk_FUN_005ef5f0((int)this_00);
          thunk_FUN_005eeff0(this_00,0);
          if (this_00->field_02B9 == '\0') {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          thunk_FUN_004ad460(&this_00->vtable_at_1d5,0);
          this_00->field_02B9 = 1;
          this_00->field_02DE = 0;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        puVar14 = (byte *)(puVar15);
        puVar16 = (byte *)&local_8->field_0x326;
        memmove(puVar16, puVar14, 0x151); /* compiler REP MOVS byte copy */
        if (puVar15[3] == 0) {
          local_8->field_046B = (int)local_8->field_034A;
          local_8->field_046F = (int)local_8->field_034C;
          local_8->field_0473 = (int)local_8->field_034E;
          local_8->field_034A = local_8->field_034A * 0xc9 + 100;
          local_8->field_034C = local_8->field_034C * 0xc9 + 100;
          local_8->field_034E = local_8->field_034E * 200 + 100;
        }
        iVar13 = thunk_FUN_005ebd80((AnonShape_005EBD80_1A4ED01F *)local_8);
        if (iVar13 == 0) {
          /* ST_CALLSITE[005EB02E]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
          sub_005EBCB0(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        thunk_FUN_005ec9f0(0);
        if (g_allPlayers_007FA174 != nullptr) {
          /* ST_CALLSITE[005EB061]: CALL 0x0040440d; direct=0040440D STAllPlayersC::RegisterArtefact */
          iVar13 = STAllPlayersC::RegisterArtefact(g_allPlayers_007FA174,0xffff,this_00);
          if (iVar13 != 0) {
            /* ST_CALLSITE[005EB06C]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
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
          this_00->field_02D2 = PTR_00806724->entryCount + -1;
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
        /* ST_CALLSITE[005EB355]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
        sub_005EBCB0(local_8);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      uVar8 = thunk_FUN_005ee6e0((AnonShape_005EE6E0_AB6798ED *)local_8);
      this_00->field_02DE = (char)uVar8;
      if ((char)uVar8 != '\0') {
        this_00->field_02BE = this_00->field_0277;
        this_00->field_02C2 = this_00->field_027B;
        this_00->field_02C6 = this_00->field_027F;
        thunk_FUN_005eff00((int)this_00);
        if ((-1 < this_00->field_02D2) &&
           (iVar13 = thunk_FUN_005f0ba0((AnonShape_005F0BA0_C8D654C5 *)this_00), iVar13 != 0)) {
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
      /* ST_CALLSITE[005EB405]: CALL 0x00404462; direct=00404462 STArtiafactC::sub_005EBCB0 */
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
switchD_005eb627_caseD_2:
  /* ST_CALLSITE[005EB637]: CALL dword ptr [EDX + 0x124] */
  iVar13 = this_00->vfunc_124(20000);
  if (iVar13 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  thunk_FUN_005ec9f0(1);
  if (*(int *)(dVar5 + 0x18) == 4) {
    ST3DSMAPContext::sub_006E9D40(this_00->field_0211,(uint *)this_00->field_01ED,8);
  }
  this_00->field_030E = ((undefined1 *)dVar5)[8];
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
  if (local_8->field_02A7 == nullptr) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_024F == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if ((local_8->field_02AB == -1) &&
     (iVar13 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,local_8->field_02A7,&local_14),
     iVar13 != -4)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_02AB = *(undefined2 *)(local_14 + 0x32);
  }
  if (this_00->field_02AB == 0xffff) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  pSVar10 = (STGameObjC *)this_00->field_02AD;
  if ((pSVar10 != nullptr) ||
     /* ST_CALLSITE[005EB87D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
     (pSVar10 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,this_00->field_02A3,this_00->field_02AB,CASE_1),
     pSVar10 != nullptr)) {
    this_00->field_0277 = (int)*(short *)&pSVar10->field_0x41;
    this_00->field_027B = (int)*(short *)&pSVar10->field_0x43;
    this_00->field_027F = (int)*(short *)&pSVar10->field_0x45;
    this_00->field_02BA = (int)(short)pSVar10->field_006C / 0xf;
    puVar15 = (byte *)&pSVar10->field_0x34;
    puVar14 = (byte *)&this_00->field_0x34;
    memmove(puVar14, puVar15, 0x5f); /* compiler REP MOVS byte copy */
    this_00->field_0076 = 0;
    this_00->field_006E = 0x2f;
    this_00->field_02BE = this_00->field_0277;
    this_00->field_02C2 = this_00->field_027B;
    this_00->field_02C6 = this_00->field_027F;
  }
  thunk_FUN_005ef5f0((int)this_00);
  /* ST_CALLSITE[005EB90F]: CALL dword ptr [EDX + 0xd8] */
  iVar13 = this_00->vfunc_D8();
  if (iVar13 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0xffff;
}

