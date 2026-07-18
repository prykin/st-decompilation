
undefined4 * FUN_006f2790(void)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x302,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar1)();
      return puVar5;
    }
    FUN_006a5e40(iVar2,0,0x7efaa4,0x304);
    return (undefined4 *)0x0;
  }
  puVar5 = local_8 + 6;
  for (iVar2 = 0x86; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = 0;
  DVar3 = FUN_00751ba0((int *)*local_8,local_8 + 6,(undefined4 *)0x0,0);
  if (DVar3 == 0xfffffffc) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return (undefined4 *)0x0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  *(undefined1 *)(*(short *)((int)local_8 + 0x2e) + 0x30 + (int)local_8) = 0;
  return local_8 + 0xc;
}

