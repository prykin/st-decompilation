
int __cdecl FUN_0052a430(int param_1)

{
  int *piVar1;
  uint local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  switch(piVar1[1]) {
  case 0:
  case 2:
    return *piVar1 * 2 + -2;
  case 1:
    return *piVar1 * 2 + -1;
  case 3:
    local_8 = (uint)(piVar1[2] != 0);
  }
  return (local_8 - 2) + *piVar1 * 2;
}

