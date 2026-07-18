
undefined4 * __cdecl FUN_00648780(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  undefined4 *local_c;
  ushort *local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = (ushort *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (char *)0x0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7d27f4,0x7f);
    }
    local_8 = FUN_006f2d90(param_1,param_2,1,0);
    if (local_8 != (ushort *)0x0) {
      local_c = thunk_FUN_00648530((undefined4 *)local_8);
      thunk_FUN_006484f0((int *)&local_8);
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return local_c;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E____titans_ai_ai_boss_d_cpp_007d27f4,0x86,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  thunk_FUN_006484f0((int *)&local_8);
  thunk_FUN_006484f0((int *)&local_c);
  FUN_006a5e40(iVar2,0,0x7d27f4,0x88);
  return (undefined4 *)0x0;
}

