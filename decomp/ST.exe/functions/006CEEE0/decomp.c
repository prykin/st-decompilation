
int FUN_006ceee0(AnonShape_006CEEE0_CDA60BFB *param_1,int *param_2,int param_3)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar1 = param_3 * 0x10;
  local_14 = *(int *)(&param_1->field_0x14 + iVar1);
  local_10 = *(undefined4 *)(&param_1->field_0x18 + iVar1);
  local_c = *(undefined4 *)(&param_1->field_0x1c + iVar1);
  local_8 = *(undefined4 *)(&param_1->field_0x20 + iVar1);
  iVar1 = FUN_006cfeb0(&local_24,param_2,&local_14);
  if (iVar1 != 0) {
    iVar1 = FUN_006d1ad0(param_1->field_01C0,100,local_24,local_20,local_1c,local_18,
                         param_1->field_000C,param_1->field_0010,1);
    return iVar1;
  }
  return 0;
}

