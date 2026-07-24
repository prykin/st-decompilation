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
  STJellyGunC *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  AnonShape_00583270_F758043B *pAVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  int *piVar12;
  undefined4 *puVar13;
  char *pcVar14;
  AnonShape_00583270_0B8831C2 *pAVar15;
  byte *pbVar16;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  STJellyGunC *local_3c;
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
  local_3c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  this_00 = local_3c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x2af,0,iVar4,"%s",
                               "STJellyGunC::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Igor\\to_jelly.cpp",0x2b0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage((STSprGameObjC *)local_3c,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if ((this_00->field_0235 != CASE_2) && (this_00->field_0235 != CASE_4)) {
        sub_00582530(this_00);
        puVar10 = &this_00->field_01D5;
        this_00->field_0241 = 0xff;
        *(undefined2 *)&this_00->field_0x245 = 0;
        *(undefined4 *)&this_00->field_0x252 = 0;
        this_00->field_0235 = CASE_2;
        STT3DSprC::StopShow((STT3DSprC *)puVar10,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar10,0xc);
        thunk_FUN_004ad5e0((int)puVar10);
        iVar4 = sub_00584380(this_00);
        if (iVar4 != 0) {
          sub_00582580(this_00);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 < 4) {
      if (SVar2 == MESS_SHARED_0003) {
        uVar5 = sub_004167A0(this_00);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                           CONCAT31((int3)((uint)uVar5 >> 8),this_00->field_008E),
                           (AnonShape_00495FF0_59081BDD *)this_00);
        thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_NONE) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        LifeGun(this_00,unaff_EDI);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_CREATE) {
        local_38 = (message->arg0).ptr;
        if (*(uint *)&local_38->field_0xc < 2) {
          this_00->field_0235 = CASE_4;
          this_00->field_023D = 0;
          this_00->field_0241 = 0xff;
          this_00->field_0231 = 0;
          puVar10 = (message->arg0).ptr;
          puVar13 = (undefined4 *)&this_00->field_0x256;
          for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar13 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar10;
          iVar4 = this_00->field_026A;
          sVar8 = (short)(iVar4 >> 0x1f);
          if (iVar4 < 0) {
            sVar8 = (((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
          }
          iVar4 = this_00->field_026E;
          this_00->field_0047 = sVar8;
          sVar8 = (short)(iVar4 >> 0x1f);
          if (iVar4 < 0) {
            sVar8 = (((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
          }
          iVar4 = this_00->field_0272;
          this_00->field_0049 = sVar8;
          sVar8 = (short)(iVar4 >> 0x1f);
          if (iVar4 < 0) {
            sVar8 = (((short)(iVar4 / 200) + sVar8) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar4 / 200) + sVar8) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f);
          }
          this_00->field_004B = sVar8;
          this_00->field_0239 = -1;
          *(undefined4 *)&this_00->field_0x24b = 1;
          *(undefined4 *)&this_00->field_0x247 = 0;
          thunk_FUN_00417a00(this_00,1);
          iVar4 = thunk_FUN_00417a20(this_00,this_00->field_0047,this_00->field_0049,
                                     this_00->field_004B,1);
          if (iVar4 == 0) {
            iVar4 = thunk_FUN_00417e70(this_00,8);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_00417ee0(this_00,0);
              if (iVar4 == 0) {
                puVar10 = &this_00->field_01D5;
                iVar4 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar10,0xe,DAT_0080676c,"jellygun",0x1d);
                if (iVar4 != 0) {
                  RaiseInternalException
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x1f9);
                }
                iVar4 = *(int *)&this_00->field_0x25a;
                if (7 < iVar4) {
                  iVar4 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1fe,0,0,
                                             "%s",
                                             "STJellyGunC::Invalid player number");
                  if (iVar4 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  *(undefined4 *)&this_00->field_0x25a = 0;
                  iVar4 = 0;
                }
                piVar12 = DAT_0080676c;
                uVar7 = 0xffffffff;
                pcVar14 = "jellygun0";
                do {
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar7] = (char)iVar4 + '0';
                iVar4 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar10,0xc,piVar12,"jellygun0",0x1d);
                if (iVar4 != 0) {
                  RaiseInternalException
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x204);
                }
                thunk_FUN_004ac610(puVar10,'\f');
                STT3DSprC::StartShow((STT3DSprC *)puVar10,0xc,g_playSystem_00802A38->field_00E4);
                thunk_FUN_004ac610(puVar10,'\x0e');
                STT3DSprC::StartShow((STT3DSprC *)puVar10,0xe,g_playSystem_00802A38->field_00E4);
                sub_00416240(this_00,(short)this_00->field_026A,(short)this_00->field_026E,
                             (short)this_00->field_0272);
                STT3DSprC::sub_004AD3C0
                          ((STT3DSprC *)puVar10,
                           (float)this_00->field_026A * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_026E * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_0272 * _DAT_007904f8 * _DAT_007904f0);
                this_00->field_0235 = 0;
                sub_005844E0(this_00,this_00->field_026A,this_00->field_026E,0x497);
              }
              else {
                iVar4 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",499,0,0,
                                           "%s","STJellyGunC::Phase Count err");
                if (iVar4 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                sub_00582580(this_00);
              }
            }
            else {
              iVar4 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1ec,0,0,
                                         "%s","STJellyGunC::GetMessage Phase Count err");
              if (iVar4 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              sub_00582580(this_00);
            }
          }
          else {
            iVar4 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1e5,0,0,
                                       "%s","STJellyGunC::Cell is busy");
            if (iVar4 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            sub_00582580(this_00);
          }
        }
        else if (*(uint *)&local_38->field_0xc == 2) {
          pAVar9 = local_38;
          puVar10 = (undefined4 *)&this_00->field_0x256;
          for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *(undefined4 *)pAVar9;
            pAVar9 = (AnonShape_00583270_F758043B *)&pAVar9->field_0x4;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = *(undefined2 *)pAVar9;
          local_8 = local_38->field_0067;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_38[1].field_0x3 + local_8));
          pAVar9 = local_38;
          *(undefined4 *)&this_00->field_0x247 = local_38->field_004A;
          *(undefined4 *)&this_00->field_0x24b = local_38->field_004E;
          this_00->field_0235 = local_38->field_0042;
          this_00->field_023D = local_38->field_0046;
          this_00->field_0241 = local_38->field_0052;
          *(undefined2 *)&this_00->field_0x245 = local_38->field_0056;
          this_00->field_0239 = local_38->field_003E;
          this_00->field_0231 = *(undefined4 *)&local_38->field_0x58;
          this_00->field_0x24f = local_38->field_0x60;
          this_00->field_0x250 = local_38->field_0061;
          this_00->field_0251 = local_38->field_0062;
          *(undefined4 *)&this_00->field_0x252 = local_38->field_0063;
          local_34 = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_34 != (void *)0x0) {
            iVar4 = 0;
            do {
              piVar12 = DAT_00806774;
              if (((iVar4 == 8) || (iVar4 == 10)) || (piVar12 = DAT_0080676c, iVar4 != 9)) {
                *(int **)((int)local_34 + iVar4 * 4) = piVar12;
              }
              else {
                *(undefined4 *)((int)local_34 + 0x24) = DAT_00806764;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 0x11);
            local_30 = 0;
            local_2c = 0;
            local_28 = DAT_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)&pAVar9->field_0x6b);
            FreeAndNull(&local_34);
            DumpClassC::WritePtr
                      (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                       (AnonShape_00495EC0_95A268C6 *)this_00);
          }
        }
        if ((this_00->field_0235 != CASE_4) && (this_00->field_0235 != CASE_2)) {
          uVar5 = this_00->field_0008;
          memset(local_5c, 0, 0x20); /* compiler bulk-zero initialization */
          local_4c = 0x125;
          local_48 = uVar5;
          FUN_006e6080(this_00,4,this_00->field_0286,local_5c);
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
        puVar10 = (undefined4 *)&this_00->field_0x256;
        pAVar15 = local_c;
        for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pAVar15 = *puVar10;
          puVar10 = puVar10 + 1;
          pAVar15 = (AnonShape_00583270_0B8831C2 *)&pAVar15->field_0x4;
        }
        *(undefined2 *)pAVar15 = *(undefined2 *)puVar10;
        *(undefined4 *)&local_c->field_0xc = 2;
        *(STJellyGunC_field_0235State *)&local_c->field_0x42 = this_00->field_0235;
        local_c->field_0046 = this_00->field_023D;
        local_c->field_0052 = this_00->field_0241;
        *(undefined2 *)&local_c->field_0x56 = *(undefined2 *)&this_00->field_0x245;
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x247;
        *(undefined4 *)&local_c->field_0x4e = *(undefined4 *)&this_00->field_0x24b;
        *(int *)&local_c->field_0x3e = this_00->field_0239;
        local_c->field_0058 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x5c = 0;
        local_c->field_0x60 = this_00->field_0x24f;
        local_c->field_0x61 = this_00->field_0x250;
        local_c->field_0x62 = this_00->field_0251;
        *(undefined4 *)&local_c->field_0x63 = *(undefined4 *)&this_00->field_0x252;
        local_c->field_0067 = local_8;
        pbVar11 = local_14;
        pbVar16 = &local_c->field_0x6b;
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar16 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar16 = pbVar16 + 1;
        }
        *(uint *)(&local_c->field_0x6b + local_8) = local_10;
        pbVar11 = local_18;
        pbVar16 = &local_c[1].field_0x3 + local_8;
        for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar16 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar16 = pbVar16 + 1;
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
    if (((SVar2 == MESS_HITKILL) && (this_00->field_0235 != CASE_2)) &&
       (this_00->field_0235 != CASE_4)) {
      sub_00582530(this_00);
      puVar10 = &this_00->field_01D5;
      this_00->field_0241 = 0xff;
      *(undefined2 *)&this_00->field_0x245 = 0;
      *(undefined4 *)&this_00->field_0x252 = 0;
      this_00->field_0235 = CASE_4;
      STT3DSprC::StopShow((STT3DSprC *)puVar10,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar10,0xc);
      thunk_FUN_004ad5e0((int)puVar10);
      thunk_FUN_004ad430((int)puVar10);
      sub_00582580(this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

