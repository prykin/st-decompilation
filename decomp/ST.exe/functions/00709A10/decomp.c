
void __cdecl FUN_00709a10(undefined4 *param_1,undefined1 param_2,uint *param_3)

{
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 0xe:
  case 0x12:
  case 0x16:
  case 0x1c:
    cMf32::RecMemFree((cMf32 *)*param_1,param_3);
    return;
  case 7:
    FUN_00725e30((int *)param_3);
    return;
  case 8:
    FUN_00726260(param_3);
    return;
  case 0xb:
    FUN_0070b1d0((int *)param_3);
    return;
  case 0x13:
  case 0x1d:
    FUN_00716db0((int *)param_3);
    return;
  case 0x15:
    FUN_00726870((int *)param_3);
    return;
  case 0x1e:
    FUN_00726bd0((int *)param_3);
    break;
  case 0x1f:
    FUN_0070b600((int *)param_3);
    return;
  }
  return;
}

