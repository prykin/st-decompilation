
void FUN_006b3cc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
      }
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x4b0) != 0) {
        uVar2 = *(undefined4 *)(iVar1 + 0x40);
        *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(*param_1 + 0x44) = uVar2;
      }
      piVar3 = *(int **)(*param_1 + 0x44);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(*param_1 + 0x44) = 0;
      }
      if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
      }
    }
    puVar4 = &DAT_007ee1a4;
    do {
      if (-1 < (int)*puVar4) {
        FUN_006d00d0(param_1,*puVar4);
        *puVar4 = 0xffffffff;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < s_E__DKW_DDX_C_ddsprmsg_c_007ee1b4);
    FUN_006ab060(param_1 + 0x6c);
    FUN_006ab060(param_1 + 0x6b);
    FUN_006ab060(param_1 + 0x6a);
    FUN_006ab060(param_1 + 0x84);
    FUN_006ab060(param_1 + 0x88);
    FUN_006ab060(param_1 + 0x6f);
    FUN_006ab060(param_1 + 0x70);
    piVar3 = (int *)param_1[0x73];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      param_1[0x73] = 0;
    }
    FUN_006a5e90(param_1);
  }
  return;
}

