
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=2; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
STGroupBoatC::sub_0049A500
          (STGroupBoatC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  STGameObjC *this_00;
  uint index;
  short sVar2;
  short sVar4;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int iVar3;
  int iVar5;

  index = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (this->field_0027 != 0) {
    iVar3 = 0;
    sVar2 = 0;
    iVar5 = 0;
    sVar4 = 0;
    local_8 = 0;
    local_c = 0;
    if (uVar1 != 0) {
      do {
        DArrayGetElement((DArrayTy *)this->field_0029,index,&local_10);
        if ((short)local_10 != -1) {
          this_00 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,this->field_0024,local_10,CASE_1)
          ;
          STFishC::sub_004162B0
                    ((STFishC *)this_00,(undefined2 *)&local_14,(undefined2 *)&local_18,
                     (undefined2 *)&local_1c);
          iVar5 = iVar5 + local_14;
          iVar3 = iVar3 + local_18;
          local_8 = local_8 + local_1c;
        }
        sVar4 = (short)iVar5;
        sVar2 = (short)iVar3;
        local_c = local_c + 1;
        index = local_c & 0xffff;
      } while (index < uVar1);
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)((int)sVar4 / (int)(uint)this->field_0027);
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = (short)((int)sVar2 / (int)(uint)this->field_0027);
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = (short)((int)(short)local_8 / (int)(uint)this->field_0027);
    }
  }
  return;
}

