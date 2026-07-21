
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_00636260.
   Evidence: incoming_receiver_captures=1; receiver_accesses=16; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[28];
   expected_stack=28; receiver_family_members=2; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00636260::FUN_00636260
          (AnonReceiver_00636260 *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 local_50 [13];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  AnonReceiver_00636260 *local_8;
  
  *(uint *)&this->field_0xc = param_1;
  *(int *)&this->field_0x10 = param_2;
  *(int *)&this->field_0x14 = param_3;
  *(int *)&this->field_0x18 = param_4;
  *(int *)&this->field_0x1c = param_4;
  *(undefined4 *)&this->field_0x30 = PTR_00802a38->field_00E4;
  local_8 = this;
  iVar1 = thunk_FUN_00636fc0((AnonShape_00636FC0_24F8974B *)this);
  *(int *)&this->field_0x28 = iVar1;
  *(int *)&this->field_0x4 = param_7;
  if (param_7 != 0) {
    if (param_7 == 1) {
      *(undefined4 *)&this->field_0x20 = 0x11;
      goto LAB_006362c5;
    }
    if (param_7 != 2) goto LAB_006362c5;
  }
  *(undefined4 *)&this->field_0x20 = 0x16;
LAB_006362c5:
  puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,param_5 * param_6,0x32,10);
  *(uint **)&this->field_0x2c = puVar2;
  if ((puVar2 != (uint *)0x0) && (0 < param_4)) {
    *(int *)this = param_5;
    *(int *)&this->field_0x8 = param_6;
    puVar5 = local_50;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    Library::DKW::TBL::FUN_006ae140(puVar2,param_5 * param_6 - 1,local_50);
    param_1 = 0;
    local_c = _DAT_0079c5a4 / (float)param_5;
    if (0 < param_5) {
      do {
        fcos((float10)(int)param_1 * (float10)local_c);
        fsin((float10)(int)param_1 * (float10)local_c);
        lVar7 = Library::MSVCRT::__ftol();
        local_18 = (undefined4)lVar7;
        lVar7 = Library::MSVCRT::__ftol();
        local_1c = (undefined4)lVar7;
        lVar7 = Library::MSVCRT::__ftol();
        local_10 = (undefined4)lVar7;
        lVar7 = Library::MSVCRT::__ftol();
        local_14 = (undefined4)lVar7;
        if (0 < param_6) {
          param_4 = param_6;
          uVar6 = param_1;
          do {
            iVar1 = *(int *)&this->field_0x2c;
            if (uVar6 < *(uint *)(iVar1 + 0xc)) {
              piVar4 = (int *)(*(int *)(iVar1 + 8) * uVar6 + *(int *)(iVar1 + 0x1c));
            }
            else {
              piVar4 = (int *)0x0;
            }
            *piVar4 = param_7;
            if (*(int *)&local_8->field_0x28 == 0) {
              piVar4[1] = -1;
            }
            else {
              uVar3 = thunk_FUN_006364b0(*(int *)&local_8->field_0x4);
              piVar4[1] = uVar3;
            }
            *(undefined4 *)((int)piVar4 + 0x12) = local_14;
            *(undefined4 *)((int)piVar4 + 0xe) = local_10;
            *(undefined4 *)((int)piVar4 + 0x26) = local_18;
            *(int *)((int)piVar4 + 0x22) = param_6;
            *(int *)((int)piVar4 + 0x16) = param_3;
            uVar6 = uVar6 + param_5;
            param_4 = param_4 + -1;
            piVar4[2] = 0;
            *(undefined1 *)((int)piVar4 + 0xd) = 0;
            *(undefined4 *)((int)piVar4 + 0x1a) = 0;
            *(undefined4 *)((int)piVar4 + 0x1e) = 0;
            *(undefined4 *)((int)piVar4 + 0x2a) = local_1c;
            *(undefined4 *)((int)piVar4 + 0x2e) = 0;
            this = local_8;
          } while (param_4 != 0);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < param_5);
    }
  }
  return 0;
}

