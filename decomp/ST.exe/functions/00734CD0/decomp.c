
undefined1 * __cdecl FUN_00734cd0(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int local_10;
  int *local_c;
  undefined1 *local_8;
  
  if (DAT_008571fc == '\0') {
    local_c = (int *)FUN_0073c590();
    FUN_007405a0(param_2 + (uint)(0 < param_3) + (uint)(*local_c == 0x2d),param_3 + 1,(int)local_c);
  }
  else {
    local_c = DAT_008571f8;
    __shift(param_2 + (*DAT_008571f8 == 0x2d),(uint)(0 < param_3));
  }
  local_8 = param_2;
  if (*local_c == 0x2d) {
    *param_2 = 0x2d;
    local_8 = param_2 + 1;
  }
  if (0 < param_3) {
    *local_8 = local_8[1];
    local_8 = local_8 + 1;
    *local_8 = DAT_007f1490;
  }
  puVar1 = FUN_0073a240((uint *)(local_8 + (uint)(DAT_008571fc == '\0') + param_3),(uint *)"e+000");
  if (param_4 != 0) {
    *(undefined1 *)puVar1 = 0x45;
  }
  if (*(char *)local_c[3] != '0') {
    local_10 = local_c[1] + -1;
    if (local_10 < 0) {
      local_10 = -local_10;
      *(undefined1 *)((int)puVar1 + 1) = 0x2d;
    }
    if (99 < local_10) {
      *(char *)((int)puVar1 + 2) = *(char *)((int)puVar1 + 2) + (char)(local_10 / 100);
      local_10 = local_10 % 100;
    }
    if (9 < local_10) {
      *(char *)((int)puVar1 + 3) = *(char *)((int)puVar1 + 3) + (char)(local_10 / 10);
      local_10 = local_10 % 10;
    }
    *(char *)(puVar1 + 1) = (char)puVar1[1] + (char)local_10;
  }
  return param_2;
}

