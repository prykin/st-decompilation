#include "../../pseudocode_runtime.h"


void __fastcall FUN_0062fe00(STJellyGunC *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = (int *)&param_1->field_0x1e5;
  do {
    if (*piVar4 != 0) {
      if (*(int *)(*piVar4 + 0x10) == 0) {
        pAVar1 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
        if (pAVar1 == nullptr) {
          pAVar1 = nullptr;
        }
        else {
          pAVar1 = thunk_FUN_004ab810(pAVar1);
        }
        *(AnonShape_004AB810_8E5693D5 **)(*piVar4 + 0x10) = pAVar1;
      }
      iVar2 = thunk_FUN_0062f080(param_1,iVar3,*(undefined4 *)(*piVar4 + 0xc),
                                 *(undefined4 *)(*piVar4 + 4));
      if (iVar2 == 0) {
        if (param_1->field_01E1 == 1) {
          STRubbishC::sub_0062F900((STRubbishC *)param_1);
        }
        else {
          thunk_FUN_0062f6c0(param_1,iVar3);
        }
      }
      else {
        thunk_FUN_0062f0d0(param_1,iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 5);
  return;
}

