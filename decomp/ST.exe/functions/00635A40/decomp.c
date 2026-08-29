#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00635a40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (*(int *)this != 0) {
    iVar1 = *(int *)(*(int *)this + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)this;
        if (((uVar4 < STField<uint>(iVar3,0xC)) &&
            (iVar3 = STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C), iVar3 != 0)) &&
           (-1 < (int)STField<uint>(iVar3,0x4))) {
          ST3DSMAPContext::sub_006EA270
                    (g_sT3DSMAPContext_00807598,STField<uint>(iVar3,0x4),0,STField<uint>(iVar3,0x19));
          Library::Ourlib::ST3DSMAP::SprMove
                    (g_sT3DSMAPContext_00807598,STField<uint>(iVar3,0x4),
                     (float)STField<int>(iVar3,0xD) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(iVar3,0x11) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(iVar3,0x15) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
          iVar2 = STField<int>(iVar3,0x19) + 1;
          STField<int>(iVar3,0x19) = iVar2;
          if (STField<int>(iVar3,0x1D) <= iVar2) {
            STField<undefined4>(iVar3,0x19) = 0;
          }
          if (STField<int>(iVar3,0x8) == 1) {
            if (STField<char>(iVar3,0xC) == '\0') {
              Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,STField<uint>(iVar3,0x4),0);
              STField<undefined1>(iVar3,0xC) = 1;
            }
            if (param_1 == 0) {
              if (STField<char>(iVar3,0xC) != '\0') {
                uVar5 = STField<uint>(iVar3,0x4);
                goto LAB_00635b61;
              }
            }
            else if (STField<char>(iVar3,0xC) == '\0') {
              Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,STField<uint>(iVar3,0x4),0);
              STField<undefined1>(iVar3,0xC) = 1;
            }
          }
          else if (STField<char>(iVar3,0xC) != '\0') {
            uVar5 = STField<uint>(iVar3,0x4);
LAB_00635b61:
            Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,uVar5);
            STField<undefined1>(iVar3,0xC) = 0;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

