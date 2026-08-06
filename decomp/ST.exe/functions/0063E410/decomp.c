#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_0063e410(AnonShape_0063E410_6FBC68F2 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  uint local_8;

  if (param_1->field_0336 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1->field_0336 + 0xc);
    iVar5 = param_1->field_02C0;
    if ((iVar5 < 1) || (0x4a < iVar5)) {
      local_c = (iVar5 + 5) % 10;
      local_10 = param_1->field_02BC + local_c;
    }
    else {
      local_c = (iVar5 + -1) * param_1->field_02BC;
      local_10 = param_1->field_02BC + local_c;
    }
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = param_1->field_0336;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((local_8 < *(uint *)(iVar5 + 0xc)) &&
            (iVar5 = *(int *)(iVar5 + 8) * local_8 + *(int *)(iVar5 + 0x1c), iVar5 != 0)) &&
           (uVar2 = *(uint *)(iVar5 + 0x38), -1 < (int)uVar2)) {
          if (*(int *)(iVar5 + 4) == 1) {
            if ((local_c <= (int)local_8) && ((int)local_8 < local_10)) {
              *(undefined4 *)(iVar5 + 4) = 0;
              ST3DSMAPContext::sub_006EA270
                        (param_1->field_0211,uVar2,0,
                         *(uint *)(&DAT_007d1f98 + *(int *)(iVar5 + 0x20) * 4));
              Library::Ourlib::ST3DSMAP::SprMove
                        (param_1->field_0211,*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
              Library::Ourlib::ST3DSMAP::SprShow(param_1->field_0211,*(uint *)(iVar5 + 0x38),0);
            }
          }
          else {
            uVar3 = g_playSystem_00802A38->field_00E4;
            if ((1 < uVar3 - *(uint *)(iVar5 + 0x30)) || (uVar3 == *(uint *)(iVar5 + 0x30))) {
              *(uint *)(iVar5 + 0x30) = uVar3;
              iVar4 = *(int *)(iVar5 + 0x24) + -1;
              if (*(int *)(iVar5 + 0x20) < iVar4) {
                *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + 1;
              }
              else {
                *(int *)(iVar5 + 0x20) = iVar4;
              }
              ST3DSMAPContext::sub_006EA270
                        (param_1->field_0211,uVar2,0,
                         *(uint *)(&DAT_007d1f98 + *(int *)(iVar5 + 0x20) * 4));
              Library::Ourlib::ST3DSMAP::SprMove
                        (param_1->field_0211,*(uint *)(iVar5 + 0x38),
                         (float)*(int *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar5 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         *(float *)(iVar5 + 0x10) + _DAT_007904fc);
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
  }
  return;
}

