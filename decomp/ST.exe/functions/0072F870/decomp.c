
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_0072f870(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_007f11a8,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_007f1124,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_0072fa60((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_0073a670((char *)local_8c,(undefined2 *)&DAT_00857198,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_008571a0 = (uint)DAT_0085719c;
      ___lc_lctostr((uint *)&DAT_007f11a8,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_0073a240((uint *)&DAT_007f1124,(uint *)&DAT_007f11a8);
      }
      else {
        FUN_0073a240((uint *)&DAT_007f1124,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_0073a330(param_3,(undefined4 *)&DAT_00857198,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_0073a330(param_4,(undefined4 *)&DAT_008571a0,4);
    }
    FUN_0073a240(param_2,(uint *)&DAT_007f11a8);
    param_2 = (uint *)&DAT_007f11a8;
  }
  return param_2;
}

