
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::GetMessage */

undefined4 __thiscall STJellyGunC::GetMessage(STJellyGunC *this,int param_1)

{
  char cVar1;
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
  int *piVar14;
  char *pcVar15;
  byte *pbVar16;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  STSprGameObjC *local_3c;
  undefined4 *local_38;
  int local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((this->field_0235 == CASE_4) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  local_3c = (STSprGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_3c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x2af,0,iVar6,&DAT_007a4ccc,
                               s_STJellyGunC__GetMessage_007cb7fc);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x2b0);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  STSprGameObjC::GetMessage(local_3c,param_1);
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 < 0x111) {
    if (uVar9 == 0x110) {
      if ((*(int *)&this_00->field_0x235 != 2) && (*(int *)&this_00->field_0x235 != 4)) {
        thunk_FUN_00582530(this_00);
        puVar11 = &this_00->field_01D5;
        *(undefined4 *)&this_00->field_0x241 = 0xff;
        *(undefined2 *)&this_00->field_0x245 = 0;
        *(undefined4 *)&this_00->field_0x252 = 0;
        *(undefined4 *)&this_00->field_0x235 = 2;
        STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
        STT3DSprC::StopShow((STT3DSprC *)puVar11,0xc);
        thunk_FUN_004ad5e0((int)puVar11);
        iVar6 = thunk_FUN_00584380((int *)this_00);
        if (iVar6 != 0) {
          thunk_FUN_00582580(this_00);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (uVar9 < 4) {
      if (uVar9 == 3) {
        uVar7 = thunk_FUN_004167a0((int)this_00);
        thunk_FUN_00495ff0(*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                           *(short *)&this_00->field_0x5f,
                           CONCAT31((int3)((uint)uVar7 >> 8),this_00->field_0x8e),(int)this_00);
        thunk_FUN_004ad310((int)&this_00->field_01D5);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (uVar9 == 0) {
        LifeGun((STJellyGunC *)this_00,unaff_EDI);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (uVar9 == 2) {
        local_38 = *(undefined4 **)(param_1 + 0x14);
        if ((uint)local_38[3] < 2) {
          *(undefined4 *)&this_00->field_0x235 = 4;
          *(undefined4 *)&this_00->field_0x23d = 0;
          *(undefined4 *)&this_00->field_0x241 = 0xff;
          *(undefined4 *)&this_00->field_0x231 = 0;
          puVar11 = *(undefined4 **)(param_1 + 0x14);
          puVar13 = (undefined4 *)&this_00->field_0x256;
          for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
          iVar6 = *(int *)&this_00->field_0x26a;
          sVar10 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            sVar10 = (((short)(iVar6 / 0xc9) + sVar10) -
                     (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            sVar10 = ((short)(iVar6 / 0xc9) + sVar10) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
            ;
          }
          iVar6 = *(int *)&this_00->field_0x26e;
          *(short *)&this_00->field_0x47 = sVar10;
          sVar10 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            sVar10 = (((short)(iVar6 / 0xc9) + sVar10) -
                     (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            sVar10 = ((short)(iVar6 / 0xc9) + sVar10) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)
            ;
          }
          iVar6 = *(int *)&this_00->field_0x272;
          *(short *)&this_00->field_0x49 = sVar10;
          sVar10 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            sVar10 = (((short)(iVar6 / 200) + sVar10) -
                     (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            sVar10 = ((short)(iVar6 / 200) + sVar10) - (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)
            ;
          }
          *(short *)&this_00->field_0x4b = sVar10;
          *(undefined4 *)&this_00->field_0x239 = 0xffffffff;
          *(undefined4 *)&this_00->field_0x24b = 1;
          *(undefined4 *)&this_00->field_0x247 = 0;
          thunk_FUN_00417a00(this_00,1);
          iVar6 = thunk_FUN_00417a20(this_00,*(short *)&this_00->field_0x47,
                                     *(short *)&this_00->field_0x49,*(short *)&this_00->field_0x4b,1
                                    );
          if (iVar6 == 0) {
            iVar6 = thunk_FUN_00417e70(this_00,8);
            if (iVar6 == 0) {
              iVar6 = thunk_FUN_00417ee0(this_00,0);
              if (iVar6 == 0) {
                puVar11 = &this_00->field_01D5;
                iVar6 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar11,0xe,DAT_0080676c,(byte *)s_jellygun_007cb3e0
                                   ,0x1d);
                if (iVar6 != 0) {
                  RaiseInternalException
                            (-1,DAT_007ed77c,s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1f9);
                }
                iVar6 = *(int *)((int)&this_00->field_0259 + 1);
                if (7 < iVar6) {
                  iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1fe,0,0,
                                             &DAT_007a4ccc,
                                             s_STJellyGunC__Invalid_player_numb_007cb818);
                  if (iVar6 != 0) {
                    pcVar2 = (code *)swi(3);
                    uVar7 = (*pcVar2)();
                    return uVar7;
                  }
                  *(undefined4 *)((int)&this_00->field_0259 + 1) = 0;
                  iVar6 = 0;
                }
                piVar14 = DAT_0080676c;
                uVar9 = 0xffffffff;
                pcVar15 = s_jellygun0_007cb3ec;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar1 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar1 != '\0');
                (&DAT_007cb3ea)[~uVar9] = (char)iVar6 + '0';
                iVar6 = STT3DSprC::LoadSequence
                                  ((STT3DSprC *)puVar11,0xc,piVar14,(byte *)s_jellygun0_007cb3ec,
                                   0x1d);
                if (iVar6 != 0) {
                  RaiseInternalException
                            (-1,DAT_007ed77c,s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x204);
                }
                thunk_FUN_004ac610(puVar11,'\f');
                STT3DSprC::StartShow((STT3DSprC *)puVar11,0xc,DAT_00802a38->field_00E4);
                thunk_FUN_004ac610(puVar11,'\x0e');
                STT3DSprC::StartShow((STT3DSprC *)puVar11,0xe,DAT_00802a38->field_00E4);
                thunk_FUN_00416240(this_00,*(undefined2 *)&this_00->field_0x26a,
                                   *(undefined2 *)&this_00->field_0x26e,
                                   *(undefined2 *)&this_00->field_0x272);
                thunk_FUN_004ad3c0(puVar11,(float)*(int *)&this_00->field_0x26a * _DAT_007904f8 *
                                           _DAT_007904f0,
                                   (float)*(int *)&this_00->field_0x26e * _DAT_007904f8 *
                                   _DAT_007904f0,
                                   (float)*(int *)&this_00->field_0x272 * _DAT_007904f8 *
                                   _DAT_007904f0);
                *(undefined4 *)&this_00->field_0x235 = 0;
                thunk_FUN_005844e0(this_00,*(int *)&this_00->field_0x26a,
                                   *(int *)&this_00->field_0x26e,0x497);
              }
              else {
                iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,499,0,0,
                                           &DAT_007a4ccc,s_STJellyGunC__Phase_Count_err_007cb844);
                if (iVar6 != 0) {
                  pcVar2 = (code *)swi(3);
                  uVar7 = (*pcVar2)();
                  return uVar7;
                }
                thunk_FUN_00582580(this_00);
              }
            }
            else {
              iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1ec,0,0,
                                         &DAT_007a4ccc,s_STJellyGunC__GetMessage_Phase_Co_007cb868);
              if (iVar6 != 0) {
                pcVar2 = (code *)swi(3);
                uVar7 = (*pcVar2)();
                return uVar7;
              }
              thunk_FUN_00582580(this_00);
            }
          }
          else {
            iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1e5,0,0,
                                       &DAT_007a4ccc,s_STJellyGunC__Cell_is_busy_007cb898);
            if (iVar6 != 0) {
              pcVar2 = (code *)swi(3);
              uVar7 = (*pcVar2)();
              return uVar7;
            }
            thunk_FUN_00582580(this_00);
          }
        }
        else if (local_38[3] == 2) {
          puVar11 = local_38;
          puVar13 = (undefined4 *)&this_00->field_0x256;
          for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
          local_8 = *(uint *)((int)local_38 + 0x67);
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x6f + (int)local_38));
          puVar11 = local_38;
          *(undefined4 *)&this_00->field_0x247 = *(undefined4 *)((int)local_38 + 0x4a);
          *(undefined4 *)&this_00->field_0x24b = *(undefined4 *)((int)local_38 + 0x4e);
          *(undefined4 *)&this_00->field_0x235 = *(undefined4 *)((int)local_38 + 0x42);
          *(undefined4 *)&this_00->field_0x23d = *(undefined4 *)((int)local_38 + 0x46);
          *(undefined4 *)&this_00->field_0x241 = *(undefined4 *)((int)local_38 + 0x52);
          *(undefined2 *)&this_00->field_0x245 = *(undefined2 *)((int)local_38 + 0x56);
          *(undefined4 *)&this_00->field_0x239 = *(undefined4 *)((int)local_38 + 0x3e);
          *(undefined4 *)&this_00->field_0x231 = local_38[0x16];
          this_00->field_0x24f = *(undefined1 *)(local_38 + 0x18);
          this_00->field_0x250 = *(undefined1 *)((int)local_38 + 0x61);
          this_00->field_0x251 = *(undefined1 *)((int)local_38 + 0x62);
          *(undefined4 *)&this_00->field_0x252 = *(undefined4 *)((int)local_38 + 99);
          local_34[0] = Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_34[0] != 0) {
            iVar6 = 0;
            do {
              piVar14 = DAT_00806774;
              if (((iVar6 == 8) || (iVar6 == 10)) || (piVar14 = DAT_0080676c, iVar6 != 9)) {
                *(int **)(local_34[0] + iVar6 * 4) = piVar14;
              }
              else {
                *(undefined4 *)(local_34[0] + 0x24) = DAT_00806764;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x11);
            local_34[1] = 0;
            local_34[2] = 0;
            local_34[3] = DAT_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)&this_00->field_01D5,local_34,
                       (undefined4 *)((int)puVar11 + 0x6b));
            FUN_006ab060(local_34);
            DumpClassC::WritePtr
                      (*(short *)&this_00->field_0x5b,*(short *)&this_00->field_0x5d,
                       *(short *)&this_00->field_0x5f,1,(int)this_00);
          }
        }
        if ((*(int *)&this_00->field_0x235 != 4) && (*(int *)&this_00->field_0x235 != 2)) {
          uVar7 = *(undefined4 *)&this_00->field_0x8;
          puVar11 = local_5c;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          local_4c = 0x125;
          local_48 = uVar7;
          FUN_006e6080(this_00,4,*(undefined4 *)&this_00->field_0x286,local_5c);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (uVar9 == 0x10f) {
      local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)&this_00->field_01D5,&local_8);
      local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x6f + local_8);
      if (((local_14 != (byte *)0x0) && (local_18 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        puVar11 = (undefined4 *)&this_00->field_0x256;
        pbVar12 = local_c;
        for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pbVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          pbVar12 = pbVar12 + 4;
        }
        *(undefined2 *)pbVar12 = *(undefined2 *)puVar11;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        uVar3 = this_00->field_0x236;
        uVar4 = this_00->field_0x237;
        uVar5 = this_00->field_0x238;
        local_c[0x42] = this_00->field_0x235;
        local_c[0x43] = uVar3;
        local_c[0x44] = uVar4;
        local_c[0x45] = uVar5;
        uVar3 = this_00->field_0x23e;
        uVar4 = this_00->field_0x23f;
        uVar5 = this_00->field_0x240;
        local_c[0x46] = this_00->field_0x23d;
        local_c[0x47] = uVar3;
        local_c[0x48] = uVar4;
        local_c[0x49] = uVar5;
        uVar3 = this_00->field_0x242;
        uVar4 = this_00->field_0x243;
        uVar5 = this_00->field_0x244;
        local_c[0x52] = this_00->field_0x241;
        local_c[0x53] = uVar3;
        local_c[0x54] = uVar4;
        local_c[0x55] = uVar5;
        uVar3 = this_00->field_0x246;
        local_c[0x56] = this_00->field_0x245;
        local_c[0x57] = uVar3;
        uVar3 = this_00->field_0x248;
        uVar4 = this_00->field_0x249;
        uVar5 = this_00->field_0x24a;
        local_c[0x4a] = this_00->field_0x247;
        local_c[0x4b] = uVar3;
        local_c[0x4c] = uVar4;
        local_c[0x4d] = uVar5;
        uVar3 = this_00->field_0x24c;
        uVar4 = this_00->field_0x24d;
        uVar5 = this_00->field_0x24e;
        local_c[0x4e] = this_00->field_0x24b;
        local_c[0x4f] = uVar3;
        local_c[0x50] = uVar4;
        local_c[0x51] = uVar5;
        uVar3 = this_00->field_0x23a;
        uVar4 = this_00->field_0x23b;
        uVar5 = this_00->field_0x23c;
        local_c[0x3e] = this_00->field_0x239;
        local_c[0x3f] = uVar3;
        local_c[0x40] = uVar4;
        local_c[0x41] = uVar5;
        uVar3 = this_00->field_0x232;
        uVar4 = this_00->field_0x233;
        uVar5 = this_00->field_0x234;
        local_c[0x58] = this_00->field_0x231;
        local_c[0x59] = uVar3;
        local_c[0x5a] = uVar4;
        local_c[0x5b] = uVar5;
        local_c[0x5c] = 0;
        local_c[0x5d] = 0;
        local_c[0x5e] = 0;
        local_c[0x5f] = 0;
        local_c[0x60] = this_00->field_0x24f;
        local_c[0x61] = this_00->field_0x250;
        local_c[0x62] = this_00->field_0x251;
        uVar3 = this_00->field_0x253;
        uVar4 = this_00->field_0x254;
        uVar5 = this_00->field_0x255;
        local_c[99] = this_00->field_0x252;
        local_c[100] = uVar3;
        local_c[0x65] = uVar4;
        local_c[0x66] = uVar5;
        *(uint *)(local_c + 0x67) = local_8;
        pbVar12 = local_14;
        pbVar16 = local_c + 0x6b;
        for (uVar9 = local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar9 = local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar16 = pbVar16 + 1;
        }
        *(uint *)(local_c + local_8 + 0x6b) = local_10;
        pbVar12 = local_18;
        pbVar16 = local_c + local_8 + 0x6f;
        for (uVar9 = local_10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar16 = *(undefined4 *)pbVar12;
          pbVar12 = pbVar12 + 4;
          pbVar16 = pbVar16 + 4;
        }
        for (uVar9 = local_10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          pbVar16 = pbVar16 + 1;
        }
        STPlaySystemC::SaveObjData
                  (DAT_00802a38,this_00->field_0018,local_c,local_10 + 0x6f + local_8);
        FUN_006ab060(&local_14);
        FUN_006ab060(&local_18);
        FUN_006ab060(&local_c);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
    }
  }
  else if (uVar9 == 0x112) {
    thunk_FUN_004ad5e0((int)&this_00->field_01D5);
  }
  else {
    if (uVar9 == 0x113) {
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
    if (((uVar9 == 0x128) && (*(int *)&this_00->field_0x235 != 2)) &&
       (*(int *)&this_00->field_0x235 != 4)) {
      thunk_FUN_00582530(this_00);
      puVar11 = &this_00->field_01D5;
      *(undefined4 *)&this_00->field_0x241 = 0xff;
      *(undefined2 *)&this_00->field_0x245 = 0;
      *(undefined4 *)&this_00->field_0x252 = 0;
      *(undefined4 *)&this_00->field_0x235 = 4;
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xe);
      STT3DSprC::StopShow((STT3DSprC *)puVar11,0xc);
      thunk_FUN_004ad5e0((int)puVar11);
      thunk_FUN_004ad430((int)puVar11);
      thunk_FUN_00582580(this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

