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
      /* ST_CALLSITE[00435421]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_2,CASE_1);
      /* ST_CALLSITE[0043542C]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
      (*pSVar1->vtable[1].vfunc_14)(pSVar1,0);
      Library::DKW::TBL::DArrayPut
                ((DArrayTy *)g_packedRecords_A62x8[DAT_0080874d].field155_0x1bd,0,&param_3);
      /* ST_CALLSITE[00435463]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      pSVar1 = STAllPlayersC::GetObjPtr(in_ECX,objPtr,(ushort)param_3,CASE_1);
      /* ST_CALLSITE[0043546C]: CALL 0x004042c8; direct=004042C8 STGameObjC::SetSelfCheckFlag */
      STGameObjC::SetSelfCheckFlag(pSVar1);
      /* ST_CALLSITE[00435477]: CALL dword ptr [EDX + 0xe8]; [STIndirectCallsiteApplier] exact slot 0xE8; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined2 */
      (*pSVar1->vtable[1].vfunc_14)(pSVar1,1);
      thunk_FUN_0043fc50(CASE_4,0);
      thunk_FUN_0043fc50(CASE_5,0);
    }
  }
  return;
}

