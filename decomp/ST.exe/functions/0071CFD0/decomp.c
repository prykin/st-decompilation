
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sbutton.cpp
   ButtonClassTy::GetMessage */

int __thiscall ButtonClassTy::GetMessage(ButtonClassTy *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  ControlClassTy *this_00;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  ControlClassTy *pCVar10;
  InternalExceptionFrame local_74;
  undefined4 local_30 [4];
  undefined4 local_20;
  ControlClassTy *local_1c;
  undefined4 local_18;
  ControlClassTy *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_10 = (ControlClassTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib__sbutton_cpp_007f0a30,0x1aa,0,iVar4,&DAT_007a4ccc,
                               s_ButtonClassTy__GetMessage_Error___007f0a0c);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    RaiseInternalException(0xffff,0,s_E__Ourlib__sbutton_cpp_007f0a30,0x1ab);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (undefined4 *)param_1[5];
    if (local_c != (undefined4 *)0x0) {
      *(undefined4 *)(local_10 + 0x20) = local_c[1];
      *(undefined4 *)(local_10 + 0x1c) = *local_c;
      *(undefined4 *)(local_10 + 0x24) = local_c[2];
      *(undefined4 *)(local_10 + 0x28) = local_c[3];
      *(undefined4 *)(local_10 + 0x2c) = local_c[4];
      *(undefined4 *)(local_10 + 0x30) = local_c[5];
      puVar9 = local_c + 6;
      pCVar10 = local_10 + 0x134;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x150) = local_10;
      puVar9 = local_c + 0xe;
      pCVar10 = local_10 + 0x154;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x170) = local_10;
      puVar9 = local_c + 0x16;
      pCVar10 = local_10 + 0x178;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x194) = local_10;
      puVar9 = local_c + 0x1e;
      pCVar10 = local_10 + 0x3c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x58) = local_10;
      puVar9 = local_c + 0x27;
      pCVar10 = local_10 + 0x60;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x7c) = local_10;
      *(undefined4 *)(local_10 + 0x5c) = local_c[0x26];
      *(undefined4 *)(local_10 + 0x88) = local_c[0x2f];
      puVar9 = local_c + 0x30;
      pCVar10 = local_10 + 0x8c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0xa8) = local_10;
      puVar9 = local_c + 0x39;
      pCVar10 = local_10 + 0xb0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(ControlClassTy **)(local_10 + 0xcc) = local_10;
      *(undefined4 *)(local_10 + 0xac) = local_c[0x38];
      *(undefined4 *)(local_10 + 0xd8) = local_c[0x41];
      *(undefined4 *)(local_10 + 300) = local_c[0x49];
      *(undefined4 *)(local_10 + 0x130) = local_c[0x4a];
      *(uint *)(local_10 + 0x34) = (uint)(local_c[0x42] == 0);
      *(uint *)(local_10 + 0x38) = (uint)(local_c[0x43] == 0);
      *(undefined4 *)(local_10 + 0x1e0) = local_c[0x5e];
      switch(*(undefined4 *)(local_10 + 0x20)) {
      case 2:
        *(undefined4 *)(local_10 + 0x1a4) = local_c[0x44];
        *(undefined4 *)(local_10 + 0x1a8) = local_c[0x45];
        break;
      case 3:
        *(undefined4 *)(local_10 + 0x1d8) = local_c[0x44];
        *(undefined4 *)(local_10 + 0x1dc) = local_c[0x45];
        break;
      case 4:
      case 5:
      case 7:
        *(undefined4 *)(local_10 + 0x1b0) = local_c[0x44];
        *(undefined4 *)(local_10 + 0x1b4) = local_c[0x45];
        *(undefined4 *)(local_10 + 0x1b8) = local_c[0x46];
        *(undefined4 *)(local_10 + 0x1bc) = local_c[0x47];
        *(undefined4 *)(local_10 + 0x1a8) = local_c[0x48];
      }
      *(undefined4 *)(local_10 + 0x1e8) = 0;
      uVar5 = FUN_006e51b0(*(int *)(local_10 + 0x10));
      *(undefined4 *)(this_00 + 0x1c0) = uVar5;
      *(undefined4 *)(this_00 + 0x1e4) = 0;
      puVar9 = local_c + 0x4b;
      pCVar10 = this_00 + 0xdc;
      for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        pCVar10 = pCVar10 + 4;
      }
      *(undefined4 *)(this_00 + 0x198) = 0;
      *(undefined4 *)(this_00 + 0x19c) = 0;
      *(undefined4 *)(this_00 + 0x1c4) = 0;
      *(undefined4 *)(this_00 + 0x1c8) = 0;
      *(undefined4 *)(this_00 + 0x1cc) = 0;
      *(undefined4 *)(this_00 + 0x1d0) = 0;
      break;
    }
    local_8 = 0xffff;
    goto LAB_0071d51b;
  case 6:
    if ((*(int *)(local_10 + 300) != 0) && ((*(byte *)(param_1 + 6) & 1) == 0)) {
      g_currentExceptionFrame = local_74.previous;
      return 0;
    }
    break;
  case 8:
    if ((*(uint *)(local_10 + 0x1c) & 0x70000000) != 0) {
      local_1c = *(ControlClassTy **)(local_10 + 8);
      local_20 = 0x13;
      local_18 = 0;
      iVar4 = FUN_006e6000(local_10,3,1,local_30);
      if (iVar4 == 0) {
        if (((((byte)this_00[0xdc] & 8) != 0) && (*(int *)(this_00 + 0xe0) != 0)) ||
           (this_00[0xe0] != (ControlClassTy)0x0)) {
          *(undefined4 *)(this_00 + 0x110) = *(undefined4 *)(this_00 + 8);
          *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this_00 + 8);
          *(undefined4 *)(this_00 + 0x114) = 2;
          *(undefined4 *)(this_00 + 0xf4) = 2;
          *(undefined4 *)(this_00 + 0xf8) = 0x2c;
          *(undefined4 *)(this_00 + 0x118) = 0x2e;
          local_20 = 0x10;
          local_1c = this_00 + 0xdc;
          local_8 = FUN_006e6000(this_00,3,1,local_30);
          if (local_8 != 0) break;
          *(undefined4 *)(this_00 + 0x128) = 1;
        }
        *(undefined4 *)(this_00 + 0x1e8) = 0;
        if (*(int *)(this_00 + 300) != 0) {
          *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) & 0x8fffffff;
          (**(code **)(*(int *)this_00 + 4))();
          g_currentExceptionFrame = local_74.previous;
          return 0;
        }
      }
      else {
        local_8 = 0xffff;
      }
    }
    break;
  case 9:
    if ((*(uint *)(local_10 + 0x1c) & 0x70000000) == 0) {
      local_1c = local_10 + 0xdc;
      if (((((byte)local_10[0xdc] & 8) != 0) && (*(int *)(local_10 + 0xe0) != 0)) ||
         (local_10[0xe0] != (ControlClassTy)0x0)) {
        local_20 = 0x11;
        FUN_006e6000(local_10,3,1,local_30);
        *(undefined4 *)(this_00 + 0x128) = 0;
      }
      local_1c = *(ControlClassTy **)(this_00 + 8);
      local_20 = 0x14;
      FUN_006e6000(this_00,3,1,local_30);
    }
    break;
  case 0x20:
    uVar6 = param_1[5];
    *(uint *)(local_10 + 0x1c) = *(uint *)(local_10 + 0x1c) & 0xff000000 | uVar6;
    if ((uVar6 & 0xffffff) == 0) {
      if (*(int *)(local_10 + 0x80) != 0) {
        if (*(int *)(local_10 + 0x70) != 0) {
          FUN_006e5fe0(local_10,(undefined4 *)(local_10 + 0x60));
        }
        *(undefined4 *)(this_00 + 0x80) = 0;
      }
      if (*(int *)(this_00 + 0x84) != 0) {
        *(undefined4 *)(this_00 + 0x84) = 0;
      }
    }
    *(undefined4 *)(this_00 + 0x198) = 0;
    *(undefined4 *)(this_00 + 0x19c) = 0;
    *(undefined4 *)(this_00 + 0x1e8) = 0;
    iVar4 = (**(code **)(*(int *)this_00 + 4))();
    if (iVar4 != 0) {
      local_8 = 0xffff;
    }
    break;
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)(local_10 + 0x1c8);
    break;
  case 0x52:
    *(uint *)(local_10 + 0x2c) = (uint)*(ushort *)(param_1 + 5);
    *(uint *)(local_10 + 0x30) = (uint)*(ushort *)((int)param_1 + 0x16);
    break;
  case 0x5a:
    *(undefined4 *)(local_10 + 0x114) = 2;
    *(undefined4 *)(local_10 + 0x110) = *(undefined4 *)(local_10 + 8);
    *(undefined4 *)(local_10 + 0xf0) = *(undefined4 *)(local_10 + 8);
    *(undefined4 *)(local_10 + 0xf4) = 2;
    *(undefined4 *)(local_10 + 0xf8) = 0x2c;
    *(undefined4 *)(local_10 + 0x118) = 0x2e;
    break;
  case 0x60:
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    iVar4 = *(int *)(local_10 + 0x24);
    if ((((((int)uVar6 < iVar4) || (*(int *)(local_10 + 0x2c) + iVar4 <= (int)uVar6)) ||
         (iVar7 = *(int *)(local_10 + 0x28), (int)uVar8 < iVar7)) ||
        (*(int *)(local_10 + 0x30) + iVar7 <= (int)uVar8)) ||
       (((iVar1 = *(int *)(local_10 + 300), iVar1 != 0 && (iVar1 != -1)) &&
        (bVar3 = FUN_006b55c0(iVar1,*(int *)(local_10 + 0x130),uVar6 - iVar4,uVar8 - iVar7),
        CONCAT31(extraout_var,bVar3) == 0)))) {
      *(undefined4 *)(this_00 + 0x1c8) = 0;
    }
    else {
      *(undefined4 *)(this_00 + 0x1c8) = 1;
    }
  }
