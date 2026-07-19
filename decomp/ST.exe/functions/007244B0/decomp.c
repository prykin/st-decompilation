
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
  undefined4 *puVar7;
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
    local_8->field_0018 = *local_10;
    puVar6 = local_10 + 0xe8;
    puVar7 = (undefined4 *)&local_8->field_0x28;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_8->field_0044 = local_8;
    local_8->field_0048 = local_10[0xf0];
    local_8->field_004C = local_10[0xf1];
    uVar5 = local_10[0xf2];
    local_8->field_0050 = uVar5;
    local_8->field_0054 = uVar5;
    local_8->field_0058 = local_10[0xf3];
    local_8->field_005C = local_10[0xf4];
    local_8->field_0060 = local_10[0xf5];
    if (local_10[0x61] != 0) {
      local_10[0x6a] = local_8->field_0008;
      local_10[0x6b] = 2;
      local_10[0x6c] = 0x2f;
      if (local_8->field_0058 != 0) {
        local_10[0xc0] = 1;
      }
      iVar3 = (**(code **)(*(int *)local_8->field_000C + 8))
                        (local_10[0x61],&local_8->field_001C,0,local_10 + 0x62,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    puVar6 = local_10;
    if (local_10[1] != 0) {
      uVar5 = pSVar2->field_0008;
      local_10[0xb] = 2;
      local_10[10] = uVar5;
      local_10[0xc] = 0x30;
      if (pSVar2->field_0058 != 0) {
        local_10[0x60] = 1;
      }
      iVar3 = (**(code **)(*(int *)pSVar2->field_000C + 8))
                        (local_10[1],&pSVar2->field_0020,0,local_10 + 2,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    if (puVar6[0xc1] != 0) {
      puVar6[0xe5] = pSVar2->field_004C;
      puVar6[0xe4] = pSVar2->field_0048;
      puVar6[0xce] = pSVar2->field_0008;
      puVar6[0xcf] = 2;
      puVar6[0xd0] = 0x2c;
      iVar3 = (**(code **)(*(int *)pSVar2->field_000C + 8))
                        (puVar6[0xc1],&pSVar2->field_0024,0,puVar6 + 0xc2,0);
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    if ((pSVar2->field_0018 & 0xffffff) != 0) {
      FUN_00724360(pSVar2);
    }
    iVar3 = FUN_006e4d40((void *)pSVar2->field_0010,pSVar2->field_000C);
    if (iVar3 == 1) {
      local_30[2] = pSVar2->field_0008;
      local_30[3] = 2;
      local_30[4] = 8;
      (**(code **)pSVar2->field_0000)(local_30);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 3:
    if (local_8->field_001C != 0) {
      FUN_006e56b0((void *)local_8->field_000C,local_8->field_001C);
    }
    if (pSVar2->field_0020 != 0) {
      FUN_006e56b0((void *)pSVar2->field_000C,pSVar2->field_0020);
    }
    if (pSVar2->field_0024 != 0) {
      FUN_006e56b0((void *)pSVar2->field_000C,pSVar2->field_0024);
    }
    iVar3 = FUN_006e4d40((void *)pSVar2->field_0010,pSVar2->field_000C);
    if (iVar3 == 1) {
      local_30[2] = pSVar2->field_0008;
      local_30[3] = 2;
      local_30[4] = 9;
      uVar5 = (**(code **)pSVar2->field_0000)(local_30);
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
    if (local_8->field_001C != 0) {
      FUN_006e6080(local_8,2,local_8->field_001C,local_30);
    }
    if (pSVar2->field_0020 != 0) {
      FUN_006e6080(pSVar2,2,pSVar2->field_0020,local_30);
    }
    if (pSVar2->field_0024 != 0) {
      FUN_006e6080(pSVar2,2,pSVar2->field_0024,local_30);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 8:
    if (local_8->field_0050 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    piVar8 = local_30;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_1c = pSVar2->field_0008;
    local_30[4] = 0x13;
    local_18 = 2;
    iVar3 = FUN_006e6000(pSVar2,3,1,local_30);
    goto LAB_00724bb2;
  case 9:
    if (local_8->field_0050 != 0) {
      piVar8 = local_30;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = 0;
        piVar8 = piVar8 + 1;
      }
      local_1c = pSVar2->field_0008;
      local_30[4] = 0x14;
      local_18 = 2;
      FUN_006e6000(pSVar2,3,1,local_30);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x20:
    local_1c = local_8->field_0018 & 0xff000000 | param_1[5];
    if (local_8->field_0018 != local_1c) {
      local_8->field_0018 = local_1c;
      local_30[4] = 0x20;
      if (local_8->field_001C != 0) {
        FUN_006e6080(local_8,2,local_8->field_001C,local_30);
      }
      if (pSVar2->field_0020 != 0) {
        FUN_006e6080(pSVar2,2,pSVar2->field_0020,local_30);
      }
      if (pSVar2->field_0024 != 0) {
        FUN_006e6080(pSVar2,2,pSVar2->field_0024,local_30);
      }
      if ((pSVar2->field_0018 & 0xffffff) != 0) {
        FUN_00724360(pSVar2);
        g_currentExceptionFrame = local_74.previous;
        return local_c;
      }
    }
    break;
  case 0x21:
    param_1[5] = local_8->field_0018;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x22:
    iVar3 = param_1[5];
    local_8->field_004C = iVar3;
    if (local_8->field_0024 != 0) {
      local_30[3] = 0x80000002;
      local_30[4] = 0x22;
      local_30[2] = local_8->field_0024;
      local_1c = iVar3;
      local_c = FUN_006e6060(local_8,local_30);
    }
    FUN_00724360(pSVar2);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x26:
    param_1[5] = local_8->field_004C;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x28:
    iVar3 = param_1[5];
    local_8->field_0048 = iVar3;
    if (iVar3 < 0) {
      local_8->field_0048 = 0;
    }
    iVar3 = local_8->field_0024;
    local_8->field_004C = 0;
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
    local_30[2] = local_8->field_001C;
    if (local_30[2] != 0) {
      FUN_006e6060(local_8,local_30);
      if ((short)local_1c != 0) {
        *(undefined2 *)(param_1 + 5) = 1;
        g_currentExceptionFrame = local_74.previous;
        return local_c;
      }
    }
    local_30[2] = pSVar2->field_0020;
    if ((local_30[2] != 0) && (FUN_006e6060(pSVar2,local_30), (short)local_1c != 0)) {
      *(undefined2 *)(param_1 + 5) = 1;
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    local_30[2] = pSVar2->field_0024;
    if ((local_30[2] != 0) && (FUN_006e6060(pSVar2,local_30), (short)local_1c != 0)) {
      *(undefined2 *)(param_1 + 5) = 1;
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x2c:
    iVar3 = param_1[5];
    local_8->field_004C = iVar3;
    local_8->field_003C = iVar3;
    FUN_00724360(local_8);
    goto cf_common_exit_00724BAB;
  case 0x55:
    local_8->field_0054 = 1;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x56:
    local_8->field_0054 = 0;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x67:
    if (local_8->field_0050 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    if (local_8->field_0054 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
  case 0x2f:
    if ((int)local_8->field_004C < 1) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    iVar3 = FUN_00724330(local_8,(uint)*(ushort *)(param_1 + 6));
    iVar3 = pSVar2->field_004C - iVar3;
    pSVar2->field_004C = iVar3;
    if (iVar3 < 0) {
      pSVar2->field_004C = 0;
    }
    FUN_00724360(pSVar2);
    if (pSVar2->field_0024 != 0) {
      local_1c = pSVar2->field_004C;
      local_30[4] = 0x22;
      FUN_006e6080(pSVar2,2,pSVar2->field_0024,local_30);
    }
    pSVar2->field_003C = pSVar2->field_004C;
    goto cf_common_exit_00724BAB;
  case 0x68:
    if (local_8->field_0050 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    if (local_8->field_0054 == 0) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
  case 0x30:
    if (local_8->field_0048 + -1 <= (int)local_8->field_004C) {
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    iVar3 = FUN_00724330(local_8,(uint)*(ushort *)(param_1 + 6));
    iVar3 = pSVar2->field_004C + iVar3;
    iVar4 = pSVar2->field_0048 + -1;
    pSVar2->field_004C = iVar3;
    if (iVar4 < iVar3) {
      pSVar2->field_004C = iVar4;
    }
    FUN_00724360(pSVar2);
    if (pSVar2->field_0024 != 0) {
      local_1c = pSVar2->field_004C;
      local_30[4] = 0x22;
      FUN_006e6080(pSVar2,2,pSVar2->field_0024,local_30);
    }
    pSVar2->field_003C = pSVar2->field_004C;
cf_common_exit_00724BAB:
    iVar3 = FUN_006e6020(pSVar2,(undefined4 *)&pSVar2->field_0x28);
LAB_00724bb2:
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_74.previous;
      return 0xffff;
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return local_c;
}

