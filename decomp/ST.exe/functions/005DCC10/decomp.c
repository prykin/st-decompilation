
undefined4 FUN_005dcc10(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  undefined4 in_stack_ffffff70;
  undefined4 *puVar6;
  undefined4 local_8c [16];
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,in_stack_ffffff70);
  iVar3 = local_8;
  if (iVar2 == 0) {
    FUN_006e51f0();
    puVar6 = DAT_00858df8;
    if (*(int *)(iVar3 + 0x28) != 0) {
      DAT_00858df8 = (undefined4 *)&stack0xffffff70;
      iVar3 = __setjmp3(local_8c,0,unaff_ESI,puVar6);
      if (iVar3 == 0) {
        pCVar4 = FUN_006f2c00(s_MM_FLC_007cc938,2,0);
        iVar3 = FUN_006f21c0(0,pCVar4);
        DAT_00858df8 = puVar6;
        if (iVar3 != 0) {
          *(undefined4 *)(local_8 + 0x28) = 0;
        }
      }
      else {
        DAT_00858df8 = puVar6;
        *(undefined4 *)(local_8 + 0x28) = 0;
      }
    }
    thunk_FUN_005da7a0();
    thunk_FUN_005db4f0();
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x283,0,iVar2,&DAT_007a4ccc);
  if (iVar3 == 0) {
    FUN_006a5e40(iVar2,0,0x7cd718,0x283);
    return 0xfffffffc;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

