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
  byte bVar4;
  byte bVar5;
  byte bVar6;
  STSatC *this_00;
  int iVar10;
  int iVar11;
  int iVar7;
  uint uVar8;
  short sVar9;
  AnonShape_0058C760_4470B7C6 *pAVar10;
  byte *puVar11;
  byte *pbVar12;
  byte *puVar13;
  AnonShape_0058C760_5C56630E *pAVar14;
  byte *pbVar15;
  InternalExceptionFrame local_80;
  void *local_3c;
  AnonShape_GLOBAL_00806724_3210464F *local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  AnonShape_0058C760_4470B7C6 *local_20;
  STSatC *local_1c;
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
  local_1c = this;
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
  STSprGameObjC::GetMessage((STSprGameObjC *)local_1c,message);
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x7c + local_8);
      if (((local_18 != nullptr) && (local_14 != nullptr)) &&
         (local_c != nullptr)) {
        puVar11 = (byte *)&this_00->field_0x275;
        pAVar14 = local_c;
        memmove(pAVar14, puVar11, 0x26); /* compiler REP MOVS byte copy */
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0026 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x2a = this_00->field_0235;
        *(int *)&local_c->field_0x2e = this_00->field_0239;
        local_c->field_0032 = this_00->field_023D;
        local_c->field_0036 = this_00->field_0241;
        *(undefined4 *)&local_c->field_0x3a = this_00->field_0245;
        *(undefined4 *)&local_c->field_0x3e = this_00->field_0249;
        *(undefined4 *)&local_c->field_0x42 = this_00->field_024D;
        *(undefined4 *)&local_c->field_0x46 = this_00->field_0251;
        *(undefined4 *)&local_c->field_0x4a = this_00->field_0255;
        local_c->field_004E = this_00->field_0259;
        *(undefined4 *)&local_c->field_0x52 = this_00->field_025D;
        *(undefined4 *)&local_c->field_0x56 = this_00->field_0261;
        *(undefined4 *)&local_c->field_0x5a = this_00->field_0265;
        *(undefined4 *)&local_c->field_0x5e = this_00->field_0269;
        *(undefined4 *)&local_c->field_0x62 = this_00->field_026D;
        *(undefined4 *)&local_c->field_0x66 = this_00->field_0271;
        *(undefined2 *)&local_c->field_0x6a = this_00->field_0041;
        *(undefined2 *)&local_c->field_0x6c = this_00->field_0043;
        *(undefined2 *)&local_c->field_0x6e = this_00->field_0045;
        *(undefined4 *)&local_c->field_0x70 = 0;
        local_c->field_0074 = local_8;
        pbVar12 = local_18;
        pAVar14 = local_c + 1;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          bVar4 = pbVar12[1];
          bVar5 = pbVar12[2];
          bVar6 = pbVar12[3];
          pAVar14->field_0x0 = pbVar12[0];
          pAVar14->field_0x1 = bVar4;
          pAVar14->field_0x2 = bVar5;
          pAVar14->field_0x3 = bVar6;
          pbVar12 = pbVar12 + 4;
          pAVar14 = (AnonShape_0058C760_5C56630E *)&pAVar14->field_0x4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(byte *)pAVar14 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pAVar14 = (AnonShape_0058C760_5C56630E *)&pAVar14->field_0x1;
        }
        *(uint *)(&local_c[1].field_0x0 + local_8) = local_10;
        pbVar12 = local_14;
        pbVar15 = &local_c[1].field_0x4 + local_8;
        memmove(pbVar15, pbVar12, local_10); /* compiler REP MOVS byte copy */
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   local_10 + 0x7c + local_8);
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
        uVar8 = *(uint *)(dVar2 + 0xc);
        if (uVar8 < 2) {
          this_00->field_0239 = 0;
          puVar11 = (byte *)((message->arg0).ptr);
          puVar13 = (byte *)&this_00->field_0x275;
          memmove(puVar13, puVar11, 0x26); /* compiler REP MOVS byte copy */
          puVar11 = (byte *)(&this_00->field_01D5);
          iVar7 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)puVar11,0xe,PTR_00806774,&DAT_007cbaa8,CASE_1D);
          if (iVar7 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_sat.cpp",0x158);
          }
          thunk_FUN_004ac610(puVar11,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,g_playSystem_00802A38->field_00E4);
          sub_00416240(this_00,(ushort)this_00->field_0289,*(short *)&this_00->field_028D,
                       this_00->field_0291);
          sVar9 = this_00->field_0041;
          this_00->field_0245 = (int)PTR_00806724->field_002C;
          this_00->field_0231 = 0;
          iVar7 = STBiasedDiv16(sVar9, 0xc9); /* exact signed 16-bit grid-index division */
          this_00->field_0251 = iVar7;
          sVar9 = this_00->field_0043;
          iVar7 = STBiasedDiv16(sVar9, 0xc9); /* exact signed 16-bit grid-index division */
          this_00->field_0255 = iVar7;
          STT3DSprC::SetCurFase((STT3DSprC *)puVar11,'\x0e',0);
        }
        else if (uVar8 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar10 = local_20;
          puVar11 = (byte *)&this_00->field_0x275;
          memmove(puVar11, pAVar10, 0x26); /* compiler REP MOVS byte copy */
          local_8 = *(uint *)&local_20[1].field_0x4;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0xc + local_8));
          pAVar10 = local_20;
          this_00->field_0231 = local_20->field_0026;
          this_00->field_0235 = local_20->field_002A;
          this_00->field_0239 = local_20->field_002E;
          this_00->field_023D = local_20->field_0032;
          this_00->field_0241 = local_20->field_0036;
          this_00->field_0245 = local_20->field_003A;
          this_00->field_0249 = local_20->field_003E;
          this_00->field_024D = local_20->field_0042;
          this_00->field_0251 = local_20->field_0046;
          this_00->field_0255 = local_20->field_004A;
          this_00->field_0259 = local_20->field_004E;
          this_00->field_025D = local_20->field_0052;
          this_00->field_0261 = local_20->field_0056;
          this_00->field_0265 = local_20->field_005A;
          this_00->field_0269 = local_20->field_005E;
          this_00->field_026D = local_20->field_0062;
          this_00->field_0271 = local_20->field_0066;
          this_00->field_0041 = local_20->field_006A;
          this_00->field_0043 = *(undefined2 *)&local_20->field_0x6c;
          this_00->field_0045 = local_20->field_006E;
          local_3c = Library::DKW::LIB::MemAlloc(0x44);
          if (local_3c != nullptr) {
            iVar7 = 0;
            do {
              *(int **)(iVar7 + (int)local_3c) = PTR_00806774;
              iVar7 = iVar7 + 4;
            } while (iVar7 < 0x44);
            if (((this_00->field_0239 < 1) ||
                (PTR_00806724 == nullptr)) ||
               (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
              local_38 = nullptr;
            }
            else {
              local_38 = PTR_00806724 + this_00->field_0239;
            }
            local_34 = (int)PTR_00806724->field_002C;
            local_30 = PTR_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar10[1].field_0x8);
            FreeAndNull(&local_3c);
          }
        }
        iVar7 = this_00->field_0289;
        sVar9 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
        iVar7 = this_00->field_028D;
        this_00->field_0047 = sVar9;
        sVar9 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          this_00->field_004B = 4;
          this_00->field_0049 =
               (((short)(iVar7 / 0xc9) + sVar9) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1
          ;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        this_00->field_004B = 4;
        this_00->field_0049 =
             ((short)(iVar7 / 0xc9) + sVar9) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f);
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

