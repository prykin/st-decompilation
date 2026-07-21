
void __thiscall FUN_004c28b0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)param_1 = 1;
  iVar1 = GetPlayerRaceId(*(char *)((int)this + 0x23d));
  *(char *)((int)param_1 + 6) = (char)iVar1;
  switch(*(undefined4 *)((int)this + 0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    *(undefined1 *)((int)param_1 + 1) = 0;
    break;
  case 3:
  case 4:
    *(undefined1 *)((int)param_1 + 1) = 1;
  }
  *(undefined4 *)((int)param_1 + 2) = *(undefined4 *)((int)this + 0x5ac);
  *(undefined4 *)((int)param_1 + 7) = *(undefined4 *)((int)this + 0x18);
  return;
}

