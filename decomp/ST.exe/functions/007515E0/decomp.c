
void FUN_007515e0(int *param_1,byte *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  
  param_3 = param_3 + -1;
  if (param_3 < 0) {
    return;
  }
  do {
    if (*param_2 == *(byte *)((param_1[3] << 8 | param_1[4]) + *param_1)) {
      *(byte *)((int)param_1 + 0x16) =
           *(byte *)((int)param_1 + 0x16) | '\x01' << (*(byte *)(param_1 + 5) & 0x1f);
    }
    else {
      *(byte *)(*(byte *)((int)param_1 + 0x15) + 0x17 + (int)param_1) = *param_2;
      *(char *)((int)param_1 + 0x15) = *(char *)((int)param_1 + 0x15) + '\x01';
      *(byte *)((param_1[3] << 8 | param_1[4]) + *param_1) = *param_2;
    }
    bVar3 = (char)param_1[5] + 1;
    *(byte *)(param_1 + 5) = bVar3;
    if (7 < bVar3) {
      if (param_1[2] < (int)(*(byte *)((int)param_1 + 0x15) + 1)) {
        RaiseInternalException(-0x33,DAT_007ed77c,s_E__DKW_PK_C_fastpk_cpp_007f2b00,0x52);
        return;
      }
      *(undefined1 *)param_1[1] = *(undefined1 *)((int)param_1 + 0x16);
      puVar1 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = (int)puVar1;
      iVar2 = 0;
      if (*(char *)((int)param_1 + 0x15) != '\0') {
        do {
          *puVar1 = *(undefined1 *)((int)param_1 + iVar2 + 0x17);
          puVar1 = (undefined1 *)(param_1[1] + 1);
          iVar2 = iVar2 + 1;
          param_1[1] = (int)puVar1;
        } while (iVar2 < (int)(uint)*(byte *)((int)param_1 + 0x15));
      }
      bVar3 = *(byte *)((int)param_1 + 0x15);
      *(undefined1 *)((int)param_1 + 0x16) = 0;
      *(undefined1 *)((int)param_1 + 0x15) = 0;
      param_1[2] = param_1[2] + (-1 - (uint)bVar3);
      *(undefined1 *)(param_1 + 5) = 0;
    }
    param_1[3] = param_1[4];
    bVar3 = *param_2;
    param_2 = param_2 + 1;
    param_1[4] = (uint)bVar3;
    param_3 = param_3 + -1;
  } while (-1 < param_3);
  return;
}

