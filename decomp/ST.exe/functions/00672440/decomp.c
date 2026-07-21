
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0064A970.
   Evidence: incoming_receiver_captures=1; receiver_accesses=14; incoming_edx_uses=0; calls=2;
   ecx_pointer_setup=2; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=5 */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_00672440
          (AnonReceiver_0064A970 *this,int param_1,int param_2,short *param_3)

{
  AnonReceiver_0064A970 *pAVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  short *psVar5;
  float10 fVar6;
  InternalExceptionFrame local_64;
  int local_20;
  AnonReceiver_0064A970 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;

  local_8 = param_2;
  local_18 = -1;
  local_10 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  pAVar1 = local_1c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (0 < iVar2) {
      iVar2 = -0x6b;
    }
    return iVar2;
  }
  Library::MSVCRT::_strncpy(&local_1c->field_0x4,&DAT_008016a0,0x7f);
  *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
  if (param_3 != (short *)0x0) {
    psVar5 = param_3;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      psVar5[0] = 0;
      psVar5[1] = 0;
      psVar5 = psVar5 + 2;
    }
    *psVar5 = 0;
  }
  do {
    while( true ) {
      if (local_10 != 0) {
        g_currentExceptionFrame = local_64.previous;
        return local_18;
      }
      puVar3 = (undefined1 *)thunk_FUN_0064a910(param_1,local_8);
      if (puVar3 != (undefined1 *)0x0) break;
      *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
      RaiseInternalException(-4,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
    }
    switch(*puVar3) {
    case 8:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
        uVar4 = (*pAVar1->vtable->slot_00)(puVar3);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar4;
        *param_3 = *param_3 + 1;
        param_3[2] = param_3[2] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case 9:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
        fVar6 = (float10)(*pAVar1->vtable->slot_04)(puVar3);
        *(float *)(param_3 + *param_3 * 2 + 4) = (float)fVar6;
        *param_3 = *param_3 + 1;
        param_3[3] = param_3[3] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case 10:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
        uVar4 = (*pAVar1->vtable->slot_08)(puVar3);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar4;
        if (*(int *)(param_3 + *param_3 * 2 + 4) == 0) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          RaiseInternalException(-0x6b,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
        }
        *param_3 = *param_3 + 1;
        param_3[1] = param_3[1] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case 0xb:
      local_18 = (int)*(short *)(puVar3 + 1);
      local_10 = 1;
      break;
    default:
      local_c = thunk_FUN_00671f10((int)puVar3,&local_14,&local_20);
      if (local_c == (float *)0x0) {
        *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
LAB_0067276f:
        RaiseInternalException(local_14,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
      }
      else if (local_14 == 1) {
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[2] = param_3[2] + 1;
        }
      }
      else if (local_14 == 2) {
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[3] = param_3[3] + 1;
        }
      }
      else {
        if (local_14 != 3) {
          *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
          goto LAB_0067276f;
        }
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            *(undefined4 *)&pAVar1->field_0x84 = 0xffffffff;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,".\\ai\\ai_erc.h",0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[1] = param_3[1] + 1;
        }
      }
      if (local_c != (float *)0x0) {
        FreeAndNull(&local_c);
      }
      local_8 = local_8 + local_20;
    }
  } while( true );
}

