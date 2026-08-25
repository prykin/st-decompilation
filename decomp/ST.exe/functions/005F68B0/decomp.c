#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=8; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STColl3C::sub_005F68B0(STColl3C *this,undefined4 *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  int *piVar7;
  byte *puVar8;
  uint size;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 *local_8;

  if (this == nullptr) {
    puVar8 = nullptr;
  }
  else {
    puVar8 = (byte *)&this->field_0x231;
  }
  puVar6 = (byte *)(param_1);
  memmove(puVar8, puVar6, 0xc2); /* compiler REP MOVS byte copy */
  this->field_02B7 = -1;
  local_28 = Library::DKW::LIB::MemAlloc(0x44);
  iVar3 = 0;
  do {
    *(int **)(iVar3 + (int)local_28) = PTR_00806774;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x44);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0x10;
  /* ST_CALLSITE[005F692F]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
  STT3DSprC::RestoreSpr
            ((STT3DSprC *)&this->vtable_at_1d5,(int *)&local_28,
             (AnonShape_004AD790_77673787 *)((int)param_1 + 0xc6));
  /* ST_CALLSITE[005F694E]: CALL 0x00403107; direct=00403107 sub_00416240 */
  sub_00416240(this,(ushort)this->field_02C1,(short)this->field_02C5,
               (ushort)this->field_02C9);
  FreeAndNull(&local_28);
  iVar3 = STField<int>(param_1,0xc2);
  piVar7 = (int *)(&((AnonShape_004AD790_77673787 *)((int)param_1 + 0xc6))->field_0x0 + iVar3);
  /* ST_CALLSITE[005F696F]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
  STAllPlayersC::RestoreGObjData((STAllPlayersC *)this,piVar7 + 1);
  puVar8 = (byte *)((int)(piVar7 + 1) + *piVar7);
  iVar3 = iVar3 + 0xca + *piVar7;
  if (this->field_02E6 == nullptr) {
    return iVar3;
  }
  local_8 = puVar8;
  puVar1 = Library::DKW::LIB::MemAlloc(0x6c);
  this->field_02E6 = puVar1;
  for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)puVar1 = *puVar8;
    puVar8 = (byte *)(puVar8 + 1);
    puVar1 = puVar1 + 2;
  }
  puVar1 = this->field_02E6;
  iVar3 = iVar3 + 0x6c;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1 = this->field_02E6;
  puVar1[2] = 0xffff;
  puVar1[3] = 0xffff;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(this->field_02E6 + 0x2c) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar5 = *(uint *)(this->field_02E6 + 0x2e);
    size = uVar5 * 4;
    local_c = size;
    pvVar2 = Library::DKW::LIB::MemAlloc(size);
    *(void **)(this->field_02E6 + 0x2c) = pvVar2;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar8 = (byte *)(*(undefined4 **)(this->field_02E6 + 0x2c));
    for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *local_8;
      local_8 = local_8 + 1;
      puVar8 = (byte *)(puVar8 + 1);
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)local_8;
      local_8 = (undefined4 *)((int)local_8 + 1);
      puVar8 = (byte *)((int)puVar8 + 1);
    }
    return iVar3 + size;
  }
  return iVar3;
}

