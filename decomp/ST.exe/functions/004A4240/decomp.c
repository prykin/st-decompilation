
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::ChangeMDNotify */

void __thiscall STGroupBoatC::ChangeMDNotify(STGroupBoatC *this,int param_1,uint param_2)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  int *this_01;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  uint *puVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_78;
  undefined4 local_74 [16];
  int local_34 [4];
  STGroupBoatC *local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_1c = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_78 = DAT_00858df8;
  DAT_00858df8 = &local_78;
  local_24 = this;
  iVar2 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_78;
    if (iVar2 != -0x5001fff7) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x126a,0,iVar2,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar2,0,0x7abe3c,0x126b);
    }
    return;
  }
  this_01 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),local_24[0x24]),
                                      param_2,1);
  local_18 = this_01;
  if (param_1 == 1) {
    iVar2 = (**(code **)(*this_01 + 0x2c))();
    if ((iVar2 == 0x3b) || (iVar2 = (**(code **)(*this_01 + 0x2c))(), iVar2 == 0x60)) {
      if ((*(int *)(this_00 + 0x262) == 1) || (*(int *)(this_00 + 0x262) == 0)) {
        if (*(int *)(this_00 + 0x266) == 0) {
          FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x11f2);
        }
        uVar7 = 0;
        iVar2 = *(int *)(*(int *)(this_00 + 0x266) + 0xc);
        if (0 < iVar2) {
          do {
            FUN_006acc70(*(int *)(this_00 + 0x266),uVar7,&local_10);
            if ((short)local_10 == -1) break;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar2);
        }
        FUN_006ae140(*(uint **)(this_00 + 0x266),uVar7,&param_2);
        DistributeMD(this_00,0,*(int *)(this_00 + 0x24e),*(int *)(this_00 + 0x266),
                     *(int *)(this_00 + 0x29));
        this_01 = local_18;
      }
      if (*(int *)(this_00 + 0x262) != 2) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      thunk_FUN_004162b0(this_01,&local_a,&local_8,&local_6);
      if (local_a < *(short *)(this_00 + 0x26a)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(short *)(this_00 + 0x270) + -1 + (int)*(short *)(this_00 + 0x26a) < (int)local_a) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (local_8 < *(short *)(this_00 + 0x26c)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(short *)(this_00 + 0x272) + -1 + (int)*(short *)(this_00 + 0x26c) < (int)local_8) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (local_6 < *(short *)(this_00 + 0x26e)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(short *)(this_00 + 0x274) + -1 + (int)*(short *)(this_00 + 0x26e) < (int)local_6) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(int *)(this_00 + 0x266) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x11fe);
      }
      uVar7 = 0;
      iVar2 = *(int *)(*(int *)(this_00 + 0x266) + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x266),uVar7,&local_10);
          if ((short)local_10 == -1) break;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      puVar5 = *(uint **)(this_00 + 0x266);
    }
    else {
      iVar2 = 0;
      if (0 < local_1c) {
        piVar6 = local_34;
        do {
          iVar3 = (**(code **)(*local_18 + 0x2c))();
          this_01 = local_18;
          if (iVar3 == *piVar6) break;
          iVar2 = iVar2 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar2 < local_1c);
      }
      if (iVar2 == local_1c) {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x120a,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7abe3c,0x120b);
      }
      if (*(int *)(this_00 + 0x24a) != 2) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      iVar2 = (**(code **)(*this_01 + 0x2c))();
      if (iVar2 != *(int *)(this_00 + 0x25e)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      iVar2 = (**(code **)(*this_01 + 0x88))(local_14);
      if (iVar2 < 1) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      thunk_FUN_004162b0(this_01,&local_a,&local_8,&local_6);
      if (local_a < *(short *)(this_00 + 0x252)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(short *)(this_00 + 600) + -1 + (int)*(short *)(this_00 + 0x252) < (int)local_a) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (local_8 < *(short *)(this_00 + 0x254)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(short *)(this_00 + 0x25a) + -1 + (int)*(short *)(this_00 + 0x254) < (int)local_8) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (local_6 < *(short *)(this_00 + 0x256)) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(short *)(this_00 + 0x25c) + -1 + (int)*(short *)(this_00 + 0x256) < (int)local_6) {
        DAT_00858df8 = (undefined4 *)local_78;
        return;
      }
      if (*(int *)(this_00 + 0x24e) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1215);
      }
      uVar7 = 0;
      iVar2 = *(int *)(*(int *)(this_00 + 0x24e) + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x24e),uVar7,&local_10);
          if ((short)local_10 == -1) break;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      puVar5 = *(uint **)(this_00 + 0x24e);
    }
    FUN_006ae140(puVar5,uVar7,&param_2);
    iVar2 = *(int *)(this_00 + 0x29);
    iVar3 = *(int *)(this_00 + 0x266);
    iVar4 = *(int *)(this_00 + 0x24e);
    goto LAB_004a4aab;
  }
  iVar2 = (**(code **)(*this_01 + 0x2c))();
  if ((iVar2 == 0x3b) || (iVar3 = (**(code **)(*this_01 + 0x2c))(), iVar2 = local_1c, iVar3 == 0x60)
     ) {
    if ((*(int *)(this_00 + 0x262) == 1) || (*(int *)(this_00 + 0x262) == 0)) {
      if (*(int *)(this_00 + 0x266) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1226);
      }
      uVar7 = 0;
      iVar2 = *(int *)(*(int *)(this_00 + 0x266) + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x266),uVar7,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            FUN_006ae140(*(uint **)(this_00 + 0x266),uVar7,&local_10);
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      DistributeMD(this_00,0,*(int *)(this_00 + 0x24e),*(int *)(this_00 + 0x266),
                   *(int *)(this_00 + 0x29));
      this_01 = local_18;
    }
    if (*(int *)(this_00 + 0x262) != 2) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    thunk_FUN_004162b0(this_01,&local_a,&local_8,&local_6);
    if (local_a < *(short *)(this_00 + 0x26a)) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(short *)(this_00 + 0x270) + -1 + (int)*(short *)(this_00 + 0x26a) < (int)local_a) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (local_8 < *(short *)(this_00 + 0x26c)) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(short *)(this_00 + 0x272) + -1 + (int)*(short *)(this_00 + 0x26c) < (int)local_8) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (local_6 < *(short *)(this_00 + 0x26e)) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(short *)(this_00 + 0x274) + -1 + (int)*(short *)(this_00 + 0x26e) < (int)local_6) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(int *)(this_00 + 0x266) == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1234);
    }
    uVar8 = 0;
    uVar7 = *(uint *)(*(int *)(this_00 + 0x266) + 0xc);
    if (0 < (int)uVar7) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x266),uVar8,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          FUN_006ae140(*(uint **)(this_00 + 0x266),uVar8,&local_10);
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    if (uVar8 == uVar7) {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x123b,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = 0x123c;
      goto LAB_004a4a83;
    }
  }
  else {
    iVar3 = 0;
    if (0 < local_1c) {
      local_20 = local_34;
      do {
        iVar4 = (**(code **)(*local_18 + 0x2c))();
        if (iVar4 == *local_20) break;
        iVar3 = iVar3 + 1;
        local_20 = local_20 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar3 == iVar2) {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1246,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7abe3c,0x1247);
    }
    if (*(int *)(this_00 + 0x24a) == 0) {
      if (*(int *)(this_00 + 0x24e) == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x124b);
      }
      uVar7 = 0;
      iVar2 = *(int *)(*(int *)(this_00 + 0x24e) + 0xc);
      if (0 < iVar2) {
        do {
          FUN_006acc70(*(int *)(this_00 + 0x24e),uVar7,&local_10);
          if ((short)local_10 == (short)param_2) {
            local_10 = 0xffff;
            FUN_006ae140(*(uint **)(this_00 + 0x24e),uVar7,&local_10);
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      DistributeMD(this_00,0,*(int *)(this_00 + 0x24e),*(int *)(this_00 + 0x266),
                   *(int *)(this_00 + 0x29));
    }
    if (*(int *)(this_00 + 0x24a) != 2) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    thunk_FUN_004162b0(local_18,&local_a,&local_8,&local_6);
    if (local_a < *(short *)(this_00 + 0x252)) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(short *)(this_00 + 600) + -1 + (int)*(short *)(this_00 + 0x252) < (int)local_a) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (local_8 < *(short *)(this_00 + 0x254)) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(short *)(this_00 + 0x25a) + -1 + (int)*(short *)(this_00 + 0x254) < (int)local_8) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (local_6 < *(short *)(this_00 + 0x256)) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(short *)(this_00 + 0x25c) + -1 + (int)*(short *)(this_00 + 0x256) < (int)local_6) {
      DAT_00858df8 = (undefined4 *)local_78;
      return;
    }
    if (*(int *)(this_00 + 0x24e) == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7abe3c,0x1259);
    }
    uVar8 = 0;
    uVar7 = *(uint *)(*(int *)(this_00 + 0x24e) + 0xc);
    if (0 < (int)uVar7) {
      do {
        FUN_006acc70(*(int *)(this_00 + 0x24e),uVar8,&local_10);
        if ((short)local_10 == (short)param_2) {
          local_10 = 0xffff;
          FUN_006ae140(*(uint **)(this_00 + 0x24e),uVar8,&local_10);
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar7);
    }
    if (uVar8 == uVar7) {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1260,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = 0x1261;
LAB_004a4a83:
      FUN_006a5e40(-0x5001fffe,DAT_007ed77c,0x7abe3c,uVar9);
    }
  }
  iVar2 = *(int *)(this_00 + 0x29);
  iVar3 = *(int *)(this_00 + 0x266);
  iVar4 = *(int *)(this_00 + 0x24e);
LAB_004a4aab:
  DistributeMD(this_00,0,iVar4,iVar3,iVar2);
  DAT_00858df8 = (undefined4 *)local_78;
  return;
}

