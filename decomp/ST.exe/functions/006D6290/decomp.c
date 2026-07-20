
int FUN_006d6290(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_10;
  AnonShape_006D6290_10462BC7 *local_c;
  uint *local_8;
  
  iVar1 = *(int *)(param_1 + 0x18);
  local_c = *(AnonShape_006D6290_10462BC7 **)(iVar1 + 0x5c);
  iVar2 = local_c->field_0288;
  local_10 = 0;
  if (*(int *)(iVar1 + 0x6c) != 0) {
    *param_2 = *(int *)(param_1 + 0xc);
    return 0;
  }
  if (local_c->field_0310 != 0) {
    if ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
    }
    iVar4 = *(int *)(iVar2 + 0x28);
    if (*(code **)(iVar4 + 0x4e4) != (code *)0x0) {
      (**(code **)(iVar4 + 0x4e4))
                (*(undefined4 *)(iVar4 + 0x4ec),*(int *)(iVar4 + 0x10) + *(int *)(iVar2 + 0x18),
                 *(int *)(iVar4 + 0x14) + *(int *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                 *(undefined4 *)(iVar2 + 0x24));
    }
  }
  local_8 = (uint *)(param_1 + 0xc);
  param_1 = 0;
  do {
    iVar4 = FUN_006bbe40(*(int **)(iVar1 + 100),local_8,&local_10,0);
    if (iVar4 == 0) {
LAB_006d6394:
      uVar3 = *local_8;
      *param_2 = uVar3;
      if (local_c->field_0310 != 0) {
        *param_2 = *(int *)(iVar2 + 0x1c) * local_10 +
                   uVar3 + *(int *)(*(int *)(iVar2 + 0x28) + 0x28) * *(int *)(iVar2 + 0x18);
      }
      *(undefined4 *)(iVar1 + 0x6c) = 1;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      return 0;
    }
    if (iVar4 != -0x7789fe3e) {
      if (iVar4 == 0) goto LAB_006d6394;
      goto LAB_006d6363;
    }
    (**(code **)(**(int **)(iVar1 + 100) + 0x6c))(*(int **)(iVar1 + 100));
    param_1 = param_1 + 1;
    if (1 < param_1) {
LAB_006d6363:
      if ((local_c->field_0310 != 0) && ((*(uint *)(*(int *)(iVar2 + 0x28) + 8) & 0x4000000) != 0))
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar2 + 0x28) + 0x4f0));
      }
      return iVar4;
    }
  } while( true );
}

