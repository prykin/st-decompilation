
int FUN_006d6290(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 0x18);
  local_c = *(int *)(iVar1 + 0x5c);
  iVar2 = *(int *)(local_c + 0x288);
  local_10 = 0;
  if (*(int *)(iVar1 + 0x6c) != 0) {
    *param_2 = *(int *)(param_1 + 0xc);
    return 0;
  }
  if (*(int *)(local_c + 0x310) != 0) {
    if ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
    }
    iVar3 = *(int *)(iVar2 + 0x28);
    if (*(code **)(iVar3 + 0x4e4) != (code *)0x0) {
      (**(code **)(iVar3 + 0x4e4))
                (*(undefined4 *)(iVar3 + 0x4ec),*(int *)(iVar3 + 0x10) + *(int *)(iVar2 + 0x18),
                 *(int *)(iVar3 + 0x14) + *(int *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                 *(undefined4 *)(iVar2 + 0x24));
    }
  }
  local_8 = (int *)(param_1 + 0xc);
  param_1 = 0;
  do {
    iVar3 = FUN_006bbe40(*(int **)(iVar1 + 100),local_8,&local_10,0);
    if (iVar3 == 0) {
LAB_006d6394:
      iVar3 = *local_8;
      *param_2 = iVar3;
      if (*(int *)(local_c + 0x310) != 0) {
        *param_2 = *(int *)(iVar2 + 0x1c) * local_10 +
                   iVar3 + *(int *)(*(int *)(iVar2 + 0x28) + 0x28) * *(int *)(iVar2 + 0x18);
      }
      *(undefined4 *)(iVar1 + 0x6c) = 1;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      return 0;
    }
    if (iVar3 != -0x7789fe3e) {
      if (iVar3 == 0) goto LAB_006d6394;
      goto LAB_006d6363;
    }
    (**(code **)(**(int **)(iVar1 + 100) + 0x6c))(*(int **)(iVar1 + 100));
    param_1 = param_1 + 1;
    if (1 < param_1) {
LAB_006d6363:
      if ((*(int *)(local_c + 0x310) != 0) &&
         ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
      }
      return iVar3;
    }
  } while( true );
}

