
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 773 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall FUN_004d0a80(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int exceptionCode;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x245)) {
    piVar1 = *(int **)((int)this + 0x24d);
    piVar2 = piVar1;
    while (((*piVar2 != param_1 || (piVar2[1] != param_2)) || (piVar2[2] != param_3))) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 3;
      if (*(int *)((int)this + 0x245) <= iVar4) {
        return 0;
      }
    }
    exceptionCode =
         thunk_FUN_00495ff0((short)piVar1[iVar4 * 3],(short)piVar1[iVar4 * 3 + 1],
                            (short)piVar1[iVar4 * 3 + 2],0,this);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_dock_cpp_007bf39c
                 ,0x305);
    }
    if (iVar4 < *(int *)((int)this + 0x245) + -1) {
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x24d) + (iVar4 * 3 + 3) * 4);
      puVar6 = (undefined4 *)(iVar4 * 0xc + *(int *)((int)this + 0x24d));
      for (uVar3 = ((*(int *)((int)this + 0x245) - iVar4) + -1) * 3 & 0x3fffffff; uVar3 != 0;
          uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    *(int *)((int)this + 0x245) = *(int *)((int)this + 0x245) + -1;
  }
  return 0;
}

