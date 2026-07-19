
/* Recovered from embedded debug metadata:
   E:\Ourlib\_strack.cpp
   TrackbarClassTy::GetMessage */

int __thiscall TrackbarClassTy::GetMessage(TrackbarClassTy *this,int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  TrackbarClassTy *this_00;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  uint uVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  uint uVar10;
  InternalExceptionFrame local_7c;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  TrackbarClassTy *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_14 = this;
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
      local_14->field_0020 = *puVar1;
      local_14->field_0188 = puVar1[1];
      local_14->field_001C = puVar1[2];
      local_14->field_0024 = puVar1[3];
      local_14->field_0028 = puVar1[4];
      local_14->field_002C = puVar1[5];
      local_14->field_0030 = puVar1[6];
      local_14->field_013C = puVar1[7];
      local_14->field_0140 = puVar1[8];
      local_14->field_0144 = puVar1[9];
      puVar7 = puVar1 + 10;
      puVar9 = (undefined4 *)&local_14->field_0x148;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_14->field_0164 = local_14;
      puVar7 = puVar1 + 0x12;
      puVar9 = (undefined4 *)&local_14->field_0x168;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_14->field_0184 = local_14;
      puVar7 = puVar1 + 0x1a;
      puVar9 = (undefined4 *)&local_14->field_0x3c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_14->field_0058 = local_14;
      local_14->field_018C = puVar1[0x22];
      local_14->field_0190 = puVar1[0x23];
      local_14->field_0034 = (uint)(puVar1[0x24] == 0);
      local_14->field_0038 = (uint)(puVar1[0x25] == 0);
      FUN_00724d90((int)local_14);
      break;
    }
    goto LAB_0072520d;
  case 8:
    if ((local_14->field_001C & 0x70000000) == 0) break;
    local_24 = local_14->field_0008;
    local_28 = 0x13;
    local_20 = 0;
    iVar4 = FUN_006e6000(local_14,3,1,local_38);
    goto LAB_00725209;
  case 9:
    if ((local_14->field_001C & 0x70000000) == 0) {
      local_24 = local_14->field_0008;
      local_28 = 0x14;
      FUN_006e6000(local_14,3,1,local_38);
    }
    break;
  case 0x20:
    uVar8 = param_1[5];
    if ((local_14->field_001C & 0xffffff) != uVar8) {
      local_14->field_0134 = 0;
      local_14->field_001C = local_14->field_001C & 0xff000000 | uVar8;
      iVar4 = (**(code **)(local_14->field_0000 + 4))();
      goto LAB_00725209;
    }
    break;
  case 0x22:
    local_14->field_0190 = param_1[5];
    goto LAB_007251fb;
  case 0x26:
    param_1[5] = local_14->field_0190;
    break;
  case 0x28:
    iVar4 = param_1[5];
    local_14->field_018C = iVar4;
    if (iVar4 < 0) {
      local_14->field_018C = 0;
    }
    local_14->field_0190 = 0;
LAB_007251fb:
    FUN_00724d90((int)local_14);
    iVar4 = (**(code **)(this_00->field_0000 + 4))();
LAB_00725209:
    if (iVar4 != 0) {
LAB_0072520d:
      local_8 = 0xffff;
    }
  }
  if (this_00->field_001C != 1) goto switchD_00725240_caseD_2c;
  switch(param_1[4]) {
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)&this_00->field_0x138;
    break;
  case 0x60:
    iVar4 = FUN_00724fa0(this_00,(uint)*(ushort *)(param_1 + 6),
                         (uint)*(ushort *)((int)param_1 + 0x1a));
    *(int *)&this_00->field_0x138 = iVar4;
    if (((*(byte *)(param_1 + 5) & 1) == 0) || (this_00->field_0134 == 0)) break;
  case 0x61:
    uVar8 = (uint)*(ushort *)(param_1 + 6);
    uVar10 = (uint)*(ushort *)((int)param_1 + 0x1a);
    local_10 = uVar8;
    local_c = uVar10;
    iVar4 = FUN_00724fa0(this_00,uVar8,uVar10);
    if ((iVar4 == 0) && (this_00->field_0134 == 0)) break;
    if ((this_00->field_0134 == 0) &&
       (bVar3 = FUN_00724f00(this_00,uVar8,uVar10), CONCAT31(extraout_var,bVar3) != 0)) {
LAB_007253a9:
      this_00->field_0134 = 1;
    }
    else {
      local_18 = this_00->field_0190;
      if (this_00->field_0020 == 1) {
        iVar4 = this_00->field_0028;
        iVar5 = uVar10 - (int)this_00->field_013C / 2;
        if (iVar5 < iVar4) {
          this_00->field_0198 = 0;
        }
        else {
          if (this_00->field_0030 + iVar4 < this_00->field_013C + iVar5) {
            iVar5 = (this_00->field_0030 - this_00->field_013C) + iVar4;
          }
          this_00->field_0198 = iVar5 - iVar4;
          uVar8 = local_10;
          uVar10 = local_c;
        }
      }
      else {
        iVar6 = uVar8 - (int)this_00->field_013C / 2;
        iVar4 = this_00->field_0024;
        iVar5 = iVar4;
        if ((iVar4 <= iVar6) &&
           (iVar5 = iVar6, uVar8 = local_10, uVar10 = local_c,
           this_00->field_002C + iVar4 < this_00->field_013C + iVar6)) {
          iVar5 = (this_00->field_002C - this_00->field_013C) + iVar4;
        }
        this_00->field_0194 = iVar5 - iVar4;
      }
      FUN_00724e20(this_00,uVar8 - this_00->field_0024,uVar10 - this_00->field_0028);
      if (this_00->field_0190 == local_18) {
LAB_0072539e:
        iVar4 = (**(code **)(this_00->field_0000 + 4))();
        if (iVar4 == 0) goto LAB_007253a9;
      }
      else {
        this_00->field_015C = this_00->field_0190;
        iVar4 = FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x148);
        if (iVar4 == 0) goto LAB_0072539e;
      }
      local_8 = 0xffff;
    }
    break;
  case 0x62:
    if (this_00->field_0134 != 0) {
      this_00->field_0134 = 0;
    }
  }
switchD_00725240_caseD_2c:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__strack_cpp_007f0c20,0xc5);
  }
  iVar4 = ControlClassTy::GetMessage((ControlClassTy *)this_00,param_1);
  if (iVar4 != 0) {
    local_8 = iVar4;
    RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib__strack_cpp_007f0c20,199);
  }
  g_currentExceptionFrame = local_7c.previous;
  return iVar4;
}

