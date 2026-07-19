
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetMessage */

int __thiscall StartSystemTy::GetMessage(StartSystemTy *this,int *param_1)

{
  SystemClassTy *pSVar1;
  uint uVar2;
  void **ppvVar3;
  code *pcVar4;
  SystemClassTy *this_00;
  int iVar5;
  int iVar6;
  cMf32 *this_01;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  int *piVar9;
  InternalExceptionFrame local_8c;
  int local_48 [2];
  void **local_40;
  undefined4 local_3c;
  undefined4 local_28 [8];
  SystemClassTy *local_8;
  
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = (SystemClassTy *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x31a,0,iVar5,&DAT_007a4ccc
                               ,s_StartSystemTy__GetMessage_007cd84c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_startsys_cpp_007cd718,0x31b);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
  uVar2 = param_1[4];
  if (uVar2 < 0x6121) {
    if (uVar2 == 0x6120) {
      pSVar1 = local_8 + 1;
      if (local_8[1].vtable != (void **)0x0) {
        FUN_006e56b0(local_8,(uint)local_8[1].vtable);
      }
      (*this_00->vtable[2])(0x306,pSVar1,0,param_1,0);
    }
    else {
      if (uVar2 < 0x6106) {
        if (uVar2 == 0x6105) {
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x30a,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (0x6103 < uVar2) {
          if (uVar2 == 0x6104) {
            pSVar1 = local_8 + 1;
            if (local_8[1].vtable != (void **)0x0) {
              FUN_006e56b0(local_8,(uint)local_8[1].vtable);
            }
            (*this_00->vtable[2])(0x302,pSVar1,0,param_1,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (uVar2 == 0x6103) {
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x304,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 == 8) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (DAT_00806758 != (undefined4 *)0x0) {
            cMf32::delete(this_01,DAT_00806758);
          }
          DAT_00806758 = (undefined4 *)0x0;
          if (DAT_00802a30 != 0) {
            thunk_FUN_00544940(DAT_00802a30);
          }
          FUN_006bbb20(DAT_0080759c,1);
          FUN_006ba780(DAT_0080759c,1);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 != 0x6102) goto switchD_005dd1c0_default;
        pSVar1 = local_8 + 1;
        if (local_8[1].vtable != (void **)0x0) {
          FUN_006e56b0(local_8,(uint)local_8[1].vtable);
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar8 = local_28;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          local_28[3] = 1;
          local_28[4] = 0x7102;
          AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          (*this_00->vtable[2])(0x301,pSVar1,0,param_1[5],0);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811764 == 0) {
          DAT_00811768 = '\0';
          (*this_00->vtable[2])(0x301,pSVar1,0,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((*(byte *)(DAT_00811764 + 4) & 1) == 0) {
          DAT_0080877e = 0;
          param_1[5] = 0;
          (*this_00->vtable[2])(0x30d,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        param_1[5] = 4;
      }
      else {
        if (uVar2 == 0x6109) {
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x30d,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 == 0x610a) {
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x30e,pSVar1,0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar2 != 0x611f) goto switchD_005dd1c0_default;
        if (local_8[1].vtable != (void **)0x0) {
          FUN_006e56b0(local_8,(uint)local_8[1].vtable);
        }
      }
      (*this_00->vtable[2])(0x305,this_00 + 1,0,param_1,0);
    }
  }
  else {
    if (uVar2 < 0x6336) {
      if (uVar2 < 0x6332) {
        switch(uVar2) {
        case 0x6121:
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x30b,pSVar1,0,param_1,0);
          break;
        case 0x6122:
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x307,pSVar1,0,param_1,0);
          break;
        case 0x6123:
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x308,pSVar1,0,param_1,0);
          break;
        case 0x6124:
          pSVar1 = local_8 + 1;
          if (local_8[1].vtable != (void **)0x0) {
            FUN_006e56b0(local_8,(uint)local_8[1].vtable);
          }
          (*this_00->vtable[2])(0x30c,pSVar1,0,param_1,0);
        }
        goto switchD_005dd1c0_default;
      }
    }
    else if (uVar2 < 0x6941) {
      if ((uVar2 < 0x693f) && ((uVar2 < 0x633f || (0x6341 < uVar2)))) goto switchD_005dd1c0_default;
    }
    else if ((uVar2 < 0xc0a0) || (0xc0a2 < uVar2)) goto switchD_005dd1c0_default;
    ppvVar3 = local_8[1].vtable;
    if (ppvVar3 != (void **)0x0) {
      piVar7 = param_1;
      piVar9 = local_48;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_3c = 2;
      local_40 = ppvVar3;
      (*this_00->vtable[6])(local_48);
    }
  }
switchD_005dd1c0_default:
  g_currentExceptionFrame = local_8c.previous;
  iVar5 = SystemClassTy::GetMessage(this_00,(int)param_1);
  return iVar5;
}