LAB_0071d51b:
  uVar6 = *(uint *)(this_00 + 0x1c);
  if ((uVar6 == 0) || ((uVar6 & 0xf0000000) != 0)) goto cf_common_exit_0071DDC0;
  switch(param_1[4]) {
  case 0:
    switch(*(undefined4 *)(this_00 + 0x20)) {
    case 2:
      if (*(int *)(this_00 + 0x198) == 0) break;
      iVar4 = FUN_006e51b0(*(int *)(this_00 + 0x10));
      if (*(int *)(this_00 + 0x1ac) == 0) {
        if ((uint)(iVar4 - *(int *)(this_00 + 0x1c0)) < *(uint *)(this_00 + 0x1a8)) break;
        *(int *)(this_00 + 0x1e4) = *(int *)(this_00 + 0x1e4) + 1;
        if (*(int *)(this_00 + 0x174) != 0) {
          *(undefined4 *)(this_00 + 0x168) = *(undefined4 *)(this_00 + 0x1c);
          if (*(int *)(this_00 + 0x1e0) != 0) {
            *(undefined2 *)(this_00 + 0x16c) = *(undefined2 *)(this_00 + 0x1e4);
          }
          goto LAB_0071dc9d;
        }
        *(undefined4 *)(this_00 + 0x148) = *(undefined4 *)(this_00 + 0x1c);
        if (*(int *)(this_00 + 0x1e0) != 0) {
          *(undefined2 *)(this_00 + 0x14c) = *(undefined2 *)(this_00 + 0x1e4);
        }
        iVar7 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x134));
        if (iVar7 != 0) {
          local_8 = 0xffff;
          break;
        }
      }
      else {
        if ((uint)(iVar4 - *(int *)(this_00 + 0x1c0)) < *(uint *)(this_00 + 0x1a4)) break;
        *(undefined4 *)(this_00 + 0x1ac) = 0;
        *(int *)(this_00 + 0x1e4) = *(int *)(this_00 + 0x1e4) + 1;
        if (*(int *)(this_00 + 0x174) == 0) {
          *(undefined4 *)(this_00 + 0x148) = *(undefined4 *)(this_00 + 0x1c);
          if (*(int *)(this_00 + 0x1e0) != 0) {
            *(undefined2 *)(this_00 + 0x14c) = *(undefined2 *)(this_00 + 0x1e4);
          }
          iVar7 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x134));
          if (iVar7 != 0) {
            local_8 = 0xffff;
            break;
          }
        }
        else {
          *(undefined4 *)(this_00 + 0x168) = *(undefined4 *)(this_00 + 0x1c);
          if (*(int *)(this_00 + 0x1e0) != 0) {
            *(undefined2 *)(this_00 + 0x16c) = *(undefined2 *)(this_00 + 0x1e4);
          }
LAB_0071dc9d:
          iVar7 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x154));
          if (iVar7 != 0) {
            local_8 = 0xffff;
            break;
          }
        }
      }
      goto LAB_0071ddba;
    default:
      break;
    case 4:
      goto switchD_0071db77_caseD_4;
    case 5:
    case 7:
      if (*(int *)(this_00 + 0x1c4) == 0) break;
      if (*(int *)(this_00 + uVar6 * 4 + 0x1b0) + -1 <= *(int *)(this_00 + 0x1e8)) {
        *(undefined4 *)(this_00 + 0x1e8) = 0;
        *(undefined4 *)(this_00 + 0x1c4) = 0;
        *(undefined4 *)(this_00 + 0x174) = 0;
        if (*(int *)(this_00 + 0x1c) == 1) {
          if (*(int *)(this_00 + 0x1c8) == 0) {
            *(undefined4 *)(this_00 + 0x1cc) = 0;
            goto LAB_0071dd4e;
          }
        }
        else if ((*(int *)(this_00 + 0x1c) == 3) && (*(int *)(this_00 + 0x1c8) == 0)) {
          *(undefined4 *)(this_00 + 0x1c) = 1;
LAB_0071dd4e:
          *(undefined4 *)(this_00 + 0x19c) = 0;
        }
        iVar4 = (**(code **)(*(int *)this_00 + 4))();
        if (iVar4 != 0) {
          local_8 = 0xffff;
        }
        break;
      }
