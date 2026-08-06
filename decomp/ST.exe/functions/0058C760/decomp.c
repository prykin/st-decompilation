#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_sat.cpp
   STSatC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004022B1|0058C760; family_names=STSatC::GetMessage; ret4=9;
   direct_offsets={10:2,14:3,18:1,1c:0} */

int __thiscall STSatC::GetMessage(STSatC *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  STSprGameObjC *this_00;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  AnonShape_0058C760_4470B7C6 *pAVar15;
  byte *puVar16;
  byte *pbVar17;
  byte *puVar18;
  AnonShape_0058C760_5C56630E *pAVar19;
  byte *pbVar20;
  InternalExceptionFrame local_80;
  void *local_3c;
  AnonShape_GLOBAL_00806724_3210464F *local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  AnonShape_0058C760_4470B7C6 *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_0058C760_5C56630E *local_c;
  uint local_8;

  if ((this->field_0231 == 7) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar10 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Igor\\to_sat.cpp",0x1fd,0,iVar10,"%s",
                                "STSatC::GetMessage");
    if (iVar11 == 0) {
      RaiseInternalException(iVar10,0,"E:\\__titans\\Igor\\to_sat.cpp",0x1fe);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_1c,message);
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x7c + local_8);
      if (((local_18 != nullptr) && (local_14 != nullptr)) &&
         (local_c != nullptr)) {
        puVar16 = (byte *)&this_00->field_0x275;
        pAVar19 = local_c;
        memmove(pAVar19, puVar16, 0x26); /* compiler REP MOVS byte copy */
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0026 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x2a = *(undefined4 *)&this_00->field_0x235;
        *(undefined4 *)&local_c->field_0x2e = *(undefined4 *)&this_00->field_0x239;
        local_c->field_0032 = *(undefined4 *)&this_00->field_0x23d;
        local_c->field_0036 = *(undefined4 *)((int)&this_00->field_023E + 3);
        *(undefined4 *)&local_c->field_0x3a = *(undefined4 *)((int)&this_00->field_0244 + 1);
        *(undefined4 *)&local_c->field_0x3e = *(undefined4 *)&this_00->field_0x249;
        uVar4 = this_00->field_024E;
        uVar5 = this_00->field_024F;
        uVar6 = this_00->field_0x250;
        local_c->field_0x42 = this_00->field_0x24d;
        local_c->field_0x43 = uVar4;
        local_c->field_0x44 = uVar5;
        local_c->field_0x45 = uVar6;
        *(undefined4 *)&local_c->field_0x46 = *(undefined4 *)&this_00->field_0x251;
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x255;
        local_c->field_004E = this_00->field_0259;
        *(undefined4 *)&local_c->field_0x52 = *(undefined4 *)&this_00->field_0x25d;
        *(undefined4 *)&local_c->field_0x56 = *(undefined4 *)&this_00->field_0x261;
        *(undefined4 *)&local_c->field_0x5a = *(undefined4 *)&this_00->field_0x265;
        *(undefined4 *)&local_c->field_0x5e = *(undefined4 *)&this_00->field_0x269;
        *(undefined4 *)&local_c->field_0x62 = *(undefined4 *)&this_00->field_0x26d;
        *(undefined4 *)&local_c->field_0x66 = *(undefined4 *)&this_00->field_0x271;
        *(undefined2 *)&local_c->field_0x6a = *(undefined2 *)&this_00->field_0x41;
        *(undefined2 *)&local_c->field_0x6c = *(undefined2 *)&this_00->field_0x43;
        *(undefined2 *)&local_c->field_0x6e = *(undefined2 *)&this_00->field_0x45;
        *(undefined4 *)&local_c->field_0x70 = 0;
        local_c->field_0074 = local_8;
        pbVar17 = local_18;
        pAVar19 = local_c + 1;
        for (uVar13 = local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          bVar7 = pbVar17[1];
          bVar8 = pbVar17[2];
          bVar9 = pbVar17[3];
          pAVar19->field_0x0 = pbVar17[0];
          pAVar19->field_0x1 = bVar7;
          pAVar19->field_0x2 = bVar8;
          pAVar19->field_0x3 = bVar9;
          pbVar17 = pbVar17 + 4;
          pAVar19 = (AnonShape_0058C760_5C56630E *)&pAVar19->field_0x4;
        }
        for (uVar13 = local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(byte *)pAVar19 = *pbVar17;
          pbVar17 = pbVar17 + 1;
          pAVar19 = (AnonShape_0058C760_5C56630E *)&pAVar19->field_0x1;
        }
        *(uint *)(&local_c[1].field_0x0 + local_8) = local_10;
        pbVar17 = local_14;
        pbVar20 = &local_c[1].field_0x4 + local_8;
        memmove(pbVar20, pbVar17, local_10); /* compiler REP MOVS byte copy */
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x7c + local_8));
        FreeAndNull(&local_18);
        FreeAndNull(&local_14);
        FreeAndNull(&local_c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_ID_NONE) {
        thunk_FUN_0058bd90((AnonShape_0058BD90_DCBCF849 *)this_00);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (SVar1 == MESS_ID_CREATE) {
        dVar2 = (message->arg0).u32;
        this_00->field_0231 = 7;
        uVar13 = *(uint *)(dVar2 + 0xc);
        if (uVar13 < 2) {
          *(undefined4 *)&this_00->field_0x239 = 0;
          puVar16 = (byte *)((message->arg0).ptr);
          puVar18 = (byte *)&this_00->field_0x275;
          memmove(puVar18, puVar16, 0x26); /* compiler REP MOVS byte copy */
          puVar16 = (byte *)(&this_00->field_01D5);
          iVar12 = STT3DSprC::LoadSequence
                             ((STT3DSprC *)puVar16,0xe,PTR_00806774,&DAT_007cbaa8,CASE_1D);
          if (iVar12 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_sat.cpp",0x158);
          }
          thunk_FUN_004ac610(puVar16,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar16,0xe,g_playSystem_00802A38->field_00E4);
          sub_00416240(this_00,*(ushort *)&this_00->field_0x289,*(short *)&this_00->field_0x28d,
                       *(ushort *)&this_00->field_0x291);
          sVar14 = *(short *)&this_00->field_0x41;
          *(int *)((int)&this_00->field_0244 + 1) = (int)PTR_00806724->field_002C;
          this_00->field_0231 = CASE_0;
          if (sVar14 < 0) {
            iVar12 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                            (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar12 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                                 (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x251 = iVar12;
          sVar14 = *(short *)&this_00->field_0x43;
          if (sVar14 < 0) {
            iVar12 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                            (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar12 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                                 (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x255 = iVar12;
          STT3DSprC::SetCurFase((STT3DSprC *)puVar16,'\x0e',0);
        }
        else if (uVar13 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar15 = local_20;
          puVar16 = (byte *)&this_00->field_0x275;
          memmove(puVar16, pAVar15, 0x26); /* compiler REP MOVS byte copy */
          local_8 = *(uint *)&local_20[1].field_0x4;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0xc + local_8));
          pAVar15 = local_20;
          this_00->field_0231 = local_20->field_0026;
          *(undefined4 *)&this_00->field_0x235 = local_20->field_002A;
          *(undefined4 *)&this_00->field_0x239 = local_20->field_002E;
          *(undefined4 *)&this_00->field_0x23d = local_20->field_0032;
          *(undefined4 *)((int)&this_00->field_023E + 3) = local_20->field_0036;
          *(undefined4 *)((int)&this_00->field_0244 + 1) = local_20->field_003A;
          *(undefined4 *)&this_00->field_0x249 = local_20->field_003E;
          *(undefined4 *)&this_00->field_0x24d = local_20->field_0042;
          *(undefined4 *)&this_00->field_0x251 = local_20->field_0046;
          *(undefined4 *)&this_00->field_0x255 = local_20->field_004A;
          this_00->field_0259 = local_20->field_004E;
          *(undefined4 *)&this_00->field_0x25d = local_20->field_0052;
          *(undefined4 *)&this_00->field_0x261 = local_20->field_0056;
          *(undefined4 *)&this_00->field_0x265 = local_20->field_005A;
          *(undefined4 *)&this_00->field_0x269 = local_20->field_005E;
          *(undefined4 *)&this_00->field_0x26d = local_20->field_0062;
          *(undefined4 *)&this_00->field_0x271 = local_20->field_0066;
          *(undefined2 *)&this_00->field_0x41 = local_20->field_006A;
          *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)&local_20->field_0x6c;
          *(undefined2 *)&this_00->field_0x45 = local_20->field_006E;
          local_3c = Library::DKW::LIB::MemAlloc(0x44);
          if (local_3c != nullptr) {
            iVar12 = 0;
            do {
              *(int **)(iVar12 + (int)local_3c) = PTR_00806774;
              iVar12 = iVar12 + 4;
            } while (iVar12 < 0x44);
            if (((*(int *)&this_00->field_0x239 < 1) ||
                (PTR_00806724 == nullptr)) ||
               (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
              local_38 = nullptr;
            }
            else {
              local_38 = PTR_00806724 + *(int *)&this_00->field_0x239;
            }
            local_34 = (int)PTR_00806724->field_002C;
            local_30 = PTR_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar15[1].field_0x8);
            FreeAndNull(&local_3c);
          }
        }
        iVar12 = *(int *)&this_00->field_0x289;
        sVar14 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          sVar14 = (((short)(iVar12 / 0xc9) + sVar14) -
                   (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar14 = ((short)(iVar12 / 0xc9) + sVar14) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f);
        }
        iVar12 = *(int *)&this_00->field_0x28d;
        *(short *)&this_00->field_0x47 = sVar14;
        sVar14 = (short)(iVar12 >> 0x1f);
        if (iVar12 < 0) {
          *(undefined2 *)&this_00->field_0x4b = 4;
          *(short *)&this_00->field_0x49 =
               (((short)(iVar12 / 0xc9) + sVar14) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) +
               -1;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x4b = 4;
        *(short *)&this_00->field_0x49 =
             ((short)(iVar12 / 0xc9) + sVar14) - (short)((longlong)iVar12 * 0x28c1979 >> 0x3f);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_STOCTOPUSC_0112) {
    thunk_FUN_004ad5e0((STT3DSprC *)&this_00->field_01D5);
  }
  else if (SVar1 == MESS_STSPRGAMEOBJC_0113) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

