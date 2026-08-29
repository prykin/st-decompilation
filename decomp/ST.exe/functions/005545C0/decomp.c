#include "../../pseudocode_runtime.h"


int * __fastcall FUN_005545c0(int *param_1)

{
  int iVar2;
  RecoveredRecord_007111C0_C04D120D *resourceString;
  int iVar1;

  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = *(int *)(*param_1 + 4);
  iVar2 = param_1[2];
  param_1[8] = *(int *)(*param_1 + 8);
  param_1[9] = 0;
  param_1[0xb] = 1;
  param_1[10] = 1;
  STField<undefined4>(iVar2,0x58) = 1;
  STField<undefined4>(iVar2,0x5C) = 1;
  /* ST_CALLSITE[00554603]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_007111C0_C04D120D;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
  resourceString = LoadResourceString(0x267a,g_hINSTANCE_00807618);

  iVar1 = FUN_007111c0((void *)param_1[2],resourceString);
  param_1[0xe] = 0;
  param_1[0xd] = param_1[0xb] + iVar1;
  param_1[0x10] = 1;
  param_1[0xc] = param_1[8] / (param_1[0xb] + iVar1);
  param_1[0xf] = -1;
  param_1[0x14] = -1;
  return param_1;
}

