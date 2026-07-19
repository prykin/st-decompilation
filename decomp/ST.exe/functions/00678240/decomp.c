
int __cdecl
FUN_00678240(int param_1,short param_2,char param_3,byte *param_4,short param_5,short param_6,
            short param_7,short param_8,short param_9,short param_10,undefined *param_11,
            undefined4 param_12)

{
  byte bVar1;
  int *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  byte *pbVar9;
  void *unaff_EDI;
  bool bVar10;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;
  
  local_18 = 0;
  if (param_3 == '\b') {
    local_5 = (char)param_1;
  }
  else if ((param_3 < '\0') || (local_5 = param_3, '\b' < param_3)) {
    local_5 = -1;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x439,0,iVar3,&DAT_007a4ccc,
                               s__EnumMines_007d2e30);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x43a);
    return iVar3;
  }
  if (DAT_007fa158 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x41f);
  }
  uVar8 = *(int *)(DAT_007fa158 + 0xc) - 1;
  iVar3 = DAT_007fa158;
  if ((int)uVar8 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (uVar8 < *(uint *)(iVar3 + 0xc)) {
      puVar4 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar8 + *(int *)(iVar3 + 0x1c));
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    this = (int *)*puVar4;
    if (((this != (int *)0x0) && (this[9] == param_1)) &&
       ((local_10 = uVar8, iVar5 = (**(code **)(*this + 0x2c))(), param_2 == 0 ||
        (iVar3 = DAT_007fa158, param_2 == iVar5)))) {
      iVar5 = 1;
      local_14 = 1;
      if ((param_4 != (byte *)0x0) && (*param_4 != 0)) {
        (**(code **)(*this + 0x74))(local_28);
        pbVar9 = local_28;
        pbVar6 = param_4;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0067835d:
            iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00678362;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0067835d;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00678362:
        if (iVar3 != 0) {
          iVar5 = 0;
          local_14 = 0;
        }
      }
      iVar3 = DAT_007fa158;
      uVar8 = local_10;
      if ((iVar5 != 0) &&
         ((local_5 == -1 ||
          (iVar7 = (**(code **)(*this + 0x6c))(), iVar3 = DAT_007fa158, uVar8 = local_10,
          local_5 == iVar7)))) {
        if ((0 < param_8) &&
           (((0 < param_9 && (0 < param_10)) &&
            ((thunk_FUN_004162b0(this,&local_8,&local_a,&local_c), local_8 < param_5 ||
             ((((local_a < param_6 || (local_c < param_7)) ||
               ((int)param_5 + (int)param_8 <= (int)local_8)) ||
              (((int)param_6 + (int)param_9 <= (int)local_a ||
               (iVar5 = local_14, (int)param_7 + (int)param_10 <= (int)local_c)))))))))) {
          iVar5 = 0;
        }
        iVar3 = DAT_007fa158;
        uVar8 = local_10;
        if (((iVar5 != 0) && (param_11 != (undefined *)0x0)) &&
           (iVar5 = (*(code *)param_11)(param_1,local_10,this,param_12), iVar3 = DAT_007fa158,
           uVar8 = local_10, iVar5 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    uVar8 = uVar8 - 1;
    if ((int)uVar8 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

