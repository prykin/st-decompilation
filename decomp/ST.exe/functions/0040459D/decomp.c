
uint thunk_FUN_005aacb0(undefined1 param_1,int param_2,int param_3,int param_4,int param_5,
                       uint param_6,char param_7,uint param_8)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined1 *puStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_10 = 0;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar3 = FUN_006ad4d0(s_E____titans_Start_hologram_cpp_007cc674,0x9a,0,iVar3,&DAT_007a4ccc);
    if (iVar3 == 0) {
      *puStack_14 = (char)uStack_10;
      return uStack_10 & 0xff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  *(int *)(puStack_14 + 7) = param_4;
  if (param_4 != 0) {
    *(int *)(puStack_14 + 0x23) = param_2;
    *(int *)(puStack_14 + 0x27) = param_3;
    puStack_14[1] = param_1;
    *(undefined4 *)(puStack_14 + 0x2b) = *(undefined4 *)(param_4 + 4);
    iVar3 = *(int *)(param_4 + 8);
    *(int *)(puStack_14 + 0x2f) = iVar3;
    switch(param_1) {
    case 1:
      iStack_c = *(int *)(puStack_14 + 0x2b);
      uStack_8 = DAT_00806734 - param_3;
      break;
    case 2:
      uStack_8 = DAT_00806730 - param_2;
      iStack_c = iVar3;
      break;
    case 3:
      uStack_8 = iVar3 + param_3;
      iStack_c = *(int *)(puStack_14 + 0x2b);
      break;
    case 4:
      uStack_8 = *(int *)(puStack_14 + 0x2b) + param_2;
      iStack_c = iVar3;
    }
    *(uint *)(puStack_14 + 0x13) = param_6 & 0xff;
    *(uint *)(puStack_14 + 0x1f) = uStack_8;
    puVar4 = thunk_FUN_005aa880((uint *)(puStack_14 + 0xf),uStack_8,iStack_c,param_5,param_6 & 0xff,
                                param_8);
    *(undefined4 **)(puStack_14 + 0xb) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (uint *)(puStack_14 + 3);
      FUN_006b2330((uint)DAT_008075a8,puVar1,10,0x402842,0,0,(uint)puStack_14);
      uVar5 = *puVar1;
      if (-1 < (int)uVar5) {
        switch(puStack_14[1]) {
        case 1:
        case 3:
          FUN_006b2800((int)DAT_008075a8,uVar5,*(uint *)(puStack_14 + 0x2b),DAT_00806734);
          uVar5 = *(uint *)(puStack_14 + 0x23);
          uVar6 = 0;
          break;
        case 2:
        case 4:
          FUN_006b2800((int)DAT_008075a8,uVar5,DAT_00806730,*(uint *)(puStack_14 + 0x2f));
          uVar6 = *(uint *)(puStack_14 + 0x27);
          uVar5 = 0;
          break;
        default:
          goto switchD_005aadcd_default;
        }
        FUN_006b3640(DAT_008075a8,*puVar1,0xffffffff,uVar5,uVar6);
switchD_005aadcd_default:
        FUN_006b3af0(DAT_008075a8,*puVar1);
        puStack_14[2] = param_7;
        if (param_7 == '\0') {
          *(undefined4 *)(puStack_14 + 0x17) = 0xffffffff;
          DAT_00858df8 = (undefined4 *)uStack_58;
          *puStack_14 = 1;
          return 1;
        }
        *(undefined4 *)(puStack_14 + 0x17) = *(undefined4 *)(puStack_14 + 0x13);
        DAT_00858df8 = (undefined4 *)uStack_58;
        *puStack_14 = 1;
        return 1;
      }
    }
    thunk_FUN_005aafb0();
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  *puStack_14 = (char)uStack_10;
  return uStack_10 & 0xff;
}