switchD_0071db77_caseD_4:
      if ((1 < *(int *)(this_00 + uVar6 * 4 + 0x1b0)) &&
         (iVar4 = FUN_006e51b0(*(int *)(this_00 + 0x10)),
         *(uint *)(this_00 + 0x1a8) < (uint)(iVar4 - *(int *)(this_00 + 0x1c0)))) {
        if (*(int *)(this_00 + 0x1e8) <
            *(int *)(this_00 + *(int *)(this_00 + 0x1c) * 4 + 0x1b0) + -1) {
          iVar7 = *(int *)(this_00 + 0x1e8) + 1;
        }
        else {
          iVar7 = 0;
        }
        *(int *)(this_00 + 0x1e8) = iVar7;
        iVar7 = (**(code **)(*(int *)this_00 + 4))();
        if (iVar7 == 0) {
LAB_0071ddba:
          *(int *)(this_00 + 0x1c0) = iVar4;
        }
        else {
          local_8 = 0xffff;
        }
      }
    }
  default:
    goto cf_common_exit_0071DDC0;
  case 0x2c:
    goto switchD_0071d549_caseD_2c;
  case 0x2e:
    goto switchD_0071d549_caseD_2e;
  case 0x60:
    if (*(int *)(this_00 + 0x1d0) != 0) goto cf_common_exit_0071DDC0;
    iVar4 = *(int *)(this_00 + 0x24);
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if (((iVar4 <= (int)uVar6) && ((int)uVar6 < *(int *)(this_00 + 0x2c) + iVar4)) &&
       (((iVar7 = *(int *)(this_00 + 0x28), iVar7 <= (int)uVar8 &&
         ((int)uVar8 < *(int *)(this_00 + 0x30) + iVar7)) &&
        (((iVar1 = *(int *)(this_00 + 300), iVar1 == 0 || (iVar1 == -1)) ||
         (bVar3 = FUN_006b55c0(iVar1,*(int *)(this_00 + 0x130),uVar6 - iVar4,uVar8 - iVar7),
         CONCAT31(extraout_var_00,bVar3) != 0)))))) {
      switch(*(undefined4 *)(this_00 + 0x20)) {
      case 1:
      case 4:
switchD_0071d5d0_caseD_1:
        if (*(int *)(this_00 + 0x19c) == 0) {
          *(undefined4 *)(this_00 + 0x1c) = 3;
          *(undefined4 *)(this_00 + 0x1e8) = 0;
          iVar4 = (**(code **)(*(int *)this_00 + 4))();
          if (iVar4 == 0) {
            *(undefined4 *)(this_00 + 0x19c) = 1;
            *(undefined4 *)(this_00 + 0x1c4) = 1;
          }
          else {
            local_8 = 0xffff;
          }
        }
        break;
      case 5:
      case 7:
        if (*(int *)(this_00 + 0x1cc) == 0) goto switchD_0071d5d0_caseD_1;
      }
      *(undefined4 *)(this_00 + 0x1c8) = 1;
      if (*(int *)(this_00 + 0x198) == 0) {
        *(undefined4 *)(this_00 + 0x1a0) = *(undefined4 *)(this_00 + 0x1c);
      }
      goto cf_common_exit_0071DDC0;
    }
    if (((*(int *)(this_00 + 0x198) == 0) && (*(int *)(this_00 + 0x19c) == 0)) &&
       (*(int *)(this_00 + 0x1c8) == 0)) goto cf_common_exit_0071DDC0;
    switch(*(undefined4 *)(this_00 + 0x20)) {
    case 3:
      *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this_00 + 0x1a0);
      goto LAB_0071d6f7;
    default:
