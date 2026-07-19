
int thunk_FUN_00672440(int param_1,int param_2,short *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  short *psVar4;
  float10 fVar5;
  InternalExceptionFrame IStack_64;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  float *pfStack_c;
  int iStack_8;
  
  iStack_8 = param_2;
  iStack_18 = -1;
  iStack_10 = 0;
  IStack_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_64;
  iVar1 = Library::MSVCRT::__setjmp3(IStack_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = IStack_64.previous;
    if (0 < iVar1) {
      iVar1 = -0x6b;
    }
    return iVar1;
  }
  Library::MSVCRT::_strncpy((char *)(piStack_1c + 1),&DAT_008016a0,0x7f);
  piStack_1c[0x21] = -1;
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
      if (iStack_10 != 0) {
        g_currentExceptionFrame = IStack_64.previous;
        return iStack_18;
      }
      puVar2 = (undefined1 *)thunk_FUN_0064a910(param_1,iStack_8);
      if (puVar2 != (undefined1 *)0x0) break;
      piStack_1c[0x21] = -1;
      RaiseInternalException(-4,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    switch(*puVar2) {
    case 8:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          piStack_1c[0x21] = -1;
          RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
        uVar3 = (**(code **)*piStack_1c)(puVar2);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar3;
        *param_3 = *param_3 + 1;
        param_3[2] = param_3[2] + 1;
      }
      iStack_8 = iStack_8 + 1;
      break;
    case 9:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          piStack_1c[0x21] = -1;
          RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
        fVar5 = (float10)(**(code **)(*piStack_1c + 4))(puVar2);
        *(float *)(param_3 + *param_3 * 2 + 4) = (float)fVar5;
        *param_3 = *param_3 + 1;
        param_3[3] = param_3[3] + 1;
      }
      iStack_8 = iStack_8 + 1;
      break;
    case 10:
      if (param_3 != (short *)0x0) {
        if (0x31 < *param_3) {
          piStack_1c[0x21] = -1;
          RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
        uVar3 = (**(code **)(*piStack_1c + 8))(puVar2);
        *(undefined4 *)(param_3 + *param_3 * 2 + 4) = uVar3;
        if (*(int *)(param_3 + *param_3 * 2 + 4) == 0) {
          piStack_1c[0x21] = -1;
          RaiseInternalException(-0x6b,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        *param_3 = *param_3 + 1;
        param_3[1] = param_3[1] + 1;
      }
      iStack_8 = iStack_8 + 1;
      break;
    case 0xb:
      iStack_18 = (int)*(short *)(puVar2 + 1);
      iStack_10 = 1;
      break;
    default:
      pfStack_c = thunk_FUN_00671f10((int)puVar2,&iStack_14,&iStack_20);
      if (pfStack_c == (float *)0x0) {
        piStack_1c[0x21] = -1;
LAB_0067276f:
        RaiseInternalException(iStack_14,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
      }
      else if (iStack_14 == 1) {
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            piStack_1c[0x21] = -1;
            RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 8;
          *(float *)(param_3 + *param_3 * 2 + 4) = *pfStack_c;
          *param_3 = *param_3 + 1;
          param_3[2] = param_3[2] + 1;
        }
      }
      else if (iStack_14 == 2) {
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            piStack_1c[0x21] = -1;
            RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 9;
          *(float *)(param_3 + *param_3 * 2 + 4) = *pfStack_c;
          *param_3 = *param_3 + 1;
          param_3[3] = param_3[3] + 1;
        }
      }
      else {
        if (iStack_14 != 3) {
          piStack_1c[0x21] = -1;
          goto LAB_0067276f;
        }
        if (param_3 != (short *)0x0) {
          if (0x31 < *param_3) {
            piStack_1c[0x21] = -1;
            RaiseInternalException(-0x66,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          }
          *(undefined1 *)(*param_3 + 0xd0 + (int)param_3) = 10;
          *(float *)(param_3 + *param_3 * 2 + 4) = *pfStack_c;
          *param_3 = *param_3 + 1;
          param_3[1] = param_3[1] + 1;
        }
      }
      if (pfStack_c != (float *)0x0) {
        FUN_006ab060(&pfStack_c);
      }
      iStack_8 = iStack_8 + iStack_20;
    }
  } while( true );
}

