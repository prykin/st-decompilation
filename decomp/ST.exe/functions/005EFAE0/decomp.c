#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_005efae0(void *this,RecoveredRecordView_005EFAE0_855D930D *param_1)

{
  int iVar1;

  if ((STField<char>(this,0x24f) == '\0') &&

     (iVar1 = STPlaySystemC::sub_006E62D0(g_playSystem_00802A38,param_1,(int *)&param_1),
     iVar1 != -4)) {
    STField<undefined4>(this,0x2a7) = param_1->field_0018;
    STField<undefined2>(this,0x2ab) = param_1->field_0032;
    STField<undefined4>(this,0x2a3) = param_1->field_0024;
    STField<undefined1>(this,0x24f) = 1;
    if (STField<char>(this,800) == '\0') {
      return 1;
    }
    STField<undefined1>(this,800) = 0;
    return 1;
  }
  return 0;
}