switchD_0071d677_caseD_4:
      *(undefined4 *)(this_00 + 0x1c) = 1;
      *(undefined4 *)(this_00 + 0x1e8) = 0;
LAB_0071d6f7:
      *(undefined4 *)(this_00 + 0x19c) = 0;
      break;
    case 5:
    case 7:
      *(undefined4 *)(this_00 + 0x1cc) = 0;
      if (*(int *)(this_00 + 0x1c4) == 0) {
        *(undefined4 *)(this_00 + 0x1c) = 1;
        *(undefined4 *)(this_00 + 0x19c) = 0;
        *(undefined4 *)(this_00 + 0x1e8) = 0;
      }
      break;
    case 6:
      if (*(int *)(this_00 + 0x174) == 0) {
        pCVar10 = this_00 + 0x134;
        *(undefined4 *)(this_00 + 0x148) = 1;
      }
      else {
        pCVar10 = this_00 + 0x154;
        *(undefined4 *)(this_00 + 0x168) = 1;
      }
      iVar4 = FUN_006e6020(this_00,(undefined4 *)pCVar10);
      if (iVar4 == 0) goto switchD_0071d677_caseD_4;
      local_8 = 0xffff;
    }
    iVar4 = (**(code **)(*(int *)this_00 + 4))();
    if (iVar4 == 0) {
      *(undefined4 *)(this_00 + 0x198) = 0;
      *(undefined4 *)(this_00 + 0x1c8) = 0;
      *(undefined4 *)(this_00 + 0x174) = 0;
    }
    else {
      local_8 = 0xffff;
    }
    goto cf_common_exit_0071DDC0;
  case 0x61:
    goto switchD_0071d549_caseD_61;
  case 0x62:
    break;
  case 99:
    goto switchD_0071d549_caseD_63;
  case 100:
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if (*(int *)(this_00 + 0x164) == 0) goto cf_common_exit_0071DDC0;
    iVar4 = *(int *)(this_00 + 0x24);
    *(undefined4 *)(this_00 + 0x174) = 0;
    if (((((iVar4 <= (int)uVar6) && ((int)uVar6 <= *(int *)(this_00 + 0x2c) + iVar4)) &&
         (iVar7 = *(int *)(this_00 + 0x28), iVar7 <= (int)uVar8)) &&
        ((int)uVar8 <= *(int *)(this_00 + 0x30) + iVar7)) &&
       (((iVar1 = *(int *)(this_00 + 300), iVar1 == 0 || (iVar1 == -1)) ||
        (bVar3 = FUN_006b55c0(iVar1,*(int *)(this_00 + 0x130),uVar6 - iVar4,uVar8 - iVar7),
        CONCAT31(extraout_var_03,bVar3) != 0)))) {
      *(undefined4 *)(this_00 + 0x174) = 1;
    }
  }
  iVar4 = *(int *)(this_00 + 0x24);
  uVar6 = (uint)*(ushort *)(param_1 + 6);
  uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
  if ((((iVar4 <= (int)uVar6) && ((int)uVar6 <= *(int *)(this_00 + 0x2c) + iVar4)) &&
      ((iVar7 = *(int *)(this_00 + 0x28), iVar7 <= (int)uVar8 &&
       ((int)uVar8 <= *(int *)(this_00 + 0x30) + iVar7)))) &&
     (((iVar1 = *(int *)(this_00 + 300), iVar1 == 0 || (iVar1 == -1)) ||
      (bVar3 = FUN_006b55c0(iVar1,*(int *)(this_00 + 0x130),uVar6 - iVar4,uVar8 - iVar7),
      CONCAT31(extraout_var_04,bVar3) != 0)))) {
switchD_0071d549_caseD_2e:
    if (*(int *)(this_00 + 0x198) != 0) {
      if (*(int *)(this_00 + 0x20) == 1) {
        *(uint *)(this_00 + 0x1c) = (-(uint)(*(int *)(this_00 + 0x1c8) != 0) & 2) + 1;
      }
      else if (*(int *)(this_00 + 0x20) == 3) {
        if ((*(int *)(this_00 + 0x1a0) == 3) && (*(int *)(this_00 + 0x1d8) != 0)) {
          *(undefined4 *)(this_00 + 0x1c) = 3;
        }
        else {
          *(uint *)(this_00 + 0x1c) = (-(uint)(*(int *)(this_00 + 0x1a0) != 3) & 2) + 1;
        }
      }
      else {
        *(undefined4 *)(this_00 + 0x1c) = 1;
      }
      *(undefined4 *)(this_00 + 0x1e8) = 0;
      *(undefined4 *)(this_00 + 0x1c4) = 1;
      iVar4 = (**(code **)(*(int *)this_00 + 4))();
      if (iVar4 == 0) {
        if (*(int *)(this_00 + 0x20) == 2) {
          FUN_006e51b0(*(int *)(this_00 + 0x10));
        }
        else if (*(int *)(this_00 + 0x20) != 7) {
          if (*(int *)(this_00 + 0x174) == 0) {
            pCVar10 = this_00 + 0x134;
            *(undefined4 *)(this_00 + 0x148) = *(undefined4 *)(this_00 + 0x1c);
          }
          else {
            pCVar10 = this_00 + 0x154;
            *(undefined4 *)(this_00 + 0x168) = *(undefined4 *)(this_00 + 0x1c);
          }
          iVar4 = FUN_006e6020(this_00,(undefined4 *)pCVar10);
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        *(undefined4 *)(this_00 + 0x198) = 0;
        *(undefined4 *)(this_00 + 0x1cc) = 1;
        *(undefined4 *)(this_00 + 0x1d0) = 0;
        *(undefined4 *)(this_00 + 0x174) = 0;
      }
      else {
        local_8 = 0xffff;
      }
    }
  }
  goto cf_common_exit_0071DDC0;
switchD_0071d549_caseD_63:
  if (*(int *)(this_00 + 0x164) == 0) goto cf_common_exit_0071DDC0;
  uVar6 = (uint)*(ushort *)(param_1 + 6);
  uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
  iVar4 = *(int *)(this_00 + 0x24);
  *(undefined4 *)(this_00 + 0x174) = 0;
  if (((iVar4 <= (int)uVar6) && ((int)uVar6 < *(int *)(this_00 + 0x2c) + iVar4)) &&
     (((iVar7 = *(int *)(this_00 + 0x28), iVar7 <= (int)uVar8 &&
       ((int)uVar8 < *(int *)(this_00 + 0x30) + iVar7)) &&
      (((iVar1 = *(int *)(this_00 + 300), iVar1 == 0 || (iVar1 == -1)) ||
       (bVar3 = FUN_006b55c0(iVar1,*(int *)(this_00 + 0x130),uVar6 - iVar4,uVar8 - iVar7),
       CONCAT31(extraout_var_01,bVar3) != 0)))))) {
    *(undefined4 *)(this_00 + 0x174) = 1;
    *(undefined4 *)(this_00 + 0x1c8) = 1;
  }
switchD_0071d549_caseD_61:
  iVar4 = *(int *)(this_00 + 0x24);
  uVar6 = (uint)*(ushort *)(param_1 + 6);
  uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
  if (((((iVar4 <= (int)uVar6) && ((int)uVar6 < *(int *)(this_00 + 0x2c) + iVar4)) &&
       (iVar7 = *(int *)(this_00 + 0x28), iVar7 <= (int)uVar8)) &&
      ((int)uVar8 < *(int *)(this_00 + 0x30) + iVar7)) &&
     (((iVar1 = *(int *)(this_00 + 300), iVar1 == 0 || (iVar1 == -1)) ||
      (bVar3 = FUN_006b55c0(iVar1,*(int *)(this_00 + 0x130),uVar6 - iVar4,uVar8 - iVar7),
      CONCAT31(extraout_var_02,bVar3) != 0)))) {
    *(undefined4 *)(this_00 + 0x1c8) = 1;
switchD_0071d549_caseD_2c:
    if (*(int *)(this_00 + 0x198) == 0) {
      *(uint *)(this_00 + 0x1d0) = (uint)(*(int *)(this_00 + 0x1c8) == 0);
      switch(*(undefined4 *)(this_00 + 0x20)) {
      case 2:
        *(undefined4 *)(this_00 + 0x1ac) = 1;
        uVar5 = FUN_006e51b0(*(int *)(this_00 + 0x10));
        *(undefined4 *)(this_00 + 0x1c0) = uVar5;
        *(undefined4 *)(this_00 + 0x1e4) = 0;
        if (*(int *)(this_00 + 0x174) == 0) {
          *(undefined4 *)(this_00 + 0x148) = 2;
          if (*(int *)(this_00 + 0x1e0) != 0) {
            *(undefined2 *)(this_00 + 0x14c) = *(undefined2 *)(this_00 + 0x1e4);
          }
          iVar4 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x134));
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        else {
          *(undefined4 *)(this_00 + 0x168) = 2;
          if (*(int *)(this_00 + 0x1e0) != 0) {
            *(undefined2 *)(this_00 + 0x16c) = *(undefined2 *)(this_00 + 0x1e4);
          }
          iVar4 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x154));
          if (iVar4 != 0) {
            local_8 = 0xffff;
          }
        }
        break;
      case 3:
        if ((*(int *)(this_00 + 0x1dc) != 0) && (*(int *)(this_00 + 0x1c) == 3))
        goto cf_common_exit_0071DDC0;
        *(undefined4 *)(this_00 + 0x1a0) = *(undefined4 *)(this_00 + 0x1c);
        break;
      case 6:
      case 7:
        if (*(int *)(this_00 + 0x174) == 0) {
          pCVar10 = this_00 + 0x134;
          *(undefined4 *)(this_00 + 0x148) = 2;
        }
        else {
          pCVar10 = this_00 + 0x154;
          *(undefined4 *)(this_00 + 0x168) = 2;
        }
        iVar4 = FUN_006e6020(this_00,(undefined4 *)pCVar10);
        if (iVar4 == 0) {
          *(undefined4 *)(this_00 + 0x174) = 0;
        }
        else {
          local_8 = 0xffff;
        }
      }
      *(undefined4 *)(this_00 + 0x1c) = 2;
      *(undefined4 *)(this_00 + 0x1e8) = 0;
      *(undefined4 *)(this_00 + 0x1c4) = 1;
      iVar4 = (**(code **)(*(int *)this_00 + 4))();
      if (iVar4 == 0) {
        *(undefined4 *)(this_00 + 0x198) = 1;
      }
      else {
        local_8 = 0xffff;
      }
    }
  }
cf_common_exit_0071DDC0:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__sbutton_cpp_007f0a30,0x1a6);
  }
  iVar4 = ControlClassTy::GetMessage(this_00,param_1);
  if (iVar4 != 0) {
    local_8 = iVar4;
    RaiseInternalException(iVar4,DAT_007ed77c,s_E__Ourlib__sbutton_cpp_007f0a30,0x1a8);
  }
  g_currentExceptionFrame = local_74.previous;
  return iVar4;
}

