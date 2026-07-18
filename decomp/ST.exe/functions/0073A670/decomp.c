
undefined4 __cdecl FUN_0073a670(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_00857294 == (code *)0x0) {
    iVar1 = FUN_0073b140();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_00857294 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_0073af90();
  }
  else {
    DAT_00857284 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_0073a870(0x7f1ce0,0x40,(int *)&DAT_00857284);
    }
    DAT_00857288 = param_1 + 0x40;
    if ((DAT_00857288 != (char *)0x0) && (*DAT_00857288 != '\0')) {
      FUN_0073a870(0x7f1c28,0x16,(int *)&DAT_00857288);
    }
    DAT_0085728c = 0;
    if ((DAT_00857284 == (char *)0x0) || (*DAT_00857284 == '\0')) {
      if ((DAT_00857288 == (char *)0x0) || (*DAT_00857288 == '\0')) {
        FUN_0073af90();
      }
      else {
        FUN_0073ae90();
      }
    }
    else if ((DAT_00857288 == (char *)0x0) || (*DAT_00857288 == '\0')) {
      FUN_0073acf0();
    }
    else {
      FUN_0073a900();
    }
  }
  if (DAT_0085728c == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_0073afc0((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_00857274,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_00857274;
          param_2[1] = (undefined2)DAT_00857290;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_00857294)(DAT_00857274,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_00857294)(DAT_00857290,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

