
/* Library Function - Single Match
    public: virtual long __thiscall CBaseRenderer::BeginFlush(void)

   Library: Visual Studio 2012 Release */

long __thiscall CBaseRenderer::BeginFlush(CBaseRenderer *this)

{
  if (*(int *)(this + 0x14) == 1) {
    ResetEvent(*(HANDLE *)(this + 0x5c));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x28))(0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x6c))();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x70))();
  FUN_00749d5f((int)this);
  return 0;
}

