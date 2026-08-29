#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_004ea460(void *this,int param_1,RecoveredRecordView_004EA460_01FB090B *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar3_mg0;

  if (((STField<int>(this,0x245) == 4) && (STField<int>(this,0x46c) == 0)) &&
     ((param_2 != nullptr ||

      (iVar3_mg0 = STPlaySystemC::sub_006E62D0
                             (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)param_1
                              ,(int *)&param_2), iVar3_mg0 == 0)))) {
    STField<undefined4>(this,0x46c) = 1;
    STField<int>(this,0x470) = param_1;
    STField<undefined4>(this,0x48c) = 0;
    STField<undefined4>(this,0x494) = 0;
    uVar1 = param_2->field_05B0;
    STField<undefined4>(this,0x474) = uVar1;
    uVar2 = param_2->field_05B4;
    STField<undefined4>(this,0x478) = uVar2;
    iVar3 = param_2->field_05B8;
    STField<int>(this,0x47c) = iVar3;
    /* ST_CALLSITE[004EA4F0]: CALL 0x0040542a; direct=0040542A TLOBaseTy::sub_004C6C70 */
    TLOBaseTy::sub_004C6C70(this,uVar1,uVar2,iVar3 + 1);
  }
  return 0;
}

