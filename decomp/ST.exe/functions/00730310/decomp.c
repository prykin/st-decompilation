
float10 __cdecl FUN_00730310(byte *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint local_1c;
  undefined8 local_18;
  byte *local_c;
  
  local_c = param_1;
  while( true ) {
    if (DAT_007f148c < 2) {
      local_1c = *(ushort *)(PTR_DAT_007f1280 + (uint)*local_c * 2) & 8;
    }
    else {
      local_1c = FUN_00730610((uint)*local_c,8);
    }
    if (local_1c == 0) break;
    local_c = local_c + 1;
  }
  _strlen((char *)local_c);
  puVar2 = (uint *)FUN_0073c780(local_c);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(local_c + puVar2[1]);
  }
  uVar1 = *puVar2;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if ((uVar1 & 0x100) == 0) {
        local_18 = *(double *)(puVar2 + 4);
      }
      else {
        local_18 = 0.0;
        DAT_00857148 = 0x22;
      }
    }
    else {
      if (*local_c == 0x2d) {
        local_18 = -(double)CONCAT44(DAT_007f1f64,DAT_007f1f60);
      }
      else {
        local_18 = (double)CONCAT44(DAT_007f1f64,DAT_007f1f60);
      }
      DAT_00857148 = 0x22;
    }
  }
  else {
    local_18 = 0.0;
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
  }
  return (float10)local_18;
}

