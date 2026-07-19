
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\To_boat.cpp
   Diagnostic line evidence: 20736 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_00492390(int *param_1)

{
  int iVar1;
  int *local_8;
  
  if (((*(int *)((int)param_1 + 0x45d) == 0xf) || (*(int *)((int)param_1 + 0x45d) == 0xe)) &&
     (*(int *)((int)param_1 + 0x7c6) == 0)) {
    *(undefined4 *)((int)param_1 + 0x7c6) = 1;
    local_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x58e),(int *)&local_8);
    if (iVar1 == -4) {
      RaiseInternalException
                (-0x5001fffd,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5100);
    }
    (**(code **)(*local_8 + 0x9c))();
  }
  return;
}

