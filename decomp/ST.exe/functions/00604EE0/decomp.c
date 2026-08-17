#include "../../pseudocode_runtime.h"


int __thiscall FUN_00604ee0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  STMessage *pSVar4;
  int *piVar5;
  STMessage local_2c;
  void *local_c;
  int local_8;

  piVar5 = param_1;
  pSVar4 = &local_2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar4->unknown_00 = 0;
    pSVar4 = (STMessage *)&pSVar4->unknown_04;
  }
  iVar2 = 0;
  local_8 = 0;
  local_2c.id = MESS_ID_CREATE;
  int * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  if (0 < STField<int>(this,0x269)) {
    piVar3 = (int *)((int)this + 0x219);
    local_c = this;
    do {
      if (*piVar3 != 0) {
        puVar1 = thunk_FUN_00629010();
        *piVar3 = (int)puVar1;
        STField<void *>(puVar1,0xce) = this;
        *(int **)(*piVar3 + 0xd2) = param_1_after_write;
        iVar2 = *piVar5;
        local_8 = local_8 + 4 + iVar2;
        local_2c.arg0.ptr = piVar5 + 1;
        /* ST_CALLSITE[00604F52]: CALL 0x00405c9a; direct=00405C9A STParticleC::GetMessage */
        STParticleC::GetMessage((STParticleC *)*piVar3,&local_2c);
        piVar5 = (int *)((int)(piVar5 + 1) + iVar2);
        iVar2 = local_8;
        this = local_c;
      }
      param_1_after_write = (int *)((int)param_1_after_write + 1);
      piVar3 = piVar3 + 1;
    } while ((int)param_1_after_write < STField<int>(this,0x269));
    return iVar2;
  }
  return 0;
}

