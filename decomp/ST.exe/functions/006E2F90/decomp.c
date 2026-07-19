
/* WARNING: Removing unreachable block (ram,0x006e30b7) */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\Strend.cpp
   Diagnostic line evidence: 3389 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall
FUN_006e2f90(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079e148;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((0 < (int)param_5) && (0 < param_6)) &&
     ((*(int *)((int)this + 4) == 0 ||
      ((*(uint *)(*(int *)((int)this + 4) + 0xc) & 0x1100) != 0x100)))) {
    iVar3 = *(int *)((int)this + 0x28);
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_006d1610((undefined8 *)(*(int *)((int)this + 0xc) + iVar3 * param_2 + param_1),
                 (undefined8 *)(*(int *)((int)this + 0xc) + iVar3 * param_4 + param_3),iVar3,param_5
                 ,param_6);
    iVar3 = *(int *)((int)this + 0x28);
    piVar1 = (int *)(*(int *)((int)this + 0x14) + (iVar3 * param_4 + param_3) * 2);
    piVar2 = (int *)(*(int *)((int)this + 0x14) + (iVar3 * param_2 + param_1) * 2);
    local_8 = 1;
    if (param_7 == 0) {
      FUN_006d1610((undefined8 *)piVar2,(undefined8 *)piVar1,iVar3 * 2,param_5 * 2,param_6);
    }
    else {
      FUN_006e2d50(piVar2,piVar1,iVar3 * 2,param_5,param_6,param_7);
    }
  }
  ExceptionList = local_14;
  return 0;
}

