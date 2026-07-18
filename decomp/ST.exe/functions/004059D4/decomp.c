
undefined4 thunk_FUN_005400f0(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  LPSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_specpan_cpp_007c7870,0x2a3,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7c7870,0x2a3);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  thunk_FUN_005384a0(piStack_8,param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0xc001) {
    if (uVar1 == 0xc000) {
      pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      thunk_FUN_00538db0(piStack_8,param_1,pCVar4,0x274e,0,1);
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return 0;
    }
    if (uVar1 == 0) {
      if (*(short *)((int)piStack_8 + 0x172) == 3) {
        iVar3 = (piStack_8[0x16] - piStack_8[0x12]) + piStack_8[0x14];
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
        iVar3 = piStack_8[0x16] + piStack_8[0x14];
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
    else {
      if (uVar1 == 3) {
        thunk_FUN_0053f220();
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return 0;
      }
      if (uVar1 == 0xbfff) {
        thunk_FUN_0053f650(piStack_8,'\0');
        thunk_FUN_005252c0(0xae);
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return 0;
      }
    }
  }
  else {
    if (uVar1 == 0xc005) {
      pcVar7 = s_BUT_SLRT_007c7b20;
    }
    else {
      if (uVar1 != 0xc006) {
        DAT_00858df8 = (undefined4 *)uStack_4c;
        return 0;
      }
      pcVar7 = s_BUT_SLLT_007c7abc;
    }
    pCVar4 = thunk_FUN_00571240(pcVar7,0);
    thunk_FUN_005389e0(piStack_8,param_1,1,pCVar4,thunk_FUN_00529fe0,0,1);
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  return 0;
}

