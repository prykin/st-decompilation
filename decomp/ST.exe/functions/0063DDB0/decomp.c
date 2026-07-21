
void __thiscall STTmMineC::FUN_0063ddb0(STTmMineC *this,int param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  uint uVar3;

  if (this->field_0336 != (DArrayTy *)0x0) {
    dVar1 = this->field_0336->count;
    uVar3 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_0336;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar3) (runtime stride) */
        if ((uVar3 < pDVar2->count) &&
           ((void *)(pDVar2->elementSize * uVar3 + (int)pDVar2->data) != (void *)0x0)) {
          LoadImagSpr(this,uVar3,param_1);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)dVar1);
    }
  }
  return;
}

