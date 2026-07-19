
undefined4 FUN_0071e0e0(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  int iVar8;
  undefined4 *puVar9;
  InternalExceptionFrame local_74;
  int local_30 [5];
  int local_1c;
  int local_10;
  undefined4 local_c;
  void *local_8;
  
  iVar8 = 0;
  local_c = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  iVar3 = __setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar8 = ReportDebugMessage(s_E__Ourlib__sbutton_cpp_007f0a30,0x25e,0,iVar3,&DAT_007a4ccc,
                               s_RadioClassTy__GetMessage_error_007f0a48);
    if (iVar8 == 0) {
      RaiseInternalException(iVar3,0,s_E__Ourlib__sbutton_cpp_007f0a30,0x25f);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  switch(param_1[4]) {
  case 2:
    puVar1 = (undefined4 *)param_1[5];
    if (puVar1 == (undefined4 *)0x0) {
      g_currentExceptionFrame = local_74.previous;
      return 0xffff;
    }
    *(undefined4 *)((int)local_8 + 0x18) = *puVar1;
    puVar7 = puVar1 + 2;
    puVar9 = (undefined4 *)((int)local_8 + 0x28);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(void **)((int)local_8 + 0x44) = local_8;
    puVar7 = puVar1 + 10;
    puVar9 = (undefined4 *)((int)local_8 + 0x48);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(void **)((int)local_8 + 100) = local_8;
    iVar3 = puVar1[0x12];
    *(int *)((int)local_8 + 0x1c) = iVar3;
    *(undefined4 *)((int)local_8 + 0x24) = puVar1[1];
    iVar3 = FUN_006aac70(iVar3 << 2);
    iVar8 = 0;
    local_10 = 0;
    *(int *)((int)local_8 + 0x20) = iVar3;
    if (0 < *(int *)((int)local_8 + 0x1c)) {
      do {
        *(undefined4 *)(iVar8 + 4 + puVar1[0x13]) = 3;
        *(undefined4 *)(iVar8 + 0x20 + puVar1[0x13]) = *(undefined4 *)((int)local_8 + 8);
        *(undefined4 *)(iVar8 + 0x24 + puVar1[0x13]) = 2;
        *(undefined4 *)(iVar8 + 0x28 + puVar1[0x13]) = 0x2c;
        *(undefined4 *)(iVar8 + 0x60 + puVar1[0x13]) = *(undefined4 *)((int)local_8 + 8);
        *(undefined4 *)(iVar8 + 100 + puVar1[0x13]) = 2;
        *(undefined4 *)(iVar8 + 0x68 + puVar1[0x13]) = 0x2d;
        iVar3 = (**(code **)(**(int **)((int)local_8 + 0xc) + 8))
                          (2,*(int *)((int)local_8 + 0x20) + local_10 * 4,0,iVar8 + puVar1[0x13],0);
        if (iVar3 != 0) {
          g_currentExceptionFrame = local_74.previous;
          return 0xffff;
        }
        if ((*(int *)((int)local_8 + 0x24) < 0) && (*(int *)(iVar8 + puVar1[0x13]) == 3)) {
          *(int *)((int)local_8 + 0x24) = local_10;
        }
        local_10 = local_10 + 1;
        iVar8 = iVar8 + 0x17c;
      } while (local_10 < *(int *)((int)local_8 + 0x1c));
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 3:
    if (*(int *)((int)local_8 + 0x20) != 0) {
      iVar3 = 0;
      if (0 < *(int *)((int)local_8 + 0x1c)) {
        do {
          FUN_006e56b0(*(void **)((int)local_8 + 0xc),
                       *(uint *)(*(int *)((int)local_8 + 0x20) + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)local_8 + 0x1c));
      }
      FUN_006ab060((int *)((int)local_8 + 0x20));
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  default:
    FUN_006e5fd0();
    break;
  case 5:
  case 0x24:
    piVar6 = local_30;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *param_1;
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar3 = 0;
    if (0 < *(int *)((int)local_8 + 0x1c)) {
      do {
        FUN_006e6080(local_8,2,*(undefined4 *)(*(int *)((int)local_8 + 0x20) + iVar3 * 4),local_30);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)local_8 + 0x1c));
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x20:
    uVar4 = *(uint *)((int)local_8 + 0x18) & 0xff000000 | param_1[5];
    if (*(uint *)((int)local_8 + 0x18) != uVar4) {
      *(uint *)((int)local_8 + 0x18) = uVar4;
      iVar3 = 0;
      local_30[4] = 0x20;
      if (0 < *(int *)((int)local_8 + 0x1c)) {
        do {
          if (*(int *)((int)local_8 + 0x18) == 1) {
            local_1c = (-(uint)(iVar3 != *(int *)((int)local_8 + 0x24)) & 0xfffffffe) + 3;
          }
          else {
            local_1c = 0;
          }
          FUN_006e6080(local_8,2,*(undefined4 *)(*(int *)((int)local_8 + 0x20) + iVar3 * 4),local_30
                      );
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)local_8 + 0x1c));
        g_currentExceptionFrame = local_74.previous;
        return local_c;
      }
    }
    break;
  case 0x21:
    param_1[5] = *(int *)((int)local_8 + 0x18);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x22:
    FUN_0071e060(local_8,param_1[5],(uint)((short)param_1[6] == 0));
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x26:
    param_1[5] = *(int *)((int)local_8 + 0x24);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = 0;
    local_30[3] = 2;
    local_30[4] = 0x2b;
    if (0 < *(int *)((int)local_8 + 0x1c)) {
      do {
        local_30[2] = *(undefined4 *)(*(int *)((int)local_8 + 0x20) + iVar8 * 4);
        FUN_006e6060(local_8,local_30);
        if ((short)local_1c != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
          g_currentExceptionFrame = local_74.previous;
          return local_c;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int)local_8 + 0x1c));
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x2c:
    if ((param_1[5] == 3) && (0 < *(int *)((int)local_8 + 0x1c))) {
      do {
        if (*(int *)(*(int *)((int)local_8 + 0x20) + iVar8 * 4) == *param_1) {
          if (*(int *)((int)local_8 + 0x24) != iVar8) {
            FUN_0071e060(local_8,iVar8,0);
          }
          *(undefined4 *)((int)local_8 + 0x3c) = *(undefined4 *)((int)local_8 + 0x24);
          iVar3 = FUN_006e6020(local_8,(undefined4 *)((int)local_8 + 0x28));
          if (iVar3 != 0) {
            g_currentExceptionFrame = local_74.previous;
            return 0xffff;
          }
        }
        iVar8 = iVar8 + 1;
        if (*(int *)((int)local_8 + 0x1c) <= iVar8) {
          g_currentExceptionFrame = local_74.previous;
          return local_c;
        }
      } while( true );
    }
    break;
  case 0x2d:
    iVar3 = 0;
    if (0 < *(int *)((int)local_8 + 0x1c)) {
      piVar6 = *(int **)((int)local_8 + 0x20);
      while (*piVar6 != *param_1) {
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
        if (*(int *)((int)local_8 + 0x1c) <= iVar3) {
          g_currentExceptionFrame = local_74.previous;
          return local_c;
        }
      }
      *(int *)((int)local_8 + 0x5c) = param_1[5];
      *(short *)((int)local_8 + 0x5e) = (short)iVar3;
      *(int *)((int)local_8 + 0x60) = param_1[6];
      iVar3 = FUN_006e5fe0(local_8,(undefined4 *)((int)local_8 + 0x48));
      if (iVar3 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    break;
  case 0x54:
    if (param_1[5] == 3) {
      if (-1 < *(int *)((int)local_8 + 0x24)) {
        local_30[4] = 0x20;
        local_1c = 1;
        FUN_006e6080(local_8,2,
                     *(undefined4 *)
                      (*(int *)((int)local_8 + 0x20) + *(int *)((int)local_8 + 0x24) * 4),local_30);
      }
      *(int *)((int)local_8 + 0x24) = param_1[6];
    }
    else if (param_1[6] == *(int *)((int)local_8 + 0x24)) {
      *(undefined4 *)((int)local_8 + 0x24) = 0xffffffff;
    }
    local_1c = param_1[5];
    local_30[4] = 0x20;
    FUN_006e6080(local_8,2,*(undefined4 *)(*(int *)((int)local_8 + 0x20) + param_1[6] * 4),local_30)
    ;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x5b:
    param_1[5] = *(int *)((int)local_8 + 0x20);
    param_1[6] = *(int *)((int)local_8 + 0x1c);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_74.previous;
  return local_c;
}

