
undefined4 __cdecl FUN_0052a5c0(int param_1)

{
  undefined4 local_8;
  
  local_8 = 7;
  switch(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4)) {
  case 0:
    return 7;
  case 1:
  case 3:
    local_8 = 8;
    break;
  case 2:
    return 9;
  }
  return local_8;
}

