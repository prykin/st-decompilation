#include "../../pseudocode_runtime.h"


void __thiscall FUN_0063d100(void *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  byte *puVar3;
  AnonShape_004AD790_77673787 *pAVar4;
  byte *puVar5;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (this == nullptr) {
    puVar5 = nullptr;
  }
  else {
    puVar5 = (byte *)((int)this + 0x231);
  }
  puVar3 = (byte *)(param_1);
  memmove(puVar5, puVar3, 0x152); /* compiler REP MOVS byte copy */
  STField<undefined4>(this,0x347) = 0;
  pAVar4 = (AnonShape_004AD790_77673787 *)((int)param_1 + 0x152);
  if (STField<int>(this,0x336) != 0) {
    pDVar1 = FUN_006b0060(nullptr,(uint *)((int)param_1 + 0x156));
    STField<DArrayTy *>(this,0x336) = pDVar1;
    pAVar4 = (AnonShape_004AD790_77673787 *)((int)param_1 + 0x156 + *(int *)pAVar4);
  }
  local_20 = Library::DKW::LIB::MemAlloc(0x44);
  iVar2 = 0;
  do {
    *(int **)(iVar2 + (int)local_20) = PTR_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  STT3DSprC::RestoreSpr((STT3DSprC *)((int)this + 0x1d5),(int *)&local_20,pAVar4);
  sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
               STField<ushort>(this,0x26e));
  FreeAndNull(&local_20);
  if (-1 < STField<int>(this,0x33a)) {
    STField<undefined4>(this,0x33a) = 0xffffffff;
    STField<undefined4>(this,0x353) = 0xffffffff;
    iVar2 = STTmMineC::LoadImagNuclear(this,(uint)(STField<int>(this,0x34b) != 0));
    if (iVar2 == 0) {
      thunk_FUN_0063d410(this);
      STTmMineC::thunk_FUN_0063ddb0(this,1);
      Library::Ourlib::ST3DSMAP::SprShow
                (STField<void *>(this,0x211),STField<uint>(this,0x33a),0);
    }
  }
  return;
}

