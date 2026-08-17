#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040201D|00583270; family_names=STJellyGunC::GetMessage; ret4=10;
   direct_offsets={10:2,14:2,18:3,1c:0}

   [STSwitchEnumApplier] Switch target field_0235 uses
   /SubmarineTitans/Recovered/Enums/STJellyGunC_field_0235State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall STJellyGunC::GetMessage(STJellyGunC *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  undefined4 uVar3;
  STJellyGunC *this_00;
  int local_EAX_80;
  int local_EAX_793;
  int local_EAX_853;
  int local_EAX_912;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  AnonShape_00583270_F758043B *pAVar10;
  byte *puVar11;
  byte *pbVar12;
  int *piVar13;
  byte *puVar14;
  char *pcVar15;
  AnonShape_00583270_0B8831C2 *pAVar16;
  byte *pbVar17;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  STJellyGunC *local_3c;
  AnonShape_00583270_F758043B *local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ushort *local_28;
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
  local_EAX_80 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  this_00 = local_3c;
  if (local_EAX_80 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x2af,0,local_EAX_80,
                               "%s","STJellyGunC::GetMessage");
    if (iVar6 == 0) {
      RaiseInternalException(local_EAX_80,0,"E:\\__titans\\Igor\\to_jelly.cpp",0x2b0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005832DB]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  STSprGameObjC::GetMessage((STSprGameObjC *)local_3c,message);
  SVar2 = message->id;
  if (SVar2 < MESS_ID_ALLCREATE) {
    if (SVar2 == MESS_TORPHIT) {
      if ((this_00->field_0235 != CASE_2) && (this_00->field_0235 != CASE_4)) {
        /* ST_CALLSITE[005839FF]: CALL 0x00404877; direct=00404877 STJellyGunC::sub_00582530 */
        sub_00582530(this_00);
        puVar11 = (byte *)(&this_00->field_01D5);
        this_00->field_0241 = 0xff;
        *(undefined2 *)&this_00->field_0x245 = 0;
        *(undefined4 *)&this_00->field_0x252 = 0;
        this_00->field_0235 = CASE_2;
        /* ST_CALLSITE[00583A2F]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
        /* ST_CALLSITE[00583A38]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow((STT3DSprC *)puVar11,0xc);
        thunk_FUN_004ad5e0((STT3DSprC *)puVar11);
        /* ST_CALLSITE[00583A46]: CALL 0x00402cd9; direct=00402CD9 STJellyGunC::sub_00584380 */
        iVar7 = sub_00584380(this_00);
        if (iVar7 != 0) {
          /* ST_CALLSITE[00583A55]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
          sub_00582580(this_00);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 < 4) {
      if (SVar2 == MESS_SHARED_0003) {
        /* ST_CALLSITE[00583815]: CALL 0x00405952; direct=00405952 sub_004167A0 */
        sub_004167A0(this_00);
        thunk_FUN_00495ff0(this_00->field_005B,this_00->field_005D,this_00->field_005F,
                           this_00->field_008E,(AnonShape_00495FF0_59081BDD *)this_00);
        thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (SVar2 == MESS_ID_NONE) {
        /* ST_CALLSITE[005837F8]: CALL 0x00405943; direct=00405943 STJellyGunC::LifeGun */
        LifeGun(this_00);
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
          puVar11 = (byte *)((message->arg0).ptr);
          puVar14 = (byte *)&this_00->field_0x256;
          memmove(puVar14, puVar11, 0x3e); /* compiler REP MOVS byte copy */
          iVar7 = this_00->field_026A;
          sVar9 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = this_00->field_026E;
          this_00->field_0047 = sVar9;
          sVar9 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          iVar7 = this_00->field_0272;
          this_00->field_0049 = sVar9;
          sVar9 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
          this_00->field_004B = sVar9;
          this_00->field_0239 = -1;
          *(undefined4 *)&this_00->field_0x24b = 1;
          *(undefined4 *)&this_00->field_0x247 = 0;
          thunk_FUN_00417a00(this_00,1);
          iVar7 = thunk_FUN_00417a20(this_00,this_00->field_0047,this_00->field_0049,
                                     this_00->field_004B,1);
          if (iVar7 == 0) {
            iVar7 = thunk_FUN_00417e70(this_00,8);
            if (iVar7 == 0) {
              iVar7 = thunk_FUN_00417ee0(this_00,0);
              if (iVar7 == 0) {
                puVar11 = (byte *)(&this_00->field_01D5);
                /* ST_CALLSITE[00583631]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
                iVar7 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar11,0xe,PTR_0080676c,"jellygun",CASE_1D
                                  );
                if (iVar7 != 0) {
                  RaiseInternalException
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x1f9);
                }
                iVar7 = *(int *)&this_00->field_0x25a;
                if (7 < iVar7) {
                  iVar5 = ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1fe,0,0,
                                             "%s",
                                             "STJellyGunC::Invalid player number");
                  if (iVar5 != 0) {
                    STDebugBreak(); /* noreturn in standalone pseudocode */
                  }
                  *(undefined4 *)&this_00->field_0x25a = 0;
                  iVar7 = 0;
                }
                piVar13 = PTR_0080676c;
                uVar8 = 0xffffffff;
                pcVar15 = "jellygun0";
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar8] = (char)iVar7 + '0';
                /* ST_CALLSITE[005836B0]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
                iVar7 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar11,0xc,piVar13,"jellygun0",CASE_1D);
                if (iVar7 != 0) {
                  RaiseInternalException
                            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jelly.cpp"
                             ,0x204);
                }
                thunk_FUN_004ac610(puVar11,'\f');
                /* ST_CALLSITE[005836EB]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
                STT3DSprC::StartShow((STT3DSprC *)puVar11,0xc,g_playSystem_00802A38->field_00E4);
                thunk_FUN_004ac610(puVar11,'\x0e');
                /* ST_CALLSITE[0058370A]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
                STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
                /* ST_CALLSITE[00583729]: CALL 0x00403107; direct=00403107 sub_00416240 */
                sub_00416240(this_00,(ushort)this_00->field_026A,(short)this_00->field_026E,
                             (ushort)this_00->field_0272);
                /* ST_CALLSITE[00583772]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
                STT3DSprC::sub_004AD3C0
                          ((STT3DSprC *)puVar11,
                           (float)this_00->field_026A * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_026E * _DAT_007904f8 * _DAT_007904f0,
                           (float)this_00->field_0272 * _DAT_007904f8 * _DAT_007904f0);
                this_00->field_0235 = CASE_0;
                /* ST_CALLSITE[00583796]: CALL 0x00405600; direct=00405600 STJellyGunC::sub_005844E0 */
                sub_005844E0(this_00,this_00->field_026A,this_00->field_026E,0x497);
              }
              else {
                local_EAX_912 =
                     ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",499,0,0,
                                        "%s","STJellyGunC::Phase Count err");
                if (local_EAX_912 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
                /* ST_CALLSITE[0058360F]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
                sub_00582580(this_00);
              }
            }
            else {
              local_EAX_853 =
                   ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1ec,0,0,
                                      "%s","STJellyGunC::GetMessage Phase Count err");
              if (local_EAX_853 != 0) {
                STDebugBreak(); /* noreturn in standalone pseudocode */
              }
              /* ST_CALLSITE[005835D4]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
              sub_00582580(this_00);
            }
          }
          else {
            local_EAX_793 =
                 ReportDebugMessage("E:\\__titans\\Igor\\to_jelly.cpp",0x1e5,0,0,"%s"
                                    ,"STJellyGunC::Cell is busy");
            if (local_EAX_793 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            /* ST_CALLSITE[00583598]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
            sub_00582580(this_00);
          }
        }
        else if (*(uint *)&local_38->field_0xc == 2) {
          pAVar10 = local_38;
          puVar11 = (byte *)&this_00->field_0x256;
          memmove(puVar11, pAVar10, 0x3e); /* compiler REP MOVS byte copy */
          local_8 = local_38->field_0067;
          /* ST_CALLSITE[0058334D]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_38[1].field_0x3 + local_8));
          pAVar10 = local_38;
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
          local_34 = Library::DKW::LIB::MemAlloc(0x44);
          if (local_34 != nullptr) {
            iVar7 = 0;
            do {
              piVar13 = PTR_00806774;
              if (((iVar7 == 8) || (iVar7 == 10)) || (piVar13 = PTR_0080676c, iVar7 != 9)) {
                *(int **)((int)local_34 + iVar7 * 4) = piVar13;
              }
              else {
                STField<int *>(local_34,0x24) = PTR_00806764;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 0x11);
            local_30 = 0;
            local_2c = 0;
            local_28 = PTR_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            /* ST_CALLSITE[00583434]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_34,
                       (AnonShape_004AD790_77673787 *)&pAVar10->field_0x6b);
            FreeAndNull(&local_34);
            /* ST_CALLSITE[0058345E]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
            DumpClassC::WritePtr
                      (this_00->field_005B,this_00->field_005D,this_00->field_005F,1,
                       (RecoveredRecord_DumpClassC_00495EC0 *)this_00);
          }
        }
        if ((this_00->field_0235 != CASE_4) && (this_00->field_0235 != CASE_2)) {
          uVar3 = this_00->field_0008;
          memset(local_5c, 0, 0x20); /* compiler bulk-zero initialization */
          local_4c = 0x125;
          local_48 = uVar3;
          FUN_006e6080(this_00,4,this_00->field_0286,local_5c);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (SVar2 == MESS_SHARED_010F) {
      /* ST_CALLSITE[00583876]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
      local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      /* ST_CALLSITE[00583884]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
      local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x6f + local_8);
      if (((local_14 != nullptr) && (local_18 != nullptr)) &&
         (local_c != nullptr)) {
        puVar11 = (byte *)&this_00->field_0x256;
        pAVar16 = local_c;
        memmove(pAVar16, puVar11, 0x3e); /* compiler REP MOVS byte copy */
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
        pbVar12 = local_14;
        pbVar17 = &local_c->field_0x6b;
        memmove(pbVar17, pbVar12, local_8); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        *(uint *)(&local_c->field_0x6b + local_8) = local_10;
        pbVar12 = local_18;
        pbVar17 = &local_c[1].field_0x3 + local_8;
        memmove(pbVar17, pbVar12, local_10); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[005839AF]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   local_10 + 0x6f + local_8);
        FreeAndNull(&local_14);
        FreeAndNull(&local_18);
        FreeAndNull(&local_c);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
    }
  }
  else if (SVar2 == MESS_STOCTOPUSC_0112) {
    thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_01D5);
  }
  else {
    if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
      /* ST_CALLSITE[00583B1A]: CALL dword ptr [EDX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
    if (((SVar2 == MESS_HITKILL) && (this_00->field_0235 != CASE_2)) &&
       (this_00->field_0235 != CASE_4)) {
      /* ST_CALLSITE[00583AA5]: CALL 0x00404877; direct=00404877 STJellyGunC::sub_00582530 */
      sub_00582530(this_00);
      puVar11 = (byte *)(&this_00->field_01D5);
      this_00->field_0241 = 0xff;
      *(undefined2 *)&this_00->field_0x245 = 0;
      *(undefined4 *)&this_00->field_0x252 = 0;
      this_00->field_0235 = CASE_4;
      /* ST_CALLSITE[00583AD5]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
      /* ST_CALLSITE[00583ADE]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xc);
      thunk_FUN_004ad5e0((STT3DSprC *)puVar11);
      thunk_FUN_004ad430((STT3DSprC *)puVar11);
      /* ST_CALLSITE[00583AF3]: CALL 0x004016c7; direct=004016C7 STJellyGunC::sub_00582580 */
      sub_00582580(this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

