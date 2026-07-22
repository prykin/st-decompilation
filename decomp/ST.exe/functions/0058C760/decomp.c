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
  code *pcVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  STSprGameObjC *this_00;
  int iVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  AnonShape_0058C760_4470B7C6 *pAVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  AnonShape_0058C760_5C56630E *pAVar17;
  byte *pbVar18;
  InternalExceptionFrame local_80;
  void *local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
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
  iVar9 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Igor\\to_sat.cpp",0x1fd,0,iVar9,"%s",
                                "STSatC::GetMessage");
    if (iVar10 == 0) {
      RaiseInternalException(iVar9,0,"E:\\__titans\\Igor\\to_sat.cpp",0x1fe);
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
      local_c = (AnonShape_0058C760_5C56630E *)
                Library::DKW::LIB::FUN_006aac70(local_10 + 0x7c + local_8);
      if (((local_18 != (byte *)0x0) && (local_14 != (byte *)0x0)) &&
         (local_c != (AnonShape_0058C760_5C56630E *)0x0)) {
        puVar14 = (undefined4 *)&this_00->field_0x275;
        pAVar17 = local_c;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pAVar17 = *puVar14;
          puVar14 = puVar14 + 1;
          pAVar17 = (AnonShape_0058C760_5C56630E *)&pAVar17->field_0x4;
        }
        *(undefined2 *)pAVar17 = *(undefined2 *)puVar14;
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0026 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x2a = *(undefined4 *)&this_00->field_0x235;
        *(undefined4 *)&local_c->field_0x2e = *(undefined4 *)&this_00->field_0x239;
        local_c->field_0032 = *(undefined4 *)&this_00->field_0x23d;
        local_c->field_0036 = *(undefined4 *)((int)&this_00->field_023E + 3);
        *(undefined4 *)&local_c->field_0x3a = *(undefined4 *)&this_00->field_0x245;
        *(undefined4 *)&local_c->field_0x3e = *(undefined4 *)&this_00->field_0x249;
        uVar4 = this_00->field_024E;
        uVar5 = *(undefined2 *)&this_00->field_0x24f;
        local_c->field_0x42 = this_00->field_0x24d;
        local_c->field_0x43 = uVar4;
        *(undefined2 *)&local_c->field_0x44 = uVar5;
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
        pbVar15 = local_18;
        pAVar17 = local_c + 1;
        for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          bVar6 = pbVar15[1];
          bVar7 = pbVar15[2];
          bVar8 = pbVar15[3];
          pAVar17->field_0x0 = pbVar15[0];
          pAVar17->field_0x1 = bVar6;
          pAVar17->field_0x2 = bVar7;
          pAVar17->field_0x3 = bVar8;
          pbVar15 = pbVar15 + 4;
          pAVar17 = (AnonShape_0058C760_5C56630E *)&pAVar17->field_0x4;
        }
        for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(byte *)pAVar17 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          pAVar17 = (AnonShape_0058C760_5C56630E *)&pAVar17->field_0x1;
        }
        *(uint *)(&local_c[1].field_0x0 + local_8) = local_10;
        pbVar15 = local_14;
        pbVar18 = &local_c[1].field_0x4 + local_8;
        for (uVar11 = local_10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pbVar18 = *(undefined4 *)pbVar15;
          pbVar15 = pbVar15 + 4;
          pbVar18 = pbVar18 + 4;
        }
        for (uVar11 = local_10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pbVar18 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          pbVar18 = pbVar18 + 1;
        }
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,this_00->field_0018,(byte *)local_c,
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
        uVar11 = *(uint *)(dVar2 + 0xc);
        if (uVar11 < 2) {
          *(undefined4 *)&this_00->field_0x239 = 0;
          puVar14 = (message->arg0).ptr;
          puVar16 = (undefined4 *)&this_00->field_0x275;
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar16 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          }
          *(undefined2 *)puVar16 = *(undefined2 *)puVar14;
          puVar14 = &this_00->field_01D5;
          iVar9 = STT3DSprC::LoadSequence((STT3DSprC *)puVar14,0xe,DAT_00806774,&DAT_007cbaa8,0x1d);
          if (iVar9 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_sat.cpp",0x158);
          }
          thunk_FUN_004ac610(puVar14,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar14,0xe,g_playSystem_00802A38->field_00E4);
          sub_00416240(this_00,*(undefined2 *)&this_00->field_0x289,
                       *(undefined2 *)&this_00->field_0x28d,*(undefined2 *)&this_00->field_0x291);
          sVar12 = *(short *)&this_00->field_0x41;
          *(int *)&this_00->field_0x245 = (int)*(short *)(DAT_00806724 + 0x2c);
          this_00->field_0231 = CASE_0;
          if (sVar12 < 0) {
            iVar9 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                           (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar9 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                                (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x251 = iVar9;
          sVar12 = *(short *)&this_00->field_0x43;
          if (sVar12 < 0) {
            iVar9 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                           (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar9 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                                (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x255 = iVar9;
          STT3DSprC::SetCurFase((STT3DSprC *)puVar14,'\x0e',0);
        }
        else if (uVar11 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar13 = local_20;
          puVar14 = (undefined4 *)&this_00->field_0x275;
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar14 = *(undefined4 *)pAVar13;
            pAVar13 = (AnonShape_0058C760_4470B7C6 *)&pAVar13->field_0x4;
            puVar14 = puVar14 + 1;
          }
          *(undefined2 *)puVar14 = *(undefined2 *)pAVar13;
          local_8 = *(uint *)&local_20[1].field_0x4;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0xc + local_8));
          pAVar13 = local_20;
          this_00->field_0231 = local_20->field_0026;
          *(undefined4 *)&this_00->field_0x235 = local_20->field_002A;
          *(undefined4 *)&this_00->field_0x239 = local_20->field_002E;
          *(undefined4 *)&this_00->field_0x23d = local_20->field_0032;
          *(undefined4 *)((int)&this_00->field_023E + 3) = local_20->field_0036;
          *(undefined4 *)&this_00->field_0x245 = local_20->field_003A;
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
          local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_3c != (void *)0x0) {
            iVar9 = 0;
            do {
              *(int **)(iVar9 + (int)local_3c) = DAT_00806774;
              iVar9 = iVar9 + 4;
            } while (iVar9 < 0x44);
            if (((*(int *)&this_00->field_0x239 < 1) || (DAT_00806724 == 0)) ||
               (DAT_00806724 == -0x30)) {
              local_38 = 0;
            }
            else {
              local_38 = DAT_00806724 + *(int *)&this_00->field_0x239 * 0x34;
            }
            local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
            local_30 = DAT_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar13[1].field_0x8);
            FreeAndNull(&local_3c);
          }
        }
        iVar9 = *(int *)&this_00->field_0x289;
        sVar12 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          sVar12 = (((short)(iVar9 / 0xc9) + sVar12) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f))
                   + -1;
        }
        else {
          sVar12 = ((short)(iVar9 / 0xc9) + sVar12) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f);
        }
        iVar9 = *(int *)&this_00->field_0x28d;
        *(short *)&this_00->field_0x47 = sVar12;
        sVar12 = (short)(iVar9 >> 0x1f);
        if (iVar9 < 0) {
          *(undefined2 *)&this_00->field_0x4b = 4;
          *(short *)&this_00->field_0x49 =
               (((short)(iVar9 / 0xc9) + sVar12) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) +
               -1;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x4b = 4;
        *(short *)&this_00->field_0x49 =
             ((short)(iVar9 / 0xc9) + sVar12) - (short)((longlong)iVar9 * 0x28c1979 >> 0x3f);
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
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
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

