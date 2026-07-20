
void FUN_006b4030(AnonShape_006B4030_B7868C9A *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1->field_0220 != 0) {
    local_c = param_1->field_01EC;
    iVar2 = param_1->field_01E4;
    local_14 = *(int *)(&param_1->field_0x11c + iVar2 * 8) + local_c * param_2;
    local_8 = param_1->field_01F0;
    local_10 = *(int *)(&param_1->field_0x120 + iVar2 * 8) + local_8 * param_3;
    iVar2 = FUN_006cfeb0(&local_14,&local_14,(int *)(&param_1->field_0x14 + iVar2 * 0x10));
    if (iVar2 != 0) {
      iVar2 = param_1->field_01F4 + 7;
      pbVar1 = (byte *)(((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * param_3 + param_1->field_0220 +
                       ((int)(param_2 ^ 7) >> 3));
      *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
    }
  }
  return;
}

