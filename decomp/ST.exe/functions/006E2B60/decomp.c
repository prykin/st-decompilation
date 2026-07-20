
void __thiscall
FUN_006e2b60(void *this,AnonShape_006E2B60_E36B924C *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  pbVar2 = param_1->field_0028;
  iVar1 = 0;
  local_8 = 0;
  local_c = 0;
  if (0 < param_1->field_0024) {
    do {
      if ((*(byte *)((int)this + 0xac) & *pbVar2) != 0) {
        FUN_006e2c30(this,(int *)((uint)pbVar2[1] * 0x10 + param_2));
        FUN_006e2c30(this,(int *)((uint)pbVar2[2] * 0x10 + param_2));
        FUN_006e2c30(this,(int *)((uint)pbVar2[3] * 0x10 + param_2));
        *(undefined1 *)(local_8 + param_3) = (undefined1)local_c;
        iVar1 = local_8 + 1;
        local_8 = iVar1;
      }
      pbVar2 = pbVar2 + 0x1c;
      local_c = local_c + 1;
    } while (local_c < param_1->field_0024);
    *param_4 = iVar1;
    return;
  }
  *param_4 = 0;
  return;
}

