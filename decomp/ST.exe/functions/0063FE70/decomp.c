#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0063fe70(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;

  if (STField<int>(this,0x336) != 0) {
    iVar1 = *(int *)(STField<int>(this,0x336) + 0xc);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = STField<int>(this,0x336);
        if (((local_8 < STField<uint>(iVar5,0xC)) &&
            (iVar5 = STField<int>(iVar5,0x8) * local_8 + STField<int>(iVar5,0x1C), iVar5 != 0)) &&
           (uVar2 = STField<uint>(iVar5,0x38), -1 < (int)uVar2)) {
          iVar4 = STField<int>(iVar5,0x4);
          if ((iVar4 == 1) || (iVar4 == 3)) {
            if ((param_1 != '\0') || (iVar4 == 3)) {
              STField<undefined4>(iVar5,0x4) = 0;
              ST3DSMAPContext::sub_006EA270
                        (STField<ST3DSMAPContext *>(this,0x211),uVar2,0,STField<uint>(iVar5,0x20));
              Library::Ourlib::ST3DSMAP::SprMove
                        (STField<void *>(this,0x211),STField<uint>(iVar5,0x38),
                         (float)STField<int>(iVar5,0x8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)STField<int>(iVar5,0xC) * _DAT_007904f8 * _DAT_007904f0,
                         STField<float>(iVar5,0x10) + _DAT_007904fc);
              Library::Ourlib::ST3DSMAP::SprShow
                        (STField<void *>(this,0x211),STField<uint>(iVar5,0x38),0);
            }
          }
          else if (iVar4 != 2) {
            if ((int)local_8 < 0x3c) {
              STField<uint>(iVar5,0x30) = g_playSystem_00802A38->field_00E4;
              iVar4 = STField<int>(iVar5,0x24) + -1;
              if (STField<int>(iVar5,0x20) < iVar4) {
                STField<int>(iVar5,0x20) = STField<int>(iVar5,0x20) + 1;
              }
              else {
                STField<int>(iVar5,0x20) = iVar4;
              }
              ST3DSMAPContext::sub_006EA270
                        (STField<ST3DSMAPContext *>(this,0x211),uVar2,0,STField<uint>(iVar5,0x20));
              Library::Ourlib::ST3DSMAP::SprMove
                        (STField<void *>(this,0x211),STField<uint>(iVar5,0x38),
                         (float)STField<int>(iVar5,0x8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)STField<int>(iVar5,0xC) * _DAT_007904f8 * _DAT_007904f0,
                         STField<float>(iVar5,0x10) + _DAT_007904fc);
            }
            else {
              uVar3 = g_playSystem_00802A38->field_00E4;
              if ((1 < uVar3 - STField<uint>(iVar5,0x30)) || (uVar3 == STField<uint>(iVar5,0x30))) {
                STField<uint>(iVar5,0x30) = uVar3;
                iVar4 = STField<int>(iVar5,0x24) + -1;
                if (STField<int>(iVar5,0x20) < iVar4) {
                  STField<int>(iVar5,0x20) = STField<int>(iVar5,0x20) + 1;
                }
                else {
                  STField<int>(iVar5,0x20) = iVar4;
                }
                ST3DSMAPContext::sub_006EA270
                          (STField<ST3DSMAPContext *>(this,0x211),uVar2,0,STField<uint>(iVar5,0x20));
              }
              Library::Ourlib::ST3DSMAP::SprMove
                        (STField<void *>(this,0x211),STField<uint>(iVar5,0x38),
                         (float)STField<int>(iVar5,0x8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)STField<int>(iVar5,0xC) * _DAT_007904f8 * _DAT_007904f0,
                         STField<float>(iVar5,0x10) + _DAT_007904fc);
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
    if ((STField<uint *>(this,0x37f) != nullptr) &&
       (uVar2 = *STField<uint *>(this,0x37f), -1 < (int)uVar2)) {
      Library::Ourlib::ST3DSMAP::FUN_006e96d0(STField<void *>(this,0x211),uVar2);
    }
  }
  return;
}

