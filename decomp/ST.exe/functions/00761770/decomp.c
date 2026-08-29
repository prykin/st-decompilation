#include "../../pseudocode_runtime.h"


void FUN_00761770(RecoveredRecord_00761770_BECA703F *param_1,
                 RecoveredRecord_00761770_EA1E009F *param_2,int *param_3,int *param_4,int param_5)

{
  *(undefined1 *)(*param_4 + param_5) =
       *(undefined1 *)
        ((*param_2->field_0050 * *param_3 + 4 >> 3 & 0x3ffU) + 0x80 + param_1->field_0132);
  return;
}

