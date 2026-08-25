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
    iVar1 = STField<int>(iVar3,0xC);
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = STField<int>(this,0x234);
        if (((uVar5 < STField<uint>(iVar3,0xC)) &&
            (iVar4 = STField<int>(iVar3,0x8) * uVar5 + STField<int>(iVar3,0x1C), iVar4 != 0)) &&
           (uVar2 = STField<uint>(iVar4,0x3C), -1 < (int)uVar2)) {
          if (param_1 == 0) {
            iVar3 = Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,uVar2,0);
            STField<undefined4>(iVar4,0x4) = 1;
          }
          else if ((int)uVar5 < iVar1 / STField<int>(this,0x21d)) {
            iVar3 = (int)uVar5 / 3;
            if ((int)uVar5 % 3 != 0) {
              Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,uVar2);
              STField<undefined4>(iVar4,0x4) = 0xffffffff;
              iVar3 = Library::Ourlib::ST3DSMAP::SprClose
                                (g_sT3DSMAPContext_00807598,STField<uint>(iVar4,0x3C));
              STField<undefined4>(iVar4,0x3C) = 0xffffffff;
            }
          }
          else {
            Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,uVar2);
            STField<undefined4>(iVar4,0x4) = 0xffffffff;
            iVar3 = Library::Ourlib::ST3DSMAP::SprClose
                              (g_sT3DSMAPContext_00807598,STField<uint>(iVar4,0x3C));
            STField<undefined4>(iVar4,0x3C) = 0xffffffff;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
  }
  return iVar3;
}

