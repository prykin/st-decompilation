
int thunk_FUN_004cbc10(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  undefined4 uVar4;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uVar4 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar4);
  if (iVar2 == 0) {
    switch(piStack_8[0x16b]) {
    case 0x32:
    case 0x40:
    case 0x49:
    case 0x5c:
      thunk_FUN_004d01f0(piStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    case 0x45:
      thunk_FUN_004eaa20(piStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    case 0x4e:
      thunk_FUN_004d9c80(piStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    case 0x52:
    case 0x5f:
      thunk_FUN_004ec050((int)piStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    case 0x69:
      thunk_FUN_004dce00(piStack_8);
      break;
    case 0x70:
      thunk_FUN_004d9000(piStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    case 0x72:
      thunk_FUN_004ecea0(piStack_8);
      DAT_00858df8 = (undefined1 *)uVar4;
      return 0;
    }
    DAT_00858df8 = (undefined1 *)uVar4;
    return 0;
  }
  DAT_00858df8 = (undefined1 *)uVar4;
  iVar3 = FUN_006ad4d0(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0x2c5,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7ad4d0,0x2c6);
  return iVar2;
}

