
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::GetMessage */

undefined4 __thiscall STSharkC::GetMessage(STSharkC *this,int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  STSprGameObjC *this_00;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  byte *pbVar12;
  int *unaff_EDI;
  undefined4 *puVar13;
  byte *pbVar14;
  InternalExceptionFrame local_80;
  LPVOID local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  STSprGameObjC *local_20;
  undefined4 *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((this->field_0257 == 8) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = (STSprGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x15e,0,iVar6,&DAT_007a4ccc,
                               s_STSharkC__GetMessage_007cbb34);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Igor_To_shark_cpp_007cbb7c,0x15f);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  STSprGameObjC::GetMessage(local_20,param_1);
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 < 0x111) {
    if (uVar9 == 0x110) {
      if (*(int *)&this_00->field_0x257 == 4) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar11 = &this_00->field_01D5;
      *(undefined4 *)&this_00->field_0x23d = 0;
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
      thunk_FUN_004ad5e0((int)puVar11);
      STT3DSprC::LoadSequence((STT3DSprC *)puVar11,8,DAT_00806764,s_expshark_007cbb28,0x1d);
      STT3DSprC::StartShow((STT3DSprC *)puVar11,8,DAT_00802a38->field_00E4);
      *(undefined4 *)&this_00->field_0x257 = 4;
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (3 < uVar9) {
      if (uVar9 != 0x10f) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x66 + local_8);
      if (local_18 == (byte *)0x0) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_14 == (byte *)0x0) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      if (local_c == (byte *)0x0) {
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      puVar11 = (undefined4 *)((int)&this_00->field_0259 + 2);
      pbVar12 = local_c;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pbVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        pbVar12 = pbVar12 + 4;
      }
      local_c[0xc] = 2;
      local_c[0xd] = 0;
      local_c[0xe] = 0;
      local_c[0xf] = 0;
      uVar3 = this_00->field_0x232;
      local_c[0x34] = this_00->field_0x231;
      local_c[0x35] = uVar3;
      uVar3 = this_00->field_0x234;
      local_c[0x36] = this_00->field_0x233;
      local_c[0x37] = uVar3;
      uVar3 = this_00->field_0x236;
      local_c[0x38] = this_00->field_0x235;
      local_c[0x39] = uVar3;
      uVar3 = this_00->field_0x238;
      local_c[0x3a] = this_00->field_0x237;
      local_c[0x3b] = uVar3;
      uVar3 = this_00->field_0x24a;
      uVar4 = this_00->field_0x24b;
      uVar5 = this_00->field_0x24c;
      local_c[0x3c] = this_00->field_0x249;
      local_c[0x3d] = uVar3;
      local_c[0x3e] = uVar4;
      local_c[0x3f] = uVar5;
      uVar3 = this_00->field_0x24e;
      local_c[0x40] = this_00->field_0x24d;
      local_c[0x41] = uVar3;
      uVar3 = this_00->field_0x23e;
      uVar4 = this_00->field_0x23f;
      uVar5 = this_00->field_0x240;
      local_c[0x42] = this_00->field_0x23d;
      local_c[0x43] = uVar3;
      local_c[0x44] = uVar4;
      local_c[0x45] = uVar5;
      uVar3 = this_00->field_0x250;
      uVar4 = this_00->field_0x251;
      uVar5 = this_00->field_0x252;
      local_c[0x46] = this_00->field_0x24f;
      local_c[0x47] = uVar3;
      local_c[0x48] = uVar4;
      local_c[0x49] = uVar5;
      uVar3 = this_00->field_0x254;
      uVar4 = this_00->field_0x255;
      uVar5 = this_00->field_0x256;
      local_c[0x4a] = this_00->field_0x253;
      local_c[0x4b] = uVar3;
      local_c[0x4c] = uVar4;
      local_c[0x4d] = uVar5;
      *(undefined4 *)(local_c + 0x4e) = *(undefined4 *)&this_00->field_0x257;
      uVar3 = this_00->field_0x242;
      uVar4 = this_00->field_0x243;
      uVar5 = this_00->field_0x244;
      local_c[0x52] = this_00->field_0x241;
      local_c[0x53] = uVar3;
      local_c[0x54] = uVar4;
      local_c[0x55] = uVar5;
      uVar3 = this_00->field_0x246;
      uVar4 = this_00->field_0x247;
      uVar5 = this_00->field_0x248;
      local_c[0x56] = this_00->field_0x245;
      local_c[0x57] = uVar3;
      local_c[0x58] = uVar4;
      local_c[0x59] = uVar5;
      local_c[0x5a] = 0;
      local_c[0x5b] = 0;
      local_c[0x5c] = 0;
      local_c[0x5d] = 0;
      *(uint *)(local_c + 0x5e) = local_8;
      pbVar12 = local_18;
      pbVar14 = local_c + 0x62;
      for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar14 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar14 = pbVar14 + 1;
      }
      *(uint *)(local_c + local_8 + 0x62) = local_10;
      pbVar12 = local_14;
      pbVar14 = local_c + local_8 + 0x66;
      for (uVar9 = local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar9 = local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar14 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar14 = pbVar14 + 1;
      }
      STPlaySystemC::SaveObjData(DAT_00802a38,this_00->field_0018,local_c,local_10 + 0x66 + local_8)
      ;
      FUN_006ab060(&local_18);
      FUN_006ab060(&local_14);
      FUN_006ab060(&local_c);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (uVar9 == 3) {
      uVar7 = thunk_FUN_004167a0((int)this_00);
      thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                         *(short *)&this_00->field_0x5f,
                         CONCAT31((int3)((uint)uVar7 >> 8),this_00->field_0x8e),(int)this_00);
      thunk_FUN_0058d080(this_00->field_0018);
      thunk_FUN_004ad310((int)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (uVar9 == 0) {
      LifeShark((STSharkC *)this_00,unaff_EDI);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    if (uVar9 != 2) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    *(undefined4 *)&this_00->field_0x257 = 8;
    *(undefined4 *)&this_00->field_0x23d = 0;
    *(undefined4 *)&this_00->field_0x241 = 0;
    local_1c = *(undefined4 **)(param_1 + 0x14);
    if ((uint)local_1c[3] < 2) {
      *(undefined4 *)&this_00->field_0x24f = 0;
      *(undefined4 *)&this_00->field_0x253 = 0;
      *(undefined4 *)&this_00->field_0x249 = 0xff;
      iVar6 = thunk_FUN_0058ff70((int)this_00);
      *(int *)&this_00->field_0x24f = iVar6;
      puVar11 = *(undefined4 **)(param_1 + 0x14);
      puVar13 = (undefined4 *)((int)&this_00->field_0259 + 2);
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      thunk_FUN_0058eeb0((int)this_00);
      *(undefined2 *)&this_00->field_0x5b = 0xffff;
      *(undefined2 *)&this_00->field_0x5d = 0xffff;
      *(undefined2 *)&this_00->field_0x5f = 0xffff;
      thunk_FUN_00417a00(this_00,1);
      iVar6 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x26f,
                                 *(short *)&this_00->field_0x273,*(short *)&this_00->field_0x277,1);
      if (iVar6 == 0) {
        iVar6 = thunk_FUN_00417e70(this_00,8);
        if (iVar6 == 0) {
          puVar11 = &this_00->field_01D5;
          iVar6 = STT3DSprC::LoadSequence
                            ((STT3DSprC *)puVar11,0xe,DAT_0080676c,s_shark1_007cbb20,0x1d);
          if (iVar6 != 0) {
            RaiseInternalException
                      (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_To_shark_cpp_007cbb7c,0x9f)
            ;
          }
          thunk_FUN_004ac610(puVar11,'\x0e');
          STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,DAT_00802a38->field_00E4);
          if (local_1c[3] == 0) {
            thunk_FUN_004ad3c0(puVar11,(float)*(int *)&this_00->field_0x26f * _DAT_007904f8 +
                                       _DAT_007904f4,
                               (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                               (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500)
            ;
            iVar6 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x27b);
            if (iVar6 == 0) {
LAB_0058dc72:
              *(int *)&this_00->field_0x245 = (int)*(short *)(DAT_00806724 + 0x2c);
              *(undefined2 *)&this_00->field_0x231 = *(undefined2 *)&this_00->field_0x47;
              *(undefined2 *)&this_00->field_0x233 = *(undefined2 *)&this_00->field_0x49;
              *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)&this_00->field_0x4b;
              *(undefined4 *)&this_00->field_0x257 = 0;
            }
            else {
              iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0xaa,0,0,
                                         &DAT_007a4ccc,s_STSharkC__GetMessage_Dir_Object_e_007cbb50)
              ;
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                uVar7 = (*pcVar2)();
                return uVar7;
              }
              thunk_FUN_0058efe0(this_00);
            }
          }
          else {
            local_1c = *(undefined4 **)&this_00->field_0x26f;
            *(int *)&this_00->field_0x241 = (int)*(short *)(DAT_00806724 + 0x23);
            if (local_1c == (undefined4 *)0x0) {
              *(undefined4 *)&this_00->field_0x27b = 0;
            }
            else if (*(int *)&this_00->field_0x273 == 0) {
              *(undefined4 *)&this_00->field_0x27b = 0x10e;
            }
            else if (local_1c == (undefined4 *)(SHORT_007fb240 + -1)) {
              *(undefined4 *)&this_00->field_0x27b = 0xb4;
            }
            else if (*(int *)&this_00->field_0x273 == SHORT_007fb242 + -1) {
              *(undefined4 *)&this_00->field_0x27b = 0x5a;
            }
            thunk_FUN_004ad3c0(puVar11,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                               (float)*(int *)&this_00->field_0x273 * _DAT_007904f8 + _DAT_007904f4,
                               (float)*(int *)&this_00->field_0x277 * _DAT_00790504 + _DAT_00790500)
            ;
            iVar6 = thunk_FUN_00417ee0(this_00,*(short *)&this_00->field_0x27b);
            if (iVar6 == 0) goto LAB_0058dc72;
            iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,200,0,0,
                                       &DAT_007a4ccc,s_STSharkC__GetMessage_Dir_Object_e_007cbb50);
            if (iVar6 != 0) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return uVar7;
            }
            thunk_FUN_0058efe0(this_00);
          }
        }
        else {
          iVar6 = ReportDebugMessage(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x99,0,0,&DAT_007a4ccc
                                     ,s_STSharkC__GetMessage_Phase_Count_007cbba0);
          if (iVar6 != 0) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return uVar7;
          }
          thunk_FUN_0058efe0(this_00);
        }
      }
      else {
        thunk_FUN_0058efe0(this_00);
      }
    }
    else if (local_1c[3] == 2) {
      puVar11 = local_1c;
      puVar13 = (undefined4 *)((int)&this_00->field_0259 + 2);
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      local_8 = *(uint *)((int)local_1c + 0x5e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar11 = local_1c;
      *(undefined2 *)&this_00->field_0x231 = *(undefined2 *)(local_1c + 0xd);
      *(undefined2 *)&this_00->field_0x233 = *(undefined2 *)((int)local_1c + 0x36);
      *(undefined2 *)&this_00->field_0x235 = *(undefined2 *)(local_1c + 0xe);
      *(undefined2 *)&this_00->field_0x237 = *(undefined2 *)((int)local_1c + 0x3a);
      *(undefined4 *)&this_00->field_0x249 = local_1c[0xf];
      *(undefined2 *)&this_00->field_0x24d = *(undefined2 *)(local_1c + 0x10);
      *(undefined4 *)&this_00->field_0x23d = *(undefined4 *)((int)local_1c + 0x42);
      *(undefined4 *)&this_00->field_0x24f = *(undefined4 *)((int)local_1c + 0x46);
      *(undefined4 *)&this_00->field_0x253 = *(undefined4 *)((int)local_1c + 0x4a);
      *(undefined4 *)&this_00->field_0x257 = *(undefined4 *)((int)local_1c + 0x4e);
      *(undefined4 *)&this_00->field_0x241 = *(undefined4 *)((int)local_1c + 0x52);
      *(undefined4 *)&this_00->field_0x245 = *(undefined4 *)((int)local_1c + 0x56);
      local_3c = (LPVOID)Library::DKW::LIB::FUN_006aac70(0x44);
      if (local_3c != (LPVOID)0x0) {
        iVar6 = 0;
        do {
          *(int **)(iVar6 + (int)local_3c) = DAT_0080676c;
          iVar6 = iVar6 + 4;
        } while (iVar6 < 0x44);
        if (((*(int *)&this_00->field_0x241 < 1) || (DAT_00806724 == 0)) || (DAT_00806724 == -0x30))
        {
          local_38 = 0;
        }
        else {
          local_38 = *(undefined4 *)(DAT_00806724 + 0x2c + *(int *)&this_00->field_0x241 * 4);
        }
        local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = DAT_008073cc;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)&this_00->field_01D5,(int *)&local_3c,
                   (undefined4 *)((int)puVar11 + 0x62));
        FUN_006ab060(&local_3c);
        DumpClassC::WritePtr
                  (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                   *(short *)&this_00->field_0x5f,1,(int)this_00);
      }
    }
    if (*(int *)&this_00->field_0x257 == 8) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    iVar6 = thunk_FUN_0058cfe0((int)this_00);
    if (iVar6 != 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
LAB_0058e0f9:
    thunk_FUN_0058efe0(this_00);
  }
  else {
    switch(uVar9) {
    case 0x112:
      thunk_FUN_004ad5e0((int)&this_00->field_01D5);
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x113:
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_80.previous;
      return 0;
    case 0x127:
      puVar1 = &this_00->field_0x231;
      local_1c = (undefined4 *)(int)(short)((short)*(undefined4 *)(param_1 + 0x18) * 0xc9 + 100);
      iVar6 = thunk_FUN_0058d160((short)*(undefined4 *)&this_00->field_0x27f,
                                 (short)*(undefined4 *)&this_00->field_0x283,
                                 (short)*(undefined4 *)&this_00->field_0x287,
                                 (short)*(undefined4 *)&this_00->field_0x28b,(int)this_00,
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x14) * 0xc9 + 100),
                                 (int)local_1c,
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10)
                                              * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10)
                                              * 0xc9 + 100),(undefined2 *)puVar1,
                                 (undefined2 *)&this_00->field_0x233,(short *)&this_00->field_0x235)
      ;
      if (iVar6 != 0) {
        sVar10 = *(short *)puVar1;
        if (sVar10 < 0) {
          sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                   (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                   (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
        }
        *(short *)puVar1 = sVar10;
        sVar10 = *(short *)&this_00->field_0x233;
        if (sVar10 < 0) {
          sVar10 = ((sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                   (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar10 = (sVar10 / 0xc9 + (sVar10 >> 0xf)) -
                   (short)((longlong)(int)sVar10 * 0x28c1979 >> 0x3f);
        }
        *(short *)&this_00->field_0x233 = sVar10;
        sVar10 = *(short *)&this_00->field_0x235;
        if (sVar10 < 0) {
          sVar10 = ((sVar10 / 200 + (sVar10 >> 0xf)) -
                   (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar10 = (sVar10 / 200 + (sVar10 >> 0xf)) -
                   (short)((longlong)(int)sVar10 * 0x51eb851f >> 0x3f);
        }
        *(short *)&this_00->field_0x235 = sVar10;
        *(undefined4 *)&this_00->field_0x257 = 5;
        g_currentExceptionFrame = local_80.previous;
        return 0;
      }
      break;
    case 0x128:
      uVar9 = thunk_FUN_004ad650((int)&this_00->field_01D5);
      FUN_006eab60((void *)this_00->field_0211,uVar9);
      goto LAB_0058e0f9;
    }
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

