
bool FUN_0042b5b0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (g_playerRuntime[(char)param_1].objects)->count;
  if ((uVar1 != 0) && ((param_2 & 0xffff) < uVar1)) {
    DArrayGetElement(g_playerRuntime[(char)param_1].objects,param_2 & 0xffff,&param_1);
    return param_1 != 0;
  }
  return false;
}

