
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jelly.cpp
   STJellyGunC::GetMessage */

undefined4 __thiscall STJellyGunC::GetMessage(STJellyGunC *this,int param_1)

{
  STT3DSprC *pSVar1;
  char cVar2;
  code *pcVar3;
  STSprGameObjC *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  STSprGameObjC *pSVar10;
  byte *pbVar11;
  int *unaff_EDI;
  int *piVar12;
  char *pcVar13;
  byte *pbVar14;
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
  
  if ((*(int *)(this + 0x235) == 4) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  local_3c = (STSprGameObjC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_3c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x2af,0,iVar4,&DAT_007a4ccc,
                               s_STJellyGunC__GetMessage_007cb7fc);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x2b0);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  STSprGameObjC::GetMessage(local_3c,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0x111) {
    if (uVar7 == 0x110) {
      if ((*(int *)(this_00 + 0x235) != 2) && (*(int *)(this_00 + 0x235) != 4)) {
        thunk_FUN_00582530(this_00);
        pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
        *(undefined4 *)(this_00 + 0x241) = 0xff;
        *(undefined2 *)(this_00 + 0x245) = 0;
        *(undefined4 *)(this_00 + 0x252) = 0;
        *(undefined4 *)(this_00 + 0x235) = 2;
        STT3DSprC::StopShow(pSVar1,0xe);
        STT3DSprC::StopShow(pSVar1,0xc);
        thunk_FUN_004ad5e0((int)pSVar1);
        iVar4 = thunk_FUN_00584380((int *)this_00);
        if (iVar4 != 0) {
          thunk_FUN_00582580(this_00);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (uVar7 < 4) {
      if (uVar7 == 3) {
        uVar5 = thunk_FUN_004167a0((int)this_00);
        thunk_FUN_00495ff0(*(short *)(this_00 + 0x5b),*(short *)(this_00 + 0x5d),
                           *(short *)(this_00 + 0x5f),
                           CONCAT31((int3)((uint)uVar5 >> 8),this_00[0x8e]),(int)this_00);
        thunk_FUN_004ad310((int)(this_00 + 0x1d5));
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (uVar7 == 0) {
        LifeGun((STJellyGunC *)this_00,unaff_EDI);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
      if (uVar7 == 2) {
        local_38 = *(undefined4 **)(param_1 + 0x14);
        if ((uint)local_38[3] < 2) {
          *(undefined4 *)(this_00 + 0x235) = 4;
          *(undefined4 *)(this_00 + 0x23d) = 0;
          *(undefined4 *)(this_00 + 0x241) = 0xff;
          *(undefined4 *)(this_00 + 0x231) = 0;
          puVar9 = *(undefined4 **)(param_1 + 0x14);
          pSVar10 = this_00 + 0x256;
          for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pSVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            pSVar10 = pSVar10 + 4;
          }
          *(undefined2 *)pSVar10 = *(undefined2 *)puVar9;
          iVar4 = *(int *)(this_00 + 0x26a);
          sVar8 = (short)(iVar4 >> 0x1f);
          if (iVar4 < 0) {
            sVar8 = (((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
          }
          iVar4 = *(int *)(this_00 + 0x26e);
          *(short *)(this_00 + 0x47) = sVar8;
          sVar8 = (short)(iVar4 >> 0x1f);
          if (iVar4 < 0) {
            sVar8 = (((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar4 / 0xc9) + sVar8) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
          }
          iVar4 = *(int *)(this_00 + 0x272);
          *(short *)(this_00 + 0x49) = sVar8;
          sVar8 = (short)(iVar4 >> 0x1f);
          if (iVar4 < 0) {
            sVar8 = (((short)(iVar4 / 200) + sVar8) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f))
                    + -1;
          }
          else {
            sVar8 = ((short)(iVar4 / 200) + sVar8) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f);
          }
          *(short *)(this_00 + 0x4b) = sVar8;
          *(undefined4 *)(this_00 + 0x239) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x24b) = 1;
          *(undefined4 *)(this_00 + 0x247) = 0;
          thunk_FUN_00417a00(this_00,1);
          iVar4 = thunk_FUN_00417a20(this_00,*(short *)(this_00 + 0x47),*(short *)(this_00 + 0x49),
                                     *(short *)(this_00 + 0x4b),1);
          if (iVar4 == 0) {
            iVar4 = thunk_FUN_00417e70(this_00,8);
            if (iVar4 == 0) {
              iVar4 = thunk_FUN_00417ee0(this_00,0);
              if (iVar4 == 0) {
                pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
                iVar4 = STT3DSprC::LoadSequence
                                  (pSVar1,0xe,DAT_0080676c,(byte *)s_jellygun_007cb3e0,0x1d);
                if (iVar4 != 0) {
                  RaiseInternalException
                            (-1,DAT_007ed77c,s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1f9);
                }
                iVar4 = *(int *)(this_00 + 0x25a);
                if (7 < iVar4) {
                  iVar4 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1fe,0,0,
                                             &DAT_007a4ccc,
                                             s_STJellyGunC__Invalid_player_numb_007cb818);
                  if (iVar4 != 0) {
                    pcVar3 = (code *)swi(3);
                    uVar5 = (*pcVar3)();
                    return uVar5;
                  }
                  *(undefined4 *)(this_00 + 0x25a) = 0;
                  iVar4 = 0;
                }
                piVar12 = DAT_0080676c;
                uVar7 = 0xffffffff;
                pcVar13 = s_jellygun0_007cb3ec;
                do {
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  cVar2 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                (&DAT_007cb3ea)[~uVar7] = (char)iVar4 + '0';
                iVar4 = STT3DSprC::LoadSequence
                                  (pSVar1,0xc,piVar12,(byte *)s_jellygun0_007cb3ec,0x1d);
                if (iVar4 != 0) {
                  RaiseInternalException
                            (-1,DAT_007ed77c,s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x204);
                }
                thunk_FUN_004ac610(pSVar1,'\f');
                STT3DSprC::StartShow(pSVar1,0xc,*(undefined4 *)(DAT_00802a38 + 0xe4));
                thunk_FUN_004ac610(pSVar1,'\x0e');
                STT3DSprC::StartShow(pSVar1,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
                thunk_FUN_00416240(this_00,*(undefined2 *)(this_00 + 0x26a),
                                   *(undefined2 *)(this_00 + 0x26e),*(undefined2 *)(this_00 + 0x272)
                                  );
                thunk_FUN_004ad3c0(pSVar1,(float)*(int *)(this_00 + 0x26a) * _DAT_007904f8 *
                                          _DAT_007904f0,
                                   (float)*(int *)(this_00 + 0x26e) * _DAT_007904f8 * _DAT_007904f0,
                                   (float)*(int *)(this_00 + 0x272) * _DAT_007904f8 * _DAT_007904f0)
                ;
                *(undefined4 *)(this_00 + 0x235) = 0;
                thunk_FUN_005844e0(this_00,*(int *)(this_00 + 0x26a),*(int *)(this_00 + 0x26e),0x497
                                  );
              }
              else {
                iVar4 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,499,0,0,
                                           &DAT_007a4ccc,s_STJellyGunC__Phase_Count_err_007cb844);
                if (iVar4 != 0) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return uVar5;
                }
                thunk_FUN_00582580(this_00);
              }
            }
            else {
              iVar4 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1ec,0,0,
                                         &DAT_007a4ccc,s_STJellyGunC__GetMessage_Phase_Co_007cb868);
              if (iVar4 != 0) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return uVar5;
              }
              thunk_FUN_00582580(this_00);
            }
          }
          else {
            iVar4 = ReportDebugMessage(s_E____titans_Igor_to_jelly_cpp_007cb7b0,0x1e5,0,0,
                                       &DAT_007a4ccc,s_STJellyGunC__Cell_is_busy_007cb898);
            if (iVar4 != 0) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            thunk_FUN_00582580(this_00);
          }
        }
        else if (local_38[3] == 2) {
          puVar9 = local_38;
          pSVar10 = this_00 + 0x256;
          for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pSVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            pSVar10 = pSVar10 + 4;
          }
          *(undefined2 *)pSVar10 = *(undefined2 *)puVar9;
          local_8 = *(uint *)((int)local_38 + 0x67);
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x6f + (int)local_38));
          puVar9 = local_38;
          *(undefined4 *)(this_00 + 0x247) = *(undefined4 *)((int)local_38 + 0x4a);
          *(undefined4 *)(this_00 + 0x24b) = *(undefined4 *)((int)local_38 + 0x4e);
          *(undefined4 *)(this_00 + 0x235) = *(undefined4 *)((int)local_38 + 0x42);
          *(undefined4 *)(this_00 + 0x23d) = *(undefined4 *)((int)local_38 + 0x46);
          *(undefined4 *)(this_00 + 0x241) = *(undefined4 *)((int)local_38 + 0x52);
          *(undefined2 *)(this_00 + 0x245) = *(undefined2 *)((int)local_38 + 0x56);
          *(undefined4 *)(this_00 + 0x239) = *(undefined4 *)((int)local_38 + 0x3e);
          *(undefined4 *)(this_00 + 0x231) = local_38[0x16];
          this_00[0x24f] = *(STSprGameObjC *)(local_38 + 0x18);
          this_00[0x250] = *(STSprGameObjC *)((int)local_38 + 0x61);
          this_00[0x251] = *(STSprGameObjC *)((int)local_38 + 0x62);
          *(undefined4 *)(this_00 + 0x252) = *(undefined4 *)((int)local_38 + 99);
          local_34[0] = Library::DKW::LIB::FUN_006aac70(0x44);
          if (local_34[0] != 0) {
            iVar4 = 0;
            do {
              piVar12 = DAT_00806774;
              if (((iVar4 == 8) || (iVar4 == 10)) || (piVar12 = DAT_0080676c, iVar4 != 9)) {
                *(int **)(local_34[0] + iVar4 * 4) = piVar12;
              }
              else {
                *(undefined4 *)(local_34[0] + 0x24) = DAT_00806764;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 0x11);
            local_34[1] = 0;
            local_34[2] = 0;
            local_34[3] = DAT_008073cc;
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
            STT3DSprC::RestoreSpr
                      ((STT3DSprC *)(this_00 + 0x1d5),local_34,(undefined4 *)((int)puVar9 + 0x6b));
            FUN_006ab060(local_34);
            DumpClassC::WritePtr
                      (*(short *)(this_00 + 0x5b),*(short *)(this_00 + 0x5d),
                       *(short *)(this_00 + 0x5f),1,(int)this_00);
          }
        }
        if ((*(int *)(this_00 + 0x235) != 4) && (*(int *)(this_00 + 0x235) != 2)) {
          uVar5 = *(undefined4 *)(this_00 + 8);
          puVar9 = local_5c;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          local_4c = 0x125;
          local_48 = uVar5;
          FUN_006e6080(this_00,4,*(undefined4 *)(this_00 + 0x286),local_5c);
          g_currentExceptionFrame = local_a0.previous;
          return 0;
        }
      }
    }
    else if (uVar7 == 0x10f) {
      local_14 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(this_00 + 0x1d5),&local_8);
      local_18 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (byte *)Library::DKW::LIB::FUN_006aac70(local_10 + 0x6f + local_8);
      if (((local_14 != (byte *)0x0) && (local_18 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        pSVar10 = this_00 + 0x256;
        pbVar11 = local_c;
        for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pbVar11 = *(undefined4 *)pSVar10;
          pSVar10 = pSVar10 + 4;
          pbVar11 = pbVar11 + 4;
        }
        *(undefined2 *)pbVar11 = *(undefined2 *)pSVar10;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        *(undefined4 *)(local_c + 0x42) = *(undefined4 *)(this_00 + 0x235);
        *(undefined4 *)(local_c + 0x46) = *(undefined4 *)(this_00 + 0x23d);
        *(undefined4 *)(local_c + 0x52) = *(undefined4 *)(this_00 + 0x241);
        *(undefined2 *)(local_c + 0x56) = *(undefined2 *)(this_00 + 0x245);
        *(undefined4 *)(local_c + 0x4a) = *(undefined4 *)(this_00 + 0x247);
        *(undefined4 *)(local_c + 0x4e) = *(undefined4 *)(this_00 + 0x24b);
        *(undefined4 *)(local_c + 0x3e) = *(undefined4 *)(this_00 + 0x239);
        *(undefined4 *)(local_c + 0x58) = *(undefined4 *)(this_00 + 0x231);
        local_c[0x5c] = 0;
        local_c[0x5d] = 0;
        local_c[0x5e] = 0;
        local_c[0x5f] = 0;
        *(STSprGameObjC *)(local_c + 0x60) = this_00[0x24f];
        *(STSprGameObjC *)(local_c + 0x61) = this_00[0x250];
        *(STSprGameObjC *)(local_c + 0x62) = this_00[0x251];
        *(undefined4 *)(local_c + 99) = *(undefined4 *)(this_00 + 0x252);
        *(uint *)(local_c + 0x67) = local_8;
        pbVar11 = local_14;
        pbVar14 = local_c + 0x6b;
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar14 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar14 = pbVar14 + 1;
        }
        *(uint *)(local_c + local_8 + 0x6b) = local_10;
        pbVar11 = local_18;
        pbVar14 = local_c + local_8 + 0x6f;
        for (uVar7 = local_10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar7 = local_10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar14 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar14 = pbVar14 + 1;
        }
        STPlaySystemC::SaveObjData
                  (DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_c,local_10 + 0x6f + local_8);
        FUN_006ab060(&local_14);
        FUN_006ab060(&local_18);
        FUN_006ab060(&local_c);
        g_currentExceptionFrame = local_a0.previous;
        return 0;
      }
    }
  }
  else if (uVar7 == 0x112) {
    thunk_FUN_004ad5e0((int)(this_00 + 0x1d5));
  }
  else {
    if (uVar7 == 0x113) {
      (*(code *)**(undefined4 **)(this_00 + 0x1d5))();
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
    if (((uVar7 == 0x128) && (*(int *)(this_00 + 0x235) != 2)) && (*(int *)(this_00 + 0x235) != 4))
    {
      thunk_FUN_00582530(this_00);
      pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
      *(undefined4 *)(this_00 + 0x241) = 0xff;
      *(undefined2 *)(this_00 + 0x245) = 0;
      *(undefined4 *)(this_00 + 0x252) = 0;
      *(undefined4 *)(this_00 + 0x235) = 4;
      STT3DSprC::StopShow(pSVar1,0xe);
      STT3DSprC::StopShow(pSVar1,0xc);
      thunk_FUN_004ad5e0((int)pSVar1);
      thunk_FUN_004ad430((int)pSVar1);
      thunk_FUN_00582580(this_00);
      g_currentExceptionFrame = local_a0.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return 0;
}

