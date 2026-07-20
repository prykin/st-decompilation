
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_sat.cpp
   STSatC::GetMessage */

undefined4 __thiscall STSatC::GetMessage(STSatC *this,int param_1)

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
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  byte *pbVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  byte *pbVar13;
  InternalExceptionFrame local_80;
  LPVOID local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  STSprGameObjC *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((this->field_0231 == 7) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Igor_to_sat_cpp_007cbab8,0x1fd,0,iVar5,&DAT_007a4ccc,
                               s_STSatC__GetMessage_007cbb08);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Igor_to_sat_cpp_007cbab8,0x1fe);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  STSprGameObjC::GetMessage(local_1c,param_1);
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0x110) {
    if (uVar8 == 0x10f) {
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x7c + local_8);
      if (((local_18 != (byte *)0x0) && (local_14 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        puVar10 = (undefined4 *)&this_00->field_0x275;
        pbVar11 = local_c;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pbVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          pbVar11 = pbVar11 + 4;
        }
        *(undefined2 *)pbVar11 = *(undefined2 *)puVar10;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        uVar2 = this_00->field_0x232;
        uVar3 = this_00->field_0x233;
        uVar4 = this_00->field_0x234;
        local_c[0x26] = this_00->field_0x231;
        local_c[0x27] = uVar2;
        local_c[0x28] = uVar3;
        local_c[0x29] = uVar4;
        uVar2 = this_00->field_0x236;
        uVar3 = this_00->field_0x237;
        uVar4 = this_00->field_0x238;
        local_c[0x2a] = this_00->field_0x235;
        local_c[0x2b] = uVar2;
        local_c[0x2c] = uVar3;
        local_c[0x2d] = uVar4;
        uVar2 = this_00->field_0x23a;
        uVar3 = this_00->field_0x23b;
        uVar4 = this_00->field_0x23c;
        local_c[0x2e] = this_00->field_0x239;
        local_c[0x2f] = uVar2;
        local_c[0x30] = uVar3;
        local_c[0x31] = uVar4;
        uVar2 = this_00->field_0x23e;
        uVar3 = this_00->field_0x23f;
        uVar4 = this_00->field_0x240;
        local_c[0x32] = this_00->field_0x23d;
        local_c[0x33] = uVar2;
        local_c[0x34] = uVar3;
        local_c[0x35] = uVar4;
        uVar2 = this_00->field_0x242;
        uVar3 = this_00->field_0x243;
        uVar4 = this_00->field_0x244;
        local_c[0x36] = this_00->field_0x241;
        local_c[0x37] = uVar2;
        local_c[0x38] = uVar3;
        local_c[0x39] = uVar4;
        uVar2 = this_00->field_0x246;
        uVar3 = this_00->field_0x247;
        uVar4 = this_00->field_0x248;
        local_c[0x3a] = this_00->field_0x245;
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
        local_c[0x46] = this_00->field_0x251;
        local_c[0x47] = uVar2;
        local_c[0x48] = uVar3;
        local_c[0x49] = uVar4;
        uVar2 = this_00->field_0x256;
        uVar3 = this_00->field_0x257;
        uVar4 = this_00->field_0x258;
        local_c[0x4a] = this_00->field_0x255;
        local_c[0x4b] = uVar2;
        local_c[0x4c] = uVar3;
        local_c[0x4d] = uVar4;
        *(undefined4 *)(local_c + 0x4e) = this_00->field_0259;
        uVar2 = this_00->field_0x25e;
        uVar3 = this_00->field_0x25f;
        uVar4 = this_00->field_0x260;
        local_c[0x52] = this_00->field_0x25d;
        local_c[0x53] = uVar2;
        local_c[0x54] = uVar3;
        local_c[0x55] = uVar4;
        uVar2 = this_00->field_0x262;
        uVar3 = this_00->field_0x263;
        uVar4 = this_00->field_0x264;
        local_c[0x56] = this_00->field_0x261;
        local_c[0x57] = uVar2;
        local_c[0x58] = uVar3;
        local_c[0x59] = uVar4;
        uVar2 = this_00->field_0x266;
        uVar3 = this_00->field_0x267;
        uVar4 = this_00->field_0x268;
        local_c[0x5a] = this_00->field_0x265;
        local_c[0x5b] = uVar2;
        local_c[0x5c] = uVar3;
        local_c[0x5d] = uVar4;
        uVar2 = this_00->field_0x26a;
        uVar3 = this_00->field_0x26b;
        uVar4 = this_00->field_0x26c;
        local_c[0x5e] = this_00->field_0x269;
        local_c[0x5f] = uVar2;
        local_c[0x60] = uVar3;
        local_c[0x61] = uVar4;
        uVar2 = this_00->field_0x26e;
        uVar3 = this_00->field_0x26f;
        uVar4 = this_00->field_0x270;
        local_c[0x62] = this_00->field_0x26d;
        local_c[99] = uVar2;
        local_c[100] = uVar3;
        local_c[0x65] = uVar4;
        uVar2 = this_00->field_0x272;
        uVar3 = this_00->field_0x273;
        uVar4 = this_00->field_0x274;
        local_c[0x66] = this_00->field_0x271;
        local_c[0x67] = uVar2;
        local_c[0x68] = uVar3;
        local_c[0x69] = uVar4;
        uVar2 = this_00->field_0x42;
        local_c[0x6a] = this_00->field_0x41;
        local_c[0x6b] = uVar2;
        uVar2 = this_00->field_0x44;
        local_c[0x6c] = this_00->field_0x43;
        local_c[0x6d] = uVar2;
        uVar2 = this_00->field_0x46;
        local_c[0x6e] = this_00->field_0x45;
        local_c[0x6f] = uVar2;
        local_c[0x70] = 0;
        local_c[0x71] = 0;
        local_c[0x72] = 0;
        local_c[0x73] = 0;
        *(uint *)(local_c + 0x74) = local_8;
        pbVar11 = local_18;
        pbVar13 = local_c + 0x78;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar13 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
        }
        *(uint *)(local_c + local_8 + 0x78) = local_10;
        pbVar11 = local_14;
        pbVar13 = local_c + local_8 + 0x7c;
        for (uVar8 = local_10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar8 = local_10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar13 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
        }
        STPlaySystemC::SaveObjData
                  (DAT_00802a38,this_00->field_0018,local_c,local_10 + 0x7c + local_8);
        FUN_006ab060(&local_18);
        FUN_006ab060(&local_14);
        FUN_006ab060(&local_c);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
    else {
      if (uVar8 == 0) {
        thunk_FUN_0058bd90((int *)this_00);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (uVar8 == 2) {
        iVar5 = *(int *)(param_1 + 0x14);
        *(undefined4 *)&this_00->field_0x231 = 7;
        uVar8 = *(uint *)(iVar5 + 0xc);
        if (uVar8 < 2) {
          *(undefined4 *)&this_00->field_0x239 = 0;
          puVar10 = *(undefined4 **)(param_1 + 0x14);
          puVar12 = (undefined4 *)&this_00->field_0x275;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
          puVar10 = &this_00->field_01D5;
          iVar5 = STT3DSprC::LoadSequence((STT3DSprC *)puVar10,0xe,DAT_00806774,&DAT_007cbaa8,0x1d);
          if (iVar5 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_to_sat_cpp_007cbab8,0x158);
          }
          thunk_FUN_004ac610(puVar10,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar10,0xe,DAT_00802a38->field_00E4);
          thunk_FUN_00416240(this_00,*(undefined2 *)&this_00->field_0x289,
                             *(undefined2 *)&this_00->field_0x28d,
                             *(undefined2 *)&this_00->field_0x291);
          sVar9 = *(short *)&this_00->field_0x41;
          *(int *)&this_00->field_0x245 = (int)*(short *)(DAT_00806724 + 0x2c);
          *(undefined4 *)&this_00->field_0x231 = 0;
          if (sVar9 < 0) {
            iVar5 = (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                           (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar5 = (int)(short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                                (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x251 = iVar5;
          sVar9 = *(short *)&this_00->field_0x43;
          if (sVar9 < 0) {
            iVar5 = (short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                           (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar5 = (int)(short)((sVar9 / 0xc9 + (sVar9 >> 0xf)) -
                                (short)((longlong)(int)sVar9 * 0x28c1979 >> 0x3f));
          }
          *(int *)&this_00->field_0x255 = iVar5;
          STT3DSprC::SetCurFase((STT3DSprC *)puVar10,'\x0e',0);
        }
        else if (uVar8 == 2) {
          local_20 = *(undefined4 **)(param_1 + 0x14);
          puVar10 = local_20;
          puVar12 = (undefined4 *)&this_00->field_0x275;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
          local_8 = local_20[0x1d];
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x7c + (int)local_20));
          puVar10 = local_20;
          *(undefined4 *)&this_00->field_0x231 = *(undefined4 *)((int)local_20 + 0x26);
          *(undefined4 *)&this_00->field_0x235 = *(undefined4 *)((int)local_20 + 0x2a);
          *(undefined4 *)&this_00->field_0x239 = *(undefined4 *)((int)local_20 + 0x2e);
          *(undefined4 *)&this_00->field_0x23d = *(undefined4 *)((int)local_20 + 0x32);
          *(undefined4 *)&this_00->field_0x241 = *(undefined4 *)((int)local_20 + 0x36);
          *(undefined4 *)&this_00->field_0x245 = *(undefined4 *)((int)local_20 + 0x3a);
          *(undefined4 *)&this_00->field_0x249 = *(undefined4 *)((int)local_20 + 0x3e);
          *(undefined4 *)&this_00->field_0x24d = *(undefined4 *)((int)local_20 + 0x42);
          *(undefined4 *)&this_00->field_0x251 = *(undefined4 *)((int)local_20 + 0x46);
          *(undefined4 *)&this_00->field_0x255 = *(undefined4 *)((int)local_20 + 0x4a);
          this_00->field_0259 = *(undefined4 *)((int)local_20 + 0x4e);
          *(undefined4 *)&this_00->field_0x25d = *(undefined4 *)((int)local_20 + 0x52);
          *(undefined4 *)&this_00->field_0x261 = *(undefined4 *)((int)local_20 + 0x56);
          *(undefined4 *)&this_00->field_0x265 = *(undefined4 *)((int)local_20 + 0x5a);
          *(undefined4 *)&this_00->field_0x269 = *(undefined4 *)((int)local_20 + 0x5e);
          *(undefined4 *)&this_00->field_0x26d = *(undefined4 *)((int)local_20 + 0x62);
          *(undefined4 *)&this_00->field_0x271 = *(undefined4 *)((int)local_20 + 0x66);
          *(undefined2 *)&this_00->field_0x41 = *(undefined2 *)((int)local_20 + 0x6a);
          *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)(local_20 + 0x1b);
          *(undefined2 *)&this_00->field_0x45 = *(undefined2 *)((int)local_20 + 0x6e);
          local_3c = (LPVOID)Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_3c != (LPVOID)0x0) {
            iVar5 = 0;
            do {
              *(int **)(iVar5 + (int)local_3c) = DAT_00806774;
              iVar5 = iVar5 + 4;
            } while (iVar5 < 0x44);
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
            STT3DSprC::RestoreSpr((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,puVar10 + 0x1e)
            ;
            FUN_006ab060(&local_3c);
          }
        }
        iVar5 = *(int *)&this_00->field_0x289;
        sVar9 = (short)(iVar5 >> 0x1f);
        if (iVar5 < 0) {
          sVar9 = (((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) +
                  -1;
        }
        else {
          sVar9 = ((short)(iVar5 / 0xc9) + sVar9) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
        }
        iVar5 = *(int *)&this_00->field_0x28d;
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
        thunk_FUN_004ad310((int)&this_00->field_01D5);
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
    }
  }
  else if (uVar8 == 0x112) {
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
  }
  else if (uVar8 == 0x113) {
    (**(code **)this_00->field_01D5)();
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

