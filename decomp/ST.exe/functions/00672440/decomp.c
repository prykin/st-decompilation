
int __thiscall FUN_00672440(void *this,int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  short *psVar5;
  float10 fVar6;
  short *in_stack_0000000c;
  InternalExceptionFrame local_64;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  short *local_8;
  
  local_8 = param_2;
  local_18 = -1;
  local_10 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  piVar1 = local_1c;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (0 < iVar2) {
      iVar2 = -0x6b;
    }
    return iVar2;
  }
  Library::MSVCRT::_strncpy((char *)(local_1c + 1),&DAT_008016a0,0x7f);
  piVar1[0x21] = -1;
  if (in_stack_0000000c != (short *)0x0) {
    psVar5 = in_stack_0000000c;
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
      puVar3 = (undefined1 *)thunk_FUN_0064a910(param_1,(int)local_8);
      if (puVar3 != (undefined1 *)0x0) break;
      piVar1[0x21] = -1;
      RaiseInternalException(-4,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
    }
    switch(*puVar3) {
    case 8:
      if (in_stack_0000000c != (short *)0x0) {
        if (0x31 < *in_stack_0000000c) {
          piVar1[0x21] = -1;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*in_stack_0000000c + 0xd0 + (int)in_stack_0000000c) = 8;
        uVar4 = (**(code **)*piVar1)(puVar3);
        *(undefined4 *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) = uVar4;
        *in_stack_0000000c = *in_stack_0000000c + 1;
        in_stack_0000000c[2] = in_stack_0000000c[2] + 1;
      }
      local_8 = (short *)((int)local_8 + 1);
      break;
    case 9:
      if (in_stack_0000000c != (short *)0x0) {
        if (0x31 < *in_stack_0000000c) {
          piVar1[0x21] = -1;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*in_stack_0000000c + 0xd0 + (int)in_stack_0000000c) = 9;
        fVar6 = (float10)(**(code **)(*piVar1 + 4))(puVar3);
        *(float *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) = (float)fVar6;
        *in_stack_0000000c = *in_stack_0000000c + 1;
        in_stack_0000000c[3] = in_stack_0000000c[3] + 1;
      }
      local_8 = (short *)((int)local_8 + 1);
      break;
    case 10:
      if (in_stack_0000000c != (short *)0x0) {
        if (0x31 < *in_stack_0000000c) {
          piVar1[0x21] = -1;
          RaiseInternalException(-0x66,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*in_stack_0000000c + 0xd0 + (int)in_stack_0000000c) = 10;
        uVar4 = (**(code **)(*piVar1 + 8))(puVar3);
        *(undefined4 *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) = uVar4;
        if (*(int *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) == 0) {
          piVar1[0x21] = -1;
          RaiseInternalException(-0x6b,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *in_stack_0000000c = *in_stack_0000000c + 1;
        in_stack_0000000c[1] = in_stack_0000000c[1] + 1;
      }
      local_8 = (short *)((int)local_8 + 1);
      break;
    case 0xb:
      local_18 = (int)*(short *)(puVar3 + 1);
      local_10 = 1;
      break;
    default:
      local_c = thunk_FUN_00671f10((int)puVar3,&local_14,&local_20);
      if (local_c == (float *)0x0) {
        piVar1[0x21] = -1;
LAB_0067276f:
        RaiseInternalException(local_14,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
      }
      else if (local_14 == 1) {
        if (in_stack_0000000c != (short *)0x0) {
          if (0x31 < *in_stack_0000000c) {
            piVar1[0x21] = -1;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*in_stack_0000000c + 0xd0 + (int)in_stack_0000000c) = 8;
          *(float *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) = *local_c;
          *in_stack_0000000c = *in_stack_0000000c + 1;
          in_stack_0000000c[2] = in_stack_0000000c[2] + 1;
        }
      }
      else if (local_14 == 2) {
        if (in_stack_0000000c != (short *)0x0) {
          if (0x31 < *in_stack_0000000c) {
            piVar1[0x21] = -1;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*in_stack_0000000c + 0xd0 + (int)in_stack_0000000c) = 9;
          *(float *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) = *local_c;
          *in_stack_0000000c = *in_stack_0000000c + 1;
          in_stack_0000000c[3] = in_stack_0000000c[3] + 1;
        }
      }
      else {
        if (local_14 != 3) {
          piVar1[0x21] = -1;
          goto LAB_0067276f;
        }
        if (in_stack_0000000c != (short *)0x0) {
          if (0x31 < *in_stack_0000000c) {
            piVar1[0x21] = -1;
            RaiseInternalException(-0x66,g_overwriteContext_007ED77C,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*in_stack_0000000c + 0xd0 + (int)in_stack_0000000c) = 10;
          *(float *)(in_stack_0000000c + *in_stack_0000000c * 2 + 4) = *local_c;
          *in_stack_0000000c = *in_stack_0000000c + 1;
          in_stack_0000000c[1] = in_stack_0000000c[1] + 1;
        }
      }
      if (local_c != (float *)0x0) {
        FUN_006ab060(&local_c);
      }
      local_8 = (short *)((int)local_8 + local_20);
    }
  } while( true );
}

