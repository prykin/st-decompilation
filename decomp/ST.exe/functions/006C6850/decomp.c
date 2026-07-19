
void FUN_006c6850(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 < 0) {
    param_2 = param_2 + 1 + param_4;
    param_4 = -param_4;
  }
  if (param_5 < 0) {
    param_3 = param_3 + 1 + param_5;
    param_5 = -param_5;
  }
  iVar3 = param_2 + -1 + param_4;
  iVar1 = param_3 + -1 + param_5;
  iVar2 = Library::DKW::DDX::FUN_006c53b0(param_1,param_2,param_3,iVar3 + -1,param_3,param_6);
  if (((iVar2 == 0) &&
      (iVar2 = Library::DKW::DDX::FUN_006c53b0(param_1,iVar3,param_3,iVar3,iVar1 + -1,param_6),
      iVar2 == 0)) &&
     (iVar3 = Library::DKW::DDX::FUN_006c53b0(param_1,iVar3,iVar1,param_2 + 1,iVar1,param_6),
     iVar3 == 0)) {
    Library::DKW::DDX::FUN_006c53b0(param_1,param_2,iVar1,param_2,param_3 + 1,param_6);
  }
  return;
}

