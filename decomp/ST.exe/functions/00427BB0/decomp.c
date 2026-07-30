
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004248D0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=3; incoming_edx_uses=0; calls=5;
   ecx_pointer_setup=5; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=21; adopt_untyped_existing_thiscall */

undefined4 __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00427bb0
          (AnonReceiver_004248D0 *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_8;

  piVar4 = (int *)(param_1 * 0x10 + DAT_007f4d74);
  iVar7 = (DAT_007f4d80 + param_1) * *(int *)&this->field_0x37c + *(int *)&this->field_0x38c;
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar5 = param_1;
      local_14 = *piVar4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = piVar4[3];
      if (param_3 == -1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = piVar4[1];
      }
      else if (param_3 == 1) {
        local_14 = piVar4[2];
      }
      if (param_1 < local_14) {
        if (local_8 != 0x7fffffff) {
          sub_00427090(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar6 = *(byte *)(local_14 + DAT_007f4d7c + iVar7);
        iVar8 = local_14 + 1;
        if (iVar8 <= param_1) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 <= param_1);
        }
        if ((local_8 != 0x7fffffff) && ((iVar8 <= param_1 || (bVar6 != bVar1)))) {
          sub_00427090(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1 < iVar8) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar5;
            bVar1 = bVar6;
          }
        }
        else {
LAB_00427cca:
          iVar9 = iVar8;
          if (DAT_007f4d84 <= DAT_007f4d78) {
            pAVar2 = Library::DKW::LIB::MemRealloc(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (pAVar2 == (AnonPointee_TLOBaseTy_0607 *)0x0) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            DAT_007f4d6c = pAVar2;
          }
          pvVar3 = Library::DKW::LIB::MemAlloc(0x20);
          if (pvVar3 == (void *)0x0) {
            return 0;
          }
          (&DAT_007f4d6c->field_0008)[DAT_007f4d78 * 3] = pvVar3;
          iVar8 = sub_004248D0(this,(int)pvVar3,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar5,
                               CASE_0,CASE_1);
          iVar8 = sub_004248D0(this,(int)pvVar3,iVar8,DAT_007f4d7c + -1 + iVar9,DAT_007f4d80 + iVar5
                               ,CASE_3,CASE_2);
          (&DAT_007f4d6c->field_0004)[DAT_007f4d78 * 3] = iVar8;
          if ((bVar6 & 0x80) == 0) {
            (&DAT_007f4d6c->field_0000)[DAT_007f4d78 * 3] = 0;
          }
          else {
            (&DAT_007f4d6c->field_0000)[DAT_007f4d78 * 3] = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar9 <= param_1) {
            iVar8 = iVar9 + 1;
            bVar6 = *(byte *)(DAT_007f4d7c + iVar9 + iVar7);
            local_14 = iVar9;
            if (iVar8 <= param_1) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
                iVar8 = iVar8 + 1;
              } while (iVar8 <= param_1);
            }
            goto LAB_00427cca;
          }
        }
      }
      piVar4 = piVar4 + 4;
      iVar7 = iVar7 + *(int *)&this->field_0x37c;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = iVar5 + 1;
    } while (iVar5 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      sub_00427090(this,local_8,iVar5,param_3);
    }
  }
  return 0;
}

