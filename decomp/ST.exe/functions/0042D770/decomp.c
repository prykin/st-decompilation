#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0042D776 MOVSX EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] ecx_context_register target=function:-1: prototype=uint __stdcall
   FUN_0042d770(STAllPlayersC * context, char param_2, int * param_3) previous_return_type=/uint
   Evidence: incoming ECX reaches only unadjusted __thiscall receivers of /STAllPlayersC;
   receiver_calls=1; exact RET purge=8 matches declared stack bytes=8; sites=0042D806 ->
   STAllPlayersC::GetObjPtr receiver=/STAllPlayersC
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/char
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

uint FUN_0042d770(STAllPlayersC *context,char param_2,int *param_3)

{
  DArrayTy *array;
  dword dVar1;
  uint uVar2;
  ushort uVar3;
  DArrayTy *pDVar4;
  STGameObjC *objPtr;
  int iVar5;
  STGroupBoatC *this;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint index;
  uint local_28;
  STAllPlayersC *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  uint local_c;
  short local_8;
  short local_6;

  local_18 = 0xffff;
  array = (DArrayTy *)g_packedRecords_A62x8[param_2].field102_0x16d;
  local_1c = 1;
  local_20 = 1;
  local_24 = context;
  pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  *param_3 = (int)pDVar4;
  dVar1 = array->count;
  if (dVar1 == 0) {
    return STReplaceLowWord((uint32_t)(pDVar4), (uint16_t)(0xffff));
  }
  pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  local_14 = 0;
  local_10 = pDVar4;
  if (0 < (int)dVar1) {
    do {

      DArrayGetElement(array,local_14,&local_c);
      if ((ushort)local_c != 0xffff) {
        /* ST_CALLSITE[0042D806]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        objPtr = STAllPlayersC::GetObjPtr(local_24,param_2,(ushort)local_c,CASE_1);

        iVar5 = thunk_FUN_00493cd0(objPtr);
        pDVar4 = local_10;
        if ((iVar5 == 0) &&
           (local_28 = STReplaceLowWord((uint32_t)(objPtr), (uint16_t)(objPtr->field_0030)),
           objPtr->field_0030 != -1)) {
          local_1c = iVar5;

          Library::DKW::TBL::DArrayAppend(local_10,&local_28);

          Library::DKW::TBL::DArrayAppend((DArrayTy *)*param_3,&local_c);
          pDVar4 = local_10;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)dVar1);
    if (local_1c == 0) {
      uVar2 = pDVar4->count;
      if (1 < uVar2) {

        DArrayGetElement(pDVar4,0,&local_8);
        index = 1;
        if (1 < (int)uVar2) {
          do {

            DArrayGetElement(pDVar4,index,&local_6);
            if (local_6 != local_8) {
              local_20 = 0;
              break;
            }
            index = index + 1;
          } while ((int)index < (int)uVar2);
        }
      }
      local_18 = 0x7fff;
      if (local_20 == 1) {

        DArrayGetElement(pDVar4,0,&local_c);
        this = thunk_FUN_0042b760(param_2,(ushort)local_c);
        /* ST_CALLSITE[0042D8CF]: CALL 0x00401735; direct=00401735 STGroupBoatC::sub_004233C0 */
        uVar3 = STGroupBoatC::sub_004233C0(this);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((uint)uVar3 == *(uint *)(*param_3 + 0xc)) {
          local_18 = local_c;
        }
      }
    }
  }
  DArrayDestroy(pDVar4);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return CONCAT22(extraout_var,(undefined2)local_18);
}

