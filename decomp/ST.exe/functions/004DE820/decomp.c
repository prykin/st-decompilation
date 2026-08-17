#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004de820(AnonShape_004DE820_615D04DD *param_1)

{
  bool bVar1;
  int iVar3;
  STGroupBoatC *this;
  DArrayTy *array;
  int iVar2;
  STGameObjC *this_00;
  int local_EAX_212;
  int local_EAX_229;
  int local_EAX_250;
  int local_EAX_267;
  undefined4 local_8;

  iVar3 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\f');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (iVar3 != *(int *)(param_1->field_01F5 + 0x1c4)) {
    return 0;
  }
  /* ST_CALLSITE[004DE857]: CALL dword ptr [EDX + 0x90] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_0000 + 0x90))(3,0x273);
  bVar1 = false;
  this = thunk_FUN_0042b760(param_1->field_0x24,*(ushort *)&param_1->field_0x30);
  if (((this != nullptr) &&
      /* ST_CALLSITE[004DE87D]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
      (array = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this), array != nullptr))
     && (array->count != 0)) {
    array->iteratorIndex = 0;
    iVar2 = DArrayGetNext(array,(byte *)&local_8);
    while (-1 < iVar2) {
      /* ST_CALLSITE[004DE8BF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
      this_00 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,param_1->field_0x24,(ushort)local_8,CASE_1);
      if (((this_00 != nullptr) &&
          /* ST_CALLSITE[004DE8D2]: CALL dword ptr [EDX + 0x2c] */
          (iVar3 = this_00->vfunc_2C(), iVar3 == 0x45)) &&
         ((this_00->field_04D0 == 0 &&
          /* ST_CALLSITE[004DE8F4]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
          ((local_EAX_212 = TLOBaseTy::sub_004C7860((TLOBaseTy *)this_00,3,0,1,1,1),
           local_EAX_212 != 0 &&
           (local_EAX_229 = thunk_FUN_004c7c20((TLOBaseTy *)this_00), local_EAX_229 != 0)))))) {
        /* ST_CALLSITE[004DE91A]: CALL 0x00405ace; direct=00405ACE TLOBaseTy::sub_004C7860 */
        local_EAX_250 = TLOBaseTy::sub_004C7860((TLOBaseTy *)this_00,3,0,1,1,1);
        if ((local_EAX_250 != 0) &&
           (local_EAX_267 = thunk_FUN_004c7c20((TLOBaseTy *)this_00), local_EAX_267 != 0)) {
          TLOBaseTy::thunk_FUN_004c7cc0((TLOBaseTy *)this_00,3,0,1,0,0xffffffff,0,0xff,nullptr);
          this_00->field_04D0 = 2;
          /* ST_CALLSITE[004DE95C]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
          TLOBaseTy::RotateSpr((TLOBaseTy *)this_00,0);
        }
        bVar1 = true;
      }
      iVar2 = DArrayGetNext(array,(byte *)&local_8);
    }
    DArrayDestroy(array);
    if (bVar1) {
      return 1;
    }
  }
  iVar3 = *(int *)&param_1->field_0x24;
  *(int *)&param_1[2].field_0xde = *(int *)&param_1[2].field_0xde + 1;
  g_packedRecords_A62x8[iVar3].field1600_0x7d6 = g_packedRecords_A62x8[iVar3].field1600_0x7d6 + 1;
  return 1;
}

