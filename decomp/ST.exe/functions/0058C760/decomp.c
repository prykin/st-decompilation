
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_sat.cpp
   STSatC::GetMessage */

undefined4 __thiscall STSatC::GetMessage(STSatC *this,int param_1)

{
  STT3DSprC *this_00;
  code *pcVar1;
  STSprGameObjC *this_01;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  STSprGameObjC *pSVar8;
  byte *pbVar9;
  void *unaff_EDI;
  byte *pbVar10;
  undefined4 local_80;
  undefined4 local_7c [16];
  int local_3c;
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
  
  if ((*(int *)(this + 0x231) == 7) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_1c = (STSprGameObjC *)this;
  iVar2 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  this_01 = local_1c;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar3 = FUN_006ad4d0(s_E____titans_Igor_to_sat_cpp_007cbab8,0x1fd,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7cbab8,0x1fe);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  STSprGameObjC::GetMessage(local_1c,param_1);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 < 0x110) {
    if (uVar5 == 0x10f) {
      local_18 = (byte *)STT3DSprC::SaveSpr((STT3DSprC *)(this_01 + 0x1d5),&local_8);
      local_14 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_01,(int *)&local_10);
      local_c = (byte *)FUN_006aac70(local_10 + 0x7c + local_8);
      if (((local_18 != (byte *)0x0) && (local_14 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        pSVar8 = this_01 + 0x275;
        pbVar9 = local_c;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pSVar8;
          pSVar8 = pSVar8 + 4;
          pbVar9 = pbVar9 + 4;
        }
        *(undefined2 *)pbVar9 = *(undefined2 *)pSVar8;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        *(undefined4 *)(local_c + 0x26) = *(undefined4 *)(this_01 + 0x231);
        *(undefined4 *)(local_c + 0x2a) = *(undefined4 *)(this_01 + 0x235);
        *(undefined4 *)(local_c + 0x2e) = *(undefined4 *)(this_01 + 0x239);
        *(undefined4 *)(local_c + 0x32) = *(undefined4 *)(this_01 + 0x23d);
        *(undefined4 *)(local_c + 0x36) = *(undefined4 *)(this_01 + 0x241);
        *(undefined4 *)(local_c + 0x3a) = *(undefined4 *)(this_01 + 0x245);
        *(undefined4 *)(local_c + 0x3e) = *(undefined4 *)(this_01 + 0x249);
        *(undefined4 *)(local_c + 0x42) = *(undefined4 *)(this_01 + 0x24d);
        *(undefined4 *)(local_c + 0x46) = *(undefined4 *)(this_01 + 0x251);
        *(undefined4 *)(local_c + 0x4a) = *(undefined4 *)(this_01 + 0x255);
        *(undefined4 *)(local_c + 0x4e) = *(undefined4 *)(this_01 + 0x259);
        *(undefined4 *)(local_c + 0x52) = *(undefined4 *)(this_01 + 0x25d);
        *(undefined4 *)(local_c + 0x56) = *(undefined4 *)(this_01 + 0x261);
        *(undefined4 *)(local_c + 0x5a) = *(undefined4 *)(this_01 + 0x265);
        *(undefined4 *)(local_c + 0x5e) = *(undefined4 *)(this_01 + 0x269);
        *(undefined4 *)(local_c + 0x62) = *(undefined4 *)(this_01 + 0x26d);
        *(undefined4 *)(local_c + 0x66) = *(undefined4 *)(this_01 + 0x271);
        *(undefined2 *)(local_c + 0x6a) = *(undefined2 *)(this_01 + 0x41);
        *(undefined2 *)(local_c + 0x6c) = *(undefined2 *)(this_01 + 0x43);
        *(undefined2 *)(local_c + 0x6e) = *(undefined2 *)(this_01 + 0x45);
        local_c[0x70] = 0;
        local_c[0x71] = 0;
        local_c[0x72] = 0;
        local_c[0x73] = 0;
        *(uint *)(local_c + 0x74) = local_8;
        pbVar9 = local_18;
        pbVar10 = local_c + 0x78;
        for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar10 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        }
        *(uint *)(local_c + local_8 + 0x78) = local_10;
        pbVar9 = local_14;
        pbVar10 = local_c + local_8 + 0x7c;
        for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar5 = local_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar10 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        }
        STPlaySystemC::SaveObjData
                  (DAT_00802a38,*(undefined4 *)(this_01 + 0x18),local_c,local_10 + 0x7c + local_8);
        FUN_006ab060(&local_18);
        FUN_006ab060(&local_14);
        FUN_006ab060(&local_c);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        thunk_FUN_0058bd90((int *)this_01);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      if (uVar5 == 2) {
        iVar2 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(this_01 + 0x231) = 7;
        uVar5 = *(uint *)(iVar2 + 0xc);
        if (uVar5 < 2) {
          *(undefined4 *)(this_01 + 0x239) = 0;
          puVar7 = *(undefined4 **)(param_1 + 0x14);
          pSVar8 = this_01 + 0x275;
          for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)pSVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            pSVar8 = pSVar8 + 4;
          }
          *(undefined2 *)pSVar8 = *(undefined2 *)puVar7;
          this_00 = (STT3DSprC *)(this_01 + 0x1d5);
          iVar2 = STT3DSprC::LoadSequence(this_00,0xe,DAT_00806774,&DAT_007cbaa8,0x1d);
          if (iVar2 != 0) {
            FUN_006a5e40(-1,DAT_007ed77c,0x7cbab8,0x158);
          }
          thunk_FUN_004ac610(this_00,'\x0e');
          STT3DSprC::StartShow(this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
          thunk_FUN_00416240(this_01,*(undefined2 *)(this_01 + 0x289),
                             *(undefined2 *)(this_01 + 0x28d),*(undefined2 *)(this_01 + 0x291));
          sVar6 = *(short *)(this_01 + 0x41);
          *(int *)(this_01 + 0x245) = (int)*(short *)(DAT_00806724 + 0x2c);
          *(undefined4 *)(this_01 + 0x231) = 0;
          if (sVar6 < 0) {
            iVar2 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                           (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar2 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                                (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
          }
          *(int *)(this_01 + 0x251) = iVar2;
          sVar6 = *(short *)(this_01 + 0x43);
          if (sVar6 < 0) {
            iVar2 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                           (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar2 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                                (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
          }
          *(int *)(this_01 + 0x255) = iVar2;
          thunk_FUN_004abe40(this_00,'\x0e',0);
        }
        else if (uVar5 == 2) {
          local_20 = *(undefined4 **)(param_1 + 0x14);
          puVar7 = local_20;
          pSVar8 = this_01 + 0x275;
          for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)pSVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            pSVar8 = pSVar8 + 4;
          }
          *(undefined2 *)pSVar8 = *(undefined2 *)puVar7;
          local_8 = local_20[0x1d];
          STAllPlayersC::RestoreGObjData
                    ((STAllPlayersC *)this_01,(undefined4 *)(local_8 + 0x7c + (int)local_20));
          puVar7 = local_20;
          *(undefined4 *)(this_01 + 0x231) = *(undefined4 *)((int)local_20 + 0x26);
          *(undefined4 *)(this_01 + 0x235) = *(undefined4 *)((int)local_20 + 0x2a);
          *(undefined4 *)(this_01 + 0x239) = *(undefined4 *)((int)local_20 + 0x2e);
          *(undefined4 *)(this_01 + 0x23d) = *(undefined4 *)((int)local_20 + 0x32);
          *(undefined4 *)(this_01 + 0x241) = *(undefined4 *)((int)local_20 + 0x36);
          *(undefined4 *)(this_01 + 0x245) = *(undefined4 *)((int)local_20 + 0x3a);
          *(undefined4 *)(this_01 + 0x249) = *(undefined4 *)((int)local_20 + 0x3e);
          *(undefined4 *)(this_01 + 0x24d) = *(undefined4 *)((int)local_20 + 0x42);
          *(undefined4 *)(this_01 + 0x251) = *(undefined4 *)((int)local_20 + 0x46);
          *(undefined4 *)(this_01 + 0x255) = *(undefined4 *)((int)local_20 + 0x4a);
          *(undefined4 *)(this_01 + 0x259) = *(undefined4 *)((int)local_20 + 0x4e);
          *(undefined4 *)(this_01 + 0x25d) = *(undefined4 *)((int)local_20 + 0x52);
          *(undefined4 *)(this_01 + 0x261) = *(undefined4 *)((int)local_20 + 0x56);
          *(undefined4 *)(this_01 + 0x265) = *(undefined4 *)((int)local_20 + 0x5a);
          *(undefined4 *)(this_01 + 0x269) = *(undefined4 *)((int)local_20 + 0x5e);
          *(undefined4 *)(this_01 + 0x26d) = *(undefined4 *)((int)local_20 + 0x62);
          *(undefined4 *)(this_01 + 0x271) = *(undefined4 *)((int)local_20 + 0x66);
          *(undefined2 *)(this_01 + 0x41) = *(undefined2 *)((int)local_20 + 0x6a);
          *(undefined2 *)(this_01 + 0x43) = *(undefined2 *)(local_20 + 0x1b);
          *(undefined2 *)(this_01 + 0x45) = *(undefined2 *)((int)local_20 + 0x6e);
          local_3c = FUN_006aac70(0x44);
          if (local_3c != 0) {
            iVar2 = 0;
            do {
              *(int **)(iVar2 + local_3c) = DAT_00806774;
              iVar2 = iVar2 + 4;
            } while (iVar2 < 0x44);
            if (((*(int *)(this_01 + 0x239) < 1) || (DAT_00806724 == 0)) || (DAT_00806724 == -0x30))
            {
              local_38 = 0;
            }
            else {
              local_38 = DAT_00806724 + *(int *)(this_01 + 0x239) * 0x34;
            }
            local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
            local_30 = DAT_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            STT3DSprC::RestoreSpr((STT3DSprC *)(this_01 + 0x1d5),&local_3c,puVar7 + 0x1e);
            FUN_006ab060(&local_3c);
          }
        }
        iVar2 = *(int *)(this_01 + 0x289);
        sVar6 = (short)(iVar2 >> 0x1f);
        if (iVar2 < 0) {
          sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) +
                  -1;
        }
        else {
          sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
        }
        iVar2 = *(int *)(this_01 + 0x28d);
        *(short *)(this_01 + 0x47) = sVar6;
        sVar6 = (short)(iVar2 >> 0x1f);
        if (iVar2 < 0) {
          *(undefined2 *)(this_01 + 0x4b) = 4;
          *(short *)(this_01 + 0x49) =
               (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1
          ;
          DAT_00858df8 = (undefined4 *)local_80;
          return 0;
        }
        *(undefined2 *)(this_01 + 0x4b) = 4;
        *(short *)(this_01 + 0x49) =
             ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      if (uVar5 == 3) {
        thunk_FUN_004ad310((int)(this_01 + 0x1d5));
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
    }
  }
  else if (uVar5 == 0x112) {
    thunk_FUN_004ad5e0((int)(this_01 + 0x1d5));
  }
  else if (uVar5 == 0x113) {
    (*(code *)**(undefined4 **)(this_01 + 0x1d5))();
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

