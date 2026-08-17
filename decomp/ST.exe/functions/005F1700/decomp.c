#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_005f1700(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     uint param_7)

{
  AnonNested_005F1700_003C_057131A3 *pAVar1;
  int iVar2;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  AnonShape_005F1700_3FAAC417 *local_14;
  ushort *local_10;
  char *local_c;
  uint local_8;

  local_10 = nullptr;
  if (param_1 == 1) {
    local_c = (&PTR_s_basis_40_007ce534)[param_2];
  }
  else {
    local_c = (&PTR_s_basis_10_007ce530)[param_2];
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return local_10;
  }
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,local_c,0xffffffff,0,1,0,nullptr);
  if (param_3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return puVar2;
  }
  if (-1 < (int)param_7) {
    pAVar1 = local_14->field_003C;
    if (param_7 < pAVar1->field_000C) {
      iVar3 = pAVar1->field_0008 * param_7 + pAVar1->field_001C;
    }
    else {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      if (param_1 == 0) {
        uVar5 = 0x45;
        uVar4 = 0x5a;
      }
      else {
        uVar5 = 100;
        uVar4 = 0x78;
      }
      ST3DSMAPContext::sub_006E8660
                (g_sT3DSMAPContext_00807598,(int *)&local_8,1,0,STField<uint>(puVar2,9),
                 STField<uint>(puVar2,0xd),uVar4,uVar5,0);
      *(uint *)(iVar3 + 0x18) = local_8;
      ST3DSMAPContext::sub_006E98E0
                (g_sT3DSMAPContext_00807598,local_8,0,*(int *)puVar2,STField<int>(puVar2,0x21),1);
      ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,local_8,0,*(uint *)(iVar3 + 0xe));
      Library::Ourlib::ST3DSMAP::SprSetLevAfter(g_sT3DSMAPContext_00807598,local_8,-1);
      Library::Ourlib::ST3DSMAP::SprSetSplit(g_sT3DSMAPContext_00807598,local_8);
      if (param_1 != 0) {
        param_5 = param_5 + 100;
        param_4 = param_4 + 100;
        local_18 = param_4;
      }
      Library::Ourlib::ST3DSMAP::SprMove
                (g_sT3DSMAPContext_00807598,local_8,(float)param_4 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_5 * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,local_8,0);
      ((undefined1 *)iVar3)[6] = 1;
      g_currentExceptionFrame = local_5c.previous;
      return puVar2;
    }
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

