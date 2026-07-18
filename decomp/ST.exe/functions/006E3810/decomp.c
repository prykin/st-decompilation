
int FUN_006e3810(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  undefined4 local_54;
  undefined4 local_50 [16];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  local_c = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (local_c != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x8c,0,local_c,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    FUN_006a5e40(-2,0,0x7ee78c,0x8d);
    return 0;
  }
  piVar2 = *(int **)(local_8 + 8);
  if (piVar2 == (int *)0x0) {
    FUN_006a5e40(-4,DAT_007ed77c,0x7ee78c,0x7e);
  }
  else {
    iVar6 = 0;
    iVar4 = *piVar2;
    piVar5 = piVar2;
    while (iVar4 != 0) {
      if (iVar4 == param_1) {
        local_c = (*(code *)piVar2[iVar6 * 2 + 1])();
        break;
      }
      piVar1 = piVar5 + 2;
      piVar5 = piVar5 + 2;
      iVar6 = iVar6 + 1;
      iVar4 = *piVar1;
    }
  }
  if (local_c == 0) {
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x80,0,0,
                         (byte *)s_Not_found_function_for_creating_o_007ee7fc);
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7ee78c,0x81);
  }
  if (*(int *)(local_c + 8) == 0) {
    local_10 = param_2;
    *(int *)(local_c + 4) = param_1;
    *(undefined4 *)(local_c + 8) = *(undefined4 *)(local_8 + 4);
    *(int *)(local_8 + 4) = *(int *)(local_8 + 4) + 1;
    *(int *)(local_c + 0x10) = local_8;
  }
  FUN_006ae1c0(*(uint **)(local_8 + 0xc),&local_10);
  DAT_00858df8 = (undefined4 *)local_54;
  return local_c;
}

