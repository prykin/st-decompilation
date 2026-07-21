
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=17;
   ecx_pointer_setup=17; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=21; adopt_untyped_existing_thiscall */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
          (AnonReceiver_004248D0 *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_1 < *(uint *)&this->field_0x310) {
    puVar3 = (uint *)(*(int *)&this->field_0x31c + param_1 * 0x114);
    uVar1 = *(uint *)(*(int *)&this->field_0x31c + param_1 * 0x114);
    if ((uVar1 & 0x8000) != 0) {
      uVar2 = puVar3[1];
      if (param_3 == 0) {
        if ((uVar2 & 0x8000) == 0) {
          return;
        }
        puVar3[1] = uVar2 & 0xffff7fff;
        iVar5 = 0;
        *puVar3 = uVar1 | 0x204c;
        if (0 < (int)puVar3[0x38]) {
          puVar4 = (undefined4 *)(puVar3[0x39] + 8);
          do {
            FUN_006a5e90((short *)*puVar4);
            puVar4 = puVar4 + 3;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)puVar3[0x38]);
        }
        FreeAndNull((void **)(puVar3 + 0x39));
        iVar5 = 0;
        if (0 < (int)puVar3[0x38]) {
          puVar4 = (undefined4 *)(puVar3[0x3c] + 0xc);
          do {
            FUN_006a5e90((short *)*puVar4);
            puVar4 = puVar4 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)puVar3[0x38]);
        }
        FreeAndNull((void **)(puVar3 + 0x3c));
        puVar3[0x38] = 0;
        if ((puVar3[1] & 0x40) == 0) {
          return;
        }
        puVar3 = (uint *)(*(int *)&this->field_0x31c + puVar3[7] * 0x114);
      }
      else {
        if (((((uVar2 & 0x8000) != 0) && (puVar3[0x3d] == param_3)) && (puVar3[0x3e] == param_4)) &&
           (puVar3[0x41] == param_2)) {
          return;
        }
        puVar3[1] = uVar2 | 0x8000;
        *puVar3 = uVar1 & 0xffffdfff | 0x4c;
        puVar3[0x3d] = param_3;
        puVar3[0x3e] = param_4;
        puVar3[0x41] = 0;
        if ((uVar2 & 0x40) == 0) {
          return;
        }
        puVar3 = (uint *)(*(int *)&this->field_0x31c + puVar3[7] * 0x114);
      }
      if (puVar3[2] != 0) {
        return;
      }
      if ((*puVar3 & 0x10000) == 0) {
        return;
      }
      *puVar3 = *puVar3 | 4;
      return;
    }
  }
  if (param_1 != 0xffffffff) {
    FUN_006e8c50();
  }
  return;
}

