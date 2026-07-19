
int __thiscall FUN_00714f00(void *this,char *param_1,size_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    return -0x34;
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar4 = ~uVar3 - 1;
  if ((int)param_2 <= (int)(~uVar3 - 1)) {
    sVar4 = param_2;
  }
  if (*(char **)this == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar5 = *(char **)this;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
  }
  iVar2 = FUN_00714ce0(this,uVar3 + 1 + sVar4);
  if (iVar2 == 0) {
    Library::MSVCRT::_strncat(*(char **)this,param_1,param_2);
    iVar2 = 0;
  }
  return iVar2;
}

