
/* Recovered from embedded debug metadata:
   E:\Ourlib\Scontrol.cpp
   ControlClassTy::GetMessage */

int __thiscall ControlClassTy::GetMessage(ControlClassTy *this,int *param_1)

{
  ControlClassTy *pCVar1;
  int iVar2;
  code *pcVar3;
  ControlClassTy *this_00;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar6;
  undefined3 extraout_var_03;
  DWORD DVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar9;
  int iVar10;
  InternalExceptionFrame local_70;
  int local_2c [5];
  ControlClassTy *local_18;
  undefined2 local_14;
  ControlClassTy *local_c;
  int local_8;
  
  local_8 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Scontrol_cpp_007f10c0,0x10a,0,iVar5,&DAT_007a4ccc,
                               s_ControlClassTy__GetMessage_Error_007f109c);
    if (iVar5 == 0) {
      RaiseInternalException(0xffff,0,s_E__Ourlib_Scontrol_cpp_007f10c0,0x10b);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  switch(param_1[4]) {
  case 0:
    iVar5 = local_8;
    if (((*(int *)(local_c + 0x5c) != 0) && (*(int *)(local_c + 0x84) != 0)) &&
       ((DVar7 = timeGetTime(), iVar5 = local_8,
        (uint)(*(int *)(this_00 + 0x5c) + *(int *)(this_00 + 0x84)) <= DVar7 &&
        (*(int *)(this_00 + 0x80) == 0)))) {
      iVar5 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x3c));
      local_8 = iVar5;
      if (iVar5 != 0) {
        RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xd6);
      }
      *(int *)(this_00 + 0x80) = 1;
    }
    if (*(int *)(this_00 + 0xac) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    if (*(int *)(this_00 + 0xd4) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    DVar7 = timeGetTime();
    if (DVar7 < (uint)(*(int *)(this_00 + 0xac) + *(int *)(this_00 + 0xd4))) {
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    if (*(int *)(this_00 + 0xd0) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    iVar5 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x8c));
    if (iVar5 == 0) goto LAB_0072be89;
    iVar10 = 0xda;
    goto LAB_0072be83;
  default:
    FUN_006e5fd0();
    break;
  case 2:
    *(uint *)(local_c + 0x1c) = *(uint *)(local_c + 0x1c) | 0x70000000;
    iVar5 = FUN_006e4d40(*(void **)(local_c + 0x10),*(int *)(local_c + 0xc));
    if (iVar5 == 1) {
      local_2c[2] = *(int *)(this_00 + 8);
      local_2c[3] = 2;
      local_2c[4] = 8;
      (*(code *)**(undefined4 **)this_00)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 3:
    iVar5 = FUN_006e4d40(*(void **)(local_c + 0x10),*(int *)(local_c + 0xc));
    if (iVar5 == 1) {
      local_2c[2] = *(int *)(this_00 + 8);
      local_2c[3] = 2;
      local_2c[4] = 9;
      iVar5 = (*(code *)**(undefined4 **)this_00)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    break;
  case 5:
    if ((*(uint *)(local_c + 0x1c) & 0xf0000000) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    iVar5 = *(int *)local_c;
    goto LAB_0072bcc4;
  case 6:
    if (((*param_1 != *(int *)(local_c + 8)) || (param_1[1] != 2)) &&
       (*(int *)(local_c + 0x38) != 0)) {
      piVar9 = (int *)param_1[5];
      bVar4 = FUN_00753090(*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                           *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30),*piVar9,piVar9[1],
                           piVar9[2],piVar9[3]);
      if (CONCAT31(extraout_var_01,bVar4) != 0) {
        *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0x80000000;
        *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
        if (*(int *)(this_00 + 0x80) != 0) {
          if (*(int *)(this_00 + 0x70) != 0) {
            FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x60));
          }
          *(int *)(this_00 + 0x80) = 0;
        }
        *(int *)(this_00 + 0x84) = 0;
        if (*(int *)(this_00 + 0xd0) != 0) {
          if (*(int *)(this_00 + 0xc0) != 0) {
            FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0xb0));
          }
          *(int *)(this_00 + 0xd0) = 0;
        }
        *(int *)(this_00 + 0xd4) = 0;
        g_currentExceptionFrame = local_70.previous;
        return local_8;
      }
    }
    break;
  case 7:
    if ((*(uint *)(local_c + 0x1c) & 0x80000000) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    if ((*param_1 == *(int *)(local_c + 8)) && (param_1[1] == 2)) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    piVar9 = (int *)param_1[5];
    bVar4 = FUN_00753090(*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),*(int *)(local_c + 0x2c),
                         *(int *)(local_c + 0x30),*piVar9,piVar9[1],piVar9[2],piVar9[3]);
    if (CONCAT31(extraout_var_02,bVar4) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    if (*(int *)(this_00 + 0x18) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    iVar5 = *(int *)(this_00 + 0x18) + -1;
    *(int *)(this_00 + 0x18) = iVar5;
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) & 0x7fffffff;
    iVar5 = *(int *)this_00;
LAB_0072bcc4:
    iVar5 = (**(code **)(iVar5 + 4))();
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_70.previous;
      return 0xffff;
    }
    break;
  case 8:
    uVar6 = *(uint *)(local_c + 0x1c);
    if ((uVar6 & 0x70000000) != 0) {
      *(uint *)(local_c + 0x1c) = uVar6 & 0x8fffffff;
      if (((uVar6 & 0x80000000) == 0) && (*(int *)(local_c + 0x34) != 0)) {
        local_18 = local_c + 0x24;
        local_2c[3] = 0xf;
        local_2c[4] = 6;
        local_8 = FUN_006e5fe0(local_c,local_2c);
      }
      iVar5 = local_8;
      iVar10 = (**(code **)(*(int *)this_00 + 4))();
      local_8 = iVar5;
      if (iVar10 != 0) {
        g_currentExceptionFrame = local_70.previous;
        return 0xffff;
      }
    }
    break;
  case 9:
    if ((*(uint *)(local_c + 0x1c) & 0x70000000) == 0) {
      local_18 = local_c + 0x24;
      local_2c[3] = 0xf;
      local_2c[4] = 7;
      iVar5 = FUN_006e5fe0(local_c,local_2c);
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0x70000000;
      local_8 = iVar5;
      if (*(int *)(this_00 + 0x80) != 0) {
        if (*(int *)(this_00 + 0x70) != 0) {
          FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x60));
        }
        *(int *)(this_00 + 0x80) = 0;
      }
      *(int *)(this_00 + 0x84) = 0;
      if (*(int *)(this_00 + 0xd0) != 0) {
        if (*(int *)(this_00 + 0xc0) != 0) {
          FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0xb0));
        }
        *(int *)(this_00 + 0xd0) = 0;
      }
      *(int *)(this_00 + 0xd4) = 0;
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    break;
  case 0x21:
    param_1[5] = *(int *)(local_c + 0x1c);
    g_currentExceptionFrame = local_70.previous;
    return local_8;
  case 0x24:
  case 0x53:
    uVar6 = *(uint *)(local_c + 0x1c);
    if ((uVar6 & 0x80000000) == 0) {
      if ((uVar6 & 0x70000000) == 0) {
        local_18 = local_c + 0x24;
        local_2c[3] = 0xf;
        local_2c[4] = 7;
        FUN_006e5fe0(local_c,local_2c);
      }
    }
    else {
      *(int *)(local_c + 0x18) = 0;
      *(uint *)(local_c + 0x1c) = uVar6 & 0x7fffffff;
    }
    if (param_1[4] == 0x24) {
      *(int *)(this_00 + 0x24) = *(int *)(this_00 + 0x24) + (int)(short)param_1[5];
      *(int *)(this_00 + 0x28) = *(int *)(this_00 + 0x28) + (int)*(short *)((int)param_1 + 0x16);
    }
    else if (param_1[4] == 0x53) {
      piVar9 = (int *)param_1[5];
      *(int *)(this_00 + 0x24) = *piVar9;
      *(int *)(this_00 + 0x28) = piVar9[1];
      *(int *)(this_00 + 0x2c) = piVar9[2];
      *(int *)(this_00 + 0x30) = piVar9[3];
    }
    if (((*(uint *)(this_00 + 0x1c) & 0x70000000) == 0) && (*(int *)(this_00 + 0x34) != 0)) {
      local_18 = this_00 + 0x24;
      local_2c[3] = 0xf;
      local_2c[4] = 6;
      FUN_006e5fe0(this_00,local_2c);
    }
    piVar9 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_2c[2] = 1;
    local_2c[3] = 3;
    local_2c[4] = 0x15;
    local_18 = (ControlClassTy *)FUN_006e5fe0(this_00,local_2c);
    if (local_18 == (ControlClassTy *)0x0) {
      local_2c[4] = 0x60;
      (*(code *)**(undefined4 **)this_00)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x2a:
    param_1[5] = (int)(local_c + 0x24);
    g_currentExceptionFrame = local_70.previous;
    return local_8;
  case 0x50:
    piVar9 = (int *)param_1[5];
    pCVar1 = local_c + 0xdc;
    if ((((((byte)local_c[0xdc] & 8) != 0) && (*(int *)(local_c + 0xe0) != 0)) ||
        (local_c[0xe0] != (ControlClassTy)0x0)) &&
       ((*(int *)(local_c + 0x128) != 0 &&
        (((short)param_1[6] != 0 ||
         (bVar4 = FUN_00753090(*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                               *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30),*piVar9,piVar9[1],
                               piVar9[2],piVar9[3]), CONCAT31(extraout_var,bVar4) != 0)))))) {
      local_2c[4] = 0x11;
      local_18 = pCVar1;
      FUN_006e6000(this_00,3,1,local_2c);
      *(int *)(this_00 + 0x128) = 0;
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x51:
    piVar9 = (int *)param_1[5];
    pCVar1 = local_c + 0xdc;
    if (((((((byte)local_c[0xdc] & 8) != 0) && (*(int *)(local_c + 0xe0) != 0)) ||
         (local_c[0xe0] != (ControlClassTy)0x0)) && (*(int *)(local_c + 0x128) == 0)) &&
       (((short)param_1[6] != 0 ||
        (bVar4 = FUN_00753090(*(int *)(local_c + 0x24),*(int *)(local_c + 0x28),
                              *(int *)(local_c + 0x2c),*(int *)(local_c + 0x30),*piVar9,piVar9[1],
                              piVar9[2],piVar9[3]), CONCAT31(extraout_var_00,bVar4) != 0)))) {
      local_2c[4] = 0x10;
      local_18 = pCVar1;
      FUN_006e6000(this_00,3,1,local_2c);
      *(int *)(this_00 + 0x128) = 1;
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x5a:
    iVar5 = *(int *)(local_c + 0x128);
    if (iVar5 != 0) {
      local_2c[4] = 0x50;
      local_18 = (ControlClassTy *)0x0;
      local_14 = 1;
      (*(code *)**(undefined4 **)local_c)(local_2c);
    }
    *(int *)(this_00 + 0xdc) = *(int *)param_1[5];
    *(int *)(this_00 + 0xe0) = *(int *)(param_1[5] + 4);
    if (iVar5 != 0) {
      local_2c[4] = 0x51;
      local_18 = (ControlClassTy *)0x0;
      local_14 = 1;
      (*(code *)**(undefined4 **)this_00)(local_2c);
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    break;
  case 0x60:
    if ((*(uint *)(local_c + 0x1c) & 0xf0000000) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_8;
    }
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    uVar8 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((((*(uint *)(local_c + 0x1c) & 0xffffff) == 0) && (*(int *)(local_c + 0x88) == 0)) &&
         (*(int *)(local_c + 0xd8) == 0)) ||
        (((iVar5 = *(int *)(local_c + 0x24), (int)uVar6 < iVar5 ||
          (*(int *)(local_c + 0x2c) + iVar5 <= (int)uVar6)) ||
         ((iVar10 = *(int *)(local_c + 0x28), (int)uVar8 < iVar10 ||
          (*(int *)(local_c + 0x30) + iVar10 <= (int)uVar8)))))) ||
       ((((iVar2 = *(int *)(local_c + 300), iVar2 != 0 && (iVar2 != -1)) &&
         (bVar4 = FUN_006b55c0(iVar2,*(int *)(local_c + 0x130),uVar6 - iVar5,uVar8 - iVar10),
         CONCAT31(extraout_var_03,bVar4) == 0)) ||
        ((*(int *)(this_00 + 0x4c) == 0 && (*(int *)(this_00 + 0x9c) == 0)))))) {
      iVar5 = local_8;
      if (*(int *)(this_00 + 0x80) != 0) {
        if ((*(int *)(this_00 + 0x70) == 0) ||
           (iVar5 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x60)), local_8 = iVar5,
           iVar5 == 0)) {
          *(int *)(this_00 + 0x80) = 0;
          iVar5 = local_8;
        }
        else {
          RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xc6);
          *(int *)(this_00 + 0x80) = 0;
        }
      }
      *(int *)(this_00 + 0x84) = 0;
      if (*(int *)(this_00 + 0xd0) != 0) {
        if ((*(int *)(this_00 + 0xc0) != 0) &&
           (iVar5 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0xb0)), iVar5 != 0)) {
          local_8 = iVar5;
          RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xcc);
        }
        *(int *)(this_00 + 0xd0) = 0;
      }
      *(int *)(this_00 + 0xd4) = 0;
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    iVar5 = local_8;
    if (*(int *)(this_00 + 0x4c) != 0) {
      if (*(int *)(this_00 + 0x5c) == 0) {
        if (*(int *)(this_00 + 0x80) == 0) {
          iVar5 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x3c));
          local_8 = iVar5;
          if (iVar5 != 0) {
            RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,0xb2);
          }
          *(int *)(this_00 + 0x80) = 1;
        }
      }
      else {
        if (*(int *)(this_00 + 0x84) == 0) {
          *(int *)(this_00 + 0x80) = 0;
        }
        DVar7 = timeGetTime();
        *(DWORD *)(this_00 + 0x84) = DVar7;
        iVar5 = local_8;
      }
    }
    if (*(int *)(this_00 + 0x9c) == 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    if (*(int *)(this_00 + 0xac) != 0) {
      if (*(int *)(this_00 + 0xd4) == 0) {
        *(int *)(this_00 + 0xd0) = 0;
      }
      DVar7 = timeGetTime();
      *(DWORD *)(this_00 + 0xd4) = DVar7;
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    if (*(int *)(this_00 + 0xd0) != 0) {
      g_currentExceptionFrame = local_70.previous;
      return iVar5;
    }
    iVar5 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x8c));
    if (iVar5 == 0) goto LAB_0072be89;
    iVar10 = 0xbf;
LAB_0072be83:
    local_8 = iVar5;
    RaiseInternalException(iVar5,DAT_007ed77c,s_E__Ourlib_Scontrol_cpp_007f10c0,iVar10);
LAB_0072be89:
    *(int *)(this_00 + 0xd0) = 1;
    g_currentExceptionFrame = local_70.previous;
    return iVar5;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_8;
}

