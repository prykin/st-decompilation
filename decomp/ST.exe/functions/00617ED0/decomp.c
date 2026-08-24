#include "../../pseudocode_runtime.h"


void __thiscall FUN_00617ed0(void *this,int param_1,int *param_2)

{
  int iVar1;
  STFishC *pSVar2;
  DArrayTy *pDVar3;
  int iVar3_mg1;
  undefined4 local_18;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  if (STField<int>(this,0x66) == 0) {
    pDVar3 = Library::DKW::TBL::DArrayCreate(nullptr,10,8,10);
    STField<DArrayTy *>(this,0x66) = pDVar3;
  }
  iVar1 = STField<int>(this,0x66);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    if (0 < param_1) {
      do {
        iVar3_mg1 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*param_2,
                               (int *)&local_10);
        pSVar2 = local_10;
        if (iVar3_mg1 != -4) {
          /* ST_CALLSITE[00617F3C]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0(local_10,&local_a,&local_8,&local_6);
          local_18 = pSVar2->field_0018;
          local_14 = (uint)*(ushort *)&pSVar2->field_0x32;
          Library::DKW::TBL::DArrayAppend(STField<DArrayTy *>(this,0x66),&local_18);
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}

