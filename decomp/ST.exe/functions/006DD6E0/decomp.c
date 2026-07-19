
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\Strend.cpp
   Diagnostic line evidence: 996 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __thiscall
FUN_006dd6e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  if (((double)CONCAT44(param_2,param_1) < (double)CONCAT44(param_4,param_3)) &&
     ((double)CONCAT44(param_6,param_5) < (double)CONCAT44(param_8,param_7))) {
    *(undefined4 *)((int)this + 0x60) = param_1;
    *(undefined4 *)((int)this + 100) = param_2;
    *(undefined4 *)((int)this + 0x68) = param_3;
    *(undefined4 *)((int)this + 0x6c) = param_4;
    *(undefined4 *)((int)this + 0x70) = param_5;
    *(undefined4 *)((int)this + 0x74) = param_6;
    *(undefined4 *)((int)this + 0x78) = param_7;
    *(undefined4 *)((int)this + 0x7c) = param_8;
    FUN_006dd050(this,*(uint *)((int)this + 0xa8),*(double *)((int)this + 0x88),
                 (double)CONCAT44(*(undefined4 *)((int)this + 0x94),
                                  *(undefined4 *)((int)this + 0x90)));
    FUN_006dcd60((int)this);
    return;
  }
  RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Strend_cpp_007ee758,0x3e4);
  return;
}

