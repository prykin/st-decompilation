
void FUN_006c7f10(int param_1,int param_2,int *param_3,int param_4,byte param_5)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_3;
  if (1 < param_4) {
    piVar2 = param_3 + 1;
    param_3 = (int *)(param_4 + -1);
    do {
      FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,param_2,piVar2[-1],*piVar2,piVar2[1],
                   piVar2[2],param_5,0xd);
      piVar2 = piVar2 + 2;
      param_3 = (int *)((int)param_3 + -1);
    } while (param_3 != (int *)0x0);
  }
  FUN_006b5b10((AnonShape_006B5B10_E0D06CF1 *)param_1,param_2,piVar1[param_4 * 2 + -2],
               piVar1[param_4 * 2 + -1],*piVar1,piVar1[1],param_5,0xd);
  return;
}

