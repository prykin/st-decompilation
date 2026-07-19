
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sbutton.cpp
   RadioClassTy::GetMessage */

undefined4 __thiscall RadioClassTy::GetMessage(RadioClassTy *this,int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  RadioClassTy *pRVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  int iVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_74;
  int local_30 [5];
  int local_1c;
  int local_10;
  undefined4 local_c;
  RadioClassTy *local_8;
  
  iVar9 = 0;
  local_c = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pRVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar9 = ReportDebugMessage(s_E__Ourlib__sbutton_cpp_007f0a30,0x25e,0,iVar4,&DAT_007a4ccc,
                               s_RadioClassTy__GetMessage_error_007f0a48);
    if (iVar9 == 0) {
      RaiseInternalException(iVar4,0,s_E__Ourlib__sbutton_cpp_007f0a30,0x25f);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  switch(param_1[4]) {
  case 2:
    puVar1 = (undefined4 *)param_1[5];
    if (puVar1 == (undefined4 *)0x0) {
      g_currentExceptionFrame = local_74.previous;
      return 0xffff;
    }
    local_8->field_0018 = *puVar1;
    puVar8 = puVar1 + 2;
    puVar10 = (undefined4 *)&local_8->field_0x28;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    local_8->field_0044 = local_8;
    puVar8 = puVar1 + 10;
    puVar10 = (undefined4 *)&local_8->field_0x48;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    local_8->field_0064 = local_8;
    iVar4 = puVar1[0x12];
    local_8->field_001C = iVar4;
    local_8->field_0024 = puVar1[1];
    iVar4 = Library::DKW::LIB::FUN_006aac70(iVar4 << 2);
    pRVar3 = local_8;
    iVar9 = 0;
    local_10 = 0;
    local_8->field_0020 = iVar4;
    if (0 < (int)local_8->field_001C) {
      do {
        *(undefined4 *)(iVar9 + 4 + puVar1[0x13]) = 3;
        *(undefined4 *)(iVar9 + 0x20 + puVar1[0x13]) = pRVar3->field_0008;
        *(undefined4 *)(iVar9 + 0x24 + puVar1[0x13]) = 2;
        *(undefined4 *)(iVar9 + 0x28 + puVar1[0x13]) = 0x2c;
        *(undefined4 *)(iVar9 + 0x60 + puVar1[0x13]) = pRVar3->field_0008;
        *(undefined4 *)(iVar9 + 100 + puVar1[0x13]) = 2;
        *(undefined4 *)(iVar9 + 0x68 + puVar1[0x13]) = 0x2d;
        iVar4 = (**(code **)(*(int *)pRVar3->field_000C + 8))
                          (2,pRVar3->field_0020 + local_10 * 4,0,iVar9 + puVar1[0x13],0);
        if (iVar4 != 0) {
          g_currentExceptionFrame = local_74.previous;
          return 0xffff;
        }
        if (((int)pRVar3->field_0024 < 0) && (*(int *)(iVar9 + puVar1[0x13]) == 3)) {
          pRVar3->field_0024 = local_10;
        }
        local_10 = local_10 + 1;
        iVar9 = iVar9 + 0x17c;
      } while (local_10 < (int)pRVar3->field_001C);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 3:
    puVar1 = &local_8->field_0020;
    if (local_8->field_0020 != 0) {
      iVar4 = 0;
      if (0 < (int)local_8->field_001C) {
        do {
          FUN_006e56b0((void *)pRVar3->field_000C,*(uint *)(*puVar1 + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)pRVar3->field_001C);
      }
      FUN_006ab060(puVar1);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  default:
    FUN_006e5fd0();
    break;
  case 5:
  case 0x24:
    piVar7 = local_30;
    for (iVar4 = 8; pRVar3 = local_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *param_1;
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar4 = 0;
    if (0 < (int)local_8->field_001C) {
      do {
        FUN_006e6080(pRVar3,2,*(undefined4 *)(pRVar3->field_0020 + iVar4 * 4),local_30);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)pRVar3->field_001C);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x20:
    uVar5 = local_8->field_0018 & 0xff000000 | param_1[5];
    if (local_8->field_0018 != uVar5) {
      local_8->field_0018 = uVar5;
      iVar4 = 0;
      local_30[4] = 0x20;
      if (0 < (int)local_8->field_001C) {
        do {
          if (pRVar3->field_0018 == 1) {
            local_1c = (-(uint)(iVar4 != pRVar3->field_0024) & 0xfffffffe) + 3;
          }
          else {
            local_1c = 0;
          }
          FUN_006e6080(pRVar3,2,*(undefined4 *)(pRVar3->field_0020 + iVar4 * 4),local_30);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)pRVar3->field_001C);
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
    FUN_0071e060(local_8,param_1[5],(uint)((short)param_1[6] == 0));
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x26:
    param_1[5] = local_8->field_0024;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = 0;
    local_30[3] = 2;
    local_30[4] = 0x2b;
    if (0 < (int)local_8->field_001C) {
      do {
        local_30[2] = *(undefined4 *)(pRVar3->field_0020 + iVar9 * 4);
        FUN_006e6060(pRVar3,local_30);
        if ((short)local_1c != 0) {
          *(undefined2 *)(param_1 + 5) = 1;
          g_currentExceptionFrame = local_74.previous;
          return local_c;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)pRVar3->field_001C);
      g_currentExceptionFrame = local_74.previous;
      return local_c;
    }
    break;
  case 0x2c:
    if ((param_1[5] == 3) && (0 < (int)local_8->field_001C)) {
      do {
        if (*(int *)(pRVar3->field_0020 + iVar9 * 4) == *param_1) {
          if (pRVar3->field_0024 != iVar9) {
            FUN_0071e060(pRVar3,iVar9,0);
          }
          pRVar3->field_003C = pRVar3->field_0024;
          iVar4 = FUN_006e6020(pRVar3,(undefined4 *)&pRVar3->field_0x28);
          if (iVar4 != 0) {
            g_currentExceptionFrame = local_74.previous;
            return 0xffff;
          }
        }
        iVar9 = iVar9 + 1;
        if ((int)pRVar3->field_001C <= iVar9) {
          g_currentExceptionFrame = local_74.previous;
          return local_c;
        }
      } while( true );
    }
    break;
  case 0x2d:
    iVar4 = 0;
    if (0 < (int)local_8->field_001C) {
      piVar7 = (int *)local_8->field_0020;
      while (*piVar7 != *param_1) {
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
        if ((int)local_8->field_001C <= iVar4) {
          g_currentExceptionFrame = local_74.previous;
          return local_c;
        }
      }
      *(int *)&local_8->field_0x5c = param_1[5];
      *(short *)&local_8->field_0x5e = (short)iVar4;
      local_8->field_0060 = param_1[6];
      iVar4 = FUN_006e5fe0(local_8,(undefined4 *)&local_8->field_0x48);
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_74.previous;
        return 0xffff;
      }
    }
    break;
  case 0x54:
    if (param_1[5] == 3) {
      if (-1 < (int)local_8->field_0024) {
        local_30[4] = 0x20;
        local_1c = 1;
        FUN_006e6080(local_8,2,*(undefined4 *)(local_8->field_0020 + local_8->field_0024 * 4),
                     local_30);
      }
      pRVar3->field_0024 = param_1[6];
    }
    else if (param_1[6] == local_8->field_0024) {
      local_8->field_0024 = 0xffffffff;
    }
    local_1c = param_1[5];
    local_30[4] = 0x20;
    FUN_006e6080(pRVar3,2,*(undefined4 *)(pRVar3->field_0020 + param_1[6] * 4),local_30);
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  case 0x5b:
    param_1[5] = local_8->field_0020;
    param_1[6] = local_8->field_001C;
    g_currentExceptionFrame = local_74.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_74.previous;
  return local_c;
}

