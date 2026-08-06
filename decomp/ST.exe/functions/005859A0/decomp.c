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
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  STSprGameObjC *this_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  AnonShape_005859A0_2434EC3C *pAVar11;
  byte *puVar12;
  byte *pbVar13;
  byte *puVar14;
  AnonShape_005859A0_2F00015D *pAVar15;
  byte *pbVar16;
  InternalExceptionFrame local_80;
  void *local_3c;
  AnonShape_GLOBAL_00806724_3210464F *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  AnonShape_005859A0_2434EC3C *local_20;
  STSprGameObjC *local_1c;
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
  local_1c = (STSprGameObjC *)this;
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
  STSprGameObjC::GetMessage(local_1c,message);
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = Library::DKW::LIB::MemAlloc(local_10 + 0x67 + local_8);
      if (((local_18 != nullptr) && (local_14 != nullptr)) &&
         (local_c != nullptr)) {
        puVar12 = (byte *)&this_00->field_0x258;
        pAVar15 = local_c;
        memmove(pAVar15, puVar12, 0x32); /* compiler REP MOVS byte copy */
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0032 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x36 = *(undefined4 *)&this_00->field_0x235;
        local_c->field_003A = *(undefined4 *)&this_00->field_0x23d;
        *(undefined4 *)&local_c->field_0x3e = *(undefined4 *)&this_00->field_0x249;
        uVar4 = this_00->field_024E;
        uVar5 = this_00->field_024F;
        uVar6 = this_00->field_0x250;
        local_c->field_0x42 = this_00->field_0x24d;
        local_c->field_0x43 = uVar4;
        local_c->field_0x44 = uVar5;
        local_c->field_0x45 = uVar6;
        *(undefined4 *)&local_c->field_0x4e = *(undefined4 *)&this_00->field_0x251;
        *(undefined2 *)&local_c->field_0x52 = *(undefined2 *)&this_00->field_0x41;
        *(undefined2 *)&local_c->field_0x54 = *(undefined2 *)&this_00->field_0x43;
        *(undefined2 *)&local_c->field_0x56 = *(undefined2 *)&this_00->field_0x45;
        local_c->field_0046 = *(undefined4 *)((int)&this_00->field_023E + 3);
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)((int)&this_00->field_0244 + 1);
        *(undefined4 *)&local_c->field_0x58 = 0;
        local_c->field_0x5c = this_00->field_0x255;
        local_c->field_0x5d = this_00->field_0x256;
        local_c->field_0x5e = this_00->field_0x257;
        local_c->field_005F = local_8;
        pbVar13 = local_18;
        pbVar16 = &local_c->field_0x63;
        memmove(pbVar16, pbVar13, local_8); /* compiler REP MOVS byte copy */
        uVar9 = 0;
        *(uint *)(&local_c->field_0x63 + local_8) = local_10;
        pbVar13 = local_14;
        pbVar16 = &local_c[1].field_0x3 + local_8;
        memmove(pbVar16, pbVar13, local_10); /* compiler REP MOVS byte copy */
        STPlaySystemC::SaveObjData
                  (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                   (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x67 + local_8));
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
        uVar9 = *(uint *)(dVar2 + 0xc);
        if (uVar9 < 2) {
          *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
          *(uint *)&this_00->field_0x23d = g_playSystem_00802A38->field_00E4;
          puVar12 = (byte *)((message->arg0).ptr);
          puVar14 = (byte *)&this_00->field_0x258;
          memmove(puVar14, puVar12, 0x32); /* compiler REP MOVS byte copy */
          *(undefined4 *)&this_00->field_0x249 = 0x28;
          *(undefined4 *)&this_00->field_0x24d = 0xfffffe70;
          iVar7 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00806774,"lasbom",
                             0x1d);
          if (iVar7 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_lbomb.cpp",0x19f
                      );
          }
          STT3DSprC::StartShow
                    ((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
          sub_00416240(this_00,*(ushort *)&this_00->field_0x26c,*(short *)&this_00->field_0x270,
                       *(ushort *)&this_00->field_0x274);
          iVar7 = *(int *)&this_00->field_0x270;
          iVar8 = *(int *)&this_00->field_0x26c;
          *(int *)((int)&this_00->field_0244 + 1) = (int)PTR_00806724->field_002C;
          this_00->field_0231 = CASE_0;
          thunk_FUN_005860d0(this_00,iVar8,iVar7,0x463);
        }
        else if (uVar9 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar11 = local_20;
          puVar12 = (byte *)&this_00->field_0x258;
          memmove(puVar12, pAVar11, 0x32); /* compiler REP MOVS byte copy */
          local_8 = local_20->field_005F;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0x3 + local_8));
          pAVar11 = local_20;
          this_00->field_0231 = local_20->field_0032;
          *(undefined4 *)&this_00->field_0x235 = local_20->field_0036;
          *(undefined4 *)&this_00->field_0x23d = local_20->field_003A;
          *(undefined4 *)&this_00->field_0x24d = local_20->field_0042;
          *(undefined4 *)&this_00->field_0x249 = local_20->field_003E;
          *(undefined4 *)&this_00->field_0x251 = local_20->field_004E;
          *(undefined4 *)((int)&this_00->field_023E + 3) = local_20->field_0046;
          *(undefined4 *)((int)&this_00->field_0244 + 1) = local_20->field_004A;
          this_00->field_0x255 = local_20->field_0x5c;
          this_00->field_0x256 = local_20->field_005D;
          this_00->field_0x257 = local_20->field_005E;
          *(undefined2 *)&this_00->field_0x41 = local_20->field_0052;
          *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)&local_20->field_0x54;
          *(undefined2 *)&this_00->field_0x45 = local_20->field_0056;
          local_3c = Library::DKW::LIB::MemAlloc(0x44);
          if (local_3c != nullptr) {
            iVar7 = 0;
            do {
              *(int **)(iVar7 + (int)local_3c) = DAT_00806774;
              iVar7 = iVar7 + 4;
            } while (iVar7 < 0x44);
            STField<undefined4>(local_3c,0x24) = DAT_00806764;
            iVar7 = *(int *)((int)&this_00->field_023E + 3);
            if (((iVar7 < 1) || (PTR_00806724 == nullptr)) ||
               (PTR_00806724 == (AnonShape_GLOBAL_00806724_3210464F *)0xffffffd0)) {
              local_38 = nullptr;
            }
            else {
              local_38 = PTR_00806724 + iVar7;
            }
            local_34 = (int)PTR_00806724->field_002C;
            local_30 = DAT_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar11->field_0x63);
            FreeAndNull(&local_3c);
          }
        }
        iVar7 = *(int *)&this_00->field_0x26c;
        sVar10 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          sVar10 = (((short)(iVar7 / 0xc9) + sVar10) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f))
                   + -1;
        }
        else {
          sVar10 = ((short)(iVar7 / 0xc9) + sVar10) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f);
        }
        iVar7 = *(int *)&this_00->field_0x270;
        *(short *)&this_00->field_0x47 = sVar10;
        sVar10 = (short)(iVar7 >> 0x1f);
        if (iVar7 < 0) {
          *(undefined2 *)&this_00->field_0x4b = 4;
          *(short *)&this_00->field_0x49 =
               (((short)(iVar7 / 0xc9) + sVar10) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) +
               -1;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x4b = 4;
        *(short *)&this_00->field_0x49 =
             ((short)(iVar7 / 0xc9) + sVar10) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f);
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

