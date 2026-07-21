
int __thiscall FUN_00714e20(void *this,char *param_1,size_t param_2)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    return -0x34;
  }
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar2 = ~uVar4 - 1;
  if ((int)param_2 <= (int)(~uVar4 - 1)) {
    sVar2 = param_2;
  }
  iVar3 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00714CE0::FUN_00714ce0
                    (this,sVar2 + 1);
  if (iVar3 == 0) {
    Library::MSVCRT::_strncpy(*(char **)this,param_1,param_2);
    iVar3 = 0;
  }
  return iVar3;
}

