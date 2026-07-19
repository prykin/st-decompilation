
/* Recovered from embedded debug metadata:
   E:\Ourlib\_strack.cpp
   TrackbarClassTy::GetMessage */

int __thiscall TrackbarClassTy::GetMessage(TrackbarClassTy *this,int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  ControlClassTy *this_00;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  uint uVar8;
  void *unaff_EDI;
  ControlClassTy *pCVar9;
  uint uVar10;
  InternalExceptionFrame local_7c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  ControlClassTy *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_14 = (ControlClassTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib__strack_cpp_007f0c20,0xc9,0,iVar4,&DAT_007a4ccc,
                               s_TrackbarClassTy__GetMessage_Erro_007f0bfc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(0xffff,0,s_E__Ourlib__strack_cpp_007f0c20,0xca);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    puVar1 = (undefined4 *)param_1[5];
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(local_14 + 0x20) = *puVar1;
      *(undefined4 *)(local_14 + 0x188) = puVar1[1];
      *(undefined4 *)(local_14 + 0x1c) = puVar1[2];
      *(undefined4 *)(local_14 + 0x24) = puVar1[3];
      *(undefined4 *)(local_14 + 0x28) = puVar1[4];
      *(undefined4 *)(local_14 + 0x2c) = puVar1[5];
      *(undefined4 *)(local_14 + 0x30) = puVar1[6];
      *(undefined4 *)(local_14 + 0x13c) = puVar1[7];
      *(undefined4 *)(local_14 + 0x140) = puVar1[8];
      *(undefined4 *)(local_14 + 0x144) = puVar1[9];
      puVar7 = puVar1 + 10;
      pCVar9 = local_14 + 0x148;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        pCVar9 = pCVar9 + 4;
      }
      *(ControlClassTy **)(local_14 + 0x164) = local_14;
      puVar7 = puVar1 + 0x12;
      pCVar9 = local_14 + 0x168;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        pCVar9 = pCVar9 + 4;
      }
      *(ControlClassTy **)(local_14 + 0x184) = local_14;
      puVar7 = puVar1 + 0x1a;
      pCVar9 = local_14 + 0x3c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        pCVar9 = pCVar9 + 4;
      }
      *(ControlClassTy **)(local_14 + 0x58) = local_14;
      *(undefined4 *)(local_14 + 0x18c) = puVar1[0x22];
      *(undefined4 *)(local_14 + 400) = puVar1[0x23];
      *(uint *)(local_14 + 0x34) = (uint)(puVar1[0x24] == 0);
      *(uint *)(local_14 + 0x38) = (uint)(puVar1[0x25] == 0);
      FUN_00724d90((int)local_14);
      break;
    }
    goto LAB_0072520d;
  case 8:
    if ((*(uint *)(local_14 + 0x1c) & 0x70000000) == 0) break;
    local_24 = *(undefined4 *)(local_14 + 8);
    local_28 = 0x13;
    local_20 = 0;
    iVar4 = FUN_006e6000(local_14,3,1,local_38);
    goto LAB_00725209;
  case 9:
    if ((*(uint *)(local_14 + 0x1c) & 0x70000000) == 0) {
      local_24 = *(undefined4 *)(local_14 + 8);
      local_28 = 0x14;
      FUN_006e6000(local_14,3,1,local_38);
    }
    break;
  case 0x20:
    uVar8 = param_1[5];
    if ((*(uint *)(local_14 + 0x1c) & 0xffffff) != uVar8) {
      *(undefined4 *)(local_14 + 0x134) = 0;
      *(uint *)(local_14 + 0x1c) = *(uint *)(local_14 + 0x1c) & 0xff000000 | uVar8;
      iVar4 = (**(code **)(*(int *)local_14 + 4))();
      goto LAB_00725209;
    }
    break;
  case 0x22:
    *(int *)(local_14 + 400) = param_1[5];
    goto LAB_007251fb;
  case 0x26:
    param_1[5] = *(int *)(local_14 + 400);
    break;
  case 0x28:
    iVar4 = param_1[5];
    *(int *)(local_14 + 0x18c) = iVar4;
    if (iVar4 < 0) {
      *(undefined4 *)(local_14 + 0x18c) = 0;
    }
    *(undefined4 *)(local_14 + 400) = 0;
