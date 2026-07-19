
int FUN_00672440(int param_1,int param_2,short *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  short *psVar4;
  float10 fVar5;
  InternalExceptionFrame local_64;
  int local_20;
  int *local_1c;
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
  iVar1 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (0 < iVar1) {
      iVar1 = -0x6b;
    }
    return iVar1;
  }
  _strncpy((char *)(local_1c + 1),&DAT_008016a0,0x7f);
  local_1c[0x21] = -1;
  if (param_3 != (short *)0x0) {
    psVar4 = param_3;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      psVar4[0] = 0;
      psVar4[1] = 0;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = 0;
  }
  do {
    while( true ) {
      if (local_10 != 0) {
        g_currentExceptionFrame = local_64.previous;
        return local_18;
      }
      puVar2 = (undefined1 *)thunk_FUN_0064a910(param_1,local_8);
      if (puVar2 != (undefined1 *)0x0) break;
      local_1c[0x21] = -1;
      RaiseInternalException(-4,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    switch(*puVar2) {
    case 8:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          local_1c[0x21] = -1;
          RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
        uVar3 = (**(code **)*local_1c)(puVar2);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar3;
        *param_3 = *param_3 + 1;
        param_3[2] = param_3[2] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case 9:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          local_1c[0x21] = -1;
          RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
        fVar5 = (float10)(**(code **)(*local_1c + 4))(puVar2);
        *(float *)(param_3 + *param_3 * 2 + 4) = (float)fVar5;
        *param_3 = *param_3 + 1;
        param_3[3] = param_3[3] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case 10:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          local_1c[0x21] = -1;
          RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
        uVar3 = (**(code **)(*local_1c + 8))(puVar2);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar3;
        if (*(int *)(param_3 + *param_3 * 2 + 4) == 0) {
          local_1c[0x21] = -1;
          RaiseInternalException(-0x6b,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *param_3 = *param_3 + 1;
        param_3[1] = param_3[1] + 1;
      }
      local_8 = local_8 + 1;
      break;
    case 0xb:
      local_18 = (int)*(short *)(puVar2 + 1);
      local_10 = 1;
      break;
    default:
      local_c = thunk_FUN_00671f10((int)puVar2,&local_14,&local_20);
      if (local_c == (float *)0x0) {
        local_1c[0x21] = -1;
LAB_0067276f:
        RaiseInternalException(local_14,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      else if (local_14 == 1) {
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            local_1c[0x21] = -1;
            RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
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
            local_1c[0x21] = -1;
            RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[3] = param_3[3] + 1;
        }
      }
      else {
        if (local_14 != 3) {
          local_1c[0x21] = -1;
          goto LAB_0067276f;
        }
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            local_1c[0x21] = -1;
            RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
          *(float *)(param_3 + *param_3 * 2 + 4) = *local_c;
          *param_3 = *param_3 + 1;
          param_3[1] = param_3[1] + 1;
        }
      }
      if (local_c != (float *)0x0) {
        FUN_006ab060(&local_c);
      }
      local_8 = local_8 + local_20;
    }
  } while( true );
}

