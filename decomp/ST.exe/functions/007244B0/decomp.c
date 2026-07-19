
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sslider.cpp
   SliderClassTy::GetMessage */

undefined4 __thiscall SliderClassTy::GetMessage(SliderClassTy *this,int *param_1)

{
  code *pcVar1;
  SliderClassTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  void *unaff_EDI;
  SliderClassTy *pSVar7;
  int *piVar8;
  InternalExceptionFrame local_74;
  int local_30 [5];
  uint local_1c;
  undefined4 local_18;
  undefined4 *local_10;
  undefined4 local_c;
  SliderClassTy *local_8;
  
  local_c = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar3 = ReportDebugMessage(s_E__Ourlib__sslider_cpp_007f0bc0,0x11f,0,iVar3,&DAT_007a4ccc,
                               s_SliderClassTy__GetMessage_Error___007f0bd8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(0xffff,0,s_E__Ourlib__sslider_cpp_007f0bc0,0x120);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    local_10 = (undefined4 *)param_1[5];
    if (local_10 == (undefined4 *)0x0) {
      g_currentExceptionFrame = local_74.previous;
      return 0xffff;
    }
    *(undefined4 *)(local_8 + 0x18) = *local_10;
    puVar6 = local_10 + 0xe8;
    pSVar7 = local_8 + 0x28;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pSVar7 = pSVar7 + 4;
    }
    *(SliderClassTy **)(local_8 + 0x44) = local_8;
    *(undefined4 *)(local_8 + 0x48) = local_10[0xf0];
    *(undefined4 *)(local_8 + 0x4c) = local_10[0xf1];
    uVar5 = local_10[0xf2];
    *(undefined4 *)(local_8 + 0x50) = uVar5;
    *(undefined4 *)(local_8 + 0x54) = uVar5;
    *(undefined4 *)(local_8 + 0x58) = local_10[0xf3];
    *(undefined4 *)(local_8 + 0x5c) = local_10[0xf4];
    *(undefined4 *)(local_8 + 0x60) = local_10[0xf5];
    if (local_10[0x61] != 0) {
      local_10[0x6a] = *(undefined4 *)(local_8 + 8);
      local_10[0x6b] = 2;
      local_10[0x6c] = 0x2f;
      if (*(int *)(local_8 + 0x58) != 0) {
        local_10[0xc0] = 1;
      }
      iVar3 = (**(code **)(**(int **)(local_8 + 0xc) + 8))
                        (local_10[0x61],local_8 + 0x1c,0,local_10 + 0x62,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    puVar6 = local_10;
    if (local_10[1] != 0) {
      uVar5 = *(undefined4 *)(pSVar2 + 8);
      local_10[0xb] = 2;
      local_10[10] = uVar5;
      local_10[0xc] = 0x30;
      if (*(int *)(pSVar2 + 0x58) != 0) {
        local_10[0x60] = 1;
      }
      iVar3 = (**(code **)(**(int **)(pSVar2 + 0xc) + 8))
                        (local_10[1],pSVar2 + 0x20,0,local_10 + 2,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    if (puVar6[0xc1] != 0) {
      puVar6[0xe5] = *(undefined4 *)(pSVar2 + 0x4c);
      puVar6[0xe4] = *(undefined4 *)(pSVar2 + 0x48);
      puVar6[0xce] = *(undefined4 *)(pSVar2 + 8);
      puVar6[0xcf] = 2;
      puVar6[0xd0] = 0x2c;
      iVar3 = (**(code **)(**(int **)(pSVar2 + 0xc) + 8))
                        (puVar6[0xc1],pSVar2 + 0x24,0,puVar6 + 0xc2,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    if ((*(uint *)(pSVar2 + 0x18) & 0xffffff) != 0) {
      FUN_00724360(pSVar2);
    }
    iVar3 = FUN_006e4d40(*(void **)(pSVar2 + 0x10),*(int *)(pSVar2 + 0xc));
    if (iVar3 == 1) {
      local_30[2] = *(int *)(pSVar2 + 8);
      local_30[3] = 2;
      local_30[4] = 8;
      (*(code *)**(undefined4 **)pSVar2)(local_30);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 3:
    if (*(uint *)(local_8 + 0x1c) != 0) {
      FUN_006e56b0(*(void **)(local_8 + 0xc),*(uint *)(local_8 + 0x1c));
    }
    if (*(uint *)(pSVar2 + 0x20) != 0) {
      FUN_006e56b0(*(void **)(pSVar2 + 0xc),*(uint *)(pSVar2 + 0x20));
    }
    if (*(uint *)(pSVar2 + 0x24) != 0) {
      FUN_006e56b0(*(void **)(pSVar2 + 0xc),*(uint *)(pSVar2 + 0x24));
    }
    iVar3 = FUN_006e4d40(*(void **)(pSVar2 + 0x10),*(int *)(pSVar2 + 0xc));
    if (iVar3 == 1) {
      local_30[2] = *(int *)(pSVar2 + 8);
      local_30[3] = 2;
      local_30[4] = 9;
      uVar5 = (*(code *)**(undefined4 **)pSVar2)(local_30);
      g_currentExceptionFrame = local_74.previous;
      return uVar5;
    }
    break;
  default:
    FUN_006e5fd0();
    break;
  case 5:
  case 0x24:
    piVar8 = local_30;
    for (iVar3 = 8; pSVar2 = local_8, iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *param_1;
      param_1 = param_1 + 1;
      piVar8 = piVar8 + 1;
    }
    if (*(int *)(local_8 + 0x1c) != 0) {
      FUN_006e6080(local_8,2,*(int *)(local_8 + 0x1c),local_30);
    }
    if (*(int *)(pSVar2 + 0x20) != 0) {
      FUN_006e6080(pSVar2,2,*(int *)(pSVar2 + 0x20),local_30);
    }
    if (*(int *)(pSVar2 + 0x24) != 0) {
      FUN_006e6080(pSVar2,2,*(int *)(pSVar2 + 0x24),local_30);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 8:
    if (*(int *)(local_8 + 0x50) == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    piVar8 = local_30;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_1c = *(uint *)(pSVar2 + 8);
    local_30[4] = 0x13;
    local_18 = 2;
    iVar3 = FUN_006e6000(pSVar2,3,1,local_30);
    goto LAB_00724bb2;
  case 9:
    if (*(int *)(local_8 + 0x50) != 0) {
      piVar8 = local_30;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_1c = *(uint *)(pSVar2 + 8);
      local_30[4] = 0x14;
      local_18 = 2;
      FUN_006e6000(pSVar2,3,1,local_30);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x20:
    local_1c = *(uint *)(local_8 + 0x18) & 0xff000000 | param_1[5];
    if (*(uint *)(local_8 + 0x18) != local_1c) {
      *(uint *)(local_8 + 0x18) = local_1c;
      local_30[4] = 0x20;
      if (*(int *)(local_8 + 0x1c) != 0) {
        FUN_006e6080(local_8,2,*(int *)(local_8 + 0x1c),local_30);
      }
      if (*(int *)(pSVar2 + 0x20) != 0) {
        FUN_006e6080(pSVar2,2,*(int *)(pSVar2 + 0x20),local_30);
      }
      if (*(int *)(pSVar2 + 0x24) != 0) {
        FUN_006e6080(pSVar2,2,*(int *)(pSVar2 + 0x24),local_30);
      }
      if ((*(uint *)(pSVar2 + 0x18) & 0xffffff) != 0) {
        FUN_00724360(pSVar2);
        g_currentExceptionFrame = local_74.previous;
        return local_c;
      }
    }
    break;
  case 0x21:
    param_1[5] = *(int *)(local_8 + 0x18);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x22:
    iVar3 = param_1[5];
    *(int *)(local_8 + 0x4c) = iVar3;
    if (*(int *)(local_8 + 0x24) != 0) {
      local_30[3] = 0x80000002;
      local_30[4] = 0x22;
      local_30[2] = *(int *)(local_8 + 0x24);
      local_1c = iVar3;
      local_c = FUN_006e6060(local_8,local_30);
    }
    FUN_00724360(pSVar2);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x26:
    param_1[5] = *(int *)(local_8 + 0x4c);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x28:
    iVar3 = param_1[5];
    *(int *)(local_8 + 0x48) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(local_8 + 0x48) = 0;
    }
    iVar3 = *(int *)(local_8 + 0x24);
    *(undefined4 *)(local_8 + 0x4c) = 0;
    piVar8 = local_30;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *param_1;
      param_1 = param_1 + 1;
      piVar8 = piVar8 + 1;
    }
    if (iVar3 != 0) {
      FUN_006e6080(pSVar2,0x80000002,iVar3,local_30);
    }
    FUN_00724360(pSVar2);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = 0;
    local_30[3] = 2;
    local_30[4] = 0x2b;
    local_30[2] = *(int *)(local_8 + 0x1c);
    if (local_30[2] != 0) {
      FUN_006e6060(local_8,local_30);
      if ((short)local_1c != 0) {
        *(undefined2 *)(param_1 + 5) = 1;
        g_currentExceptionFrame = local_74.previous;
        return local_c;
      }
    }
    local_30[2] = *(int *)(pSVar2 + 0x20);
    if ((local_30[2] != 0) && (FUN_006e6060(pSVar2,local_30), (short)local_1c != 0)) {
      *(undefined2 *)(param_1 + 5) = 1;
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    local_30[2] = *(int *)(pSVar2 + 0x24);
    if ((local_30[2] != 0) && (FUN_006e6060(pSVar2,local_30), (short)local_1c != 0)) {
      *(undefined2 *)(param_1 + 5) = 1;
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x2c:
    iVar3 = param_1[5];
    *(int *)(local_8 + 0x4c) = iVar3;
    *(int *)(local_8 + 0x3c) = iVar3;
    FUN_00724360(local_8);
    goto LAB_00724bab;
  case 0x55:
    *(undefined4 *)(local_8 + 0x54) = 1;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x56:
    *(undefined4 *)(local_8 + 0x54) = 0;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x67:
    if (*(int *)(local_8 + 0x50) == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    if (*(int *)(local_8 + 0x54) == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
  case 0x2f:
    if (*(int *)(local_8 + 0x4c) < 1) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    iVar4 = FUN_00724330(local_8,(uint)*(ushort *)(param_1 + 6));
    iVar3 = *(int *)(pSVar2 + 0x4c);
    *(int *)(pSVar2 + 0x4c) = iVar3 - iVar4;
    if (iVar3 - iVar4 < 0) {
      *(undefined4 *)(pSVar2 + 0x4c) = 0;
    }
    FUN_00724360(pSVar2);
    if (*(int *)(pSVar2 + 0x24) != 0) {
      local_1c = *(uint *)(pSVar2 + 0x4c);
      local_30[4] = 0x22;
      FUN_006e6080(pSVar2,2,*(int *)(pSVar2 + 0x24),local_30);
    }
    *(undefined4 *)(pSVar2 + 0x3c) = *(undefined4 *)(pSVar2 + 0x4c);
    goto LAB_00724bab;
  case 0x68:
    if (*(int *)(local_8 + 0x50) == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    if (*(int *)(local_8 + 0x54) == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
  case 0x30:
    if (*(int *)(local_8 + 0x48) + -1 <= *(int *)(local_8 + 0x4c)) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    iVar4 = FUN_00724330(local_8,(uint)*(ushort *)(param_1 + 6));
    iVar3 = *(int *)(pSVar2 + 0x4c);
    *(int *)(pSVar2 + 0x4c) = iVar3 + iVar4;
    if (*(int *)(pSVar2 + 0x48) + -1 < iVar3 + iVar4) {
      *(int *)(pSVar2 + 0x4c) = *(int *)(pSVar2 + 0x48) + -1;
    }
    FUN_00724360(pSVar2);
    if (*(int *)(pSVar2 + 0x24) != 0) {
      local_1c = *(uint *)(pSVar2 + 0x4c);
      local_30[4] = 0x22;
      FUN_006e6080(pSVar2,2,*(int *)(pSVar2 + 0x24),local_30);
    }
    *(undefined4 *)(pSVar2 + 0x3c) = *(undefined4 *)(pSVar2 + 0x4c);
LAB_00724bab:
    iVar3 = FUN_006e6020(pSVar2,(undefined4 *)(pSVar2 + 0x28));
LAB_00724bb2:
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0xffff;
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return local_c;
}