LAB_007251fb:
    FUN_00724d90((int)local_14);
    iVar4 = (**(code **)(*(int *)this_00 + 4))();
LAB_00725209:
    if (iVar4 != 0) {
LAB_0072520d:
      local_8 = 0xffff;
    }
  }
  if (*(int *)(this_00 + 0x1c) != 1) goto switchD_00725240_caseD_2c;
  switch(param_1[4]) {
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)(this_00 + 0x138);
    break;
  case 0x60:
    iVar4 = FUN_00724fa0(this_00,(uint)*(ushort *)(param_1 + 6),
                         (uint)*(ushort *)((int)param_1 + 0x1a));
    *(int *)(this_00 + 0x138) = iVar4;
    if (((*(byte *)(param_1 + 5) & 1) == 0) || (*(int *)(this_00 + 0x134) == 0)) break;
  case 0x61:
    uVar8 = (uint)*(ushort *)(param_1 + 6);
    uVar10 = (uint)*(ushort *)((int)param_1 + 0x1a);
    local_10 = uVar8;
    local_c = uVar10;
    iVar4 = FUN_00724fa0(this_00,uVar8,uVar10);
    if ((iVar4 == 0) && (*(int *)(this_00 + 0x134) == 0)) break;
    if ((*(int *)(this_00 + 0x134) == 0) &&
       (bVar3 = FUN_00724f00(this_00,uVar8,uVar10), CONCAT31(extraout_var,bVar3) != 0)) {
LAB_007253a9:
      *(undefined4 *)(this_00 + 0x134) = 1;
    }
    else {
      local_18 = *(int *)(this_00 + 400);
      if (*(int *)(this_00 + 0x20) == 1) {
        iVar4 = *(int *)(this_00 + 0x28);
        iVar5 = uVar10 - *(int *)(this_00 + 0x13c) / 2;
        if (iVar5 < iVar4) {
          *(undefined4 *)(this_00 + 0x198) = 0;
        }
        else {
          if (*(int *)(this_00 + 0x30) + iVar4 < *(int *)(this_00 + 0x13c) + iVar5) {
            iVar5 = (*(int *)(this_00 + 0x30) - *(int *)(this_00 + 0x13c)) + iVar4;
          }
          *(int *)(this_00 + 0x198) = iVar5 - iVar4;
          uVar8 = local_10;
          uVar10 = local_c;
        }
      }
      else {
        iVar6 = uVar8 - *(int *)(this_00 + 0x13c) / 2;
        iVar4 = *(int *)(this_00 + 0x24);
        iVar5 = iVar4;
        if ((iVar4 <= iVar6) &&
           (iVar5 = iVar6, uVar8 = local_10, uVar10 = local_c,
           *(int *)(this_00 + 0x2c) + iVar4 < *(int *)(this_00 + 0x13c) + iVar6)) {
          iVar5 = (*(int *)(this_00 + 0x2c) - *(int *)(this_00 + 0x13c)) + iVar4;
        }
        *(int *)(this_00 + 0x194) = iVar5 - iVar4;
      }
      FUN_00724e20(this_00,uVar8 - *(int *)(this_00 + 0x24),uVar10 - *(int *)(this_00 + 0x28));
      if (*(int *)(this_00 + 400) == local_18) {
LAB_0072539e:
        iVar4 = (**(code **)(*(int *)this_00 + 4))();
        if (iVar4 == 0) goto LAB_007253a9;
      }
      else {
        *(int *)(this_00 + 0x15c) = *(int *)(this_00 + 400);
        iVar4 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x148));
        if (iVar4 == 0) goto LAB_0072539e;
      }
      local_8 = 0xffff;
    }
    break;
  case 0x62:
    if (*(int *)(this_00 + 0x134) != 0) {
      *(undefined4 *)(this_00 + 0x134) = 0;
    }
  }
switchD_00725240_caseD_2c:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__strack_cpp_007f0c20,0xc5);
  }
  iVar4 = ControlClassTy::GetMessage(this_00,param_1);
  if (iVar4 != 0) {
    local_8 = iVar4;
    RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib__strack_cpp_007f0c20,199);
  }
  g_currentExceptionFrame = local_7c.previous;
  return iVar4;
}

