
int __cdecl
FUN_00677960(short param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
            short param_7,undefined *param_8,undefined4 param_9)

{
  int *this;
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_14 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = __setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x37f,0,iVar2,&DAT_007a4ccc,
                               s__EnumRCField_007d2e04);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x380);
    return iVar2;
  }
  if (DAT_007fa15c == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x36b);
  }
  uVar5 = *(int *)(DAT_007fa15c + 0xc) - 1;
  if (-1 < (int)uVar5) {
    do {
      if (uVar5 < *(uint *)(DAT_007fa15c + 0xc)) {
        puVar3 = (undefined4 *)(*(int *)(DAT_007fa15c + 8) * uVar5 + *(int *)(DAT_007fa15c + 0x1c));
      }
      else {
        puVar3 = (undefined4 *)0x0;
      }
      this = (int *)*puVar3;
      if ((this != (int *)0x0) &&
         ((local_10 = uVar5, param_1 == 0 ||
          (iVar2 = (**(code **)(*this + 0x2c))(), param_1 == iVar2)))) {
        iVar2 = 1;
        local_18 = 1;
        if ((0 < param_5) &&
           (((0 < param_6 && (0 < param_7)) &&
            ((thunk_FUN_004162b0(this,&local_6,&local_8,&local_a), local_6 < param_2 ||
             ((((local_8 < param_3 || (local_a < param_4)) ||
               ((int)param_2 + (int)param_5 <= (int)local_6)) ||
              (((int)param_3 + (int)param_6 <= (int)local_8 ||
               (iVar2 = local_18, (int)param_4 + (int)param_7 <= (int)local_a)))))))))) {
          iVar2 = 0;
        }
        uVar5 = local_10;
        if (((iVar2 != 0) && (param_8 != (undefined *)0x0)) &&
           (iVar2 = (*(code *)param_8)(0,local_10,this,param_9), iVar2 != 0)) {
          g_currentExceptionFrame = local_5c.previous;
          return -1;
        }
      }
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
        g_currentExceptionFrame = local_5c.previous;
        return local_14;
      }
    } while( true );
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_14;
}

