#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_0056a2a0(void *this,cMf32 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  DWORD DVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  void *local_8;

  if (((STField<int>(this,0xf8b) != 0) && (param_2 != nullptr)) && (param_1 != nullptr))
  {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar3 == 0) {
      if ((*(uint *)(*(int *)(param_1->field_0000 + 4) + 8) & 0x100000) == 0) {
        puVar4 = (uint *)Library::Ourlib::MFWAV::mfWavLoad(param_1,param_2,0,nullptr);
      }
      else {
        puVar4 = (uint *)cMf32::vmAddrRecGet(param_1,2,param_2,0);
      }
      pvVar2 = local_8;
      if (puVar4 != nullptr) {
        if (param_3 < 1) {
          iVar3 = STField<int>(local_8,0xe07);
          uVar1 = param_1->field_0000;
          if (iVar3 < 0) {
            if ((*(uint *)(STField<int>(uVar1,0x4) + 8) & 0x100000) == 0) {
              iVar3 = FUN_006c1390(puVar4,0,0x48,DAT_0080730a,0,0,1);
              STField<int>(pvVar2,0xe07) = iVar3;
            }
            else {
              iVar3 = Library::DKW::SND::FUN_006c2530(uVar1,(DWORD)puVar4,0,0x48,DAT_0080730a,0,0,1);
              STField<int>(pvVar2,0xe07) = iVar3;
            }
          }
          else if ((*(uint *)(STField<int>(uVar1,0x4) + 8) & 0x100000) == 0) {
            FUN_006c1390(puVar4,0,0x48,DAT_0080730a,0,iVar3,iVar3);
          }
          else {
            Library::DKW::SND::FUN_006c2530(uVar1,(DWORD)puVar4,0,0x48,DAT_0080730a,0,iVar3,iVar3);
          }
        }
        else {
          STField<int>(local_8,0xdfb) = param_3;
          STField<undefined4>(local_8,0xe03) = STField<undefined4>(local_8,0xe07);
          if ((*(uint *)(*(int *)(param_1->field_0000 + 4) + 8) & 0x100000) == 0) {
            iVar3 = FUN_006c1390(puVar4,0,0,DAT_0080730a,0,0,1);
          }
          else {
            iVar3 = Library::DKW::SND::FUN_006c2530
                              (param_1->field_0000,(DWORD)puVar4,0,0,DAT_0080730a,0,0,1);
          }
          STField<int>(pvVar2,0xe07) = iVar3;
          /* ST_CALLSITE[0056A38C]: CALL dword ptr [0x0085bedc] */
          DVar5 = timeGetTime();
          STField<DWORD>(pvVar2,0xdff) = DVar5;
        }
        if (param_4 != nullptr) {
          uVar6 = FUN_006c23f0((short *)puVar4);
          *param_4 = uVar6;
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
  }
  return 0xffffffff;
}

