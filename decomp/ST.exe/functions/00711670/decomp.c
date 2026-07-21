
int __thiscall FUN_00711670(void *this,AnonShape_00711670_5F8DCCF2 *param_1,int param_2,int param_3)

{
  int iVar1;
  char *resourceString;
  int iVar2;
  int local_8;

  local_8 = 0;
  if (param_1 != (AnonShape_00711670_5F8DCCF2 *)0x0) {
    iVar1 = param_1->field_0008;
    if (param_3 == -1) {
      param_3 = iVar1;
    }
    if ((param_2 < iVar1) && (param_3 != 0)) {
      if (iVar1 < param_2 + param_3) {
        param_3 = iVar1 - param_2;
      }
      iVar1 = param_2 + param_3;
      for (; param_2 < iVar1; param_2 = param_2 + 1) {
        if (param_2 < param_1->field_0008) {
          resourceString = *(char **)(param_1->field_0014 + param_2 * 4);
        }
        else {
          resourceString = (char *)0x0;
        }
        iVar2 = FUN_00711110(this,resourceString);
        if (local_8 < iVar2) {
          local_8 = iVar2;
        }
      }
      return local_8;
    }
  }
  return 0;
}

