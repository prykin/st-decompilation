
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00568DD0 -> 0071A990 @ 00568F1C | 00568DD0 -> 0071A990 @ 005692A5 | 00568DD0 ->
   0071A990 @ 00569684 | 00568DD0 -> 0071A990 @ 005699C6 | 00568DD0 -> 0071A990 @ 00569A1E |
   00568DD0 -> 0071A990 @ 00569A82 | 00568DD0 -> 0071A990 @ 00569ADA

   [STPrototypeApplier] Propagated return.
   Evidence: 0071A990 returns used as parameter 0 of FUN_006c1390 @ 00569204 | 0071A990 returns used
   as parameter 0 of FUN_006c1390 @ 0056958D | 0071A990 returns used as parameter 0 of FUN_006c1390
   @ 0056994D */

uint * __cdecl
FUN_0071a990(AnonShape_0071A990_7656000F *param_1,int soundId,int param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  if (((((param_1 != (AnonShape_0071A990_7656000F *)0x0) && (param_1->field_000C != 0)) &&
       (-1 < soundId)) &&
      ((soundId < param_1->field_0008 &&
       (piVar3 = *(int **)(param_1->field_000C + soundId * 4), piVar3 != (int *)0x0)))) &&
     (iVar1 = *piVar3, 0 < iVar1)) {
    if ((param_3 < 0) || (iVar1 <= param_3)) {
      if (iVar1 < 2) {
        param_3 = 0;
      }
      else {
        piVar3 = *(int **)(param_1->field_000C + soundId * 4);
        uVar2 = Library::MSVCRT::FUN_0072e6c0();
        param_3 = (int)uVar2 % *piVar3;
      }
    }
    iVar1 = param_3 * 5 + 5;
    if (*(int *)(iVar1 + (int)piVar3) != 0) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(undefined1 *)(param_3 * 5 + 4 + (int)piVar3);
      }
      return *(uint **)(*(int *)(param_1->field_000C + soundId * 4) + iVar1);
    }
  }
  return (uint *)0x0;
}

