
int __thiscall FUN_00714f70(void *this,char *param_1)

{
  char cVar1;
  int iVar2;

  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    cVar1 = param_1[1];
    param_1[1] = '\0';
    iVar2 = FUN_00714e80(this,param_1);
    param_1[1] = cVar1;
    return iVar2;
  }
  return -0x34;
}

