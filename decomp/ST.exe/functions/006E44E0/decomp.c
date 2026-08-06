#include "../../pseudocode_runtime.h"


int __thiscall FUN_006e44e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_006E4480_50BB219F local_10;

  iVar2 = 0;
  *(undefined4 *)(STField<int>(this,0x10) + 4) = 0;
  iVar1 = DArrayGetNext(STField<DArrayTy *>(this,0x10),(byte *)&local_10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  while (((-1 < iVar1 && (iVar2 = STPiece<4,4>(local_10), *(int *)(STPiece<4,4>(local_10) + 0x14) != param_1)) &&
         (iVar2 = FUN_006e4480(&local_10,param_1), iVar2 == 0))) {
    iVar1 = DArrayGetNext(STField<DArrayTy *>(this,0x10),(byte *)&local_10);
  }
  return iVar2;
}

