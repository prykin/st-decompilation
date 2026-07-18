
/* Library Function - Single Match
    public: virtual long __thiscall CBaseRenderer::EndOfStream(void)
   
   Library: Visual Studio 2012 Release */

long __thiscall CBaseRenderer::EndOfStream(CBaseRenderer *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(undefined4 *)(this + 0x70) = 1, *(int *)(this + 0x6c) == 0)
     ) {
    SetEvent(*(HANDLE *)(this + 0x5c));
    if (*(int *)(this + 100) != 0) {
      (**(code **)(*(int *)this + 0x60))();
    }
  }
  return 0;
}

