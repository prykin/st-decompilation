#include "../../pseudocode_runtime.h"


/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall FUN_006315d0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  STManRuinC *this_00;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  undefined4 local_10;
  STManRuinC *local_c;
  DArrayTy *local_8;

  local_8 = *(DArrayTy **)((int)this + 0x38);
  if ((local_8 != nullptr) && (iVar7 = *(int *)((int)this + 0x34), iVar7 != 0)) {
    iVar2 = (g_worldGrid.sizeX * param_3 + param_2) * (int)g_worldGrid.sizeY + param_1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_4 == 1) {
      if (*(char *)(iVar7 + iVar2) != '\0') {
        return;
      }
    }
    else {
      if (param_4 != 4) {
        return;
      }
      iVar8 = g_worldGrid.sizeY + iVar2;
      if ((((*(char *)(iVar7 + iVar2) == '\0') && (*(char *)(iVar7 + 1 + iVar2) == '\0')) &&
          (*(char *)(iVar7 + iVar8) == '\0')) && (*(char *)(iVar7 + 1 + iVar8) == '\0')) {
        return;
      }
    }
    uVar6 = local_8->count;
    uVar9 = 0;
    if (0 < (int)uVar6) {
      bVar11 = uVar6 != 0;
      do {
        if (bVar11) {
          psVar3 = DArrayAt<short>(local_8, uVar9);
        }
        else {
          psVar3 = nullptr;
        }
        iVar7 = (int)*psVar3;
        if (psVar3[3] == 1) {
          if ((iVar7 == param_1) && (psVar3[1] == param_2)) {
            sVar1 = psVar3[2];
joined_r0x006316fc:
            if (sVar1 == param_3) {
LAB_00631713:
              if ((int)uVar9 < 0) {
                return;
              }
              if (uVar9 < uVar6) {
                puVar4 = DArrayAt<undefined4>(local_8, uVar9);
              }
              else {
                puVar4 = nullptr;
              }
              puVar10 = puVar4;
              psVar3 = &local_24;
              local_c = this;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)psVar3 = *puVar10;
                puVar10 = puVar10 + 1;
                psVar3 = psVar3 + 2;
              }
              ST3DSMAPContext::sub_006E91D0(g_sT3DSMAPContext_00807598,(int *)puVar4[4]);
              this_00 = local_c;
              iVar7 = STManRuinC::sub_00630AC0(local_c,uVar9);
              if (iVar7 == 0) {
                return;
              }
              STManRuinC::sub_00630BB0
                        (this_00,local_24,local_22,local_20,local_1c,(int)local_1e,local_10);
              this_00->field_0044 = 1;
              if ((this_00->field_0048 == 0) ||
                 (puVar5 = STManRuinC::sub_00630C50
                                     (this_00,this_00->field_0040,this_00->field_004C,1,1,0),
                 puVar5 != nullptr)) {
                this_00->field_0044 = 2;
              }
              uVar6 = STManRuinC::sub_00631880(this_00,&this_00->field_0040,this_00->field_0061);
              if (((uVar6 == 0) && (this_00->field_0048 != 0)) && (this_00->field_0061 != 0)) {
                Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this_00->field_0061);
              }
              this_00->field_0061 = -1;
              return;
            }
          }
        }
        else {
          if (((((iVar7 == param_1) && (psVar3[1] == param_2)) && (psVar3[2] == param_3)) ||
              (((iVar7 + 1 == param_1 && (psVar3[1] == param_2)) && (psVar3[2] == param_3)))) ||
             (((iVar7 == param_1 && (psVar3[1] + 1 == param_2)) && (psVar3[2] == param_3))))
          goto LAB_00631713;
          if ((iVar7 + 1 == param_1) && (psVar3[1] + 1 == param_2)) {
            sVar1 = psVar3[2];
            goto joined_r0x006316fc;
          }
        }
        uVar9 = uVar9 + 1;
        bVar11 = uVar9 < uVar6;
        if ((int)uVar6 <= (int)uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

