
void FUN_006ce700(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  
  while (bVar3 = 3 < param_3, param_3 = param_3 + -4, bVar3) {
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  cVar4 = (char)param_3;
  if (-4 < cVar4) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    *(undefined1 *)param_2 = uVar1;
    if (-3 < cVar4) {
      uVar1 = *(undefined1 *)((int)param_1 + 1);
      *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
      *(undefined1 *)((int)param_2 + 1) = uVar1;
      if (-2 < cVar4) {
        uVar1 = *(undefined1 *)((int)param_1 + 2);
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        *(undefined1 *)((int)param_2 + 2) = uVar1;
      }
    }
  }
  return;
}

