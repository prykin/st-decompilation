
int __cdecl FUN_0072eb70(char *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x79fe6c,0x2f,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (int *)0x0) &&
     (iVar2 = FUN_00730fa0(2,0x79fe6c,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  sVar3 = _strlen(param_1);
  iVar2 = FUN_007372a0(param_2);
  uVar4 = FUN_007374c0(param_1,1,sVar3,param_2);
  FUN_00737400(iVar2,param_2);
  return -(uint)(uVar4 != sVar3);
}

