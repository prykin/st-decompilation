#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_lbomb.cpp
   STLBombC::GetMessage */

undefined4 __thiscall STLBombC::GetMessage(STLBombC *this,AnonShape_005859A0_2C017738 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STSprGameObjC *this_00;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  short sVar9;
  AnonShape_005859A0_2434EC3C *pAVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  byte *pbVar14;
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
  byte *local_c;
  uint local_8;

  if ((this->field_0231 == 4) && (param_1->field_0010 != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Igor_to_lbomb_cpp_007cb910,0x230,0,iVar5,&DAT_007a4ccc,
                               s_STLBombC__GetMessage_007cb8f4);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Igor_to_lbomb_cpp_007cb910,0x231);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  STSprGameObjC::GetMessage(local_1c,(AnonShape_0041AF40_F59F8577 *)param_1);
  uVar8 = param_1->field_0010;
  if (uVar8 < 0x110) {
    if (uVar8 == 0x10f) {
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x67 + local_8);
      if (((local_18 != (byte *)0x0) && (local_14 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        puVar11 = (undefined4 *)&this_00->field_0x258;
        pbVar12 = local_c;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pbVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          pbVar12 = pbVar12 + 4;
        }
        *(undefined2 *)pbVar12 = *(undefined2 *)puVar11;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        uVar2 = this_00->field_0x232;
        uVar3 = this_00->field_0x233;
        uVar4 = this_00->field_0x234;
        local_c[0x32] = this_00->field_0x231;
        local_c[0x33] = uVar2;
        local_c[0x34] = uVar3;
        local_c[0x35] = uVar4;
        uVar2 = this_00->field_0x236;
        uVar3 = this_00->field_0x237;
        uVar4 = this_00->field_0x238;
        local_c[0x36] = this_00->field_0x235;
        local_c[0x37] = uVar2;
        local_c[0x38] = uVar3;
        local_c[0x39] = uVar4;
        uVar2 = this_00->field_0x23e;
        uVar3 = this_00->field_0x23f;
        uVar4 = this_00->field_0x240;
        local_c[0x3a] = this_00->field_0x23d;
        local_c[0x3b] = uVar2;
        local_c[0x3c] = uVar3;
        local_c[0x3d] = uVar4;
        uVar2 = this_00->field_0x24a;
        uVar3 = this_00->field_0x24b;
        uVar4 = this_00->field_0x24c;
        local_c[0x3e] = this_00->field_0x249;
        local_c[0x3f] = uVar2;
        local_c[0x40] = uVar3;
        local_c[0x41] = uVar4;
        uVar2 = this_00->field_0x24e;
        uVar3 = this_00->field_0x24f;
        uVar4 = this_00->field_0x250;
        local_c[0x42] = this_00->field_0x24d;
        local_c[0x43] = uVar2;
        local_c[0x44] = uVar3;
        local_c[0x45] = uVar4;
        uVar2 = this_00->field_0x252;
        uVar3 = this_00->field_0x253;
        uVar4 = this_00->field_0x254;
        local_c[0x4e] = this_00->field_0x251;
        local_c[0x4f] = uVar2;
        local_c[0x50] = uVar3;
        local_c[0x51] = uVar4;
        uVar2 = this_00->field_0x42;
        local_c[0x52] = this_00->field_0x41;
        local_c[0x53] = uVar2;
        uVar2 = this_00->field_0x44;
        local_c[0x54] = this_00->field_0x43;
        local_c[0x55] = uVar2;
        uVar2 = this_00->field_0x46;
        local_c[0x56] = this_00->field_0x45;
        local_c[0x57] = uVar2;
        uVar2 = this_00->field_0x242;
        uVar3 = this_00->field_0x243;
        uVar4 = this_00->field_0x244;
        local_c[0x46] = this_00->field_0x241;
        local_c[0x47] = uVar2;
        local_c[0x48] = uVar3;
        local_c[0x49] = uVar4;
        uVar2 = this_00->field_0x246;
        uVar3 = this_00->field_0x247;
        uVar4 = this_00->field_0x248;
        local_c[0x4a] = this_00->field_0x245;
        local_c[0x4b] = uVar2;
        local_c[0x4c] = uVar3;
        local_c[0x4d] = uVar4;
        local_c[0x58] = 0;
        local_c[0x59] = 0;
        local_c[0x5a] = 0;
        local_c[0x5b] = 0;
        local_c[0x5c] = this_00->field_0x255;
        local_c[0x5d] = this_00->field_0x256;
        local_c[0x5e] = this_00->field_0x257;
        *(uint *)(local_c + 0x5f) = local_8;
        pbVar12 = local_18;
        pbVar14 = local_c + 99;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar14 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar14 = pbVar14 + 1;
        }
        *(uint *)(local_c + local_8 + 99) = local_10;
        pbVar12 = local_14;
        pbVar14 = local_c + local_8 + 0x67;
        for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar14 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar14 = pbVar14 + 1;
        }
        STPlaySystemC::SaveObjData
                  (PTR_00802a38,this_00->field_0018,local_c,
                   (AnonShape_0060EA30_DCEB68AD *)(local_10 + 0x67 + local_8));
        FreeAndNull(&local_18);
        FreeAndNull(&local_14);
        FreeAndNull(&local_c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
    else {
      if (uVar8 == 0) {
        thunk_FUN_00585020((AnonShape_00585020_1C9B1418 *)this_00);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (uVar8 == 2) {
        iVar5 = param_1->field_0014;
        *(undefined4 *)&this_00->field_0x231 = 4;
        uVar8 = *(uint *)(iVar5 + 0xc);
        if (uVar8 < 2) {
          *(undefined4 *)&this_00->field_0x241 = 0;
          *(undefined4 *)&this_00->field_0x23d = PTR_00802a38->field_00E4;
          puVar11 = (undefined4 *)param_1->field_0014;
          puVar13 = (undefined4 *)&this_00->field_0x258;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
          *(undefined4 *)&this_00->field_0x249 = 0x28;
          *(undefined4 *)&this_00->field_0x24d = 0xfffffe70;
          iVar5 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)&this_00->field_01D5,0xe,DAT_00806774,s_lasbom_007cb8b8,
                             0x1d);
          if (iVar5 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_to_lbomb_cpp_007cb910,0x19f
                      );
          }
          STT3DSprC::StartShow((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00802a38->field_00E4);
          thunk_FUN_00416240(this_00,*(undefined2 *)&this_00->field_0x26c,
                             *(undefined2 *)&this_00->field_0x270,
                             *(undefined2 *)&this_00->field_0x274);
          *(int *)&this_00->field_0x245 = (int)*(short *)(DAT_00806724 + 0x2c);
          *(undefined4 *)&this_00->field_0x231 = 0;
          thunk_FUN_005860d0(this_00,*(int *)&this_00->field_0x26c,*(int *)&this_00->field_0x270,
                             0x463);
        }
        else if (uVar8 == 2) {
          local_20 = (AnonShape_005859A0_2434EC3C *)param_1->field_0014;
          pAVar10 = local_20;
          puVar11 = (undefined4 *)&this_00->field_0x258;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar11 = *(undefined4 *)pAVar10;
            pAVar10 = (AnonShape_005859A0_2434EC3C *)&pAVar10->field_0x4;
            puVar11 = puVar11 + 1;
          }
          *(undefined2 *)puVar11 = *(undefined2 *)pAVar10;
          local_8 = local_20->field_005F;
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(&local_20[1].field_0x3 + local_8));
          pAVar10 = local_20;
          *(undefined4 *)&this_00->field_0x231 = local_20->field_0032;
          *(undefined4 *)&this_00->field_0x235 = local_20->field_0036;
          *(undefined4 *)&this_00->field_0x23d = local_20->field_003A;
          *(undefined4 *)&this_00->field_0x24d = local_20->field_0042;
          *(undefined4 *)&this_00->field_0x249 = local_20->field_003E;
          *(undefined4 *)&this_00->field_0x251 = local_20->field_004E;
          *(undefined4 *)&this_00->field_0x241 = local_20->field_0046;
          *(undefined4 *)&this_00->field_0x245 = local_20->field_004A;
          this_00->field_0x255 = local_20->field_0x5c;
          this_00->field_0x256 = local_20->field_005D;
          this_00->field_0x257 = local_20->field_005E;
          *(undefined2 *)&this_00->field_0x41 = local_20->field_0052;
          *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)&local_20->field_0x54;
          *(undefined2 *)&this_00->field_0x45 = local_20->field_0056;
          local_3c = (void *)Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_3c != (void *)0x0) {
            iVar5 = 0;
            do {
              *(int **)(iVar5 + (int)local_3c) = DAT_00806774;
              iVar5 = iVar5 + 4;
            } while (iVar5 < 0x44);
            *(undefined4 *)((int)local_3c + 0x24) = DAT_00806764;
            if (((*(int *)&this_00->field_0x241 < 1) || (DAT_00806724 == 0)) ||
               (DAT_00806724 == -0x30)) {
              local_38 = 0;
            }
            else {
              local_38 = DAT_00806724 + *(int *)&this_00->field_0x241 * 0x34;
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
        iVar5 = *(int *)&this_00->field_0x26c;
        sVar9 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          sVar9 = (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) +
                  -1;
        }
        else {
          sVar9 = ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
        }
        iVar5 = *(int *)&this_00->field_0x270;
        *(short *)&this_00->field_0x47 = sVar9;
        sVar9 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          *(undefined2 *)&this_00->field_0x4b = 4;
          *(short *)&this_00->field_0x49 =
               (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1
          ;
          g_currentExceptionFrame = local_80.previous;
          return 0;
        }
        *(undefined2 *)&this_00->field_0x4b = 4;
        *(short *)&this_00->field_0x49 =
             ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (uVar8 == 3) {
        thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
  }
  else if (uVar8 == 0x112) {
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
  }
  else if (uVar8 == 0x113) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

