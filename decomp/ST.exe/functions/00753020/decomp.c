
void FUN_00753020(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar3 = (char *)(param_1 + param_2);
  uVar2 = 0xffffffff;
  pcVar4 = pcVar3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  Library::MSVCRT::FUN_0072da70((undefined4 *)pcVar3,(undefined4 *)(pcVar3 + 1),~uVar2 - 1);
  return;
}

