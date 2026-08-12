#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_lbomb.cpp
   STLBombC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004048EA|005859A0; family_names=STLBombC::GetMessage; ret4=9;
   direct_offsets={10:2,14:3,18:1,1c:0} */

int __thiscall STLBombC::GetMessage(STLBombC *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  STLBombC *this_00;
  int iVar7;
  int iVar8;
  int iVar4;
  uint uVar5;
  short sVar6;
  AnonShape_005859A0_2434EC3C *pAVar7;
  byte *puVar8;
  byte *pbVar9;
  byte *puVar10;
  AnonShape_005859A0_2F00015D *pAVar11;
  byte *pbVar12;
  InternalExceptionFrame local_80;
  void *local_3c;
  AnonShape_GLOBAL_00806724_3210464F *local_38;
  int local_34;
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  AnonShape_005859A0_2434EC3C *local_20;
  STLBombC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  AnonShape_005859A0_2F00015D *local_c;
  uint local_8;

  if ((this->field_0231 == 4) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_lbomb.cpp",0x230,0,iVar7,"%s",
                               "STLBombC::GetMessage");
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Igor\\to_lbomb.cpp",0x231);
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
      local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x67 + local_8);
      if (((local_18 != nullptr) && (local_14 != nullptr)) &&
         (local_c != nullptr)) {
        puVar8 = (byte *)&this_00->field_0x258;
        pAVar11 = local_c;
        memmove(pAVar11, puVar8, 0x32); /* compiler REP MOVS byte copy */
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0032 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x36 = this_00->field_0235;
        local_c->field_003A = this_00->field_023D;
        *(undefined4 *)&local_c->field_0x3e = this_00->field_0249;
        *(undefined4 *)&local_c->field_0x42 = this_00->field_024D;
        *(undefined4 *)&local_c->field_0x4e = this_00->field_0251;
        *(undefined2 *)&local_c->field_0x52 = this_00->field_0041;
        *(undefined2 *)&local_c->field_0x54 = this_00->field_0043;
        *(undefined2 *)&local_c->field_0x56 = this_00->field_0045;
        local_c->field_0046 = this_00->field_0241;
        *(undefined4 *)&local_c->field_0x4a = this_00->field_0245;
        *(undefined4 *)&local_c->field_0x58 = 0;
        local_c->field_0x5c = this_00->field_0255;
        local_c->field_0x5d = this_00->field_0256;
        local_c->field_0x5e = this_00->field_0257;
        local_c->field_005F = local_8;
        pbVar9 = local_18;
        pbVar12 = &local_c->field_0x63;
        memmove(pbVar12, pbVar9, local_8); /* compiler REP MOVS byte copy */
        uVar5 = 0;
        *(uint *)(&local_c->field_0x63 + local_8) = local_10;
        pbVar9 = local_14;
        pbVar12 = &local_c[1].field_0x3 + local_8;
        memmove(pbVar12, pbVar9, local_10); /* compiler REP MOVS byte copy */
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   local_10 + 0x67 + local_8);
        FreeAndNull(&local_18);
        FreeAndNull(&local_14);
        FreeAndNull(&local_c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_ID_NONE) {
        thunk_FUN_00585020((AnonShape_00585020_1C9B1418 *)this_00);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (SVar1 == MESS_ID_CREATE) {
        dVar2 = (message->arg0).u32;
        this_00->field_0231 = 4;
        uVar5 = *(uint *)(dVar2 + 0xc);
        if (uVar5 < 2) {
          this_00->field_0241 = 0;
          this_00->field_023D = g_playSystem_00802A38->field_00E4;
          puVar8 = (byte *)((message->arg0).ptr);
          puVar10 = (byte *)&this_00->field_0x258;
          memmove(puVar10, puVar8, 0x32); /* compiler REP MOVS byte copy */
          this_00->field_0249 = 0x28;
          this_00->field_024D = 0xfffffe70;
          iVar4 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00806774,"lasbom",
                             CASE_1D);
          if (iVar4 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_lbomb.cpp",0x19f
                      );
          }
          STT3DSprC::StartShow
                    ((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
          sub_00416240(this_00,(ushort)this_00->field_026C,*(short *)&this_00->field_0270,
                       this_00->field_0274);
          this_00->field_0245 = (int)PTR_00806724->field_002C;
          this_00->field_0231 = 0;
          thunk_FUN_005860d0(this_00,this_00->field_026C,this_00->field_0270,0x463);
        }
        else if (uVar5 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar7 = local_20;
          puVar8 = (byte *)&this_00->field_0x258;
          memmove(puVar8, pAVar7, 0x32); /* compiler REP MOVS byte copy */
          local_8 = local_20->field_005F;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0x3 + local_8));
          pAVar7 = local_20;
          this_00->field_0231 = local_20->field_0032;
          this_00->field_0235 = local_20->field_0036;
          this_00->field_023D = local_20->field_003A;
          this_00->field_024D = local_20->field_0042;
          this_00->field_0249 = local_20->field_003E;
          this_00->field_0251 = local_20->field_004E;
          this_00->field_0241 = local_20->field_0046;
          this_00->field_0245 = local_20->field_004A;
          this_00->field_0255 = local_20->field_0x5c;
          this_00->field_0256 = local_20->field_005D;
          this_00->field_0257 = local_20->field_005E;
          this_00->field_0041 = local_20->field_0052;
          this_00->field_0043 = *(undefined2 *)&local_20->field_0x54;
          this_00->field_0045 = local_20->field_0056;
          local_3c = Library::DKW::LIB::MemAlloc(0x44);
          if (local_3c != nullptr) {
            iVar4 = 0;
            do {
              *(int **)(iVar4 + (int)local_3c) = PTR_00806774;
              iVar4 = iVar4 + 4;
            } while (iVar4 < 0x44);
            STField<int *>(local_3c,0x24) = PTR_00806764;
            if (((this_00->field_0241 < 1) ||
                (PTR_00806724 == nullptr)) ||
               (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
              local_38 = nullptr;
            }
            else {
              local_38 = PTR_00806724 + this_00->field_0241;
            }
            local_34 = (int)PTR_00806724->field_002C;
            local_30 = PTR_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar7->field_0x63);
            FreeAndNull(&local_3c);
          }
        }
        iVar4 = this_00->field_026C;
        sVar6 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
        iVar4 = this_00->field_0270;
        this_00->field_0047 = sVar6;
        sVar6 = (short)(iVar4 >> 0x1f);
        if (iVar4 < 0) {
          this_00->field_004B = 4;
          this_00->field_0049 =
               (((short)(iVar4 / 0xc9) + sVar6) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1
          ;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        this_00->field_004B = 4;
        this_00->field_0049 =
             ((short)(iVar4 / 0xc9) + sVar6) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
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

