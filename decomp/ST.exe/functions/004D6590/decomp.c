#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_004d6590(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  longlong lVar9;

  psVar7 = param_4;
  psVar6 = param_3;
  uVar2 = STField<undefined4>(this,0x265);
  uVar3 = STField<undefined4>(this,0x261);
  iVar8 = (int)param_1 * 0xc;
  param_1 = (float)((int)((2 - (uint)(STField<int>(this,0x2c) != 1)) * 0xc9) / 2);
  *param_2 = *(short *)(iVar8 + STField<int>(this,0x360)) +
             (short)STField<undefined4>(this,0x25d) * 0xc9 + SUB42(param_1,0);
  *param_3 = *(short *)(iVar8 + 4 + STField<int>(this,0x360)) + (short)uVar3 * 0xc9 +
             SUB42(param_1,0);
  *param_4 = *(short *)(iVar8 + 8 + STField<int>(this,0x360)) + (short)uVar2 * 200;
  *param_5 = 0;
  ST3DSMAPContext::sub_006DD530
            (STField<ST3DSMAPContext *>(this,0x211),&param_1,(float *)&param_3,(float *)&param_4);
  lVar9 = Library::MSVCRT::__ftol();
  param_1 = (float)(short)lVar9;
  lVar9 = Library::MSVCRT::__ftol();
  param_1 = (float)(short)lVar9;
  lVar9 = Library::MSVCRT::__ftol();
  fVar4 = (float)(int)STField<short>(this,0x43) - param_1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fVar1 = (float)((float10)(int)STField<short>(this,0x41) - extraout_ST0);
  fVar5 = (float)(int)*psVar7 - (float)(short)lVar9;
  fVar5 = fVar5 * fVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((float10)(int)*param_2 - extraout_ST0) * ((float10)(int)*param_2 - extraout_ST0) +
      ((float10)(int)*psVar6 - (float10)param_1) * ((float10)(int)*psVar6 - (float10)param_1) +
      (float10)fVar5 <
      (float10)fVar4 * (float10)fVar4 + (float10)fVar1 * (float10)fVar1 + (float10)fVar5) {
    *param_5 = 0;
    return 0;
  }
  *param_5 = 1;
  return 0;
}

