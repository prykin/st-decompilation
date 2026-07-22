#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040201D|00583270; family_names=STJellyGunC::GetMessage; ret4=10;
   direct_offsets={10:2,14:2,18:3,1c:0} */

int __thiscall STJellyGunC::GetMessage(STJellyGunC *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  code *pcVar3;
  undefined1 uVar4;
  STSprGameObjC *this_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  AnonShape_00583270_F758043B *pAVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  int *piVar13;
  undefined4 *puVar14;
  char *pcVar15;
  AnonShape_00583270_0B8831C2 *pAVar16;
  byte *pbVar17;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  STSprGameObjC *local_3c;
  AnonShape_00583270_F758043B *local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_00583270_0B8831C2 *local_c;
  uint local_8;

  if ((this->field_0235 == CASE_4) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  local_3c = (STSprGameObjC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  this_00 = local_3c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x2af,0,iVar5,"%s",
                               "STJellyGunC::GetMessage");
    if (iVar7 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Igor\\to_jelly.cpp",0x2b0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_3c,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if ((*(int *)&this_00->field_0x235 != 2) && (*(int *)&this_00->field_0x235 != 4)) {
        sub_00582530((STJellyGunC *)this_00);
        puVar11 = &this_00->field_01D5;
        *(undefined4 *)((int)&this_00->field_023E + 3) = 0xff;
        *(undefined2 *)&this_00->field_0x245 = 0;
        *(undefined4 *)&this_00->field_0x252 = 0;
        *(undefined4 *)&this_00->field_0x235 = 2;
        STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar11,0xc);
        thunk_FUN_004ad5e0((int)puVar11);
        iVar5 = sub_00584380((STJellyGunC *)this_00);
        if (iVar5 != 0) {
          sub_00582580((STJellyGunC *)this_00);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 < 4) {
      if (SVar2 == MESS_SHARED_0003) {
        uVar6 = sub_004167A0(this_00);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                           *(short *)&this_00->field_0x5f,
                           CONCAT31((int3)((uint)uVar6 >> 8),this_00->field_0x8e),
                           (AnonShape_00495FF0_59081BDD *)this_00);
        thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_NONE) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        LifeGun((STJellyGunC *)this_00,unaff_EDI);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        local_38 = (message->arg0).ptr;
        if (*(uint *)&local_38->field_0xc < 2) {
          *(undefined4 *)&this_00->field_0x235 = 4;
          *(undefined4 *)&this_00->field_0x23d = 0;
          *(undefined4 *)((int)&this_00->field_023E + 3) = 0xff;
          this_00->field_0231 = CASE_0;
          puVar11 = (message->arg0).ptr;
          puVar14 = (undefined4 *)&this_00->field_0x256;
          for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          *(undefined2 *)puVar14 = *(undefined2 *)puVar11;
          iVar5 = *(int *)&this_00->field_0x26a;
          sVar9 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar9 = (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
          }
          iVar5 = *(int *)&this_00->field_0x26e;
          *(short *)&this_00->field_0x47 = sVar9;
          sVar9 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar9 = (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
          }
          iVar5 = *(int *)&this_00->field_0x272;
          *(short *)&this_00->field_0x49 = sVar9;
          sVar9 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            sVar9 = (((short)(iVar5 / 200) + sVar9) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar9 = ((short)(iVar5 / 200) + sVar9) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
          }
          *(short *)&this_00->field_0x4b = sVar9;
          *(undefined4 *)&this_00->field_0x239 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x24b = 1;
          *(undefined4 *)&this_00->field_0x247 = 0;
          thunk_FUN_00417a00(this_00,1);
          iVar5 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x47,
                                     *(short *)&this_00->field_0x49,*(short *)&this_00->field_0x4b,1
                                    );
          if (iVar5 == 0) {
            iVar5 = thunk_FUN_00417e70(this_00,8);
            if (iVar5 == 0) {
              iVar5 = thunk_FUN_00417ee0(this_00,0);
              if (iVar5 == 0) {
                puVar11 = &this_00->field_01D5;
                iVar5 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar11,0xe,DAT_0080676c,"jellygun",0x1d);
                if (iVar5 != 0) {
                  RaiseInternalException
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x1f9);
                }
                iVar5 = *(int *)((int)&this_00->field_0259 + 1);
                if (7 < iVar5) {
                  iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1fe,0,0,
                                             "%s",
                                             "STJellyGunC::Invalid player number");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  *(undefined4 *)((int)&this_00->field_0259 + 1) = 0;
                  iVar5 = 0;
                }
                piVar13 = DAT_0080676c;
                uVar8 = 0xffffffff;
                pcVar15 = "jellygun0";
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar8] = (char)iVar5 + '0';
                iVar5 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar11,0xc,piVar13,"jellygun0",0x1d);
                if (iVar5 != 0) {
                  RaiseInternalException
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x204);
                }
                thunk_FUN_004ac610(puVar11,'\f');
                STT3DSprC::StartShow((STT3DSprC *)puVar11,0xc,g_playSystem_00802A38->field_00E4);
                thunk_FUN_004ac610(puVar11,'\x0e');
                STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
                sub_00416240(this_00,*(undefined2 *)&this_00->field_0x26a,
                             *(undefined2 *)&this_00->field_0x26e,
                             *(undefined2 *)&this_00->field_0x272);
                STT3DSprC::sub_004AD3C0
                          ((STT3DSprC *)puVar11,
                           (float)*(int *)&this_00->field_0x26a * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)&this_00->field_0x26e * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)&this_00->field_0x272 * _DAT_007904f8 * _DAT_007904f0);
                *(undefined4 *)&this_00->field_0x235 = 0;
                sub_005844E0((STJellyGunC *)this_00,*(int *)&this_00->field_0x26a,
                             *(int *)&this_00->field_0x26e,0x497);
              }
              else {
                iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",499,0,0,
                                           "%s","STJellyGunC::Phase Count err");
                if (iVar5 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sub_00582580((STJellyGunC *)this_00);
              }
            }
            else {
              iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1ec,0,0,
                                         "%s","STJellyGunC::GetMessage Phase Count err");
              if (iVar5 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              sub_00582580((STJellyGunC *)this_00);
            }
          }
          else {
            iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1e5,0,0,
                                       "%s","STJellyGunC::Cell is busy");
            if (iVar5 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            sub_00582580((STJellyGunC *)this_00);
          }
        }
        else if (*(uint *)&local_38->field_0xc == 2) {
          pAVar10 = local_38;
          puVar11 = (undefined4 *)&this_00->field_0x256;
          for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar11 = *(undefined4 *)pAVar10;
            pAVar10 = (AnonShape_00583270_F758043B *)&pAVar10->field_0x4;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)pAVar10;
          local_8 = local_38->field_0067;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_38[1].field_0x3 + local_8));
          pAVar10 = local_38;
          *(undefined4 *)&this_00->field_0x247 = local_38->field_004A;
          *(undefined4 *)&this_00->field_0x24b = local_38->field_004E;
          *(undefined4 *)&this_00->field_0x235 = local_38->field_0042;
          *(undefined4 *)&this_00->field_0x23d = local_38->field_0046;
          *(undefined4 *)((int)&this_00->field_023E + 3) = local_38->field_0052;
          *(undefined2 *)&this_00->field_0x245 = local_38->field_0056;
          *(undefined4 *)&this_00->field_0x239 = local_38->field_003E;
          this_00->field_0231 = *(STSprGameObjC_field_0231State *)&local_38->field_0x58;
          this_00->field_0x24f = local_38->field_0x60;
          this_00->field_0x250 = local_38->field_0061;
          this_00->field_0x251 = local_38->field_0062;
          *(undefined4 *)&this_00->field_0x252 = local_38->field_0063;
          local_34 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_34 != (void *)0x0) {
            iVar5 = 0;
            do {
              piVar13 = DAT_00806774;
              if (((iVar5 == 8) || (iVar5 == 10)) || (piVar13 = DAT_0080676c, iVar5 != 9)) {
                *(int **)((int)local_34 + iVar5 * 4) = piVar13;
              }
              else {
                *(undefined4 *)((int)local_34 + 0x24) = DAT_00806764;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 0x11);
            local_30 = 0;
            local_2c = 0;
            local_28 = DAT_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)&pAVar10->field_0x6b);
            FreeAndNull(&local_34);
            DumpClassC::WritePtr
                      (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                       *(short *)&this_00->field_0x5f,1,(AnonShape_00495EC0_95A268C6 *)this_00);
          }
        }
        if ((*(int *)&this_00->field_0x235 != 4) && (*(int *)&this_00->field_0x235 != 2)) {
          uVar6 = *(undefined4 *)&this_00->field_0x8;
          memset(local_5c, 0, 0x20); /* compiler bulk-zero initialization */
          local_4c = 0x125;
          local_48 = uVar6;
          FUN_006e6080(this_00,4,*(undefined4 *)&this_00->field_0x286,local_5c);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 == MESS_SHARED_010F) {
      local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (AnonShape_00583270_0B8831C2 *)
                Library::DKW::LIB::FUN_006aac70(local_10 + 0x6f + local_8);
      if (((local_14 != (byte *)0x0) && (local_18 != (byte *)0x0)) &&
         (local_c != (AnonShape_00583270_0B8831C2 *)0x0)) {
        puVar11 = (undefined4 *)&this_00->field_0x256;
        pAVar16 = local_c;
        for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pAVar16 = *puVar11;
          puVar11 = puVar11 + 1;
          pAVar16 = (AnonShape_00583270_0B8831C2 *)&pAVar16->field_0x4;
        }
        *(undefined2 *)pAVar16 = *(undefined2 *)puVar11;
        *(undefined4 *)&local_c->field_0xc = 2;
        *(undefined4 *)&local_c->field_0x42 = *(undefined4 *)&this_00->field_0x235;
        local_c->field_0046 = *(undefined4 *)&this_00->field_0x23d;
        local_c->field_0052 = *(undefined4 *)((int)&this_00->field_023E + 3);
        *(undefined2 *)&local_c->field_0x56 = *(undefined2 *)&this_00->field_0x245;
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x247;
        uVar4 = this_00->field_024E;
        *(undefined3 *)&local_c->field_0x4e = *(undefined3 *)&this_00->field_0x24b;
        local_c->field_0x51 = uVar4;
        *(undefined4 *)&local_c->field_0x3e = *(undefined4 *)&this_00->field_0x239;
        local_c->field_0058 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x5c = 0;
        local_c->field_0x60 = this_00->field_0x24f;
        local_c->field_0x61 = this_00->field_0x250;
        local_c->field_0x62 = this_00->field_0x251;
        *(undefined4 *)&local_c->field_0x63 = *(undefined4 *)&this_00->field_0x252;
        local_c->field_0067 = local_8;
        pbVar12 = local_14;
        pbVar17 = &local_c->field_0x6b;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar17 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar17 = pbVar17 + 4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar17 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar17 = pbVar17 + 1;
        }
        *(uint *)(&local_c->field_0x6b + local_8) = local_10;
        pbVar12 = local_18;
        pbVar17 = &local_c[1].field_0x3 + local_8;
        for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar17 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar17 = pbVar17 + 4;
        }
        for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar17 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar17 = pbVar17 + 1;
        }
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,this_00->field_0018,(byte *)local_c,
                   (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x6f + local_8));
        FreeAndNull(&local_14);
        FreeAndNull(&local_18);
        FreeAndNull(&local_c);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
    }
  }
  else if (SVar2 == MESS_STOCTOPUSC_0112) {
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
  }
  else {
    if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
    if (((SVar2 == MESS_HITKILL) && (*(int *)&this_00->field_0x235 != 2)) &&
       (*(int *)&this_00->field_0x235 != 4)) {
      sub_00582530((STJellyGunC *)this_00);
      puVar11 = &this_00->field_01D5;
      *(undefined4 *)((int)&this_00->field_023E + 3) = 0xff;
      *(undefined2 *)&this_00->field_0x245 = 0;
      *(undefined4 *)&this_00->field_0x252 = 0;
      *(undefined4 *)&this_00->field_0x235 = 4;
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xc);
      thunk_FUN_004ad5e0((int)puVar11);
      thunk_FUN_004ad430((int)puVar11);
      sub_00582580((STJellyGunC *)this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

