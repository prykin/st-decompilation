
void __cdecl
FUN_006a2690(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6
            ,undefined *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  
  if (param_7 != (undefined *)0x0) {
    (*(code *)param_7)(param_2,param_3,param_4,param_8);
  }
  puVar1 = (undefined4 *)
           ((int)param_1 + ((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 6 + 8);
  *puVar1 = *param_6;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_6 + 1);
  return;
}

