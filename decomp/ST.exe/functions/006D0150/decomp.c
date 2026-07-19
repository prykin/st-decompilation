
void FUN_006d0150(int *param_1,uint param_2,char *param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  size_t sVar5;
  uint *puVar6;
  char *pcVar7;
  size_t *psVar8;
  
  if (param_2 < (uint)param_1[0x68]) {
    puVar2 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar2 & 0xc000) == 0xc000) {
      puVar6 = (uint *)puVar2[0x30];
      uVar4 = 0xffffffff;
      pcVar7 = param_3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      psVar8 = puVar6 + 5;
      sVar5 = ~uVar4 - 1;
      if ((int)puVar6[5] < (int)sVar5) {
        puVar3 = (uint *)FUN_006bfb50(puVar6,~uVar4 + 0x18);
        if (puVar3 != (uint *)0x0) {
          psVar8 = puVar3 + 5;
          puVar2[0x30] = (uint)puVar3;
          *psVar8 = sVar5;
          puVar6 = puVar3;
        }
      }
      Library::MSVCRT::_strncpy((char *)(puVar6 + 6),param_3,*psVar8);
      Library::DKW::DDX::FUN_006b3640(param_1,*puVar6,0xffffffff,puVar6[1],puVar6[2]);
    }
  }
  return;
}

