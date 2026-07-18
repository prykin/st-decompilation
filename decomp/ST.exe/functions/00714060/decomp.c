
void __fastcall FUN_00714060(int *param_1)

{
  undefined4 local_4c [18];
  
  if ((param_1[0x16] != 0) && (*param_1 != 0)) {
    FUN_007108b0(local_4c);
    FUN_007109f0((void *)*param_1,param_1 + 4);
    FUN_00710f00();
    if (param_1[0x22] != 0) {
      FUN_006ab060(param_1 + 0x22);
    }
    if (param_1[0x2a] != 0) {
      FUN_006ab060(param_1 + 0x2a);
    }
    if (param_1[0x16] != 0) {
      FUN_006ab060(param_1 + 0x16);
    }
    FUN_007109f0((void *)*param_1,local_4c);
  }
  return;
}

