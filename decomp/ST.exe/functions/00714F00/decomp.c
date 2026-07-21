
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00714F00 -> 0072ED50 @ 00714F5B */

int __thiscall FUN_00714f00(void *this,char *source,size_t param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (source == (char *)0x0) {
    return -0x34;
  }
  uVar3 = 0xffffffff;
  pcVar5 = source;
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
  iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00714CE0::FUN_00714ce0
                    (this,uVar3 + 1 + sVar4);
  if (iVar2 == 0) {
    Library::MSVCRT::_strncat(*(char **)this,source,param_2);
    iVar2 = 0;
  }
  return iVar2;
}

