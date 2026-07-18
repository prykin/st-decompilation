
undefined4 __cdecl FUN_0052a540(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  switch(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4)) {
  case 0:
    return 0;
  case 1:
  case 3:
    local_8 = 1;
    break;
  case 2:
    return 2;
  }
  return local_8;
}

