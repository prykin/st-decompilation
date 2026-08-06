#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00604fc0(void *this,AnonShape_00604A90_035626E6 *param_1)

{
  DArrayTy *pDVar1;
  int *piVar2;
  int iVar3;
  AnonShape_00604A90_035626E6 *pAVar5;
  byte *puVar6;
  uint uVar7;
  byte *puVar8;
  int *piVar9;
  int *piVar10;

  pAVar5 = param_1;
  puVar6 = (byte *)((int)this + 0x1d5);
  memmove(puVar6, pAVar5, 0x40); /* compiler REP MOVS byte copy */
  iVar3 = 0;
  STField<undefined4>(this,0x215) = *(undefined4 *)&param_1->field_0x40;
  puVar6 = (byte *)&param_1->field_0x44;
  puVar8 = (byte *)((int)this + 0x219);
  memmove(puVar8, puVar6, 0x50); /* compiler REP MOVS byte copy */
  piVar9 = (int *)&param_1->field_0xe2;
  STField<undefined4>(this,0x269) = *(undefined4 *)&param_1->field_0x94;
  STField<undefined1>(this,0x26d) = param_1->field_0x98;
  STField<undefined4>(this,0x26e) = param_1->field_0099;
  STField<undefined4>(this,0x2b7) = param_1->field_00DE;
  STField<undefined4>(this,699) = 0;
  STField<undefined4>(this,0x272) = param_1->field_009D;
  STField<undefined4>(this,0x276) = param_1->field_00A1;
  STField<undefined4>(this,0x27a) = param_1->field_00A5;
  STField<undefined4>(this,0x27e) = param_1->field_00A9;
  if (STField<int>(this,0x215) != 0) {
    iVar3 = *piVar9;
    pDVar1 = FUN_006b0060(nullptr,(uint *)&param_1[1].field_0x2);
    STField<DArrayTy *>(this,0x215) = pDVar1;
    piVar9 = (int *)(&param_1[1].field_0x2 + iVar3);
  }
  iVar3 = STField<int>(this,0x269);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (0 < iVar3) {
      piVar2 = (int *)((int)this + 0x219);
      piVar10 = piVar9;
      do {
        if (*piVar2 != 0) {
          uVar7 = uVar7 + 4 + *piVar10;
          piVar10 = (int *)((int)piVar10 + *piVar10 + 4);
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (uVar7 != 0) {
        piVar2 = Library::DKW::LIB::MemAlloc(uVar7);
        STField<int *>(this,0x2b3) = piVar2;
        memmove(piVar2, piVar9, uVar7); /* compiler REP MOVS byte copy */
      }
    }
  }
  return 0;
}

