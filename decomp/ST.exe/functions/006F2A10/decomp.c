
undefined4 * FUN_006f2a10(undefined4 *param_1)

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
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Mf32int_cpp_007efaa4,0x35a,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar1)();
      return puVar5;
    }
    FUN_006a5e40(iVar2,0,0x7efaa4,0x35c);
    return (undefined4 *)0x0;
  }
  if (param_1 == (undefined4 *)0x0) {
    param_1 = local_8 + 6;
  }
  puVar5 = param_1;
  for (iVar2 = 0x86; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)puVar5 = 0;
  DVar3 = FUN_00751bf0((int *)*local_8,param_1,(undefined4 *)0x0,0);
  if (DVar3 == 0xfffffffc) {
    DAT_00858df8 = (undefined4 *)local_4c;
    return (undefined4 *)0x0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  *(undefined1 *)(*(short *)((int)param_1 + 0x16) + 0x18 + (int)param_1) = 0;
  return param_1;
}

