
undefined4 __thiscall FUN_005859a0(void *this,int param_1)

{
  code *pcVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  byte *pbVar8;
  void *unaff_EDI;
  int *piVar9;
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
  int *local_20;
  int *local_1c;
  byte *local_18;
  byte *local_14;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x231) == 4) && (*(int *)(param_1 + 0x10) != 3)) {
    return 0;
  }
  local_80 = DAT_00858df8;
  DAT_00858df8 = &local_80;
  local_1c = this;
  iVar2 = __setjmp3(local_7c,0,unaff_EDI,unaff_ESI);
  this_00 = local_1c;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_80;
    iVar3 = FUN_006ad4d0(s_E____titans_Igor_to_lbomb_cpp_007cb910,0x230,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7cb910,0x231);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  thunk_FUN_0041e530(param_1);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 < 0x110) {
    if (uVar5 == 0x10f) {
      local_18 = (byte *)thunk_FUN_004ad790(&local_8);
      local_14 = (byte *)thunk_FUN_004210e0((int *)&local_10);
      local_c = (byte *)FUN_006aac70(local_10 + 0x67 + local_8);
      if (((local_18 != (byte *)0x0) && (local_14 != (byte *)0x0)) && (local_c != (byte *)0x0)) {
        piVar7 = this_00 + 0x96;
        pbVar8 = local_c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(int *)pbVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          pbVar8 = pbVar8 + 4;
        }
        *(short *)pbVar8 = (short)*piVar7;
        local_c[0xc] = 2;
        local_c[0xd] = 0;
        local_c[0xe] = 0;
        local_c[0xf] = 0;
        *(undefined4 *)(local_c + 0x32) = *(undefined4 *)((int)this_00 + 0x231);
        *(undefined4 *)(local_c + 0x36) = *(undefined4 *)((int)this_00 + 0x235);
        *(undefined4 *)(local_c + 0x3a) = *(undefined4 *)((int)this_00 + 0x23d);
        *(undefined4 *)(local_c + 0x3e) = *(undefined4 *)((int)this_00 + 0x249);
        *(undefined4 *)(local_c + 0x42) = *(undefined4 *)((int)this_00 + 0x24d);
        *(undefined4 *)(local_c + 0x4e) = *(undefined4 *)((int)this_00 + 0x251);
        *(undefined2 *)(local_c + 0x52) = *(undefined2 *)((int)this_00 + 0x41);
        *(undefined2 *)(local_c + 0x54) = *(undefined2 *)((int)this_00 + 0x43);
        *(undefined2 *)(local_c + 0x56) = *(undefined2 *)((int)this_00 + 0x45);
        *(undefined4 *)(local_c + 0x46) = *(undefined4 *)((int)this_00 + 0x241);
        *(undefined4 *)(local_c + 0x4a) = *(undefined4 *)((int)this_00 + 0x245);
        local_c[0x58] = 0;
        local_c[0x59] = 0;
        local_c[0x5a] = 0;
        local_c[0x5b] = 0;
        local_c[0x5c] = *(byte *)((int)this_00 + 0x255);
        local_c[0x5d] = *(byte *)((int)this_00 + 0x256);
        local_c[0x5e] = *(byte *)((int)this_00 + 599);
        *(uint *)(local_c + 0x5f) = local_8;
        pbVar8 = local_18;
        pbVar10 = local_c + 99;
        for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar10 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar10 = pbVar10 + 1;
        }
        *(uint *)(local_c + local_8 + 99) = local_10;
        pbVar8 = local_14;
        pbVar10 = local_c + local_8 + 0x67;
        for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar5 = local_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar10 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar10 = pbVar10 + 1;
        }
        thunk_FUN_0054d430(DAT_00802a38,this_00[6],local_c,local_10 + 0x67 + local_8);
        FUN_006ab060(&local_18);
        FUN_006ab060(&local_14);
        FUN_006ab060(&local_c);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        thunk_FUN_00585020(this_00);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      if (uVar5 == 2) {
        iVar2 = *(int *)(param_1 + 0x14);
        *(undefined4 *)((int)this_00 + 0x231) = 4;
        uVar5 = *(uint *)(iVar2 + 0xc);
        if (uVar5 < 2) {
          *(undefined4 *)((int)this_00 + 0x241) = 0;
          *(undefined4 *)((int)this_00 + 0x23d) = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
          piVar7 = *(int **)(param_1 + 0x14);
          piVar9 = this_00 + 0x96;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          *(short *)piVar9 = (short)*piVar7;
          *(undefined4 *)((int)this_00 + 0x249) = 0x28;
          *(undefined4 *)((int)this_00 + 0x24d) = 0xfffffe70;
          iVar2 = thunk_FUN_004ab880(0xe,DAT_00806774,(byte *)s_lasbom_007cb8b8,0x1d);
          if (iVar2 != 0) {
            FUN_006a5e40(-1,DAT_007ed77c,0x7cb910,0x19f);
          }
          thunk_FUN_004ac1a0(0xe,*(undefined4 *)((int)DAT_00802a38 + 0xe4));
          thunk_FUN_00416240(this_00,(short)this_00[0x9b],(short)this_00[0x9c],(short)this_00[0x9d])
          ;
          *(int *)((int)this_00 + 0x245) = (int)*(short *)(DAT_00806724 + 0x2c);
          *(undefined4 *)((int)this_00 + 0x231) = 0;
          thunk_FUN_005860d0(this_00,this_00[0x9b],this_00[0x9c],0x463);
        }
        else if (uVar5 == 2) {
          local_20 = *(int **)(param_1 + 0x14);
          piVar7 = local_20;
          piVar9 = this_00 + 0x96;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar9 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar9 = piVar9 + 1;
          }
          *(short *)piVar9 = (short)*piVar7;
          local_8 = *(uint *)((int)local_20 + 0x5f);
          thunk_FUN_00422210((undefined4 *)(local_8 + 0x67 + (int)local_20));
          piVar7 = local_20;
          *(undefined4 *)((int)this_00 + 0x231) = *(undefined4 *)((int)local_20 + 0x32);
          *(undefined4 *)((int)this_00 + 0x235) = *(undefined4 *)((int)local_20 + 0x36);
          *(undefined4 *)((int)this_00 + 0x23d) = *(undefined4 *)((int)local_20 + 0x3a);
          *(undefined4 *)((int)this_00 + 0x24d) = *(undefined4 *)((int)local_20 + 0x42);
          *(undefined4 *)((int)this_00 + 0x249) = *(undefined4 *)((int)local_20 + 0x3e);
          *(undefined4 *)((int)this_00 + 0x251) = *(undefined4 *)((int)local_20 + 0x4e);
          *(undefined4 *)((int)this_00 + 0x241) = *(undefined4 *)((int)local_20 + 0x46);
          *(undefined4 *)((int)this_00 + 0x245) = *(undefined4 *)((int)local_20 + 0x4a);
          *(char *)((int)this_00 + 0x255) = (char)local_20[0x17];
          *(undefined1 *)((int)this_00 + 0x256) = *(undefined1 *)((int)local_20 + 0x5d);
          *(undefined1 *)((int)this_00 + 599) = *(undefined1 *)((int)local_20 + 0x5e);
          *(undefined2 *)((int)this_00 + 0x41) = *(undefined2 *)((int)local_20 + 0x52);
          *(short *)((int)this_00 + 0x43) = (short)local_20[0x15];
          *(undefined2 *)((int)this_00 + 0x45) = *(undefined2 *)((int)local_20 + 0x56);
          local_3c = FUN_006aac70(0x44);
          if (local_3c != 0) {
            iVar2 = 0;
            do {
              *(int **)(iVar2 + local_3c) = DAT_00806774;
              iVar2 = iVar2 + 4;
            } while (iVar2 < 0x44);
            *(undefined4 *)(local_3c + 0x24) = DAT_00806764;
            if (((*(int *)((int)this_00 + 0x241) < 1) || (DAT_00806724 == 0)) ||
               (DAT_00806724 == -0x30)) {
              local_38 = 0;
            }
            else {
              local_38 = DAT_00806724 + *(int *)((int)this_00 + 0x241) * 0x34;
            }
            local_34 = (int)*(short *)(DAT_00806724 + 0x2c);
            local_30 = DAT_008073cc;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            thunk_FUN_004adba0(&local_3c,(undefined4 *)((int)piVar7 + 99));
            FUN_006ab060(&local_3c);
          }
        }
        iVar2 = this_00[0x9b];
        sVar6 = (short)(iVar2 >> 0x1f);
        if (iVar2 < 0) {
          sVar6 = (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) +
                  -1;
        }
        else {
          sVar6 = ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
        }
        iVar2 = this_00[0x9c];
        *(short *)((int)this_00 + 0x47) = sVar6;
        sVar6 = (short)(iVar2 >> 0x1f);
        if (iVar2 < 0) {
          *(undefined2 *)((int)this_00 + 0x4b) = 4;
          *(short *)((int)this_00 + 0x49) =
               (((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)) + -1
          ;
          DAT_00858df8 = (undefined4 *)local_80;
          return 0;
        }
        *(undefined2 *)((int)this_00 + 0x4b) = 4;
        *(short *)((int)this_00 + 0x49) =
             ((short)(iVar2 / 0xc9) + sVar6) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
      if (uVar5 == 3) {
        thunk_FUN_004ad310((int)this_00 + 0x1d5);
        DAT_00858df8 = (undefined4 *)local_80;
        return 0;
      }
    }
  }
  else if (uVar5 == 0x112) {
    thunk_FUN_004ad5e0((int)this_00 + 0x1d5);
  }
  else if (uVar5 == 0x113) {
    (*(code *)**(undefined4 **)((int)this_00 + 0x1d5))();
    DAT_00858df8 = (undefined4 *)local_80;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_80;
  return 0;
}

