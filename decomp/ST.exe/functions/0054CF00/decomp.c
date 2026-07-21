
int __thiscall
FUN_0054cf00(void *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,int param_5)

{
  int iVar1;

  iVar1 = SystemWithNamedObjClassTy::CreateObject(this,param_1,param_2,&param_5,param_4,param_5);
  if (param_3 != (int *)0x0) {
    *param_3 = param_5;
  }
  if (iVar1 == 0) {
    thunk_FUN_0054cd90();
  }
  return iVar1;
}

