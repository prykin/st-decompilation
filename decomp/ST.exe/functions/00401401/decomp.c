
undefined4 thunk_FUN_0053eb70(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x168,0,iVar3,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    FUN_006a5e40(iVar3,0,0x7c7870,0x168);
    return 0xffff;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,piStack_8 + 0x13);
    piStack_8[0x11] = piStack_8[0x14] + piStack_8[0x16];
    piStack_8[0x5d] = (piStack_8[0x12] - (piStack_8[0x14] + piStack_8[0x16])) + DAT_00806734;
  }
  thunk_FUN_005384a0(piStack_8,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc000) {
    if (uVar1 == 0xbfff) {
      (**(code **)(*piStack_8 + 0x1c))(0);
      thunk_FUN_005252c0(0xae);
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return 0;
    }
    if (uVar1 == 0) {
      if (*(short *)((int)piStack_8 + 0x172) == 3) {
        iVar3 = piStack_8[0x14] + (piStack_8[0x16] - piStack_8[0x12]);
        if (iVar3 < piStack_8[0x11]) {
          piStack_8[0x11] = piStack_8[0x11] + -0xf;
        }
        if (piStack_8[0x11] <= iVar3) {
          piStack_8[0x11] = iVar3;
          *(undefined2 *)((int)piStack_8 + 0x172) = 1;
          (**(code **)(*piStack_8 + 0x18))(1);
        }
        FUN_006b3640(DAT_008075a8,piStack_8[0x18],0xffffffff,piStack_8[0xf],piStack_8[0x11]);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return 0;
      }
      if (*(short *)((int)piStack_8 + 0x172) == 4) {
        iVar3 = piStack_8[0x14] + piStack_8[0x16];
        if (piStack_8[0x11] < iVar3) {
          piStack_8[0x11] = piStack_8[0x11] + 0xf;
        }
        if (iVar3 <= piStack_8[0x11]) {
          piStack_8[0x11] = iVar3;
          *(undefined2 *)((int)piStack_8 + 0x172) = 2;
        }
        FUN_006b3640(DAT_008075a8,piStack_8[0x18],0xffffffff,piStack_8[0xf],piStack_8[0x11]);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return 0;
      }
    }
    else if (uVar1 == 3) {
      thunk_FUN_0053e640();
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return 0;
    }
  }
  else if (uVar1 == 0xc000) {
    iVar3 = *piStack_8;
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = 0x274e;
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    (**(code **)(iVar3 + 0x10))(param_1,pCVar4,uVar6,uVar7,uVar8);
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return 0;
}

