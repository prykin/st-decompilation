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
  code *pcVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  STSprGameObjC *this_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  AnonShape_005859A0_2434EC3C *pAVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  AnonShape_005859A0_2F00015D *pAVar14;
  byte *pbVar15;
  InternalExceptionFrame local_80;
  void *local_3c;
  int local_38;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Igor\\to_lbomb.cpp",0x230,0,iVar6,"%s",
                               "STLBombC::GetMessage");
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Igor\\to_lbomb.cpp",0x231);
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
      local_c = (AnonShape_005859A0_2F00015D *)
                Library::DKW::LIB::FUN_006aac70(local_10 + 0x67 + local_8);
      if (((local_18 != (byte *)0x0) && (local_14 != (byte *)0x0)) &&
         (local_c != (AnonShape_005859A0_2F00015D *)0x0)) {
        puVar11 = (undefined4 *)&this_00->field_0x258;
        pAVar14 = local_c;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pAVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          pAVar14 = (AnonShape_005859A0_2F00015D *)&pAVar14->field_0x4;
        }
        *(undefined2 *)pAVar14 = *(undefined2 *)puVar11;
        *(undefined4 *)&local_c->field_0xc = 2;
        local_c->field_0032 = this_00->field_0231;
        *(undefined4 *)&local_c->field_0x36 = *(undefined4 *)&this_00->field_0x235;
        local_c->field_003A = *(undefined4 *)&this_00->field_0x23d;
        *(undefined4 *)&local_c->field_0x3e = *(undefined4 *)&this_00->field_0x249;
        uVar4 = this_00->field_024E;
        uVar5 = *(undefined2 *)&this_00->field_0x24f;
        local_c->field_0x42 = this_00->field_0x24d;
        local_c->field_0x43 = uVar4;
        *(undefined2 *)&local_c->field_0x44 = uVar5;
        *(undefined4 *)&local_c->field_0x4e = *(undefined4 *)&this_00->field_0x251;
        *(undefined2 *)&local_c->field_0x52 = *(undefined2 *)&this_00->field_0x41;
        *(undefined2 *)&local_c->field_0x54 = *(undefined2 *)&this_00->field_0x43;
        *(undefined2 *)&local_c->field_0x56 = *(undefined2 *)&this_00->field_0x45;
        local_c->field_0046 = *(undefined4 *)((int)&this_00->field_023E + 3);
        *(undefined4 *)&local_c->field_0x4a = *(undefined4 *)&this_00->field_0x245;
        *(undefined4 *)&local_c->field_0x58 = 0;
        local_c->field_0x5c = this_00->field_0x255;
        local_c->field_0x5d = this_00->field_0x256;
        local_c->field_0x5e = this_00->field_0x257;
        local_c->field_005F = local_8;
        pbVar12 = local_18;
        pbVar15 = &local_c->field_0x63;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar15 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar15 = pbVar15 + 1;
        }
        *(uint *)(&local_c->field_0x63 + local_8) = local_10;
        pbVar12 = local_14;
        pbVar15 = &local_c[1].field_0x3 + local_8;
        for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar15 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar15 = pbVar15 + 1;
        }
        STPlaySystemC::SaveObjData
                  (PTR_00802a38,this_00->field_0018,(byte *)local_c,
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
        uVar8 = *(uint *)(dVar2 + 0xc);
        if (uVar8 < 2) {
          *(undefined4 *)((int)&this_00->field_023E + 3) = 0;
          *(undefined4 *)&this_00->field_0x23d = PTR_00802a38->field_00E4;
          puVar11 = (message->arg0).ptr;
          puVar13 = (undefined4 *)&this_00->field_0x258;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
          *(undefined4 *)&this_00->field_0x249 = 0x28;
          *(undefined4 *)&this_00->field_0x24d = 0xfffffe70;
          iVar6 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00806774,"lasbom",
                             0x1d);
          if (iVar6 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_lbomb.cpp",0x19f
                      );
          }
          STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00802a38->field_00E4);
          thunk_FUN_00416240(this_00,*(undefined2 *)&this_00->field_0x26c,
                             *(undefined2 *)&this_00->field_0x270,
                             *(undefined2 *)&this_00->field_0x274);
          *(int *)&this_00->field_0x245 = (int)*(short *)(DAT_00806724 + 0x2c);
          this_00->field_0231 = 0;
          thunk_FUN_005860d0(this_00,*(int *)&this_00->field_0x26c,*(int *)&this_00->field_0x270,
                             0x463);
        }
        else if (uVar8 == 2) {
          local_20 = (message->arg0).ptr;
          pAVar10 = local_20;
          puVar11 = (undefined4 *)&this_00->field_0x258;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = *(undefined4 *)pAVar10;
            pAVar10 = (AnonShape_005859A0_2434EC3C *)&pAVar10->field_0x4;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)pAVar10;
          local_8 = local_20->field_005F;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0x3 + local_8));
          pAVar10 = local_20;
          this_00->field_0231 = local_20->field_0032;
          *(undefined4 *)&this_00->field_0x235 = local_20->field_0036;
          *(undefined4 *)&this_00->field_0x23d = local_20->field_003A;
          *(undefined4 *)&this_00->field_0x24d = local_20->field_0042;
          *(undefined4 *)&this_00->field_0x249 = local_20->field_003E;
          *(undefined4 *)&this_00->field_0x251 = local_20->field_004E;
          *(undefined4 *)((int)&this_00->field_023E + 3) = local_20->field_0046;
          *(undefined4 *)&this_00->field_0x245 = local_20->field_004A;
          this_00->field_0x255 = local_20->field_0x5c;
          this_00->field_0x256 = local_20->field_005D;
          this_00->field_0x257 = local_20->field_005E;
          *(undefined2 *)&this_00->field_0x41 = local_20->field_0052;
          *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)&local_20->field_0x54;
          *(undefined2 *)&this_00->field_0x45 = local_20->field_0056;
          local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_3c != (void *)0x0) {
            iVar6 = 0;
            do {
              *(int **)(iVar6 + (int)local_3c) = DAT_00806774;
              iVar6 = iVar6 + 4;
            } while (iVar6 < 0x44);
            *(undefined4 *)((int)local_3c + 0x24) = DAT_00806764;
            iVar6 = *(int *)((int)&this_00->field_023E + 3);
            if (((iVar6 < 1) || (DAT_00806724 == 0)) || (DAT_00806724 == -0x30)) {
              local_38 = 0;
            }
            else {
              local_38 = DAT_00806724 + iVar6 * 0x34;
            }
            local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
            local_30 = DAT_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                       (AnonShape_004AD790_77673787 *)&pAVar10->field_0x63);
            FreeAndNull(&local_3c);
          }
        }
        iVar6 = *(int *)&this_00->field_0x26c;
        sVar9 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          sVar9 = (((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) +
                  -1;
        }
        else {
          sVar9 = ((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
        }
        iVar6 = *(int *)&this_00->field_0x270;
        *(short *)&this_00->field_0x47 = sVar9;
        sVar9 = (short)(iVar6 >> 0x1f);
        if (iVar6 < 0) {
          *(undefined2 *)&this_00->field_0x4b = 4;
          *(short *)&this_00->field_0x49 =
               (((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1
          ;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x4b = 4;
        *(short *)&this_00->field_0x49 =
             ((short)(iVar6 / 0xc9) + sVar9) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
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

