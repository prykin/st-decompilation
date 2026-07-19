
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::SendMessage */

int __thiscall AppClassTy::SendMessage(AppClassTy *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  AppClassTy *pAVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  int *local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  AppClassTy *local_c;
  int local_8;
  
  local_8 = -1;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x124,0,iVar3,&DAT_007a4ccc,
                               s_AppClassTy__SendMessage_Error___007ee8d8);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x125);
    return 0xffff;
  }
  *(uint *)(param_3 + 0xc) = param_1;
  *(int *)(param_3 + 8) = param_2;
  switch(param_1 & 0xffffff) {
  case 0:
    piVar4 = (int *)FUN_006e45a0(local_c,param_2);
    if ((piVar4 == (int *)0x0) || (((param_1 & 0x80000000) == 0 && (*piVar4 != 1))))
    goto switchD_006e3e37_caseD_4;
    iVar3 = (**(code **)(*(int *)piVar4[1] + 0x20))(param_3);
    break;
  case 1:
    iVar3 = (*local_c->vtable->vfunc_18)(param_3);
    break;
  case 2:
    iVar3 = FUN_006e3a70(local_c,param_2,(int *)0x0,&local_10);
    if ((iVar3 != 0) ||
       (((*(uint *)(param_3 + 0xc) & 0x80000000) == 0 &&
        (iVar3 = FUN_006e4d40(pAVar2,local_10[3]), iVar3 != 1)))) goto switchD_006e3e37_caseD_4;
    iVar3 = (**(code **)*local_10)(param_3);
    break;
  case 3:
    local_8 = 0;
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pAVar2 = local_c;
    if (iVar3 == 0) {
      local_1c = &local_c->field_0030;
      FUN_006b9910(local_1c,&local_18);
      iVar3 = pAVar2->field_000C;
      local_14 = 0;
      uVar7 = *(uint *)(iVar3 + 0xc);
      if (uVar7 != 0) {
        if (uVar7 == 0) {
          iVar5 = 0;
          goto LAB_006e3ef1;
        }
        do {
          iVar5 = *(int *)(iVar3 + 8) * local_14 + *(int *)(iVar3 + 0x1c);
LAB_006e3ef1:
          if (*(int *)(*(int *)(iVar5 + 4) + 4) == param_2) {
            if ((*(uint *)(param_3 + 0xc) & 0x80000000) == 0) {
              if (local_14 < uVar7) {
                iVar3 = *(int *)(iVar3 + 8) * local_14 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar3 = FUN_006e4d40(pAVar2,*(int *)(*(int *)(iVar3 + 4) + 0xc));
              if (iVar3 != 1) goto LAB_006e3f72;
            }
            iVar3 = pAVar2->field_000C;
            if (local_14 < *(uint *)(iVar3 + 0xc)) {
              iVar3 = *(int *)(iVar3 + 8) * local_14 + *(int *)(iVar3 + 0x1c);
            }
            else {
              iVar3 = 0;
            }
            iVar3 = (**(code **)**(undefined4 **)(iVar3 + 4))(param_3);
            if (iVar3 == 0xffff) {
              local_8 = 0xffff;
              break;
            }
            iVar3 = pAVar2->field_000C;
            if (local_14 < *(uint *)(iVar3 + 0xc)) {
              pbVar6 = (byte *)(*(int *)(iVar3 + 8) * local_14 + *(int *)(iVar3 + 0x1c));
            }
            else {
              pbVar6 = (byte *)0x0;
            }
            if ((*pbVar6 & 1) != 0) break;
          }
LAB_006e3f72:
          iVar3 = pAVar2->field_000C;
          local_14 = local_14 + 1;
          uVar7 = *(uint *)(iVar3 + 0xc);
        } while (local_14 < uVar7);
      }
      FUN_006b98c0(local_1c,&local_18);
      g_currentExceptionFrame = local_a4.previous;
    }
    else {
      g_currentExceptionFrame = local_a4.previous;
      FUN_006b98c0(&local_c->field_0030,&local_18);
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x10b);
    }
  default:
    goto switchD_006e3e37_caseD_4;
  case 0xf:
    local_8 = 0;
    iVar3 = (*local_c->vtable->vfunc_18)(param_3);
    if (iVar3 != 0) {
      local_8 = iVar3;
    }
    iVar3 = SendMessageToAllSystemsInArr(pAVar2,pAVar2->field_0010,param_3);
    if (iVar3 == 0) goto switchD_006e3e37_caseD_4;
  }
  local_8 = iVar3;
switchD_006e3e37_caseD_4:
  iVar3 = local_8;
  if (local_8 == 0xffff) {
    RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x122);
  }
  g_currentExceptionFrame = local_60.previous;
  return iVar3;
}

