#include "../../pseudocode_runtime.h"


void __thiscall FUN_0063d100(void *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  byte *puVar3;
  RecoveredRecordView_004AD790_D4DB5A31 *pRVar4;
  byte *puVar5;
  void *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  if (this == nullptr) {
    puVar5 = nullptr;
  }
  else {
    puVar5 = (byte *)((int)this + 0x231);
  }
  puVar3 = (byte *)(param_1);
  memmove(puVar5, puVar3, 0x152); /* compiler REP MOVS byte copy */
  STField<undefined4>(this,0x347) = 0;
  pRVar4 = (RecoveredRecordView_004AD790_D4DB5A31 *)((int)param_1 + 0x152);
  if (STField<int>(this,0x336) != 0) {
    pDVar1 = FUN_006b0060(nullptr,(uint *)((int)param_1 + 0x156));
    STField<DArrayTy *>(this,0x336) = pDVar1;
    pRVar4 = (RecoveredRecordView_004AD790_D4DB5A31 *)((int)param_1 + 0x156 + *(int *)pRVar4);
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
  /* ST_CALLSITE[0063D19B]: CALL 0x00404ca5; direct=00404CA5 STT3DSprC::RestoreSpr */
  STT3DSprC::RestoreSpr((STT3DSprC *)((int)this + 0x1d5),(int *)&local_20,pRVar4);
  /* ST_CALLSITE[0063D1BA]: CALL 0x00403107; direct=00403107 sub_00416240 */
  sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
               STField<ushort>(this,0x26e));
  FreeAndNull(&local_20);
  if (-1 < STField<int>(this,0x33a)) {
    STField<undefined4>(this,0x33a) = 0xffffffff;
    STField<undefined4>(this,0x353) = 0xffffffff;
    /* ST_CALLSITE[0063D1EF]: CALL 0x00402e78; direct=00402E78 STTmMineC::LoadImagNuclear */
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

