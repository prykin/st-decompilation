
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::PushTV */

void STAllPlayersC::PushTV(char param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0xe;
    puVar3 = (undefined4 *)((int)&DAT_007f4f83 + param_1 * 0xa62);
  }
  else {
    if (param_2 != 1) {
      iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3028,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__PushTV_007a630c);
      if (iVar2 == 0) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = 0xf;
    puVar3 = (undefined4 *)((int)&DAT_007f4fd3 + param_1 * 0xa62);
  }
  thunk_FUN_0043fc50(uVar4,0);
  if (*(byte **)((int)puVar3 + 0x4a) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)puVar3 + 0x4a));
    *(undefined4 *)((int)puVar3 + 0x4a) = 0;
    *(undefined2 *)((int)puVar3 + 0x4e) = 0;
  }
  puVar3[0x10] = 0;
  Library::MSVCRT::FUN_0072da70(puVar3 + 4,puVar3,0x40);
  *puVar3 = 0;
  *(undefined4 *)((int)puVar3 + 10) = 0;
  *(undefined2 *)((int)puVar3 + 0xe) = 0;
  return;
}

