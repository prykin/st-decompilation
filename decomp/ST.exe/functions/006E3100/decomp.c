
/* WARNING: Removing unreachable block (ram,0x006e31c0) */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\ourlib\Strend.cpp
   Diagnostic line evidence: 3416 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall
FUN_006e3100(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079e160;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((0 < (int)param_5) && (0 < param_6)) &&
     ((*(int *)((int)this + 4) == 0 ||
      ((*(uint *)(*(int *)((int)this + 4) + 0xc) & 0x1100) != 0x100)))) {
    iVar1 = *(int *)((int)this + 0x28);
    iVar2 = iVar1 * param_4 + param_3;
    iVar3 = iVar1 * param_2 + param_1;
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_006d1610((undefined8 *)(*(int *)((int)this + 0xc) + iVar3),
                 (undefined8 *)(*(int *)((int)this + 0xc) + iVar2),iVar1,param_5,param_6);
    FUN_006d1610((undefined8 *)(*(int *)((int)this + 0x14) + iVar3),
                 (undefined8 *)(*(int *)((int)this + 0x14) + iVar2),*(int *)((int)this + 0x28),
                 param_5,param_6);
  }
  ExceptionList = local_14;
  return 0;
}

