
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_shark.cpp
   STSharkC::GetMessage */

undefined4 __thiscall STSharkC::GetMessage(STSharkC *this,int param_1)

{
  STT3DSprC *pSVar1;
  code *pcVar2;
  STSprGameObjC *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  STSprGameObjC *pSVar9;
  byte *pbVar10;
  void *unaff_EDI;
  byte *pbVar11;
  undefined4 local_80;
  undefined4 local_7c [16];
  int local_3c;
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
  
  if ((*(int *)(this + 599) == 8) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_20 = (STSprGameObjC *)this;
  iVar3 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar5 = FUN_006ad4d0(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x15e,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7cbb7c,0x15f);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  STSprGameObjC::GetMessage(local_20,param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (uVar6 < 0x111) {
    if (uVar6 == 0x110) {
      if (*(int *)(this_00 + 599) == 4) {
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
      *(undefined4 *)(this_00 + 0x23d) = 0;
      STT3DSprC::StopShow(pSVar1,0xe);
      thunk_FUN_004ad5e0((int)pSVar1);
      STT3DSprC::LoadSequence(pSVar1,8,DAT_00806764,(byte *)s_expshark_007cbb28,0x1d);
      STT3DSprC::StartShow(pSVar1,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
      *(undefined4 *)(this_00 + 599) = 4;
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    if (3 < uVar6) {
      if (uVar6 != 0x10f) {
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(this_00 + 0x1d5),&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_10);
      local_c = (byte *)FUN_006aac70(local_10 + 0x66 + local_8);
      if (local_18 == (byte *)0x0) {
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      if (local_14 == (byte *)0x0) {
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      if (local_c == (byte *)0x0) {
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      pSVar9 = this_00 + 0x25b;
      pbVar10 = local_c;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pSVar9;
        pSVar9 = pSVar9 + 4;
        pbVar10 = pbVar10 + 4;
      }
      local_c[0xc] = 2;
      local_c[0xd] = 0;
      local_c[0xe] = 0;
      local_c[0xf] = 0;
      *(undefined2 *)(local_c + 0x34) = *(undefined2 *)(this_00 + 0x231);
      *(undefined2 *)(local_c + 0x36) = *(undefined2 *)(this_00 + 0x233);
      *(undefined2 *)(local_c + 0x38) = *(undefined2 *)(this_00 + 0x235);
      *(undefined2 *)(local_c + 0x3a) = *(undefined2 *)(this_00 + 0x237);
      *(undefined4 *)(local_c + 0x3c) = *(undefined4 *)(this_00 + 0x249);
      *(undefined2 *)(local_c + 0x40) = *(undefined2 *)(this_00 + 0x24d);
      *(undefined4 *)(local_c + 0x42) = *(undefined4 *)(this_00 + 0x23d);
      *(undefined4 *)(local_c + 0x46) = *(undefined4 *)(this_00 + 0x24f);
      *(undefined4 *)(local_c + 0x4a) = *(undefined4 *)(this_00 + 0x253);
      *(undefined4 *)(local_c + 0x4e) = *(undefined4 *)(this_00 + 599);
      *(undefined4 *)(local_c + 0x52) = *(undefined4 *)(this_00 + 0x241);
      *(undefined4 *)(local_c + 0x56) = *(undefined4 *)(this_00 + 0x245);
      local_c[0x5a] = 0;
      local_c[0x5b] = 0;
      local_c[0x5c] = 0;
      local_c[0x5d] = 0;
      *(uint *)(local_c + 0x5e) = local_8;
      pbVar10 = local_18;
      pbVar11 = local_c + 0x62;
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
      }
      *(uint *)(local_c + local_8 + 0x62) = local_10;
      pbVar10 = local_14;
      pbVar11 = local_c + local_8 + 0x66;
      for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
      }
      STPlaySystemC::SaveObjData
                (DAT_00802a38,*(undefined4 *)(this_00 + 0x18),local_c,local_10 + 0x66 + local_8);
      FUN_006ab060(&local_18);
      FUN_006ab060(&local_14);
      FUN_006ab060(&local_c);
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    if (uVar6 == 3) {
      uVar4 = thunk_FUN_004167a0((int)this_00);
      thunk_FUN_00495ff0(*(short *)(this_00 + 0x5b),*(short *)(this_00 + 0x5d),
                         *(short *)(this_00 + 0x5f),CONCAT31((int3)((uint)uVar4 >> 8),this_00[0x8e])
                         ,(int)this_00);
      thunk_FUN_0058d080(*(int *)(this_00 + 0x18));
      thunk_FUN_004ad310((int)(this_00 + 0x1d5));
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    if (uVar6 == 0) {
      thunk_FUN_0058e570((int *)this_00);
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    if (uVar6 != 2) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    *(undefined4 *)(this_00 + 599) = 8;
    *(undefined4 *)(this_00 + 0x23d) = 0;
    *(undefined4 *)(this_00 + 0x241) = 0;
    local_1c = *(undefined4 **)(param_1 + 0x14);
    if ((uint)local_1c[3] < 2) {
      *(undefined4 *)(this_00 + 0x24f) = 0;
      *(undefined4 *)(this_00 + 0x253) = 0;
      *(undefined4 *)(this_00 + 0x249) = 0xff;
      iVar3 = thunk_FUN_0058ff70((int)this_00);
      *(int *)(this_00 + 0x24f) = iVar3;
      puVar8 = *(undefined4 **)(param_1 + 0x14);
      pSVar9 = this_00 + 0x25b;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        pSVar9 = pSVar9 + 4;
      }
      thunk_FUN_0058eeb0((int)this_00);
      *(undefined2 *)(this_00 + 0x5b) = 0xffff;
      *(undefined2 *)(this_00 + 0x5d) = 0xffff;
      *(undefined2 *)(this_00 + 0x5f) = 0xffff;
      thunk_FUN_00417a00(this_00,1);
      iVar3 = thunk_FUN_00417a20(this_00,*(short *)(this_00 + 0x26f),*(short *)(this_00 + 0x273),
                                 *(short *)(this_00 + 0x277),1);
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_00417e70(this_00,8);
        if (iVar3 == 0) {
          pSVar1 = (STT3DSprC *)(this_00 + 0x1d5);
          iVar3 = STT3DSprC::LoadSequence(pSVar1,0xe,DAT_0080676c,(byte *)s_shark1_007cbb20,0x1d);
          if (iVar3 != 0) {
            FUN_006a5e40(-1,DAT_007ed77c,0x7cbb7c,0x9f);
          }
          thunk_FUN_004ac610(pSVar1,'\x0e');
          STT3DSprC::StartShow(pSVar1,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
          if (local_1c[3] == 0) {
            thunk_FUN_004ad3c0(pSVar1,(float)*(int *)(this_00 + 0x26f) * _DAT_007904f8 +
                                      _DAT_007904f4,
                               (float)*(int *)(this_00 + 0x273) * _DAT_007904f8 + _DAT_007904f4,
                               (float)*(int *)(this_00 + 0x277) * _DAT_00790504 + _DAT_00790500);
            iVar3 = thunk_FUN_00417ee0(this_00,*(short *)(this_00 + 0x27b));
            if (iVar3 == 0) {
LAB_0058dc72:
              *(int *)(this_00 + 0x245) = (int)*(short *)(DAT_00806724 + 0x2c);
              *(undefined2 *)(this_00 + 0x231) = *(undefined2 *)(this_00 + 0x47);
              *(undefined2 *)(this_00 + 0x233) = *(undefined2 *)(this_00 + 0x49);
              *(undefined2 *)(this_00 + 0x235) = *(undefined2 *)(this_00 + 0x4b);
              *(undefined4 *)(this_00 + 599) = 0;
            }
            else {
              iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_shark_cpp_007cbb7c,0xaa,0,0,&DAT_007a4ccc);
              if (iVar3 != 0) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return uVar4;
              }
              thunk_FUN_0058efe0(this_00);
            }
          }
          else {
            local_1c = *(undefined4 **)(this_00 + 0x26f);
            *(int *)(this_00 + 0x241) = (int)*(short *)(DAT_00806724 + 0x23);
            if (local_1c == (undefined4 *)0x0) {
              *(undefined4 *)(this_00 + 0x27b) = 0;
            }
            else if (*(int *)(this_00 + 0x273) == 0) {
              *(undefined4 *)(this_00 + 0x27b) = 0x10e;
            }
            else if (local_1c == (undefined4 *)(DAT_007fb240 + -1)) {
              *(undefined4 *)(this_00 + 0x27b) = 0xb4;
            }
            else if (*(int *)(this_00 + 0x273) == DAT_007fb242 + -1) {
              *(undefined4 *)(this_00 + 0x27b) = 0x5a;
            }
            thunk_FUN_004ad3c0(pSVar1,(float)(int)local_1c * _DAT_007904f8 + _DAT_007904f4,
                               (float)*(int *)(this_00 + 0x273) * _DAT_007904f8 + _DAT_007904f4,
                               (float)*(int *)(this_00 + 0x277) * _DAT_00790504 + _DAT_00790500);
            iVar3 = thunk_FUN_00417ee0(this_00,*(short *)(this_00 + 0x27b));
            if (iVar3 == 0) goto LAB_0058dc72;
            iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_shark_cpp_007cbb7c,200,0,0,&DAT_007a4ccc);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return uVar4;
            }
            thunk_FUN_0058efe0(this_00);
          }
        }
        else {
          iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_shark_cpp_007cbb7c,0x99,0,0,&DAT_007a4ccc);
          if (iVar3 != 0) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
          thunk_FUN_0058efe0(this_00);
        }
      }
      else {
        thunk_FUN_0058efe0(this_00);
      }
    }
    else if (local_1c[3] == 2) {
      puVar8 = local_1c;
      pSVar9 = this_00 + 0x25b;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        pSVar9 = pSVar9 + 4;
      }
      local_8 = *(uint *)((int)local_1c + 0x5e);
      STAllPlayersC::RestoreGObjData
                ((STAllPlayersC *)this_00,(undefined4 *)(local_8 + 0x66 + (int)local_1c));
      puVar8 = local_1c;
      *(undefined2 *)(this_00 + 0x231) = *(undefined2 *)(local_1c + 0xd);
      *(undefined2 *)(this_00 + 0x233) = *(undefined2 *)((int)local_1c + 0x36);
      *(undefined2 *)(this_00 + 0x235) = *(undefined2 *)(local_1c + 0xe);
      *(undefined2 *)(this_00 + 0x237) = *(undefined2 *)((int)local_1c + 0x3a);
      *(undefined4 *)(this_00 + 0x249) = local_1c[0xf];
      *(undefined2 *)(this_00 + 0x24d) = *(undefined2 *)(local_1c + 0x10);
      *(undefined4 *)(this_00 + 0x23d) = *(undefined4 *)((int)local_1c + 0x42);
      *(undefined4 *)(this_00 + 0x24f) = *(undefined4 *)((int)local_1c + 0x46);
      *(undefined4 *)(this_00 + 0x253) = *(undefined4 *)((int)local_1c + 0x4a);
      *(undefined4 *)(this_00 + 599) = *(undefined4 *)((int)local_1c + 0x4e);
      *(undefined4 *)(this_00 + 0x241) = *(undefined4 *)((int)local_1c + 0x52);
      *(undefined4 *)(this_00 + 0x245) = *(undefined4 *)((int)local_1c + 0x56);
      local_3c = FUN_006aac70(0x44);
      if (local_3c != 0) {
        iVar3 = 0;
        do {
          *(int **)(iVar3 + local_3c) = DAT_0080676c;
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0x44);
        if (((*(int *)(this_00 + 0x241) < 1) || (DAT_00806724 == 0)) || (DAT_00806724 == -0x30)) {
          local_38 = 0;
        }
        else {
          local_38 = *(undefined4 *)(DAT_00806724 + 0x2c + *(int *)(this_00 + 0x241) * 4);
        }
        local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_30 = DAT_008073cc;
        STT3DSprC::RestoreSpr
                  ((STT3DSprC *)(this_00 + 0x1d5),&local_3c,(undefined4 *)((int)puVar8 + 0x62));
        FUN_006ab060(&local_3c);
        DumpClassC::WritePtr
                  (*(short *)(this_00 + 0x5b),*(short *)(this_00 + 0x5d),*(short *)(this_00 + 0x5f),
                   1,(int)this_00);
      }
    }
    if (*(int *)(this_00 + 599) == 8) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
    iVar3 = thunk_FUN_0058cfe0((int)this_00);
    if (iVar3 != 0) {
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    }
LAB_0058e0f9:
    thunk_FUN_0058efe0(this_00);
  }
  else {
    switch(uVar6) {
    case 0x112:
      thunk_FUN_004ad5e0((int)(this_00 + 0x1d5));
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    case 0x113:
      (*(code *)**(undefined4 **)(this_00 + 0x1d5))();
      DAT_00858df8 = (undefined4 *)local_80;
      return 0;
    case 0x127:
      pSVar9 = this_00 + 0x231;
      local_1c = (undefined4 *)(int)(short)((short)*(undefined4 *)(param_1 + 0x18) * 0xc9 + 100);
      iVar3 = thunk_FUN_0058d160((short)*(undefined4 *)(this_00 + 0x27f),
                                 (short)*(undefined4 *)(this_00 + 0x283),
                                 (short)*(undefined4 *)(this_00 + 0x287),
                                 (short)*(undefined4 *)(this_00 + 0x28b),(int)this_00,
                                 (int)(short)((short)*(undefined4 *)(param_1 + 0x14) * 0xc9 + 100),
                                 (int)local_1c,
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x14) >> 0x10)
                                              * 0xc9 + 100),
                                 (int)(short)((short)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10)
                                              * 0xc9 + 100),(undefined2 *)pSVar9,
                                 (undefined2 *)(this_00 + 0x233),(short *)(this_00 + 0x235));
      if (iVar3 != 0) {
        sVar7 = *(short *)pSVar9;
        if (sVar7 < 0) {
          sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                  (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                  (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
        }
        *(short *)pSVar9 = sVar7;
        sVar7 = *(short *)(this_00 + 0x233);
        if (sVar7 < 0) {
          sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                  (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                  (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
        }
        *(short *)(this_00 + 0x233) = sVar7;
        sVar7 = *(short *)(this_00 + 0x235);
        if (sVar7 < 0) {
          sVar7 = ((sVar7 / 200 + (sVar7 >> 0xf)) -
                  (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar7 = (sVar7 / 200 + (sVar7 >> 0xf)) -
                  (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f);
        }
        *(short *)(this_00 + 0x235) = sVar7;
        *(undefined4 *)(this_00 + 599) = 5;
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      break;
    case 0x128:
      uVar6 = thunk_FUN_004ad650((int)(this_00 + 0x1d5));
      FUN_006eab60(*(void **)(this_00 + 0x211),uVar6);
      goto LAB_0058e0f9;
    }
  }
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

