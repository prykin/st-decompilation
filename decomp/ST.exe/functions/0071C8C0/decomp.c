
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sinput.cpp
   InputClassTy::AddToMouse */

int __thiscall InputClassTy::AddToMouse(InputClassTy *this,int param_1,uint param_2)

{
  code *pcVar1;
  InputClassTy *pIVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_60;
  uint local_1c [3];
  int local_10;
  InputClassTy *local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_ESI,unaff_EBX);
  pIVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x280,0,iVar3,&DAT_007a4ccc,
                               s_InputClassTy__AddToMouse_Error___007f09b4);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Sinput_cpp_007f092c,0x281);
    return iVar3;
  }
  if (param_1 != 0) {
    iVar3 = FUN_006e3a90((void *)local_c->field_0010,param_1,&local_8);
    if (iVar3 == 0) {
      if (pIVar2->field_0028 == 0) {
        puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0xc,10);
        pIVar2->field_0028 = puVar4;
      }
      local_1c[2] = local_8;
      local_1c[1] = 1;
      local_1c[0] = param_2;
      Library::DKW::TBL::FUN_006ae1c0((uint *)pIVar2->field_0028,local_1c);
      if ((param_2 & 2) != 0) {
        pIVar2->field_0058 = 1;
        g_currentExceptionFrame = local_60.previous;
        return local_10;
      }
    }
    else {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x27c);
    }
  }
  g_currentExceptionFrame = local_60.previous;
  return local_10;
}

