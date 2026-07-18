
int FUN_006e53a0(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = -4;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_58;
    FUN_006b98c0((int *)(local_c + 0xc),&local_14);
    iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x3a2,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7ee78c,0x3a3);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006b9910((int *)(local_c + 0xc),&local_14);
  iVar2 = *(int *)(local_c + 0x10);
  local_10 = 0;
  if (*(int *)(iVar2 + 0xc) != 0) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar3 = 0;
      goto LAB_006e540d;
    }
    do {
      iVar3 = *(int *)(iVar2 + 8) * local_10 + *(int *)(iVar2 + 0x1c);
LAB_006e540d:
      if (*(int *)(*(int *)(iVar3 + 4) + 4) == param_1) {
        if (param_2 != (int *)0x0) {
          *param_2 = *(int *)(iVar3 + 4);
        }
        local_8 = 0;
        break;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(uint *)(iVar2 + 0xc));
  }
  FUN_006b98c0((int *)(local_c + 0xc),&local_14);
  DAT_00858df8 = (undefined4 *)local_58;
  return local_8;
}

