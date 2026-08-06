#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00640390(void *this,int param_1)

{
  int iVar1;

  if ((-1 < (int)STField<uint>(this,0x33a)) &&
     (((g_playSystem_00802A38->field_00E4 & 1) == 0 || (param_1 != 0)))) {
    ST3DSMAPContext::sub_006EA270
              (STField<ST3DSMAPContext *>(this,0x211),STField<uint>(this,0x33a),0,
               STField<uint>(this,0x33e));
    Library::Ourlib::ST3DSMAP::SprMove
              (STField<void *>(this,0x211),STField<uint>(this,0x33a),
               (float)(int)STField<short>(this,0x253) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x255) * _DAT_007904f8 * _DAT_007904f0,
               STField<float>(this,0x332) + _DAT_007904fc);
    iVar1 = STField<int>(this,0x33e) + 1;
    STField<int>(this,0x33e) = iVar1;
    if (STField<int>(this,0x342) <= iVar1) {
      Library::Ourlib::ST3DSMAP::SprClose
                (STField<void *>(this,0x211),STField<uint>(this,0x33a));
      STField<undefined4>(this,0x33a) = 0xffffffff;
    }
  }
  return;
}

