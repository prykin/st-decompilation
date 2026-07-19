
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sviewer.cpp
   ViewerClassTy::GetMessage */

undefined4 __thiscall ViewerClassTy::GetMessage(ViewerClassTy *this,int *param_1)

{
  ushort uVar1;
  short sVar2;
  code *pcVar3;
  ViewerClassTy *this_00;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  int *piVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  int *piVar11;
  InternalExceptionFrame local_70;
  int local_2c [5];
  int *local_18;
  undefined4 local_14;
  ViewerClassTy *local_c;
  undefined4 *local_8;
  
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar6 = ReportDebugMessage(s_E__Ourlib__sviewer_cpp_007f0a68,0x108,0,iVar4,&DAT_007a4ccc,
                               s_ViewerClassTy__GetMessage_error___007f0aa0);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib__sviewer_cpp_007f0a68,0x109);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 0:
    if (((local_c->field_0x20 & 1) != 0) &&
       (DVar5 = timeGetTime(), (uint)(this_00->field_01C0 + this_00->field_01C4) <= DVar5)) {
      iVar4 = this_00->field_01F4 + 1;
      this_00->field_01C4 = DVar5;
      this_00->field_01F4 = iVar4;
      if ((int)this_00->field_01C8 <= iVar4) {
        this_00->field_01F4 = 0;
      }
      (**(code **)(this_00->field_0000 + 4))();
    }
    break;
  case 2:
    puVar8 = (undefined4 *)param_1[5];
    local_8 = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib__sviewer_cpp_007f0a68,0x2a);
    }
    *(undefined4 *)&this_00->field_0x1c = *puVar8;
    *(undefined4 *)&this_00->field_0x20 = puVar8[1];
    this_00->field_01CC = puVar8[2];
    this_00->field_01D0 = puVar8[3];
    this_00->field_01D4 = puVar8[4];
    this_00->field_01D8 = puVar8[5];
    this_00->field_01DC = puVar8[6];
    this_00->field_01E0 = puVar8[7];
    this_00->field_01E4 = puVar8[10];
    this_00->field_01E8 = puVar8[0xb];
    this_00->field_0024 = puVar8[8];
    this_00->field_0028 = puVar8[9];
    this_00->field_002C =
         (this_00->field_01E4 + this_00->field_01D4) * this_00->field_01DC - this_00->field_01E4;
    this_00->field_0030 =
         (this_00->field_01E8 + this_00->field_01D8) * this_00->field_01E0 - this_00->field_01E8;
    puVar8 = puVar8 + 0xc;
    puVar10 = (undefined4 *)&this_00->field_0x134;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    this_00->field_0150 = this_00;
    puVar8 = local_8 + 0x1c;
    puVar10 = (undefined4 *)&this_00->field_0x154;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    this_00->field_0170 = this_00;
    puVar8 = local_8 + 0x14;
    puVar10 = (undefined4 *)&this_00->field_0x174;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    this_00->field_0190 = this_00;
    puVar8 = local_8 + 0x24;
    puVar10 = (undefined4 *)&this_00->field_0x194;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    this_00->field_01B0 = this_00;
    this_00->field_0034 = (uint)(local_8[0x21a] == 0);
    this_00->field_0038 = (uint)(local_8[0x21b] == 0);
    if (local_8[0x2c] != 0) {
      uVar7 = this_00->field_0008;
      local_8[0x118] = 2;
      local_8[0x117] = uVar7;
      local_8[0x119] = 0x2c;
      if ((int)this_00->field_01E0 < (int)this_00->field_01D0) {
        iVar4 = (this_00->field_01D0 - this_00->field_01E0) + 1;
      }
      else {
        iVar4 = 0;
      }
      local_8[0x11d] = iVar4;
      local_8[0x11e] = *(undefined4 *)&this_00->field_0x1f0;
      (**(code **)(*(int *)this_00->field_000C + 8))
                (local_8[0x2c],&this_00->field_01B4,0,local_8 + 0x2d,0);
    }
    if (local_8[0x123] != 0) {
      uVar7 = this_00->field_0008;
      local_8[0x20f] = 2;
      local_8[0x20e] = uVar7;
      local_8[0x210] = 0x2d;
      if ((int)this_00->field_01DC < (int)this_00->field_01CC) {
        iVar4 = (this_00->field_01CC - this_00->field_01DC) + 1;
      }
      else {
        iVar4 = 0;
      }
      local_8[0x214] = iVar4;
      local_8[0x215] = *(undefined4 *)&this_00->field_0x1ec;
      (**(code **)(*(int *)this_00->field_000C + 8))
                (local_8[0x123],&this_00->field_01B8,0,local_8 + 0x124,0);
    }
    this_00->field_01C0 = local_8[0x21d];
    this_00->field_01C8 = local_8[0x21c];
    this_00->field_01F4 = 0;
    break;
  case 3:
    if (local_c->field_01B4 != 0) {
      FUN_006e56b0((void *)local_c->field_000C,local_c->field_01B4);
    }
    this_00->field_01B4 = 0;
    if (this_00->field_01B8 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,this_00->field_01B8);
    }
    this_00->field_01B8 = 0;
    break;
  case 8:
    if ((*(uint *)&local_c->field_0x1c & 0x70000000) != 0) {
      local_18 = (int *)local_c->field_0008;
      local_2c[4] = 0x13;
      local_14 = 0;
      FUN_006e6000(local_c,3,1,local_2c);
      if ((this_00->field_0184 != 0) && ((this_00->field_0x1c & 1) != 0)) {
        this_00->field_0188 = *(undefined2 *)&this_00->field_0x1ec;
        this_00->field_018A = *(undefined2 *)&this_00->field_0x1f0;
        FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x174);
      }
    }
    break;
  case 9:
    if ((*(uint *)&local_c->field_0x1c & 0x70000000) == 0) {
      local_18 = (int *)local_c->field_0008;
      local_2c[4] = 0x14;
      FUN_006e6000(local_c,3,1,local_2c);
    }
    break;
  case 0x20:
    iVar4 = local_c->field_01B8;
    *(uint *)&local_c->field_0x1c = *(uint *)&local_c->field_0x1c | param_1[5] & 0xffffffU;
    piVar9 = param_1;
    piVar11 = local_2c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar4 != 0) {
      local_18 = (int *)(uint)((int)this_00->field_01DC < (int)this_00->field_01CC);
      local_2c[4] = 0x20;
      local_2c[2] = iVar4;
      FUN_006e6060(this_00,local_2c);
    }
    if (this_00->field_01B4 != 0) {
      local_18 = (int *)(uint)((int)this_00->field_01E0 < (int)this_00->field_01D0);
      local_2c[4] = 0x20;
      local_2c[2] = this_00->field_01B4;
      FUN_006e6060(this_00,local_2c);
    }
    break;
  case 0x22:
    uVar1 = *(ushort *)(param_1 + 5);
    local_2c[3] = 2;
    local_2c[4] = 0x22;
    *(int **)&local_c->field_0x1ec = (int *)(uint)uVar1;
    if (local_c->field_01B8 != 0) {
      local_2c[2] = local_c->field_01B8;
      local_18 = (int *)(uint)uVar1;
      FUN_006e6060(local_c,local_2c);
    }
    uVar1 = *(ushort *)((int)param_1 + 0x16);
    *(int **)&this_00->field_0x1f0 = (int *)(uint)uVar1;
    if (this_00->field_01B4 != 0) {
      local_2c[2] = this_00->field_01B4;
      local_18 = (int *)(uint)uVar1;
      FUN_006e6060(this_00,local_2c);
    }
    if (((this_00->field_0184 != 0) && ((this_00->field_0x1c & 1) != 0)) && ((short)param_1[6] == 0)
       ) {
      this_00->field_0188 = *(undefined2 *)&this_00->field_0x1ec;
      this_00->field_018A = *(undefined2 *)&this_00->field_0x1f0;
      FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x174);
    }
    (**(code **)(this_00->field_0000 + 4))();
    break;
  case 0x24:
    iVar4 = local_c->field_01B4;
    piVar9 = param_1;
    piVar11 = local_2c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar4 != 0) {
      FUN_006e6080(this_00,2,iVar4,local_2c);
    }
    if (this_00->field_01B8 != 0) {
      FUN_006e6080(this_00,2,this_00->field_01B8,local_2c);
    }
    break;
  case 0x26:
  case 0x27:
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)&local_c->field_0x1ec;
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)&local_c->field_0x1f0;
    break;
  case 0x28:
    uVar1 = *(ushort *)(param_1 + 5);
    *(undefined4 *)&local_c->field_0x1ec = 0;
    local_c->field_01CC = (uint)uVar1;
    local_c->field_01D0 = (uint)*(ushort *)((int)param_1 + 0x16);
    *(undefined4 *)&local_c->field_0x1f0 = 0;
    if ((local_c->field_0184 != 0) && ((local_c->field_0x1c & 1) != 0)) {
      local_c->field_0188 = 0;
      local_c->field_018A = 0;
      FUN_006e6020(local_c,(undefined4 *)&local_c->field_0x174);
    }
    (**(code **)(this_00->field_0000 + 4))();
    piVar9 = local_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_2c[3] = 2;
    if (this_00->field_01B8 != 0) {
      local_18 = (int *)(uint)((int)this_00->field_01DC < (int)this_00->field_01CC);
      local_2c[4] = 0x20;
      local_2c[2] = this_00->field_01B8;
      FUN_006e6060(this_00,local_2c);
      local_2c[4] = 0x28;
      if ((int)this_00->field_01DC < (int)this_00->field_01CC) {
        local_18 = (int *)((this_00->field_01CC - this_00->field_01DC) + 1);
      }
      else {
        local_18 = (int *)0x0;
      }
      FUN_006e6060(this_00,local_2c);
      local_18 = *(int **)&this_00->field_0x1ec;
      local_2c[4] = 0x22;
      FUN_006e6060(this_00,local_2c);
    }
    if (this_00->field_01B4 != 0) {
      local_18 = (int *)(uint)((int)this_00->field_01E0 < (int)this_00->field_01D0);
      local_2c[4] = 0x20;
      local_2c[2] = this_00->field_01B4;
      FUN_006e6060(this_00,local_2c);
      local_2c[4] = 0x28;
      if ((int)this_00->field_01E0 < (int)this_00->field_01D0) {
        local_18 = (int *)((this_00->field_01D0 - this_00->field_01E0) + 1);
      }
      else {
        local_18 = (int *)0x0;
      }
      FUN_006e6060(this_00,local_2c);
      local_18 = *(int **)&this_00->field_0x1f0;
      local_2c[4] = 0x22;
      FUN_006e6060(this_00,local_2c);
    }
    break;
  case 0x2b:
    sVar2 = *(short *)&local_c->field_0x1bc;
    *(short *)(param_1 + 5) = sVar2;
    if (sVar2 == 0) {
      local_2c[3] = 2;
      local_2c[4] = 0x2b;
      if (local_c->field_01B4 != 0) {
        local_2c[2] = local_c->field_01B4;
        FUN_006e6060(local_c,local_2c);
        if ((short)local_18 != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
          break;
        }
      }
      if (this_00->field_01B8 != 0) {
        local_2c[2] = this_00->field_01B8;
        FUN_006e6060(this_00,local_2c);
        if ((short)local_18 != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
        }
      }
    }
    break;
  case 0x2c:
    *(int *)&local_c->field_0x1f0 = param_1[5];
    (**(code **)(local_c->field_0000 + 4))();
    if ((this_00->field_0184 != 0) && ((this_00->field_0x1c & 1) != 0)) {
      this_00->field_0188 = *(undefined2 *)&this_00->field_0x1ec;
      this_00->field_018A = *(undefined2 *)&this_00->field_0x1f0;
      FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x174);
    }
    break;
  case 0x2d:
    *(int *)&local_c->field_0x1ec = param_1[5];
    (**(code **)(local_c->field_0000 + 4))();
    if ((this_00->field_0184 != 0) && ((this_00->field_0x1c & 1) != 0)) {
      this_00->field_018A = *(undefined2 *)&this_00->field_0x1f0;
      this_00->field_0188 = *(undefined2 *)&this_00->field_0x1ec;
      FUN_006e6020(this_00,(undefined4 *)&this_00->field_0x174);
    }
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    if (((((int)(uint)*(ushort *)(param_1 + 6) < (int)local_c->field_0024) ||
         ((int)(local_c->field_002C + local_c->field_0024) <= (int)(uint)*(ushort *)(param_1 + 6)))
        || ((int)(uint)*(ushort *)((int)param_1 + 0x1a) < (int)local_c->field_0028)) ||
       ((int)(local_c->field_0030 + local_c->field_0028) <=
        (int)(uint)*(ushort *)((int)param_1 + 0x1a))) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
    *(int *)&local_c->field_0x1bc = iVar4;
    if ((iVar4 != 0) && (local_c->field_01A4 != 0)) {
      piVar9 = (int *)&local_c->field_0x194;
      piVar11 = local_2c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar11 = piVar11 + 1;
      }
      local_18 = param_1;
      FUN_006e5fe0(this_00,local_2c);
    }
  }
  ControlClassTy::GetMessage((ControlClassTy *)this_00,param_1);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

