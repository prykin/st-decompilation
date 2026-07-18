
void __cdecl FUN_00734ac0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_007306e0((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_007f148c < 2) {
        local_10 = *(ushort *)(PTR_DAT_007f1280 + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_00730610((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_007f1490;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}

