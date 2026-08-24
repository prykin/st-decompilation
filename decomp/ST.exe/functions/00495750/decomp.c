#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00495750(void *this,float param_1)

{
  float fVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  longlong lVar5;
  CHAR local_6c [100];
  float local_8;

  fVar1 = param_1;
  FUN_006e5fd0(this,(STMessage *)param_1);
  uVar2 = STField<uint>(fVar1,0x10);
  if (uVar2 < 0x61) {
    if (uVar2 == 0x60) {
      STField<uint>(this,0x1c) = (uint)STField<ushort>(fVar1,0x18);
      STField<uint>(this,0x20) = (uint)STField<ushort>(fVar1,0x1a);
      return 0;
    }
    switch(uVar2) {
    case 2:
      uVar2 = FUN_006e4d40(STField<void *>(this,0x10),STField<int>(this,0xc));
      if (uVar2 == 1) {
        /* ST_CALLSITE[00495792]: CALL dword ptr [0x0085bedc] */
        DVar3 = timeGetTime();
        STField<DWORD>(this,0x24) = DVar3;
        return 0;
      }
      break;
    case 3:
      FUN_006e4d40(STField<void *>(this,0x10),STField<int>(this,0xc));
      return 0;
    }
  }
  else if ((uVar2 != 0x61) && (uVar2 == 0x8102)) {
    ST3DSMAPContext::sub_006E1C20
              (g_sT3DSMAPContext_00807598,STField<float>(this,0x1c),STField<int>(this,0x20),
               0.0,&local_8,&param_1);
    lVar5 = Library::MSVCRT::__ftol();
    uVar4 = (undefined4)lVar5;
    lVar5 = Library::MSVCRT::__ftol();
    /* ST_CALLSITE[0049582F]: CALL dword ptr [0x0085bde8] */
    wsprintfA(local_6c,"\n X = %d\n Y = %d\n Xc = %d\n Yc = %d",STField<undefined4>(this,0x1c),
              STField<undefined4>(this,0x20),(int)lVar5,uVar4);
    /* ST_CALLSITE[00495849]: CALL dword ptr [0x0085bdec] */
    MessageBoxA(g_hWnd_00806748,local_6c,"Coordinates of Mouse",0x40);
  }
  return 0;
}

