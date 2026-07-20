
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetMessage */

int __thiscall StartSystemTy::GetMessage(StartSystemTy *this,int *param_1)

{
  uint uVar1;
  code *pcVar2;
  StartSystemTy *this_00;
  int iVar3;
  cMf32 *this_01;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  InternalExceptionFrame local_8c;
  int local_48 [8];
  undefined4 local_28 [8];
  StartSystemTy *local_8;
  
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_startsys_cpp_007cd718,0x31a,0,iVar3,&DAT_007a4ccc
                               ,s_StartSystemTy__GetMessage_007cd84c);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Start_startsys_cpp_007cd718,0x31b);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar1 = param_1[4];
  if (uVar1 < 0x6121) {
    if (uVar1 == 0x6120) {
      puVar6 = &local_8->field_0020;
      if (local_8->field_0020 != 0) {
        sub_006E56B0(local_8,local_8->field_0020);
      }
      (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x306,puVar6,(int *)0x0,param_1,0);
    }
    else {
      if (uVar1 < 0x6106) {
        if (uVar1 == 0x6105) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30a,puVar6,(int *)0x0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (0x6103 < uVar1) {
          if (uVar1 == 0x6104) {
            puVar6 = &local_8->field_0020;
            if (local_8->field_0020 != 0) {
              sub_006E56B0(local_8,local_8->field_0020);
            }
            (*this_00->vtable->CreateObject)
                      ((SystemClassTy *)this_00,0x302,puVar6,(int *)0x0,param_1,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (uVar1 == 0x6103) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x304,puVar6,(int *)0x0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 == 8) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (g_cMf32_00806758 != (cMf32 *)0x0) {
            cMf32::delete(this_01,g_cMf32_00806758);
          }
          g_cMf32_00806758 = (cMf32 *)0x0;
          if (PTR_00802a30 != (CursorClassTy *)0x0) {
            thunk_FUN_00544940((AnonShape_00544940_E504B2A8 *)PTR_00802a30);
          }
          FUN_006bbb20(DAT_0080759c,1);
          FUN_006ba780((int)DAT_0080759c,1);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 != 0x6102) goto switchD_005dd1c0_default;
        puVar6 = &local_8->field_0020;
        if (local_8->field_0020 != 0) {
          sub_006E56B0(local_8,local_8->field_0020);
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar6 = local_28;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          local_28[3] = 1;
          local_28[4] = 0x7102;
          AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x301,puVar6,(int *)0x0,param_1[5],0);
          goto switchD_005dd1c0_default;
        }
        if (g_int_00811764 == (int *)0x0) {
          DAT_00811768 = '\0';
          (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x301,puVar6,(int *)0x0,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((*(byte *)(g_int_00811764 + 1) & 1) == 0) {
          DAT_0080877e = 0;
          param_1[5] = 0;
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar6,(int *)0x0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        param_1[5] = 4;
      }
      else {
        if (uVar1 == 0x6109) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar6,(int *)0x0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 == 0x610a) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30e,puVar6,(int *)0x0,param_1,0);
          goto switchD_005dd1c0_default;
        }
        if (uVar1 != 0x611f) goto switchD_005dd1c0_default;
        if (local_8->field_0020 != 0) {
          sub_006E56B0(local_8,local_8->field_0020);
        }
      }
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x305,&this_00->field_0020,(int *)0x0,param_1,0);
    }
  }
  else {
    if (uVar1 < 0x6336) {
      if (uVar1 < 0x6332) {
        switch(uVar1) {
        case 0x6121:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30b,puVar6,(int *)0x0,param_1,0);
          break;
        case 0x6122:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x307,puVar6,(int *)0x0,param_1,0);
          break;
        case 0x6123:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x308,puVar6,(int *)0x0,param_1,0);
          break;
        case 0x6124:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30c,puVar6,(int *)0x0,param_1,0);
        }
        goto switchD_005dd1c0_default;
      }
    }
    else if (uVar1 < 0x6941) {
      if ((uVar1 < 0x693f) && ((uVar1 < 0x633f || (0x6341 < uVar1)))) goto switchD_005dd1c0_default;
    }
    else if ((uVar1 < 0xc0a0) || (0xc0a2 < uVar1)) goto switchD_005dd1c0_default;
    iVar3 = local_8->field_0020;
    if (iVar3 != 0) {
      piVar5 = param_1;
      piVar7 = local_48;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      local_48[3] = 2;
      local_48[2] = iVar3;
      (*this_00->vtable->vfunc_18)(local_48);
    }
  }
switchD_005dd1c0_default:
  g_currentExceptionFrame = local_8c.previous;
  iVar3 = SystemClassTy::GetMessage((SystemClassTy *)this_00,(int)param_1);
  return iVar3;
}

