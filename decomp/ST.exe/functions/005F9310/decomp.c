#include "../../pseudocode_runtime.h"


undefined1 __thiscall FUN_005f9310(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = STField<int>(this,0x2c1);
  iVar3 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
  iVar4 = STField<int>(this,0x2c5);
  iVar4 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
  iVar2 = STField<int>(this,0x2c9);
  iVar2 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
  if (g_manRub3_008117A4 != nullptr) {
    iVar3 = thunk_FUN_0062d2d0(g_manRub3_008117A4,STField<int>(this,0x235),iVar3,iVar4,iVar2,
                               (int *)((int)this + 0x27d),param_1);
    if (iVar3 != 0) {
      STField<undefined1>(this,0x29e) = 1;
      return STField<undefined1>(this,0x29e);
    }
  }
  if (STField<char>(this,0x29e) != '\0') {
    STColl3C::sub_005F9450(this);
  }
  return STField<undefined1>(this,0x29e);
}

