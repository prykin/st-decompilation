
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SaveObjData */

int __thiscall
STPlaySystemC::SaveObjData
          (STPlaySystemC *this,char *param_1,byte *param_2,uint param_3,byte param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar4;
  undefined4 local_48 [16];
  STPlaySystemC *local_8;
  
  pIVar4 = g_currentExceptionFrame;
  if (this->field_0024 == (cMf32 *)0x0) {
    return -4;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar4);
  if (iVar2 == 0) {
    cMf32::RecPut(local_8->field_0024,param_4,param_1,param_2,param_3,(undefined4 *)0x0,'\x02',
                  (uint *)0x0);
    g_currentExceptionFrame = pIVar4;
    return 0;
  }
  g_currentExceptionFrame = pIVar4;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x232,0,iVar2,&DAT_007a4ccc,
                             s_STPlaySystemC__SaveObjData_007c8510);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x232);
  return iVar2;
}

