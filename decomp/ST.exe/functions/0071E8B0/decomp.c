
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sviewer.cpp
   ViewerClassTy::GetMessage */

undefined4 __thiscall ViewerClassTy::GetMessage(ViewerClassTy *this,int *param_1)

{
  ushort uVar1;
  short sVar2;
  code *pcVar3;
  ControlClassTy *this_00;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  ControlClassTy *pCVar9;
  int *piVar10;
  void *unaff_EDI;
  int *piVar11;
  InternalExceptionFrame local_70;
  int local_2c [5];
  int *local_18;
  undefined4 local_14;
  ControlClassTy *local_c;
  undefined4 *local_8;
  
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = (ControlClassTy *)this;
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
    if ((((byte)local_c[0x20] & 1) != 0) &&
       (DVar5 = timeGetTime(),
       (uint)(*(int *)(this_00 + 0x1c0) + *(int *)(this_00 + 0x1c4)) <= DVar5)) {
      iVar4 = *(int *)(this_00 + 500);
      *(DWORD *)(this_00 + 0x1c4) = DVar5;
      *(int *)(this_00 + 500) = iVar4 + 1;
      if (*(int *)(this_00 + 0x1c8) <= iVar4 + 1) {
        *(undefined4 *)(this_00 + 500) = 0;
      }
      (**(code **)(*(int *)this_00 + 4))();
    }
    break;
  case 2:
    puVar8 = (undefined4 *)param_1[5];
    local_8 = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib__sviewer_cpp_007f0a68,0x2a);
    }
    *(undefined4 *)(this_00 + 0x1c) = *puVar8;
    *(undefined4 *)(this_00 + 0x20) = puVar8[1];
    *(undefined4 *)(this_00 + 0x1cc) = puVar8[2];
    *(undefined4 *)(this_00 + 0x1d0) = puVar8[3];
    *(undefined4 *)(this_00 + 0x1d4) = puVar8[4];
    *(undefined4 *)(this_00 + 0x1d8) = puVar8[5];
    *(undefined4 *)(this_00 + 0x1dc) = puVar8[6];
    *(undefined4 *)(this_00 + 0x1e0) = puVar8[7];
    *(undefined4 *)(this_00 + 0x1e4) = puVar8[10];
    *(undefined4 *)(this_00 + 0x1e8) = puVar8[0xb];
    *(undefined4 *)(this_00 + 0x24) = puVar8[8];
    *(undefined4 *)(this_00 + 0x28) = puVar8[9];
    *(int *)(this_00 + 0x2c) =
         (*(int *)(this_00 + 0x1e4) + *(int *)(this_00 + 0x1d4)) * *(int *)(this_00 + 0x1dc) -
         *(int *)(this_00 + 0x1e4);
    *(int *)(this_00 + 0x30) =
         (*(int *)(this_00 + 0x1e8) + *(int *)(this_00 + 0x1d8)) * *(int *)(this_00 + 0x1e0) -
         *(int *)(this_00 + 0x1e8);
    puVar8 = puVar8 + 0xc;
    pCVar9 = this_00 + 0x134;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pCVar9 = pCVar9 + 4;
    }
    *(ControlClassTy **)(this_00 + 0x150) = this_00;
    puVar8 = local_8 + 0x1c;
    pCVar9 = this_00 + 0x154;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pCVar9 = pCVar9 + 4;
    }
    *(ControlClassTy **)(this_00 + 0x170) = this_00;
    puVar8 = local_8 + 0x14;
    pCVar9 = this_00 + 0x174;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pCVar9 = pCVar9 + 4;
    }
    *(ControlClassTy **)(this_00 + 400) = this_00;
    puVar8 = local_8 + 0x24;
    pCVar9 = this_00 + 0x194;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      pCVar9 = pCVar9 + 4;
    }
    *(ControlClassTy **)(this_00 + 0x1b0) = this_00;
    *(uint *)(this_00 + 0x34) = (uint)(local_8[0x21a] == 0);
    *(uint *)(this_00 + 0x38) = (uint)(local_8[0x21b] == 0);
    if (local_8[0x2c] != 0) {
      uVar7 = *(undefined4 *)(this_00 + 8);
      local_8[0x118] = 2;
      local_8[0x117] = uVar7;
      local_8[0x119] = 0x2c;
      if (*(int *)(this_00 + 0x1e0) < *(int *)(this_00 + 0x1d0)) {
        iVar4 = (*(int *)(this_00 + 0x1d0) - *(int *)(this_00 + 0x1e0)) + 1;
      }
      else {
        iVar4 = 0;
      }
      local_8[0x11d] = iVar4;
      local_8[0x11e] = *(undefined4 *)(this_00 + 0x1f0);
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(local_8[0x2c],this_00 + 0x1b4,0,local_8 + 0x2d,0)
      ;
    }
    if (local_8[0x123] != 0) {
      uVar7 = *(undefined4 *)(this_00 + 8);
      local_8[0x20f] = 2;
      local_8[0x20e] = uVar7;
      local_8[0x210] = 0x2d;
      if (*(int *)(this_00 + 0x1dc) < *(int *)(this_00 + 0x1cc)) {
        iVar4 = (*(int *)(this_00 + 0x1cc) - *(int *)(this_00 + 0x1dc)) + 1;
      }
      else {
        iVar4 = 0;
      }
      local_8[0x214] = iVar4;
      local_8[0x215] = *(undefined4 *)(this_00 + 0x1ec);
      (**(code **)(**(int **)(this_00 + 0xc) + 8))
                (local_8[0x123],this_00 + 0x1b8,0,local_8 + 0x124,0);
    }
    *(undefined4 *)(this_00 + 0x1c0) = local_8[0x21d];
    *(undefined4 *)(this_00 + 0x1c8) = local_8[0x21c];
    *(undefined4 *)(this_00 + 500) = 0;
    break;
  case 3:
    if (*(uint *)(local_c + 0x1b4) != 0) {
      FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x1b4));
    }
    *(undefined4 *)(this_00 + 0x1b4) = 0;
    if (*(uint *)(this_00 + 0x1b8) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x1b8));
    }
    *(undefined4 *)(this_00 + 0x1b8) = 0;
    break;
  case 8:
    if ((*(uint *)(local_c + 0x1c) & 0x70000000) != 0) {
      local_18 = *(int **)(local_c + 8);
      local_2c[4] = 0x13;
      local_14 = 0;
      FUN_006e6000(local_c,3,1,local_2c);
      if ((*(int *)(this_00 + 0x184) != 0) && (((byte)this_00[0x1c] & 1) != 0)) {
        *(undefined2 *)(this_00 + 0x188) = *(undefined2 *)(this_00 + 0x1ec);
        *(undefined2 *)(this_00 + 0x18a) = *(undefined2 *)(this_00 + 0x1f0);
        FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x174));
      }
    }
    break;
  case 9:
    if ((*(uint *)(local_c + 0x1c) & 0x70000000) == 0) {
      local_18 = *(int **)(local_c + 8);
      local_2c[4] = 0x14;
      FUN_006e6000(local_c,3,1,local_2c);
    }
    break;
  case 0x20:
    iVar4 = *(int *)(local_c + 0x1b8);
    *(uint *)(local_c + 0x1c) = *(uint *)(local_c + 0x1c) | param_1[5] & 0xffffffU;
    piVar10 = param_1;
    piVar11 = local_2c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar4 != 0) {
      local_18 = (int *)(uint)(*(int *)(this_00 + 0x1dc) < *(int *)(this_00 + 0x1cc));
      local_2c[4] = 0x20;
      local_2c[2] = iVar4;
      FUN_006e6060(this_00,local_2c);
    }
    if (*(int *)(this_00 + 0x1b4) != 0) {
      local_18 = (int *)(uint)(*(int *)(this_00 + 0x1e0) < *(int *)(this_00 + 0x1d0));
      local_2c[4] = 0x20;
      local_2c[2] = *(int *)(this_00 + 0x1b4);
      FUN_006e6060(this_00,local_2c);
    }
    break;
  case 0x22:
    uVar1 = *(ushort *)(param_1 + 5);
    local_2c[3] = 2;
    local_2c[4] = 0x22;
    *(int **)(local_c + 0x1ec) = (int *)(uint)uVar1;
    if (*(int *)(local_c + 0x1b8) != 0) {
      local_2c[2] = *(int *)(local_c + 0x1b8);
      local_18 = (int *)(uint)uVar1;
      FUN_006e6060(local_c,local_2c);
    }
    uVar1 = *(ushort *)((int)param_1 + 0x16);
    *(int **)(this_00 + 0x1f0) = (int *)(uint)uVar1;
    if (*(int *)(this_00 + 0x1b4) != 0) {
      local_2c[2] = *(int *)(this_00 + 0x1b4);
      local_18 = (int *)(uint)uVar1;
      FUN_006e6060(this_00,local_2c);
    }
    if (((*(int *)(this_00 + 0x184) != 0) && (((byte)this_00[0x1c] & 1) != 0)) &&
       ((short)param_1[6] == 0)) {
      *(undefined2 *)(this_00 + 0x188) = *(undefined2 *)(this_00 + 0x1ec);
      *(undefined2 *)(this_00 + 0x18a) = *(undefined2 *)(this_00 + 0x1f0);
      FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x174));
    }
    (**(code **)(*(int *)this_00 + 4))();
    break;
  case 0x24:
    iVar4 = *(int *)(local_c + 0x1b4);
    piVar10 = param_1;
    piVar11 = local_2c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar4 != 0) {
      FUN_006e6080(this_00,2,iVar4,local_2c);
    }
    if (*(int *)(this_00 + 0x1b8) != 0) {
      FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1b8),local_2c);
    }
    break;
  case 0x26:
  case 0x27:
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)(local_c + 0x1ec);
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(local_c + 0x1f0);
    break;
  case 0x28:
    uVar1 = *(ushort *)(param_1 + 5);
    *(undefined4 *)(local_c + 0x1ec) = 0;
    *(uint *)(local_c + 0x1cc) = (uint)uVar1;
    *(uint *)(local_c + 0x1d0) = (uint)*(ushort *)((int)param_1 + 0x16);
    *(undefined4 *)(local_c + 0x1f0) = 0;
    if ((*(int *)(local_c + 0x184) != 0) && (((byte)local_c[0x1c] & 1) != 0)) {
      *(undefined2 *)(local_c + 0x188) = 0;
      *(undefined2 *)(local_c + 0x18a) = 0;
      FUN_006e6020(local_c,(undefined4 *)(local_c + 0x174));
    }
    (**(code **)(*(int *)this_00 + 4))();
    piVar10 = local_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    local_2c[3] = 2;
    if (*(int *)(this_00 + 0x1b8) != 0) {
      local_18 = (int *)(uint)(*(int *)(this_00 + 0x1dc) < *(int *)(this_00 + 0x1cc));
      local_2c[4] = 0x20;
      local_2c[2] = *(int *)(this_00 + 0x1b8);
      FUN_006e6060(this_00,local_2c);
      local_2c[4] = 0x28;
      if (*(int *)(this_00 + 0x1dc) < *(int *)(this_00 + 0x1cc)) {
        local_18 = (int *)((*(int *)(this_00 + 0x1cc) - *(int *)(this_00 + 0x1dc)) + 1);
      }
      else {
        local_18 = (int *)0x0;
      }
      FUN_006e6060(this_00,local_2c);
      local_18 = *(int **)(this_00 + 0x1ec);
      local_2c[4] = 0x22;
      FUN_006e6060(this_00,local_2c);
    }
    if (*(int *)(this_00 + 0x1b4) != 0) {
      local_18 = (int *)(uint)(*(int *)(this_00 + 0x1e0) < *(int *)(this_00 + 0x1d0));
      local_2c[4] = 0x20;
      local_2c[2] = *(int *)(this_00 + 0x1b4);
      FUN_006e6060(this_00,local_2c);
      local_2c[4] = 0x28;
      if (*(int *)(this_00 + 0x1e0) < *(int *)(this_00 + 0x1d0)) {
        local_18 = (int *)((*(int *)(this_00 + 0x1d0) - *(int *)(this_00 + 0x1e0)) + 1);
      }
      else {
        local_18 = (int *)0x0;
      }
      FUN_006e6060(this_00,local_2c);
      local_18 = *(int **)(this_00 + 0x1f0);
      local_2c[4] = 0x22;
      FUN_006e6060(this_00,local_2c);
    }
    break;
  case 0x2b:
    sVar2 = *(short *)(local_c + 0x1bc);
    *(short *)(param_1 + 5) = sVar2;
    if (sVar2 == 0) {
      local_2c[3] = 2;
      local_2c[4] = 0x2b;
      if (*(int *)(local_c + 0x1b4) != 0) {
        local_2c[2] = *(int *)(local_c + 0x1b4);
        FUN_006e6060(local_c,local_2c);
        if ((short)local_18 != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
          break;
        }
      }
      if (*(int *)(this_00 + 0x1b8) != 0) {
        local_2c[2] = *(int *)(this_00 + 0x1b8);
        FUN_006e6060(this_00,local_2c);
        if ((short)local_18 != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
        }
      }
    }
    break;
  case 0x2c:
    *(int *)(local_c + 0x1f0) = param_1[5];
    (**(code **)(*(int *)local_c + 4))();
    if ((*(int *)(this_00 + 0x184) != 0) && (((byte)this_00[0x1c] & 1) != 0)) {
      *(undefined2 *)(this_00 + 0x188) = *(undefined2 *)(this_00 + 0x1ec);
      *(undefined2 *)(this_00 + 0x18a) = *(undefined2 *)(this_00 + 0x1f0);
      FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x174));
    }
    break;
  case 0x2d:
    *(int *)(local_c + 0x1ec) = param_1[5];
    (**(code **)(*(int *)local_c + 4))();
    if ((*(int *)(this_00 + 0x184) != 0) && (((byte)this_00[0x1c] & 1) != 0)) {
      *(undefined2 *)(this_00 + 0x18a) = *(undefined2 *)(this_00 + 0x1f0);
      *(undefined2 *)(this_00 + 0x188) = *(undefined2 *)(this_00 + 0x1ec);
      FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x174));
    }
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
    if (((((int)(uint)*(ushort *)(param_1 + 6) < *(int *)(local_c + 0x24)) ||
         (*(int *)(local_c + 0x2c) + *(int *)(local_c + 0x24) <= (int)(uint)*(ushort *)(param_1 + 6)
         )) || ((int)(uint)*(ushort *)((int)param_1 + 0x1a) < *(int *)(local_c + 0x28))) ||
       (*(int *)(local_c + 0x30) + *(int *)(local_c + 0x28) <=
        (int)(uint)*(ushort *)((int)param_1 + 0x1a))) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
    *(int *)(local_c + 0x1bc) = iVar4;
    if ((iVar4 != 0) && (*(int *)(local_c + 0x1a4) != 0)) {
      pCVar9 = local_c + 0x194;
      piVar10 = local_2c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar10 = *(int *)pCVar9;
        pCVar9 = pCVar9 + 4;
        piVar10 = piVar10 + 1;
      }
      local_18 = param_1;
      FUN_006e5fe0(this_00,local_2c);
    }
  }
  ControlClassTy::GetMessage(this_00,param_1);
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

