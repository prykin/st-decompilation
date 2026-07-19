
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\Sapp.cpp
   Diagnostic line evidence: 1294 | 1304 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall
FUN_006e6200(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  puVar4 = param_2;
  iVar2 = FUN_006e62d0(this,(int)param_2,(int *)&param_2);
  if (iVar2 == 0) {
    iVar2 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x50e,0,0,&DAT_007a4ccc,
                               s_Duplicate_name___007eebf8);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  param_2 = (undefined4 *)SystemClassTy::_CreateObject(this,param_1,param_3,param_4,param_6);
  if (param_2 != (undefined4 *)0x0) {
    param_2[6] = puVar4;
    if (*(undefined4 **)((int)this + 0x20) <= puVar4) {
      *(int *)((int)this + 0x20) = (int)puVar4 + 1;
    }
    puVar4 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_10 = param_5;
    local_14 = 2;
    iVar2 = (**(code **)*param_2)(local_24);
    if (iVar2 == 0xffff) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x518);
    }
    return 0;
  }
  return 0xfffffffe;
}

