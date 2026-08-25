#include "../../pseudocode_runtime.h"


char * __thiscall FUN_0055ba90(void *this,char param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x110);
  uVar4 = 0;
  uVar2 = STField<uint>(iVar1,0xC);
  if (0 < (int)uVar2) {
    bVar5 = uVar2 != 0;
    do {
      if (bVar5) {
        pcVar3 = (char *)(STField<int>(iVar1,0x8) * uVar4 + STField<int>(iVar1,0x1C));
      }
      else {
        pcVar3 = nullptr;
      }
      if ((*(int *)(pcVar3 + 8) == param_2) && (*pcVar3 == param_1)) {
        return pcVar3;
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar2;
    } while ((int)uVar4 < (int)uVar2);
  }
  return nullptr;
}

