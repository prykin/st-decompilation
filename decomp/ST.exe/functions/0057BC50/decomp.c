
int __cdecl
FUN_0057bc50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;
  
  iVar1 = (param_6 * param_6) / 10000 + (param_5 * param_5) / 10000 + (param_4 * param_4) / 10000;
  if (iVar1 != 0) {
    return ((param_7 - param_1) * param_4 + (param_8 - param_2) * param_5 +
           (param_9 - param_3) * param_6) / iVar1;
  }
  return 0;
}

