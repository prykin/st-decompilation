
void __fastcall FUN_004f1950(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = FUN_0070b650(*(short **)(param_1 + 0x25b),(uint)*(byte *)(param_1 + 0x25f));
  DibPut(*(undefined4 **)(param_1 + 0x1b4),0xb,9,'\x06',pbVar1);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)(param_1 + 0x17c),0xffffffff,*(uint *)(param_1 + 0x10c),
             *(uint *)(param_1 + 0x110));
  return;
}

