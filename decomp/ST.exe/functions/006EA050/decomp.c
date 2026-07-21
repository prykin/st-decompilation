
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_006EA050.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=14;
   ecx_pointer_setup=14; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[16];
   expected_stack=16; receiver_family_members=2; adopt_untyped_existing_thiscall */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::FUN_006ea050
          (AnonReceiver_006EA050 *this,uint param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  if (param_1 < *(uint *)&this->field_0x310) {
    puVar1 = (uint *)(*(int *)&this->field_0x31c + param_1 * 0x114);
    uVar2 = *(uint *)(*(int *)&this->field_0x31c + param_1 * 0x114);
    if ((uVar2 & 0x8000) != 0) {
      if ((uVar2 & 0x100) != 0) {
        FreeAndNull((void **)(puVar1 + 0x2a));
      }
      if ((puVar1[1] & 1) == 0) {
        puVar3 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(puVar1[0x25] << 3);
        if (puVar3 == (undefined4 *)0x0) {
          return;
        }
        puVar5 = (undefined4 *)puVar1[0x28];
        puVar6 = puVar3;
        for (iVar4 = (puVar1[0x25] & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        puVar1[1] = puVar1[1] | 1;
        FreeAndNull((void **)(puVar1 + 0x28));
        puVar1[0x28] = (uint)puVar3;
      }
      *puVar1 = *puVar1 & 0xfffffeff | 0x200;
      *(ushort *)(puVar1 + 0x2a) = (param_4 < 1) - 1 & (ushort)param_4;
      if (param_2 < 1) {
        param_2 = 1;
      }
      *(short *)((int)puVar1 + 0xaa) = (short)param_2;
      if ((int)param_3 < 0) {
        return;
      }
      if ((param_3 < *(uint *)&this->field_0x310) &&
         ((*(byte *)(*(int *)&this->field_0x31c + 1 + param_3 * 0x114) & 0x80) != 0)) {
        FUN_006ea460(this,param_1,param_3);
        puVar1[1] = puVar1[1] | 0x100;
        return;
      }
      goto LAB_006ea174;
    }
  }
  if (param_1 == 0xffffffff) {
    return;
  }
LAB_006ea174:
  FUN_006e8c50();
  return;
}

