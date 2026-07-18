
undefined4 * __fastcall FUN_0057f580(uint param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  STT3DSprC *this;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)FUN_0072e530(0x40);
  if (puVar2 != (undefined4 *)0x0) {
    this = (STT3DSprC *)thunk_FUN_004ab810(puVar2);
    if (this != (STT3DSprC *)0x0) {
      puVar2 = (undefined4 *)FUN_0072e530(*(int *)(param_1 + 0x265) * 4 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_0072e2b0((undefined4 *)this);
        return (undefined4 *)0x0;
      }
      iVar3 = *(int *)(param_1 + 0x265);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)(param_1 + 0x26d);
        puVar5 = puVar2;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_0072e2b0(*(undefined4 **)(param_1 + 0x26d));
      }
      *(undefined4 **)(param_1 + 0x26d) = puVar2;
      puVar2[*(int *)(param_1 + 0x265)] = this;
      *(int *)(param_1 + 0x265) = *(int *)(param_1 + 0x265) + 1;
      iVar3 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,param_1,0xb4,0x8c,0x11);
      if (iVar3 != 0) {
        iVar3 = FUN_006ad4d0(s_E____titans_Igor_To_gold_cpp_007cb19c,0x203,0,0,&DAT_007a4ccc);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          puVar2 = (undefined4 *)(*pcVar1)();
          return puVar2;
        }
        return (undefined4 *)0x0;
      }
      return (undefined4 *)this;
    }
  }
  return (undefined4 *)0x0;
}

