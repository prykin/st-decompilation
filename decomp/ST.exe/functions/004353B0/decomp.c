#include "../../pseudocode_runtime.h"


void FUN_004353b0(uint param_1,uint param_2,uint param_3)

{
  STGameObjC *pSVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STAllPlayersC *in_ECX;
  uint uVar2;
  char objPtr;

  uVar2 = (uint)DAT_0080874d;
  if (((g_packedRecords_A62x8[uVar2].field200_0x203 == 1) &&
      (g_packedRecords_A62x8[uVar2].field149_0x1b3 == 0x19a)) &&
     (objPtr = (char)param_1, *(int *)&g_packedRecords_A62x8[uVar2].field150_0x1b7 == (int)objPtr))
  {
    DArrayGetElement((DArrayTy *)g_packedRecords_A62x8[uVar2].field155_0x1bd,0,
                     (void *)((int)&param_1 + 2));
    if (STPiece<2,2>(param_1) == (ushort)param_2) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_2,CASE_1);
      pSVar1->vfunc_E8(0);
      Library::DKW::TBL::DArrayPut
                ((DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field155_0x1bd,0,&param_3);
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_3,CASE_1);
      STGameObjC::SetSelfCheckFlag(pSVar1);
      pSVar1->vfunc_E8(1);
      thunk_FUN_0043fc50(CASE_4,0);
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  return;
}

