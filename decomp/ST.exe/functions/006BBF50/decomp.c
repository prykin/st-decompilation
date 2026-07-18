
void FUN_006bbf50(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1[3] & 0x400U) != 0) {
    iVar1 = (*(code *)**(undefined4 **)param_1[0xd])
                      ((undefined4 *)param_1[0xd],&DAT_0079fc78,&param_1);
    if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0x10))(param_1,1,param_2);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  return;
}

