
undefined4 * __cdecl FUN_00649a60(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  uVar5 = DAT_00858df8;
  local_8 = (undefined4 *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar5);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_creat_cpp_007d2880,0x178,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined4 *)(*pcVar1)();
      return puVar3;
    }
    FUN_006a5e40(iVar2,0,0x7d2880,0x179);
    return (undefined4 *)0x0;
  }
  if ((&DAT_008087e8)[param_1 * 0x51] != '\x01') {
    if ((&DAT_008087e8)[param_1 * 0x51] != '\x02') {
      FUN_006a5e40(-5,DAT_007ed77c,0x7d2880,0x175);
      DAT_00858df8 = (undefined1 *)uVar5;
      return local_8;
    }
    puVar3 = thunk_FUN_00649790();
    DAT_00858df8 = (undefined1 *)uVar5;
    return puVar3;
  }
  puVar3 = thunk_FUN_006494c0();
  DAT_00858df8 = (undefined1 *)uVar5;
  return puVar3;
}

