#include "../../pseudocode_runtime.h"


int __thiscall FUN_0060a800(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  iVar3 = STField<int>(this,0x234);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = STField<int>(this,0x234);
        if (((uVar5 < *(uint *)(iVar3 + 0xc)) &&
            (iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c), iVar4 != 0)) &&
           (uVar2 = *(uint *)(iVar4 + 0x3c), -1 < (int)uVar2)) {
          if (param_1 == 0) {
            iVar3 = Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,uVar2,0);
            *(undefined4 *)(iVar4 + 4) = 1;
          }
          else if ((int)uVar5 < iVar1 / STField<int>(this,0x21d)) {
            iVar3 = (int)uVar5 / 3;
            if ((int)uVar5 % 3 != 0) {
              Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,uVar2);
              *(undefined4 *)(iVar4 + 4) = 0xffffffff;
              iVar3 = Library::Ourlib::ST3DSMAP::SprClose
                                (g_sT3DSMAPContext_00807598,*(uint *)(iVar4 + 0x3c));
              *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
            }
          }
          else {
            Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,uVar2);
            *(undefined4 *)(iVar4 + 4) = 0xffffffff;
            iVar3 = Library::Ourlib::ST3DSMAP::SprClose
                              (g_sT3DSMAPContext_00807598,*(uint *)(iVar4 + 0x3c));
            *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
  }
  return iVar3;
}

