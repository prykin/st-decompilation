
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 761 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A469 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A466 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A463 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4BD establishes signed source width 2 */

undefined4 __thiscall FUN_004d0970(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;

  if (*(int *)((int)this + 0x249) <= *(int *)((int)this + 0x245) + 1) {
    iVar1 = *(int *)((int)this + 0x249) + 10;
    *(int *)((int)this + 0x249) = iVar1;
    pvVar2 = Library::DKW::LIB::MemRealloc(*(void **)((int)this + 0x24d),iVar1 * 0xc);
    *(void **)((int)this + 0x24d) = pvVar2;
  }
  *(int *)(*(int *)((int)this + 0x24d) + *(int *)((int)this + 0x245) * 0xc) = param_1;
  *(int *)(*(int *)((int)this + 0x24d) + 4 + *(int *)((int)this + 0x245) * 0xc) = param_2;
  *(int *)(*(int *)((int)this + 0x24d) + 8 + *(int *)((int)this + 0x245) * 0xc) = param_3;
  iVar1 = DumpClassC::WritePtr((short)param_1,(short)param_2,(short)param_3,0,this);
  if (iVar1 != 0) {
    RaiseInternalException
              (iVar1,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x2f9);
  }
  *(int *)((int)this + 0x245) = *(int *)((int)this + 0x245) + 1;
  return 0;
}

