
undefined4 * __cdecl FUN_0070df00(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_2 == 0) || (*(int *)(param_2 + 0xa0) != 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x1de);
    }
    puVar3 = FUN_006aac10(param_1);
    puVar3[0x13] = 1;
    puVar3[0x1b] = 100;
    puVar3[0x1a] = 100;
    *(undefined4 *)((int)puVar3 + 0x7e) = 1;
    *(undefined2 *)((int)puVar3 + 0x9e) = 0;
    *(undefined1 *)((int)puVar3 + 0x9e) = DAT_007cc854;
    *(undefined4 *)((int)puVar3 + 0x82) = 0xffffffff;
    *(undefined4 *)((int)puVar3 + 0x96) = 0;
    puVar3[0x28] = 1;
    puVar3[0x2b] = 0;
    puVar3[0x2a] = param_2;
    *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + 1;
    local_8 = puVar3;
    FUN_00710790((int)puVar3);
    DAT_00858df8 = (undefined4 *)local_4c;
    return puVar3;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x1ef,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_006a5e90(local_8);
  }
  FUN_006a5e40(iVar2,0,0x7f0190,499);
  return (undefined4 *)0x0;
}

