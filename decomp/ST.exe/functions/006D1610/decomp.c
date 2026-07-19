
void FUN_006d1610(undefined8 *param_1,undefined8 *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 <= param_2) {
    FUN_006cea60(param_1,param_3,param_2,param_3,param_4,param_5);
    return;
  }
  iVar1 = (param_5 + -1) * param_3;
  puVar3 = (undefined8 *)((int)param_1 + iVar1);
  puVar2 = (undefined8 *)((int)param_2 + iVar1);
  if ((int)puVar3 - (int)puVar2 < (int)param_4) {
    if ((0 < (int)param_4) && (0 < param_5)) {
      do {
        Library::MSVCRT::FUN_0072da70((undefined4 *)puVar3,(undefined4 *)puVar2,param_4);
        puVar2 = (undefined8 *)((int)puVar2 - param_3);
        puVar3 = (undefined8 *)((int)puVar3 - param_3);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    return;
  }
  FUN_006cea60(puVar3,-param_3,puVar2,-param_3,param_4,param_5);
  return;
}

