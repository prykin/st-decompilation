
void __fastcall FUN_005c5ca0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  cVar1 = *(char *)((int)param_1 + 0x1e26);
  if ((((cVar1 == '\x02') || (cVar1 == '\x05')) || (cVar1 == '\x0f')) ||
     (((cVar1 == '\f' || (cVar1 == '\x10')) ||
      ((*(int *)((int)param_1 + 0x1e27) == 0x13 &&
       ((DAT_00803400 == '\x14' || (DAT_00803400 == '\x15')))))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(undefined4 *)((int)param_1 + 0x1c63) = 1;
  *(undefined4 *)((int)param_1 + 0x29) = 2;
  *(undefined4 *)((int)param_1 + 0x2d) = 0x20;
  piVar5 = param_1 + 0x7d8;
  iVar4 = 7;
  do {
    iVar3 = *piVar5;
    if ((iVar3 != 0) && (DAT_0080877e != '\0')) {
      *(undefined4 *)((int)param_1 + 0x31) = 1;
      *(int *)((int)param_1 + 0x25) = iVar3;
      (**(code **)(*(int *)param_1[3] + 0x18))((int)param_1 + 0x1d);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((*(int *)((int)param_1 + 0x215d) != 0) && (DAT_0080877e != '\0')) {
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    *(int *)((int)param_1 + 0x25) = *(int *)((int)param_1 + 0x215d);
    (**(code **)(*(int *)param_1[3] + 0x18))((int)param_1 + 0x1d);
  }
  piVar5 = (int *)((int)param_1 + 0x2125);
  iVar4 = 0xe;
  do {
    iVar3 = *piVar5;
    if (((iVar3 != 0) && (DAT_0080877e != '\0')) && (!bVar2)) {
      *(undefined4 *)((int)param_1 + 0x31) = 1;
      *(int *)((int)param_1 + 0x25) = iVar3;
      (**(code **)(*(int *)param_1[3] + 0x18))((int)param_1 + 0x1d);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)((int)param_1 + 0x211d) != 0) {
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    *(int *)((int)param_1 + 0x25) = *(int *)((int)param_1 + 0x211d);
    iVar4 = (int)param_1 + 0x1d;
    (**(code **)(*(int *)param_1[3] + 0x18))(iVar4);
    *(undefined4 *)((int)param_1 + 0x2d) = 0x22;
    param_1[0x7e2] = 0;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    (**(code **)(*(int *)param_1[3] + 0x18))(iVar4);
    *(undefined4 *)((int)param_1 + 0x2d) = 0x28;
    if (*(uint *)(param_1[0x7e1] + 0xc) < 0xb) {
      iVar3 = 1;
    }
    else {
      iVar3 = *(uint *)(param_1[0x7e1] + 0xc) - 9;
    }
    *(int *)((int)param_1 + 0x31) = iVar3;
    (**(code **)(*(int *)param_1[3] + 0x18))(iVar4);
  }
  iVar4 = *(int *)(DAT_0081176c + 0x389);
  if (iVar4 != 0) {
    *(undefined4 *)((int)param_1 + 0x31) = 1;
    *(int *)((int)param_1 + 0x25) = iVar4;
    (**(code **)(*(int *)param_1[3] + 0x18))((int)param_1 + 0x1d);
  }
  (**(code **)(*param_1 + 0x2c))();
  return;
}

