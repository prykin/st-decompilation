
/* [STMethodOwnerApplier] Structural method owner recovered as VisibleClassTy.
   Evidence: this_call_owners=[VisibleClassTy]; agreed_this_calls=9; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall VisibleClassTy::sub_0055B7F0(VisibleClassTy *this,int param_1,undefined *param_2)

{
  char *pcVar1;
  DArrayTy *pDVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;

  if ((((this->field_0114 != 0) && (param_2 < (undefined *)0x8)) &&
      ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
       ((byte)(&DAT_008087e9)[(int)param_2 * 0x51] < 8)))) &&
     (param_2 != (undefined *)(uint)DAT_0080874d)) {
    if (param_1 == 0) {
      if ((param_2 + 0xfc)[(int)this] == '\0') {
        return;
      }
    }
    else {
      if ((param_2 + 0xfc)[(int)this] == '\x01') {
        return;
      }
      (param_2 + 0xfc)[(int)this] = 1;
    }
    pDVar2 = this->field_0110;
    uVar4 = 0;
    if (0 < (int)pDVar2->count) {
      bVar5 = pDVar2->count != 0;
      do {
        if (bVar5) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar4) (runtime stride) */
          pcVar1 = (char *)(pDVar2->elementSize * uVar4 + (int)pDVar2->data);
        }
        else {
          pcVar1 = (char *)0x0;
        }
        piVar3 = (int *)(uint)(byte)pcVar1[1];
        if (piVar3 == (int *)param_2) {
          if (*pcVar1 == '\0') {
            if (param_1 == 0) {
              sub_00559110(this,(int)*(short *)(pcVar1 + 2),(undefined *)(int)*(short *)(pcVar1 + 4)
                           ,(int)pcVar1[6],(uint)piVar3,(uint)(byte)pcVar1[7],*(int *)(pcVar1 + 8),
                           0x4001);
            }
            else {
              sub_00558DC0(this,(int)*(short *)(pcVar1 + 2),(int)*(short *)(pcVar1 + 4),
                           (undefined *)(int)pcVar1[6],piVar3,(uint)(byte)pcVar1[7],
                           *(int **)(pcVar1 + 8),0x6009);
            }
          }
          else if (*pcVar1 == '\x01') {
            if (param_1 == 0) {
              sub_00559620(this,(int)*(short *)(pcVar1 + 2),(int)*(short *)(pcVar1 + 4),pcVar1[6],
                           (undefined *)piVar3,(uint)(byte)pcVar1[7],*(int *)(pcVar1 + 8),2);
            }
            else {
              sub_005594A0(this,(int)*(short *)(pcVar1 + 2),(int)*(short *)(pcVar1 + 4),pcVar1[6],
                           (undefined *)piVar3,(uint)(byte)pcVar1[7],*(int *)(pcVar1 + 8),2);
            }
          }
        }
        pDVar2 = this->field_0110;
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < pDVar2->count;
      } while ((int)uVar4 < (int)pDVar2->count);
    }
    if (param_1 == 0) {
      (param_2 + 0xfc)[(int)this] = 0;
    }
  }
  return;
}

